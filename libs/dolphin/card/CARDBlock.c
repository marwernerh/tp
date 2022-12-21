//
// Generated By: dol2asm
// Translation Unit: CARDBlock
//

#include "dolphin/card/CARDBlock.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void __CARDGetFatBlock();
static void WriteCallback();
static void EraseCallback();
void __CARDAllocBlock();
void __CARDUpdateFatBlock();

//
// External References:
//

SECTION_INIT void memcpy();
void DCStoreRange();
void __CARDEraseSector();
void __CARDPutControlBlock();
void __CARDWrite();
void __CARDCheckSum();
extern u8 __CARDBlock[544];

//
// Declarations:
//

/* 80355414-8035541C 34FD54 0008+00 0/0 5/5 0/0 .text            __CARDGetFatBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __CARDGetFatBlock() {
    nofralloc
#include "asm/dolphin/card/CARDBlock/__CARDGetFatBlock.s"
}
#pragma pop

/* 8035541C-803554F0 34FD5C 00D4+00 1/1 0/0 0/0 .text            WriteCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void WriteCallback() {
    nofralloc
#include "asm/dolphin/card/CARDBlock/WriteCallback.s"
}
#pragma pop

/* 803554F0-803555B8 34FE30 00C8+00 1/1 0/0 0/0 .text            EraseCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void EraseCallback() {
    nofralloc
#include "asm/dolphin/card/CARDBlock/EraseCallback.s"
}
#pragma pop

/* 803555B8-803556D0 34FEF8 0118+00 0/0 1/1 0/0 .text            __CARDAllocBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __CARDAllocBlock() {
    nofralloc
#include "asm/dolphin/card/CARDBlock/__CARDAllocBlock.s"
}
#pragma pop

/* 803556D0-8035577C 350010 00AC+00 1/1 1/1 0/0 .text            __CARDUpdateFatBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __CARDUpdateFatBlock() {
    nofralloc
#include "asm/dolphin/card/CARDBlock/__CARDUpdateFatBlock.s"
}
#pragma pop