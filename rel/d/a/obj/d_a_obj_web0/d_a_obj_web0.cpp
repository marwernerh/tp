//
// Generated By: dol2asm
// Translation Unit: d_a_obj_web0
//

#include "rel/d/a/obj/d_a_obj_web0/d_a_obj_web0.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct obj_web0_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);

    static u8 now[48];
};

struct J3DMaterialTable {};

struct J3DAnmTevRegKey {};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObj_Web0_HIO_c {
    /* 80D3452C */ daObj_Web0_HIO_c();
    /* 80D350E4 */ ~daObj_Web0_HIO_c();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct cXyz {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct csXyz {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80083830 */ void Move();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
    /* 80084548 */ void GetTgHitGObj();
    /* 80084658 */ void ChkCoHit();
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 80D35054 */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 80D3509C */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS_PolyInfo {};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct JMath {
    static u8 sincosTable_[65536];
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80D34D44 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void __ct__16daObj_Web0_HIO_cFv();
extern "C" static void daObj_Web0_Draw__FP14obj_web0_class();
extern "C" static void damage_check__FP14obj_web0_class();
extern "C" static void daObj_Web0_Execute__FP14obj_web0_class();
extern "C" static bool daObj_Web0_IsDelete__FP14obj_web0_class();
extern "C" static void daObj_Web0_Delete__FP14obj_web0_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daObj_Web0_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__16daObj_Web0_HIO_cFv();
extern "C" void __sinit_d_a_obj_web0_cpp();
extern "C" extern char const* const d_a_obj_web0__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80D351C8-80D35208 000000 0040+00 1/1 0/0 0/0 .data            cc_sph_src$3944 */
SECTION_DATA static u8 cc_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 80D35208-80D35228 -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_Web0_Method */
SECTION_DATA static void* l_daObj_Web0_Method[8] = {
    (void*)daObj_Web0_Create__FP10fopAc_ac_c,
    (void*)daObj_Web0_Delete__FP14obj_web0_class,
    (void*)daObj_Web0_Execute__FP14obj_web0_class,
    (void*)daObj_Web0_IsDelete__FP14obj_web0_class,
    (void*)daObj_Web0_Draw__FP14obj_web0_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D35228-80D35258 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_WEB0 */
SECTION_DATA extern void* g_profile_OBJ_WEB0[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00280000, (void*)&g_fpcLf_Method,
    (void*)0x0000073C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x002F0000, (void*)&l_daObj_Web0_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80D35258-80D35264 000090 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80D35264-80D35270 00009C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D35270-80D3527C 0000A8 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80D3527C-80D35288 0000B4 000C+00 2/2 0/0 0/0 .data            __vt__16daObj_Web0_HIO_c */
SECTION_DATA extern void* __vt__16daObj_Web0_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daObj_Web0_HIO_cFv,
};

/* 80D3452C-80D34544 0000EC 0018+00 1/1 0/0 0/0 .text            __ct__16daObj_Web0_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Web0_HIO_c::daObj_Web0_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web0/d_a_obj_web0/__ct__16daObj_Web0_HIO_cFv.s"
}
#pragma pop

/* 80D34544-80D345C0 000104 007C+00 1/0 0/0 0/0 .text            daObj_Web0_Draw__FP14obj_web0_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Web0_Draw(obj_web0_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web0/d_a_obj_web0/daObj_Web0_Draw__FP14obj_web0_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D3517C-80D35180 000000 0004+00 3/3 0/0 0/0 .rodata          @3724 */
SECTION_RODATA static f32 const lit_3724 = 1.0f;
COMPILER_STRIP_GATE(80D3517C, &lit_3724);

/* 80D35180-80D35184 000004 0004+00 0/2 0/0 0/0 .rodata          @3725 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3725 = -1.0f;
COMPILER_STRIP_GATE(80D35180, &lit_3725);
#pragma pop

/* 80D35184-80D35188 000008 0004+00 0/1 0/0 0/0 .rodata          @3726 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3726 = 260.0f;
COMPILER_STRIP_GATE(80D35184, &lit_3726);
#pragma pop

/* 80D345C0-80D34794 000180 01D4+00 1/1 0/0 0/0 .text            damage_check__FP14obj_web0_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void damage_check(obj_web0_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web0/d_a_obj_web0/damage_check__FP14obj_web0_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D35188-80D3518C 00000C 0004+00 0/1 0/0 0/0 .rodata          @3850 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3850 = 3.0f / 40.0f;
COMPILER_STRIP_GATE(80D35188, &lit_3850);
#pragma pop

/* 80D3518C-80D35190 000010 0004+00 0/1 0/0 0/0 .rodata          @3851 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3851 = 70.0f;
COMPILER_STRIP_GATE(80D3518C, &lit_3851);
#pragma pop

/* 80D35190-80D35194 000014 0004+00 0/1 0/0 0/0 .rodata          @3852 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3852 = 20000.0f;
COMPILER_STRIP_GATE(80D35190, &lit_3852);
#pragma pop

/* 80D35194-80D3519C 000018 0004+04 0/1 0/0 0/0 .rodata          @3853 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3853[1 + 1 /* padding */] = {
    150.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(80D35194, &lit_3853);
#pragma pop

/* 80D3519C-80D351A4 000020 0008+00 0/1 0/0 0/0 .rodata          @3855 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3855[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D3519C, &lit_3855);
#pragma pop

/* 80D34794-80D34B24 000354 0390+00 2/1 0/0 0/0 .text daObj_Web0_Execute__FP14obj_web0_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Web0_Execute(obj_web0_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web0/d_a_obj_web0/daObj_Web0_Execute__FP14obj_web0_class.s"
}
#pragma pop

/* 80D34B24-80D34B2C 0006E4 0008+00 1/0 0/0 0/0 .text daObj_Web0_IsDelete__FP14obj_web0_class */
static bool daObj_Web0_IsDelete(obj_web0_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80D35290-80D35294 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80D35290[4];

/* 80D34B2C-80D34B94 0006EC 0068+00 1/0 0/0 0/0 .text daObj_Web0_Delete__FP14obj_web0_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Web0_Delete(obj_web0_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web0/d_a_obj_web0/daObj_Web0_Delete__FP14obj_web0_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D351A4-80D351A8 000028 0004+00 1/1 0/0 0/0 .rodata          @3917 */
SECTION_RODATA static u8 const lit_3917[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80D351A4, &lit_3917);

/* 80D34B94-80D34D44 000754 01B0+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web0/d_a_obj_web0/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D34D44-80D34D8C 000904 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web0/d_a_obj_web0/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D351A8-80D351AC 00002C 0004+00 1/1 0/0 0/0 .rodata          @4014 */
SECTION_RODATA static f32 const lit_4014 = -1000.0f;
COMPILER_STRIP_GATE(80D351A8, &lit_4014);

/* 80D351AC-80D351B4 000030 0004+04 1/1 0/0 0/0 .rodata          @4015 */
SECTION_RODATA static f32 const lit_4015[1 + 1 /* padding */] = {
    1000.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(80D351AC, &lit_4015);

/* 80D351B4-80D351BC 000038 0008+00 1/1 0/0 0/0 .rodata          @4017 */
SECTION_RODATA static u8 const lit_4017[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D351B4, &lit_4017);

/* 80D35294-80D352A0 00000C 000C+00 1/1 0/0 0/0 .bss             @3643 */
static u8 lit_3643[12];

/* 80D352A0-80D352A8 000018 0008+00 2/2 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[8];

/* 80D34D8C-80D35054 00094C 02C8+00 1/0 0/0 0/0 .text            daObj_Web0_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Web0_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web0/d_a_obj_web0/daObj_Web0_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D35054-80D3509C 000C14 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web0/d_a_obj_web0/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80D3509C-80D350E4 000C5C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web0/d_a_obj_web0/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80D350E4-80D3512C 000CA4 0048+00 2/1 0/0 0/0 .text            __dt__16daObj_Web0_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Web0_HIO_c::~daObj_Web0_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web0/d_a_obj_web0/__dt__16daObj_Web0_HIO_cFv.s"
}
#pragma pop

/* 80D3512C-80D35168 000CEC 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_web0_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_web0_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web0/d_a_obj_web0/__sinit_d_a_obj_web0_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80D3512C = (void*)__sinit_d_a_obj_web0_cpp;
#pragma pop

/* 80D351BC-80D351C5 000040 0009+00 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80D351BC = "Obj_web0";
#pragma pop