//
// Generated By: dol2asm
// Translation Unit: d_a_obj_digholl
//

#include "rel/d/a/obj/d_a_obj_digholl/d_a_obj_digholl.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct cXyz {};

struct daPy_py_c {
    /* 8015F4F0 */ void setLookPos(cXyz*);
};

struct daObjDigholl_c {
    /* 80BDC618 */ void create();
    /* 80BDC75C */ ~daObjDigholl_c();
    /* 80BDC7D8 */ void execute();
    /* 80BDCB0C */ bool draw();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004D1B8 */ void setSimple(u16, cXyz const*, dKy_tevstr_c const*, u8, _GXColor const&,
                                  _GXColor const&, int, f32);
};

//
// Forward References:
//

extern "C" void create__14daObjDigholl_cFv();
extern "C" static void daObjDigholl_Create__FP10fopAc_ac_c();
extern "C" void __dt__14daObjDigholl_cFv();
extern "C" static void daObjDigholl_Delete__FP14daObjDigholl_c();
extern "C" void execute__14daObjDigholl_cFv();
extern "C" static void daObjDigholl_Execute__FP14daObjDigholl_c();
extern "C" bool draw__14daObjDigholl_cFv();
extern "C" static void daObjDigholl_Draw__FP14daObjDigholl_c();
extern "C" extern void* g_profile_Obj_Digholl[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void setSimple__13dPa_control_cFUsPC4cXyzPC12dKy_tevstr_cUcRC8_GXColorRC8_GXColorif();
extern "C" void setLookPos__9daPy_py_cFP4cXyz();
extern "C" void cLib_distanceAngleS__Fss();
extern "C" void __dl__FPv();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 g_whiteColor;
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* ############################################################################################## */
/* 80BDCB3C-80BDCB40 000000 0004+00 2/2 0/0 0/0 .rodata          @3678 */
SECTION_RODATA static f32 const lit_3678 = -60.0f;
COMPILER_STRIP_GATE(80BDCB3C, &lit_3678);

/* 80BDCB40-80BDCB44 000004 0004+00 0/2 0/0 0/0 .rodata          @3679 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3679[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80BDCB40, &lit_3679);
#pragma pop

/* 80BDCB44-80BDCB48 000008 0004+00 0/1 0/0 0/0 .rodata          @3680 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3680 = -100.0f;
COMPILER_STRIP_GATE(80BDCB44, &lit_3680);
#pragma pop

/* 80BDCB48-80BDCB4C 00000C 0004+00 0/1 0/0 0/0 .rodata          @3681 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3681 = 60.0f;
COMPILER_STRIP_GATE(80BDCB48, &lit_3681);
#pragma pop

/* 80BDCB4C-80BDCB50 000010 0004+00 0/1 0/0 0/0 .rodata          @3682 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3682 = 10.0f;
COMPILER_STRIP_GATE(80BDCB4C, &lit_3682);
#pragma pop

/* 80BDCB50-80BDCB54 000014 0004+00 0/1 0/0 0/0 .rodata          @3683 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3683 = 100.0f;
COMPILER_STRIP_GATE(80BDCB50, &lit_3683);
#pragma pop

/* 80BDC618-80BDC73C 000078 0124+00 1/1 0/0 0/0 .text            create__14daObjDigholl_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDigholl_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_digholl/d_a_obj_digholl/create__14daObjDigholl_cFv.s"
}
#pragma pop

/* 80BDC73C-80BDC75C 00019C 0020+00 1/0 0/0 0/0 .text            daObjDigholl_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjDigholl_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_digholl/d_a_obj_digholl/daObjDigholl_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BDC75C-80BDC7B0 0001BC 0054+00 1/1 0/0 0/0 .text            __dt__14daObjDigholl_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjDigholl_c::~daObjDigholl_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_digholl/d_a_obj_digholl/__dt__14daObjDigholl_cFv.s"
}
#pragma pop

/* 80BDC7B0-80BDC7D8 000210 0028+00 1/0 0/0 0/0 .text daObjDigholl_Delete__FP14daObjDigholl_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjDigholl_Delete(daObjDigholl_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_digholl/d_a_obj_digholl/daObjDigholl_Delete__FP14daObjDigholl_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDCB54-80BDCB58 000018 0004+00 0/1 0/0 0/0 .rodata          @3793 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3793 = 40.0f;
COMPILER_STRIP_GATE(80BDCB54, &lit_3793);
#pragma pop

/* 80BDCB58-80BDCB5C 00001C 0004+00 0/1 0/0 0/0 .rodata          @3794 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3794 = 35.0f;
COMPILER_STRIP_GATE(80BDCB58, &lit_3794);
#pragma pop

/* 80BDCB5C-80BDCB60 000020 0004+00 0/1 0/0 0/0 .rodata          @3795 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3795 = 250000.0f;
COMPILER_STRIP_GATE(80BDCB5C, &lit_3795);
#pragma pop

/* 80BDCB60-80BDCB64 000024 0004+00 0/1 0/0 0/0 .rodata          @3796 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3796 = 200.0f;
COMPILER_STRIP_GATE(80BDCB60, &lit_3796);
#pragma pop

/* 80BDCB64-80BDCB6C 000028 0008+00 0/1 0/0 0/0 .rodata          @3797 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3797[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80BDCB64, &lit_3797);
#pragma pop

/* 80BDCB6C-80BDCB74 000030 0008+00 0/1 0/0 0/0 .rodata          @3798 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3798[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80BDCB6C, &lit_3798);
#pragma pop

/* 80BDCB74-80BDCB7C 000038 0008+00 0/1 0/0 0/0 .rodata          @3799 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3799[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80BDCB74, &lit_3799);
#pragma pop

/* 80BDCB7C-80BDCB80 000040 0004+00 0/1 0/0 0/0 .rodata          @3800 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3800 = 1000.0f;
COMPILER_STRIP_GATE(80BDCB7C, &lit_3800);
#pragma pop

/* 80BDC7D8-80BDCAEC 000238 0314+00 1/1 0/0 0/0 .text            execute__14daObjDigholl_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDigholl_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_digholl/d_a_obj_digholl/execute__14daObjDigholl_cFv.s"
}
#pragma pop

/* 80BDCAEC-80BDCB0C 00054C 0020+00 1/0 0/0 0/0 .text daObjDigholl_Execute__FP14daObjDigholl_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjDigholl_Execute(daObjDigholl_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_digholl/d_a_obj_digholl/daObjDigholl_Execute__FP14daObjDigholl_c.s"
}
#pragma pop

/* 80BDCB0C-80BDCB14 00056C 0008+00 1/1 0/0 0/0 .text            draw__14daObjDigholl_cFv */
bool daObjDigholl_c::draw() {
    return true;
}

/* 80BDCB14-80BDCB34 000574 0020+00 1/0 0/0 0/0 .text daObjDigholl_Draw__FP14daObjDigholl_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjDigholl_Draw(daObjDigholl_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_digholl/d_a_obj_digholl/daObjDigholl_Draw__FP14daObjDigholl_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BDCB80-80BDCBA0 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjDigholl_Method */
SECTION_DATA static void* l_daObjDigholl_Method[8] = {
    (void*)daObjDigholl_Create__FP10fopAc_ac_c,
    (void*)daObjDigholl_Delete__FP14daObjDigholl_c,
    (void*)daObjDigholl_Execute__FP14daObjDigholl_c,
    (void*)NULL,
    (void*)daObjDigholl_Draw__FP14daObjDigholl_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BDCBA0-80BDCBD0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Digholl */
SECTION_DATA extern void* g_profile_Obj_Digholl[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00520000, (void*)&g_fpcLf_Method,
    (void*)0x00000570, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00F90000, (void*)&l_daObjDigholl_Method,
    (void*)0x00044100, (void*)0x030E0000,
};