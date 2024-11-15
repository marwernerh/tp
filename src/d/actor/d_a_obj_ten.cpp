/**
 * @file d_a_obj_ten.cpp
 * 
*/

#include "d/actor/d_a_obj_ten.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__14daObj_TenHIO_cFv();
extern "C" void InitCcSph__10daObjTEN_cFv();
extern "C" void SetCcSph__10daObjTEN_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daObjTEN_Create__FP10fopAc_ac_c();
extern "C" static void daObjTEN_Delete__FP10daObjTEN_c();
extern "C" void WaitAction__10daObjTEN_cFv();
extern "C" void WallCheck__10daObjTEN_cFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void SpeedSet__10daObjTEN_cFv();
extern "C" void WallWalk__10daObjTEN_cFv();
extern "C" void WalkAction__10daObjTEN_cFv();
extern "C" void MoveAction__10daObjTEN_cFv();
extern "C" void Action__10daObjTEN_cFv();
extern "C" void ShopAction__10daObjTEN_cFv();
extern "C" void checkGroundPos__10daObjTEN_cFv();
extern "C" void Insect_Release__10daObjTEN_cFv();
extern "C" void ParticleSet__10daObjTEN_cFv();
extern "C" void BoomChk__10daObjTEN_cFv();
extern "C" void Execute__10daObjTEN_cFv();
extern "C" void ObjHit__10daObjTEN_cFv();
extern "C" void Z_BufferChk__10daObjTEN_cFv();
extern "C" void Delete__10daObjTEN_cFv();
extern "C" void setBaseMtx__10daObjTEN_cFv();
extern "C" static void daObjTEN_Draw__FP10daObjTEN_c();
extern "C" static void daObjTEN_Execute__FP10daObjTEN_c();
extern "C" void CreateChk__10daObjTEN_cFv();
extern "C" void create__10daObjTEN_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" static bool daObjTEN_IsDelete__FP10daObjTEN_c();
extern "C" void __dt__14daObj_TenHIO_cFv();
extern "C" void __sinit_d_a_obj_ten_cpp();
extern "C" static void func_80D0B8CC();
extern "C" static void func_80D0B8D4();
extern "C" extern char const* const d_a_obj_ten__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotS__14mDoMtx_stack_cFRC5csXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void mDoLib_pos2camera__FP3VecP3Vec();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGd_setSimpleShadow__FP4cXyzffR13cBgS_PolyInfosfP9_GXTexObj();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void newData__13dDlst_peekZ_cFssPUl();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void __ct__9dInsect_cFv();
extern "C" void Insect_GetDemoMain__9dInsect_cFv();
extern "C" void initOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void posMove__20daPy_boomerangMove_cFP4cXyzPsP10fopAc_ac_cs();
extern "C" void bgCheckAfterOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void isCatchNotGiveInsect__14dMenu_Insect_cFUc();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void _savegpr_24();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" f32 mGroundY__11fopAcM_gc_c;
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80D0B8F0-80D0B8F4 000000 0004+00 14/14 0/0 0/0 .rodata          @3775 */
SECTION_RODATA static f32 const lit_3775 = 1.0f;
COMPILER_STRIP_GATE(0x80D0B8F0, &lit_3775);

/* 80D0B9F4-80D0BA14 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjTEN_Method */
static actor_method_class l_daObjTEN_Method = {
    (process_method_func)daObjTEN_Create__FP10fopAc_ac_c,
    (process_method_func)daObjTEN_Delete__FP10daObjTEN_c,
    (process_method_func)daObjTEN_Execute__FP10daObjTEN_c,
    (process_method_func)daObjTEN_IsDelete__FP10daObjTEN_c,
    (process_method_func)daObjTEN_Draw__FP10daObjTEN_c,
};

/* 80D0BA14-80D0BA44 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Ten */
extern actor_process_profile_definition g_profile_Obj_Ten = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Ten,           // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjTEN_c),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  483,                    // mPriority
  &l_daObjTEN_Method,     // sub_method
  0x000C0120,             // mStatus
  fopAc_ENV_e,            // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80D0BA44-80D0BA68 000050 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80D0B8D4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80D0B8CC,
};

