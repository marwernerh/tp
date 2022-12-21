//
// Generated By: dol2asm
// Translation Unit: dvdfs
//

#include "dolphin/dvd/dvdfs.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void __DVDFSInit();
void DVDConvertPathToEntrynum();
void DVDFastOpen();
void DVDOpen();
void DVDClose();
static void entryToPath();
static void DVDConvertEntrynumToPath();
static void DVDGetCurrentDir();
void DVDChangeDir();
void DVDReadAsyncPrio();
static void cbForReadAsync();
void DVDReadPrio();
static void cbForReadSync();
void DVDOpenDir();
void DVDReadDir();
u8 DVDCloseDir();

//
// External References:
//

void OSReport();
void OSPanic();
void OSDisableInterrupts();
void OSRestoreInterrupts();
void OSSleepThread();
void OSWakeupThread();
void DVDReadAbsAsyncPrio();
void DVDCancel();
void tolower();

//
// Declarations:
//

/* ############################################################################################## */
/* 80451758-8045175C 000C58 0004+00 1/1 0/0 0/0 .sbss            BootInfo */
static u8 BootInfo[4];

/* 8045175C-80451760 000C5C 0004+00 10/10 0/0 0/0 .sbss            FstStart */
static u8 FstStart[4];

/* 80451760-80451764 000C60 0004+00 5/5 0/0 0/0 .sbss            FstStringStart */
static u8 FstStringStart[4];

/* 80451764-80451768 000C64 0004+00 2/2 0/0 0/0 .sbss            MaxEntryNum */
static u8 MaxEntryNum[4];

/* 803484F0-80348528 342E30 0038+00 0/0 2/2 0/0 .text            __DVDFSInit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DVDFSInit() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/__DVDFSInit.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D1380-803D1448 02E4A0 00C8+00 1/1 0/0 0/0 .data            @119 */
SECTION_DATA static char lit_119[] =
    "DVDConvertEntrynumToPath(possibly DVDOpen or DVDChangeDir or DVDOpenDir): specified directory "
    "or file (%s) doesn't match standard 8.3 format. This is a temporary restriction and will be "
    "removed soon\n";

/* 804509E0-804509E8 000460 0008+00 3/3 0/0 0/0 .sdata           @118 */
SECTION_SDATA static char lit_118[] = "dvdfs.c";

/* 80451768-8045176C 000C68 0004+00 4/4 0/0 0/0 .sbss            currentDirectory */
static u8 currentDirectory[4];

/* 80451770-80451778 000C70 0008+00 2/2 3/3 0/0 .sbss            __DVDThreadQueue */
extern u8 __DVDThreadQueue[8];
u8 __DVDThreadQueue[8];

/* 8045176C-80451770 000C6C 0004+00 1/1 1/1 0/0 .sbss            __DVDLongFileNameFlag */
extern u8 __DVDLongFileNameFlag[4];
u8 __DVDLongFileNameFlag[4];

/* 80348528-8034881C 342E68 02F4+00 3/3 6/6 0/0 .text            DVDConvertPathToEntrynum */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDConvertPathToEntrynum() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/DVDConvertPathToEntrynum.s"
}
#pragma pop

/* 8034881C-80348890 34315C 0074+00 0/0 3/3 0/0 .text            DVDFastOpen */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDFastOpen() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/DVDFastOpen.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D1448-803D1480 02E568 0037+01 1/1 0/0 0/0 .data            @140 */
SECTION_DATA static char lit_140[] = "Warning: DVDOpen(): file '%s' was not found under %s.\n";

/* 80348890-80348958 3431D0 00C8+00 0/0 3/3 1/1 .text            DVDOpen */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDOpen() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/DVDOpen.s"
}
#pragma pop

/* 80348958-8034897C 343298 0024+00 0/0 4/4 2/2 .text            DVDClose */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDClose() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/DVDClose.s"
}
#pragma pop

/* 8034897C-80348ADC 3432BC 0160+00 2/2 0/0 0/0 .text            entryToPath */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void entryToPath() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/entryToPath.s"
}
#pragma pop

/* 80348ADC-80348C30 34341C 0154+00 1/1 0/0 0/0 .text            DVDConvertEntrynumToPath */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void DVDConvertEntrynumToPath() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/DVDConvertEntrynumToPath.s"
}
#pragma pop

/* 80348C30-80348CF4 343570 00C4+00 1/1 0/0 0/0 .text            DVDGetCurrentDir */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void DVDGetCurrentDir() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/DVDGetCurrentDir.s"
}
#pragma pop

/* 80348CF4-80348D54 343634 0060+00 0/0 2/2 0/0 .text            DVDChangeDir */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDChangeDir() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/DVDChangeDir.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D1480-803D14B4 02E5A0 0034+00 1/1 0/0 0/0 .data            @239 */
SECTION_DATA static char lit_239[] = "DVDReadAsync(): specified area is out of the file  ";

/* 80348D54-80348E14 343694 00C0+00 0/0 2/2 0/0 .text            DVDReadAsyncPrio */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDReadAsyncPrio() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/DVDReadAsyncPrio.s"
}
#pragma pop

/* 80348E14-80348E44 343754 0030+00 1/1 0/0 0/0 .text            cbForReadAsync */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void cbForReadAsync() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/cbForReadAsync.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D14B4-803D14E4 02E5D4 002F+01 1/1 0/0 0/0 .data            @265 */
SECTION_DATA static char lit_265[] = "DVDRead(): specified area is out of the file  ";

/* 80348E44-80348F5C 343784 0118+00 0/0 9/9 3/3 .text            DVDReadPrio */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDReadPrio() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/DVDReadPrio.s"
}
#pragma pop

/* 80348F5C-80348F80 34389C 0024+00 1/1 0/0 0/0 .text            cbForReadSync */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void cbForReadSync() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/cbForReadSync.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D14E4-803D1520 02E604 003A+02 1/1 0/0 0/0 .data            @311 */
SECTION_DATA static char lit_311[] = "Warning: DVDOpenDir(): file '%s' was not found under %s.\n";

/* 80348F80-80349040 3438C0 00C0+00 0/0 3/3 0/0 .text            DVDOpenDir */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDOpenDir() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/DVDOpenDir.s"
}
#pragma pop

/* 80349040-803490E4 343980 00A4+00 0/0 3/3 0/0 .text            DVDReadDir */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDReadDir() {
    nofralloc
#include "asm/dolphin/dvd/dvdfs/DVDReadDir.s"
}
#pragma pop

/* 803490E4-803490EC 343A24 0008+00 0/0 3/3 0/0 .text            DVDCloseDir */
u8 DVDCloseDir() {
    return 1;
}