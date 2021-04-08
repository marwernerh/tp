//
// Generated By: dol2asm
// Translation Unit: f_op/f_op_scene_mng
//

#include "f_op/f_op_scene_mng.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct scene_class {};

//
// Forward References:
//

extern "C" void fopScnM_SearchByID__FUi();
extern "C" void fopScnM_ChangeReq__FP11scene_classssUs();
extern "C" void fopScnM_DeleteReq__FP11scene_class();
extern "C" void fopScnM_CreateReq__FssUsUl();
extern "C" void fopScnM_ReRequest__FsUl();
extern "C" void fopScnM_Management__Fv();
extern "C" void fopScnM_Init__Fv();

//
// External References:
//

extern "C" void fopScnIt_Judge__FPFPvPv_PvPv();
extern "C" void fopScnRq_Request__FiP11scene_classsPvsUs();
extern "C" void fopScnRq_ReRequest__FUisPv();
extern "C" void fopScnRq_Handler__Fv();
extern "C" void fpcSch_JudgeByID__FPvPv();

//
// Declarations:
//

/* 8001ECB0-8001ECE0 0195F0 0030+00 0/0 7/7 1/1 .text            fopScnM_SearchByID__FUi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopScnM_SearchByID(unsigned int param_0) {
    nofralloc
#include "asm/f_op/f_op_scene_mng/fopScnM_SearchByID__FUi.s"
}
#pragma pop

/* ############################################################################################## */
/* 804505B8-804505C0 000038 0004+04 2/2 0/0 0/0 .sdata           l_scnRqID */
SECTION_SDATA static u32 l_scnRqID[1 + 1 /* padding */] = {
    0xFFFFFFFF,
    /* padding */
    0x00000000,
};

/* 8001ECE0-8001ED3C 019620 005C+00 0/0 4/4 1/1 .text fopScnM_ChangeReq__FP11scene_classssUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopScnM_ChangeReq(scene_class* param_0, s16 param_1, s16 param_2, u16 param_3) {
    nofralloc
#include "asm/f_op/f_op_scene_mng/fopScnM_ChangeReq__FP11scene_classssUs.s"
}
#pragma pop

/* 8001ED3C-8001ED84 01967C 0048+00 0/0 1/1 0/0 .text            fopScnM_DeleteReq__FP11scene_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopScnM_DeleteReq(scene_class* param_0) {
    nofralloc
#include "asm/f_op/f_op_scene_mng/fopScnM_DeleteReq__FP11scene_class.s"
}
#pragma pop

/* 8001ED84-8001EDCC 0196C4 0048+00 0/0 2/2 0/0 .text            fopScnM_CreateReq__FssUsUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopScnM_CreateReq(s16 param_0, s16 param_1, u16 param_2, u32 param_3) {
    nofralloc
#include "asm/f_op/f_op_scene_mng/fopScnM_CreateReq__FssUsUl.s"
}
#pragma pop

/* 8001EDCC-8001EE10 01970C 0044+00 0/0 1/1 0/0 .text            fopScnM_ReRequest__FsUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopScnM_ReRequest(s16 param_0, u32 param_1) {
    nofralloc
#include "asm/f_op/f_op_scene_mng/fopScnM_ReRequest__FsUl.s"
}
#pragma pop

/* 8001EE10-8001EE30 019750 0020+00 0/0 1/1 0/0 .text            fopScnM_Management__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopScnM_Management() {
    nofralloc
#include "asm/f_op/f_op_scene_mng/fopScnM_Management__Fv.s"
}
#pragma pop

/* 8001EE30-8001EE34 019770 0004+00 0/0 1/1 0/0 .text            fopScnM_Init__Fv */
void fopScnM_Init() {
    /* empty function */
}