/* 80D0BA68-80D0BA74 000074 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80D0BA74-80D0BA80 000080 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D0BA80-80D0BA8C 00008C 000C+00 1/1 0/0 0/0 .data            __vt__10daObjTEN_c */
SECTION_DATA extern void* __vt__10daObjTEN_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)Insect_Release__10daObjTEN_cFv,
};

/* 80D0BA8C-80D0BA98 000098 000C+00 5/5 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80D0BA98-80D0BAA4 0000A4 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80D0BAA4-80D0BAB0 0000B0 000C+00 2/2 0/0 0/0 .data            __vt__14daObj_TenHIO_c */
SECTION_DATA extern void* __vt__14daObj_TenHIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daObj_TenHIO_cFv,
};

/* 80D087CC-80D087F4 0000EC 0028+00 1/1 0/0 0/0 .text            __ct__14daObj_TenHIO_cFv */
daObj_TenHIO_c::daObj_TenHIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B8F4-80D0B8F8 000004 0002+02 1/2 0/0 0/0 .rodata          l_ten_itemno */
SECTION_RODATA static u16 const l_ten_itemno[1 + 1 /* padding */] = {
    0xCECF,
    /* padding */
    0x0000,
};
COMPILER_STRIP_GATE(0x80D0B8F4, &l_ten_itemno);

/* 80D0B8F8-80D0B938 000008 0040+00 1/1 0/0 0/0 .rodata          ccSphSrc$3779 */
const static dCcD_SrcSph ccSphSrc = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x14002, 0x11}, 0x0}}, // mObj
        {dCcD_SE_STONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};

/* 80D087F4-80D08860 000114 006C+00 1/1 0/0 0/0 .text            InitCcSph__10daObjTEN_cFv */
void daObjTEN_c::InitCcSph() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B938-80D0B93C 000048 0004+00 1/3 0/0 0/0 .rodata          @3788 */
SECTION_RODATA static f32 const lit_3788 = 20.0f;
COMPILER_STRIP_GATE(0x80D0B938, &lit_3788);

/* 80D08860-80D088B8 000180 0058+00 1/1 0/0 0/0 .text            SetCcSph__10daObjTEN_cFv */
void daObjTEN_c::SetCcSph() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B9E4-80D0B9E4 0000F4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D0B9E4 = "I_Ten";
#pragma pop

/* 80D088B8-80D08B84 0001D8 02CC+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80D08B84-80D08BCC 0004A4 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 80D08BCC-80D08BEC 0004EC 0020+00 1/0 0/0 0/0 .text            daObjTEN_Create__FP10fopAc_ac_c */
static void daObjTEN_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80D08BEC-80D08C10 00050C 0024+00 1/0 0/0 0/0 .text            daObjTEN_Delete__FP10daObjTEN_c */
static void daObjTEN_Delete(daObjTEN_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B93C-80D0B940 00004C 0004+00 1/12 0/0 0/0 .rodata          @3939 */
SECTION_RODATA static u8 const lit_3939[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D0B93C, &lit_3939);

/* 80D0B940-80D0B944 000050 0004+00 0/5 0/0 0/0 .rodata          @3940 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3940 = 5.0f;
COMPILER_STRIP_GATE(0x80D0B940, &lit_3940);
#pragma pop

/* 80D0B944-80D0B948 000054 0004+00 0/5 0/0 0/0 .rodata          @3941 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3941 = -1.0f;
COMPILER_STRIP_GATE(0x80D0B944, &lit_3941);
#pragma pop

/* 80D0B948-80D0B94C 000058 0004+00 0/5 0/0 0/0 .rodata          @3942 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3942 = 50.0f;
COMPILER_STRIP_GATE(0x80D0B948, &lit_3942);
#pragma pop

/* 80D0B94C-80D0B950 00005C 0004+00 0/1 0/0 0/0 .rodata          @3943 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3943 = 1500.0f;
COMPILER_STRIP_GATE(0x80D0B94C, &lit_3943);
#pragma pop

/* 80D0B950-80D0B958 000060 0004+04 0/4 0/0 0/0 .rodata          @3944 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3944[1 + 1 /* padding */] = {
    100.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80D0B950, &lit_3944);
#pragma pop

