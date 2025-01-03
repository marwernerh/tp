#include "dolphin/dvd/dvdqueue.h"
#include "dolphin/dvd.h"

void __DVDClearWaitingQueue();
BOOL __DVDPushWaitingQueue(s32 prio, DVDCommandBlock* block);
DVDCommandBlock* __DVDPopWaitingQueue(void);
BOOL __DVDCheckWaitingQueue(void);
BOOL __DVDDequeueWaitingQueue(DVDCommandBlock* block);

#define MAX_QUEUES 4

typedef struct {
    DVDCommandBlock* next;
    DVDCommandBlock* prev;
} DVDQueue;

/* 8044C998-8044C9B8 0796B8 0020+00 4/4 0/0 0/0 .bss             WaitingQueue */
static DVDQueue WaitingQueue[MAX_QUEUES];

/* 8034B874-8034B8AC 3461B4 0038+00 0/0 5/5 0/0 .text            __DVDClearWaitingQueue */
void __DVDClearWaitingQueue(void) {
    u32 i;

    for (i = 0; i < MAX_QUEUES; i++) {
        DVDCommandBlock* q;

        q = (DVDCommandBlock*)&(WaitingQueue[i]);
        q->next = q;
        q->prev = q;
    }
}

/* 8034B8AC-8034B914 3461EC 0068+00 0/0 5/5 0/0 .text            __DVDPushWaitingQueue */
BOOL __DVDPushWaitingQueue(s32 prio, DVDCommandBlock* block) {
    BOOL enabled;
    DVDCommandBlock* q;

    enabled = OSDisableInterrupts();

    q = (DVDCommandBlock*)&(WaitingQueue[prio]);

    q->prev->next = block;
    block->prev = q->prev;
    block->next = q;
    q->prev = block;

    OSRestoreInterrupts(enabled);

    return TRUE;
}

static DVDCommandBlock* PopWaitingQueuePrio(s32 prio) {
    DVDCommandBlock* tmp;
    BOOL enabled;
    DVDCommandBlock* q;

    enabled = OSDisableInterrupts();

    q = (DVDCommandBlock*)&(WaitingQueue[prio]);

    tmp = q->next;
    q->next = tmp->next;
    tmp->next->prev = q;

    OSRestoreInterrupts(enabled);

    tmp->next = (DVDCommandBlock*)NULL;
    tmp->prev = (DVDCommandBlock*)NULL;

    return tmp;
}

/* 8034B914-8034B9B4 346254 00A0+00 0/0 2/2 0/0 .text            __DVDPopWaitingQueue */
DVDCommandBlock* __DVDPopWaitingQueue(void) {
    u32 i;
    BOOL enabled;
    DVDCommandBlock* q;

    enabled = OSDisableInterrupts();

    for (i = 0; i < MAX_QUEUES; i++) {
        q = (DVDCommandBlock*)&(WaitingQueue[i]);
        if (q->next != q) {
            OSRestoreInterrupts(enabled);
            return PopWaitingQueuePrio((s32)i);
        }
    }

    OSRestoreInterrupts(enabled);

    return (DVDCommandBlock*)NULL;
}

/* 8034B9B4-8034BA0C 3462F4 0058+00 0/0 1/1 0/0 .text            __DVDCheckWaitingQueue */
BOOL __DVDCheckWaitingQueue(void) {
    u32 i;
    BOOL enabled;
    DVDCommandBlock* q;

    enabled = OSDisableInterrupts();

    for (i = 0; i < MAX_QUEUES; i++) {
        q = (DVDCommandBlock*)&(WaitingQueue[i]);
        if (q->next != q) {
            OSRestoreInterrupts(enabled);
            return TRUE;
        }
    }

    OSRestoreInterrupts(enabled);

    return FALSE;
}

/* 8034BA0C-8034BA6C 34634C 0060+00 0/0 1/1 0/0 .text            __DVDDequeueWaitingQueue */
BOOL __DVDDequeueWaitingQueue(DVDCommandBlock* block) {
    BOOL enabled;
    DVDCommandBlock* prev;
    DVDCommandBlock* next;

    enabled = OSDisableInterrupts();

    prev = block->prev;
    next = block->next;

    if ((prev == (DVDCommandBlock*)NULL) || (next == (DVDCommandBlock*)NULL)) {
        OSRestoreInterrupts(enabled);
        return FALSE;
    }

    prev->next = next;
    next->prev = prev;

    OSRestoreInterrupts(enabled);

    return TRUE;
}