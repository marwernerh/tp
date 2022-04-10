//
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/mem_funcs
//

#include "MSL_C/MSL_Common/Src/mem_funcs.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __copy_longs_rev_unaligned();
extern "C" void __copy_longs_unaligned();
extern "C" void __copy_longs_rev_aligned();
extern "C" void __copy_longs_aligned();

//
// External References:
//

//
// Declarations:
//

/* 803661FC-803662A8 360B3C 00AC+00 0/0 1/1 0/0 .text            __copy_longs_rev_unaligned */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __copy_longs_rev_unaligned() {
    nofralloc
#include "asm/MSL_C/MSL_Common/Src/mem_funcs/__copy_longs_rev_unaligned.s"
}
#pragma pop

/* 803662A8-80366368 360BE8 00C0+00 0/0 1/1 0/0 .text            __copy_longs_unaligned */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __copy_longs_unaligned() {
    nofralloc
#include "asm/MSL_C/MSL_Common/Src/mem_funcs/__copy_longs_unaligned.s"
}
#pragma pop

/* 80366368-80366410 360CA8 00A8+00 0/0 1/1 0/0 .text            __copy_longs_rev_aligned */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __copy_longs_rev_aligned() {
    nofralloc
#include "asm/MSL_C/MSL_Common/Src/mem_funcs/__copy_longs_rev_aligned.s"
}
#pragma pop

/* 80366410-803664CC 360D50 00BC+00 0/0 1/1 0/0 .text            __copy_longs_aligned */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __copy_longs_aligned() {
    nofralloc
#include "asm/MSL_C/MSL_Common/Src/mem_funcs/__copy_longs_aligned.s"
}
#pragma pop