/* 80D08C10-80D08D94 000530 0184+00 2/2 0/0 0/0 .text            WaitAction__10daObjTEN_cFv */
void daObjTEN_c::WaitAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B958-80D0B960 000068 0008+00 0/5 0/0 0/0 .rodata          @3997 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3997[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D0B958, &lit_3997);
#pragma pop

/* 80D0B960-80D0B968 000070 0008+00 0/5 0/0 0/0 .rodata          @3998 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3998[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D0B960, &lit_3998);
#pragma pop

/* 80D0B968-80D0B970 000078 0008+00 0/5 0/0 0/0 .rodata          @3999 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3999[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D0B968, &lit_3999);
#pragma pop

/* 80D08D94-80D08FC0 0006B4 022C+00 1/1 0/0 0/0 .text            WallCheck__10daObjTEN_cFv */
void daObjTEN_c::WallCheck() {
    // NONMATCHING
}

/* 80D08FC0-80D09008 0008E0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
// cM3dGPla::~cM3dGPla() {
extern "C" void __dt__8cM3dGPlaFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B970-80D0B974 000080 0004+00 0/1 0/0 0/0 .rodata          @4023 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4023 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x80D0B970, &lit_4023);
#pragma pop

/* 80D0B974-80D0B978 000084 0004+00 0/3 0/0 0/0 .rodata          @4024 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4024 = 10.0f;
COMPILER_STRIP_GATE(0x80D0B974, &lit_4024);
#pragma pop

/* 80D0B978-80D0B97C 000088 0004+00 0/1 0/0 0/0 .rodata          @4025 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4025 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80D0B978, &lit_4025);
#pragma pop

/* 80D0B97C-80D0B980 00008C 0004+00 0/3 0/0 0/0 .rodata          @4026 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4026 = 0.5f;
COMPILER_STRIP_GATE(0x80D0B97C, &lit_4026);
#pragma pop

/* 80D09008-80D09114 000928 010C+00 1/1 0/0 0/0 .text            SpeedSet__10daObjTEN_cFv */
void daObjTEN_c::SpeedSet() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B980-80D0B984 000090 0004+00 0/2 0/0 0/0 .rodata          @4124 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4124 = 3.0f;
COMPILER_STRIP_GATE(0x80D0B980, &lit_4124);
#pragma pop

/* 80D0B984-80D0B988 000094 0004+00 0/1 0/0 0/0 .rodata          @4125 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4125 = -100.0f;
COMPILER_STRIP_GATE(0x80D0B984, &lit_4125);
#pragma pop

/* 80D0B988-80D0B98C 000098 0004+00 0/2 0/0 0/0 .rodata          @4126 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4126 = 40.0f;
COMPILER_STRIP_GATE(0x80D0B988, &lit_4126);
#pragma pop

/* 80D0B98C-80D0B990 00009C 0004+00 0/1 0/0 0/0 .rodata          @4127 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4127 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80D0B98C, &lit_4127);
#pragma pop

/* 80D09114-80D09548 000A34 0434+00 1/1 0/0 0/0 .text            WallWalk__10daObjTEN_cFv */
void daObjTEN_c::WallWalk() {
    // NONMATCHING
}

/* 80D09548-80D09748 000E68 0200+00 2/2 0/0 0/0 .text            WalkAction__10daObjTEN_cFv */
void daObjTEN_c::WalkAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B990-80D0B994 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4311 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4311 = 30.0f;
COMPILER_STRIP_GATE(0x80D0B990, &lit_4311);
#pragma pop

/* 80D0B994-80D0B998 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4312 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4312 = 80.0f;
COMPILER_STRIP_GATE(0x80D0B994, &lit_4312);
#pragma pop

/* 80D0B998-80D0B99C 0000A8 0004+00 0/3 0/0 0/0 .rodata          @4313 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4313 = 8.0f;
COMPILER_STRIP_GATE(0x80D0B998, &lit_4313);
#pragma pop

/* 80D0B99C-80D0B9A0 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4314 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4314 = 200.0f;
COMPILER_STRIP_GATE(0x80D0B99C, &lit_4314);
#pragma pop

/* 80D0B9A0-80D0B9A4 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4315 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4315 = 11.0f;
COMPILER_STRIP_GATE(0x80D0B9A0, &lit_4315);
#pragma pop

/* 80D0B9A4-80D0B9A8 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4316 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4316 = 1050.0f;
COMPILER_STRIP_GATE(0x80D0B9A4, &lit_4316);
#pragma pop

/* 80D0B9A8-80D0B9AC 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4317 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4317 = 64000.0f;
COMPILER_STRIP_GATE(0x80D0B9A8, &lit_4317);
#pragma pop

/* 80D09748-80D09F58 001068 0810+00 2/2 0/0 0/0 .text            MoveAction__10daObjTEN_cFv */
void daObjTEN_c::MoveAction() {
    // NONMATCHING
}

/* 80D09F58-80D0A01C 001878 00C4+00 1/1 0/0 0/0 .text            Action__10daObjTEN_cFv */
void daObjTEN_c::Action() {
    // NONMATCHING
}

/* 80D0A01C-80D0A0D8 00193C 00BC+00 1/1 0/0 0/0 .text            ShopAction__10daObjTEN_cFv */
void daObjTEN_c::ShopAction() {
    // NONMATCHING
}

/* 80D0A0D8-80D0A13C 0019F8 0064+00 1/1 0/0 0/0 .text            checkGroundPos__10daObjTEN_cFv */
void daObjTEN_c::checkGroundPos() {
    // NONMATCHING
}

/* 80D0A13C-80D0A154 001A5C 0018+00 1/0 0/0 0/0 .text            Insect_Release__10daObjTEN_cFv */
void daObjTEN_c::Insect_Release() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B9AC-80D0B9B0 0000BC 0004+00 0/0 0/0 0/0 .rodata          @4423 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4423 = -9.0f;
COMPILER_STRIP_GATE(0x80D0B9AC, &lit_4423);
#pragma pop

/* 80D0B9B0-80D0B9B8 0000C0 0008+00 1/2 0/0 0/0 .rodata          @4458 */
SECTION_RODATA static u8 const lit_4458[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D0B9B0, &lit_4458);

/* 80D0A154-80D0A278 001A74 0124+00 1/1 0/0 0/0 .text            ParticleSet__10daObjTEN_cFv */
void daObjTEN_c::ParticleSet() {
    // NONMATCHING
}

/* 80D0A278-80D0A644 001B98 03CC+00 1/1 0/0 0/0 .text            BoomChk__10daObjTEN_cFv */
void daObjTEN_c::BoomChk() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B9B8-80D0B9BC 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4604 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4604 = 10000.0f;
COMPILER_STRIP_GATE(0x80D0B9B8, &lit_4604);
#pragma pop

/* 80D0A644-80D0A8C8 001F64 0284+00 1/1 0/0 0/0 .text            Execute__10daObjTEN_cFv */
void daObjTEN_c::Execute() {
    // NONMATCHING
}

/* 80D0A8C8-80D0AA50 0021E8 0188+00 1/1 0/0 0/0 .text            ObjHit__10daObjTEN_cFv */
void daObjTEN_c::ObjHit() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B9BC-80D0B9C0 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4673 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4673 = 608.0f;
COMPILER_STRIP_GATE(0x80D0B9BC, &lit_4673);
#pragma pop

/* 80D0B9C0-80D0B9C4 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4674 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4674 = 448.0f;
COMPILER_STRIP_GATE(0x80D0B9C0, &lit_4674);
#pragma pop

/* 80D0B9C4-80D0B9C8 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4675 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4675 = 16777215.0f;
COMPILER_STRIP_GATE(0x80D0B9C4, &lit_4675);
#pragma pop

/* 80D0AA50-80D0ABCC 002370 017C+00 1/1 0/0 0/0 .text            Z_BufferChk__10daObjTEN_cFv */
void daObjTEN_c::Z_BufferChk() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0BAB8-80D0BABC 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80D0BAB8[4];

/* 80D0ABCC-80D0AC34 0024EC 0068+00 1/1 0/0 0/0 .text            Delete__10daObjTEN_cFv */
void daObjTEN_c::Delete() {
    // NONMATCHING
}

/* 80D0AC34-80D0AC9C 002554 0068+00 1/1 0/0 0/0 .text            setBaseMtx__10daObjTEN_cFv */
void daObjTEN_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B9C8-80D0B9CC 0000D8 0004+00 1/1 0/0 0/0 .rodata          @4738 */
SECTION_RODATA static f32 const lit_4738 = 15.0f;
COMPILER_STRIP_GATE(0x80D0B9C8, &lit_4738);

/* 80D0B9CC-80D0B9D0 0000DC 0004+00 1/1 0/0 0/0 .rodata          @4739 */
SECTION_RODATA static f32 const lit_4739 = -3.0f / 5.0f;
COMPILER_STRIP_GATE(0x80D0B9CC, &lit_4739);

/* 80D0AC9C-80D0AD7C 0025BC 00E0+00 1/0 0/0 0/0 .text            daObjTEN_Draw__FP10daObjTEN_c */
static void daObjTEN_Draw(daObjTEN_c* param_0) {
    // NONMATCHING
}

/* 80D0AD7C-80D0AD9C 00269C 0020+00 2/1 0/0 0/0 .text            daObjTEN_Execute__FP10daObjTEN_c */
static void daObjTEN_Execute(daObjTEN_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B9D0-80D0B9D4 0000E0 0004+00 1/2 0/0 0/0 .rodata          l_musiya_num */
SECTION_RODATA static u32 const l_musiya_num = 0x019F01A0;
COMPILER_STRIP_GATE(0x80D0B9D0, &l_musiya_num);

/* 80D0B9E4-80D0B9E4 0000F4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D0B9EA = "R_SP160";
#pragma pop

/* 80D0AD9C-80D0AF48 0026BC 01AC+00 1/1 0/0 0/0 .text            CreateChk__10daObjTEN_cFv */
void daObjTEN_c::CreateChk() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0B9D4-80D0B9D8 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5101 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5101 = 500.0f;
COMPILER_STRIP_GATE(0x80D0B9D4, &lit_5101);
#pragma pop

/* 80D0B9D8-80D0B9DC 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5102 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5102 = -200.0f;
COMPILER_STRIP_GATE(0x80D0B9D8, &lit_5102);
#pragma pop

/* 80D0B9DC-80D0B9E0 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5103 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5103 = -1000.0f;
COMPILER_STRIP_GATE(0x80D0B9DC, &lit_5103);
#pragma pop

/* 80D0B9E0-80D0B9E4 0000F0 0004+00 0/1 0/0 0/0 .rodata          @5104 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5104 = -50.0f;
COMPILER_STRIP_GATE(0x80D0B9E0, &lit_5104);
#pragma pop

/* 80D0BABC-80D0BAC8 00000C 000C+00 1/1 0/0 0/0 .bss             @3770 */
static u8 lit_3770[12];

/* 80D0BAC8-80D0BAD8 000018 0010+00 2/2 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 80D0AF48-80D0B740 002868 07F8+00 1/1 0/0 0/0 .text            create__10daObjTEN_cFv */
void daObjTEN_c::create() {
    // NONMATCHING
}

/* 80D0B740-80D0B7B0 003060 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80D0B7B0-80D0B7F8 0030D0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80D0B7F8-80D0B840 003118 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80D0B840-80D0B848 003160 0008+00 1/0 0/0 0/0 .text            daObjTEN_IsDelete__FP10daObjTEN_c
 */
static bool daObjTEN_IsDelete(daObjTEN_c* param_0) {
    return true;
}

/* 80D0B848-80D0B890 003168 0048+00 2/1 0/0 0/0 .text            __dt__14daObj_TenHIO_cFv */
daObj_TenHIO_c::~daObj_TenHIO_c() {
    // NONMATCHING
}

/* 80D0B890-80D0B8CC 0031B0 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_ten_cpp */
void __sinit_d_a_obj_ten_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80D0B890, __sinit_d_a_obj_ten_cpp);
#pragma pop

/* 80D0B8CC-80D0B8D4 0031EC 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80D0B8CC() {
    // NONMATCHING
}

/* 80D0B8D4-80D0B8DC 0031F4 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80D0B8D4() {
    // NONMATCHING
}

/* 80D0B9E4-80D0B9E4 0000F4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */