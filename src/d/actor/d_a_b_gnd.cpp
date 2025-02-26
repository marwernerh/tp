/**
 * @file d_a_b_gnd.cpp
 * 
*/

#include "d/actor/d_a_b_gnd.h"
#include "dol2asm.h"
#include "d/d_camera.h"

//
// Forward References:
//

extern "C" void __ct__13daB_GND_HIO_cFv();
extern "C" static void anm_init__FP11b_gnd_classifUcf();
extern "C" static void h_anm_init__FP11b_gnd_classifUcf();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void h_nodeCallBack__FP8J3DJointi();
extern "C" static void daB_GND_Draw__FP11b_gnd_class();
extern "C" void __dt__4cXyzFv();
extern "C" static void shot_s_sub__FPvPv();
extern "C" static void gake_check__FP11b_gnd_class();
extern "C" static void saku_jump_check__FP11b_gnd_class();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" static void b_gnd_h_wait__FP11b_gnd_class();
extern "C" static void b_gnd_h_wait2__FP11b_gnd_class();
extern "C" static void b_gnd_h_run_a__FP11b_gnd_class();
extern "C" static void b_gnd_h_run_p__FP11b_gnd_class();
extern "C" static void b_gnd_h_jump__FP11b_gnd_class();
extern "C" static void b_gnd_h_end__FP11b_gnd_class();
extern "C" static void b_gnd_g_wait__FP11b_gnd_class();
extern "C" static void b_gnd_g_attack__FP11b_gnd_class();
extern "C" static void b_gnd_g_defence__FP11b_gnd_class();
extern "C" static void b_gnd_g_jump__FP11b_gnd_class();
extern "C" static void b_gnd_g_side__FP11b_gnd_class();
extern "C" static void b_gnd_g_tuba__FP11b_gnd_class();
extern "C" static void b_gnd_g_damage__FP11b_gnd_class();
extern "C" static void b_gnd_g_down__FP11b_gnd_class();
extern "C" static void b_gnd_g_end__FP11b_gnd_class();
extern "C" static void damage_check__FP11b_gnd_class();
extern "C" static void eff_set_h__FP11b_gnd_class();
extern "C" static void eff_set__FP11b_gnd_class();
extern "C" static void s_fkdel_sub__FPvPv();
extern "C" static void s_objgbdel_sub__FPvPv();
extern "C" static void h_damage_check__FP11b_gnd_class();
extern "C" static void action__FP11b_gnd_class();
extern "C" static void ball_bg_check__FP11b_gnd_classi();
extern "C" static void himo_control1__FP11b_gnd_classP4cXyziSc();
extern "C" static void himo_control2__FP11b_gnd_classP4cXyziSc();
extern "C" static void cam_3d_morf__FP11b_gnd_classf();
extern "C" static void cam_spd_set__FP11b_gnd_class();
extern "C" static void demo_camera__FP11b_gnd_class();
extern "C" static void anm_se_set__FP11b_gnd_class();
extern "C" static void daB_GND_Execute__FP11b_gnd_class();
extern "C" void multVecZero__14mDoMtx_stack_cFP3Vec();
extern "C" void setDownPos__13fopEn_enemy_cFPC4cXyz();
extern "C" void __as__5csXyzFRC5csXyz();
extern "C" static bool daB_GND_IsDelete__FP11b_gnd_class();
extern "C" static void daB_GND_Delete__FP11b_gnd_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daB_GND_Create__FP10fopAc_ac_c();
extern "C" void __ct__11b_gnd_classFv();
extern "C" void __ct__19mDoExt_3DlineMat1_cFv();
extern "C" void __dt__8g_himo_sFv();
extern "C" void __ct__8g_himo_sFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__16Z2SoundObjSimpleFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __ct__11J3DLightObjFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__13daB_GND_HIO_cFv();
extern "C" void __sinit_d_a_b_gnd_cpp();
extern "C" void func_806022F0();
extern "C" static void func_80602328();
extern "C" static void func_80602330();
extern "C" void cancelOriginalDemo__9daPy_py_cFv();
extern "C" void __ct__4cXyzFRC4cXyz();
extern "C" void getTrigA__8mDoCPd_cFUl();
extern "C" static void dComIfGp_particle_set__FUlUsPC4cXyzPC5csXyzPC4cXyz();
extern "C" void getAnmMtx__8J3DModelFi();
extern "C" static void dComIfGp_setHitMark__FUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" static void dComIfGp_setDoStatusForce__FUcUc();
extern "C" void __ct__4cXyzFfff();
extern "C" static void daPy_getPlayerActorClass__Fv();
extern "C" void setFrame__13mDoExt_morf_cFf();
extern "C" void isStop__13mDoExt_morf_cFv();
extern "C" static void dComIfGp_particle_set__FUsPC4cXyzPC5csXyzPC4cXyz();
extern "C" void changeDemoMode__9daPy_py_cFUliis();
extern "C" void changeOriginalDemo__9daPy_py_cFv();
extern "C" void changeDemoMode__9daHorse_cFUli();
extern "C" void set__4cXyzFfff();
extern "C" void __as__4cXyzFRC4cXyz();
extern "C" void changeOriginalDemo__9daHorse_cFv();
extern "C" static void dComIfGp_getCamera__Fi();
extern "C" static void dComIfGp_getPlayerCameraID__Fi();
extern "C" static void dComIfGp_getPlayer__Fi();
extern "C" extern char const* const d_a_b_gnd__stringBase0;

//
// External References:
//

extern "C" void fadeOut__13mDoGph_gInf_cFfR8_GXColor();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btpAnmFP16J3DMaterialTableP16J3DAnmTexPatterniifss();
extern "C" void entry__13mDoExt_btpAnmFP16J3DMaterialTables();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void init__19mDoExt_3DlineMat1_cFUsUsP7ResTIMGi();
extern "C" void update__19mDoExt_3DlineMat1_cFiR8_GXColorP12dKy_tevstr_c();
extern "C" void setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_getTalkEventPartner__FPC10fopAc_ac_c();
extern "C" void fopAcM_plAngleCheck__FPC10fopAc_ac_cs();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fopMsgM_messageSetDemo__FUl();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_onOneZoneSwitch__Fii();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onSwitch__12dSv_danBit_cFi();
extern "C" void isSwitch__12dSv_danBit_cCFi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void forceOnEventMove__Q213dPa_control_c7level_cFUl();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void addReal__21dDlst_shadowControl_cFUlP8J3DModel();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void cc_pl_cut_bit_get__Fv();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void checkMasterSwordEquip__9daPy_py_cFv();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_custom_colset__FUcUcf();
extern "C" void dKy_tevstr_init__FP12dKy_tevstr_cScUc();
extern "C" void dKy_pol_sound_get__FPC13cBgS_PolyInfo();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void cBgW_CheckBGround__Ff();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void MtxPush__Fv();
extern "C" void MtxPull__Fv();
extern "C" void deleteAllParticle__14JPABaseEmitterFv();
extern "C" void seMoveVolumeAll__7Z2SeMgrFfUl();
extern "C" void bgmStart__8Z2SeqMgrFUlUll();
extern "C" void bgmStop__8Z2SeqMgrFUll();
extern "C" void bgmStreamPrepare__8Z2SeqMgrFUl();
extern "C" void bgmStreamPlay__8Z2SeqMgrFv();
extern "C" void changeBgmStatus__8Z2SeqMgrFl();
extern "C" void setDemoName__11Z2StatusMgrFPc();
extern "C" void __dt__14Z2SoundObjBaseFv();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecP3VecUcUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __as__12J3DLightInfoFRC12J3DLightInfo();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_14();
extern "C" void _savegpr_20();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_14();
extern "C" void _restgpr_20();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__19mDoExt_3DlineMat1_c[5];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern void* __vt__16Z2SoundObjSimple[8];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u32 g_blackColor;
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" extern u8 pauseTimer__9dScnPly_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80602664-80602668 000000 0004+00 32/32 0/0 0/0 .rodata          @3815 */
SECTION_RODATA static f32 const lit_3815 = 1.0f;
COMPILER_STRIP_GATE(0x80602664, &lit_3815);

/* 80602668-8060266C 000004 0004+00 0/1 0/0 0/0 .rodata          @3816 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3816 = 57.0f;
COMPILER_STRIP_GATE(0x80602668, &lit_3816);
#pragma pop

/* 8060266C-80602670 000008 0004+00 0/1 0/0 0/0 .rodata          @3817 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3817 = 65.0f;
COMPILER_STRIP_GATE(0x8060266C, &lit_3817);
#pragma pop

/* 80602670-80602674 00000C 0004+00 0/1 0/0 0/0 .rodata          @3818 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3818 = 76.0f;
COMPILER_STRIP_GATE(0x80602670, &lit_3818);
#pragma pop

/* 80602674-80602678 000010 0004+00 0/3 0/0 0/0 .rodata          @3819 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3819 = 40.0f;
COMPILER_STRIP_GATE(0x80602674, &lit_3819);
#pragma pop

/* 806029D0-806029DC 000000 000C+00 2/2 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 806029DC-806029F0 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 806029F0-806029F4 000020 0004+00 1/1 0/0 0/0 .data            l_color$3983 */
SECTION_DATA static u8 l_color[4] = {
    0x14,
    0x0F,
    0x00,
    0xFF,
};

/* 806029F4-80602A04 000024 0010+00 1/1 0/0 0/0 .data            chk_x$4163 */
SECTION_DATA static u8 chk_x[16] = {
    0x46, 0x5D, 0x5C, 0x00, 0x47, 0x07, 0xD7, 0x00, 0xC6, 0xBC, 0xC8, 0x00, 0xC6, 0x35, 0xAC, 0x00,
};

/* 80602A04-80602A14 000034 0010+00 1/1 0/0 0/0 .data            chk_z$4164 */
SECTION_DATA static u8 chk_z[16] = {
    0x46, 0xAA, 0x1E, 0x00, 0xC6, 0x80, 0xA6, 0x00, 0x46, 0x18, 0x4C, 0x00, 0x46, 0xB0, 0x92, 0x00,
};

/* 80602A14-80602A6C -00001 0058+00 1/1 0/0 0/0 .data            @4975 */
SECTION_DATA static void* lit_4975[22] = {
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x10C),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x10C),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x3E4),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x45C),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x48C),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x4E8),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x548),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x5D8),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x624),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x6A8),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x6E0),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x724),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x768),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x874),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x874),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x874),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x874),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x874),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x874),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x874),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x7AC),
    (void*)(((char*)b_gnd_h_run_a__FP11b_gnd_class) + 0x80C),
};

/* 80602A6C-80602A88 -00001 001C+00 1/1 0/0 0/0 .data            @5308 */
SECTION_DATA static void* lit_5308[7] = {
    (void*)(((char*)b_gnd_g_wait__FP11b_gnd_class) + 0xE8),
    (void*)(((char*)b_gnd_g_wait__FP11b_gnd_class) + 0x128),
    (void*)(((char*)b_gnd_g_wait__FP11b_gnd_class) + 0x1D4),
    (void*)(((char*)b_gnd_g_wait__FP11b_gnd_class) + 0x2F0),
    (void*)(((char*)b_gnd_g_wait__FP11b_gnd_class) + 0x3A4),
    (void*)(((char*)b_gnd_g_wait__FP11b_gnd_class) + 0x32C),
    (void*)(((char*)b_gnd_g_wait__FP11b_gnd_class) + 0x384),
};

/* 80602A88-80602AD4 -00001 004C+00 1/1 0/0 0/0 .data            @5543 */
SECTION_DATA static void* lit_5543[19] = {
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0xA0),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0xC4),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x174),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x198),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x240),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x264),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x2F0),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x314),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x3DC),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x400),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x4A0),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x4CC),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x544),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x5F0),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x8B0),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x728),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x75C),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x7B4),
    (void*)(((char*)b_gnd_g_attack__FP11b_gnd_class) + 0x84C),
};

/* 80602AD4-80602ADC 000104 0006+02 1/1 0/0 0/0 .data            w_eff_name$6034 */
SECTION_DATA static u8 w_eff_name[6 + 2 /* padding */] = {
    0x82,
    0x5B,
    0x82,
    0x5C,
    0x82,
    0x5D,
    /* padding */
    0x00,
    0x00,
};

/* 80602ADC-80602AE4 00010C 0006+02 0/0 0/0 0/0 .data            w_eff_name2$6035 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 w_eff_name2[6 + 2 /* padding */] = {
    0x82,
    0x58,
    0x82,
    0x59,
    0x82,
    0x5A,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 80602AE4-80602AEC 000114 0006+02 1/1 0/0 0/0 .data            e_name$6046 */
SECTION_DATA static u8 e_name_6046[6 + 2 /* padding */] = {
    0x8B,
    0x95,
    0x8B,
    0x96,
    0x8B,
    0x97,
    /* padding */
    0x00,
    0x00,
};

/* 80602AEC-80602B48 -00001 005C+00 1/1 0/0 0/0 .data            @6511 */
SECTION_DATA static void* lit_6511[23] = {
    (void*)(((char*)action__FP11b_gnd_class) + 0x1A4),
    (void*)(((char*)action__FP11b_gnd_class) + 0xA8),
    (void*)(((char*)action__FP11b_gnd_class) + 0xB4),
    (void*)(((char*)action__FP11b_gnd_class) + 0xC0),
    (void*)(((char*)action__FP11b_gnd_class) + 0xD0),
    (void*)(((char*)action__FP11b_gnd_class) + 0xE0),
    (void*)(((char*)action__FP11b_gnd_class) + 0xEC),
    (void*)(((char*)action__FP11b_gnd_class) + 0x1A4),
    (void*)(((char*)action__FP11b_gnd_class) + 0x1A4),
    (void*)(((char*)action__FP11b_gnd_class) + 0x1A4),
    (void*)(((char*)action__FP11b_gnd_class) + 0x108),
    (void*)(((char*)action__FP11b_gnd_class) + 0x118),
    (void*)(((char*)action__FP11b_gnd_class) + 0x128),
    (void*)(((char*)action__FP11b_gnd_class) + 0x134),
    (void*)(((char*)action__FP11b_gnd_class) + 0x148),
    (void*)(((char*)action__FP11b_gnd_class) + 0x1A4),
    (void*)(((char*)action__FP11b_gnd_class) + 0x1A4),
    (void*)(((char*)action__FP11b_gnd_class) + 0x1A4),
    (void*)(((char*)action__FP11b_gnd_class) + 0x1A4),
    (void*)(((char*)action__FP11b_gnd_class) + 0x158),
    (void*)(((char*)action__FP11b_gnd_class) + 0x164),
    (void*)(((char*)action__FP11b_gnd_class) + 0x178),
    (void*)(((char*)action__FP11b_gnd_class) + 0x190),
};

/* 80602B48-80602B4C 000178 0004+00 1/1 0/0 0/0 .data            e_name$6757 */
SECTION_DATA static u8 e_name_6757[4] = {
    0x8B,
    0x9B,
    0x8B,
    0x9C,
};

/* 80602B4C-80602B50 00017C 0004+00 1/1 0/0 0/0 .data            e_name$6846 */
SECTION_DATA static u8 e_name_6846[4] = {
    0x8B,
    0x98,
    0x8B,
    0x99,
};

/* 80602B50-80602CD4 -00001 0184+00 1/1 0/0 0/0 .data            @7290 */
SECTION_DATA static void* lit_7290[97] = {
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0xA4),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x19C),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x19C),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x19C),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x3E8),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x518),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x660),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x6EC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x86C),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x994),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0xBAC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0xC80),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0xD7C),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0xF04),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0xFB0),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x1668),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x171C),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x1824),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x18D8),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x1A00),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x1B28),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x1C20),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x1CA0),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x1D84),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x1ED8),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x1F68),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x1FCC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21DC),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x2088),
    (void*)(((char*)demo_camera__FP11b_gnd_class) + 0x21A8),
};

/* 80602CD4-80602CE4 000304 0010+00 0/1 0/0 0/0 .data            footJ$7816 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 footJ[16] = {
    0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x22,
};
#pragma pop

/* 80602CE4-80602CF0 000314 000C+00 0/1 0/0 0/0 .data            b_id$7902 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 b_id[12] = {
    0x8A, 0x37, 0x8A, 0x38, 0x8A, 0x39, 0x8A, 0x3A, 0x8A, 0x3B, 0x8C, 0x24,
};
#pragma pop

/* 80602CF0-80602CFC 000320 000A+02 0/1 0/0 0/0 .data            b_id2$7903 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 b_id2[10 + 2 /* padding */] = {
    0x8A,
    0x3D,
    0x8A,
    0x3E,
    0x8A,
    0x3F,
    0x8A,
    0x40,
    0x8A,
    0x41,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 80602CFC-80602D10 00032C 0014+00 0/1 0/0 0/0 .data            bun_xs$7913 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 bun_xs[20] = {
    0xC3, 0x16, 0x00, 0x00, 0xC2, 0x96, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x42, 0x96, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00,
};
#pragma pop

/* 80602D10-80602D28 000340 0018+00 1/1 0/0 0/0 .data            btk_d$8802 */
SECTION_DATA static u8 btk_d[24] = {
    0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x73,
    0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x72,
};

/* 80602D28-80602D68 000358 0040+00 0/1 0/0 0/0 .data            h_cc_sph_src$9127 */
#pragma push
#pragma force_active on
static dCcD_SrcSph h_cc_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x2, 0x1f}, {0x4006020, 0x3}, 0x75}}, // mObj
        {dCcD_SE_HARD_BODY, 0x0, 0x7, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 80602D68-80602DA8 000398 0040+00 0/1 0/0 0/0 .data            cc_sph_src$9128 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 cc_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 80602DA8-80602DE8 0003D8 0040+00 0/1 0/0 0/0 .data            at_sph_src$9129 */
#pragma push
#pragma force_active on
static dCcD_SrcSph at_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x2, 0x1f}, {0x0, 0x0}, 0x0}}, // mObj
        {dCcD_SE_HARD_BODY, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 35.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 80602DE8-80602E28 000418 0040+00 0/1 0/0 0/0 .data            def_sph_src$9130 */
#pragma push
#pragma force_active on
static dCcD_SrcSph def_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xdcfbfdfd, 0x3}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_METAL, 0x5, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 100.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 80602E28-80602E6C 000458 0044+00 0/1 0/0 0/0 .data            co_cyl_src$9131 */
#pragma push
#pragma force_active on
static dCcD_SrcCyl co_cyl_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x0, 0x0}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        100.0f, // mRadius
        200.0f // mHeight
    } // mCyl
};
#pragma pop

/* 80602E6C-80602E8C -00001 0020+00 1/0 0/0 0/0 .data            l_daB_GND_Method */
static actor_method_class l_daB_GND_Method = {
    (process_method_func)daB_GND_Create__FP10fopAc_ac_c,
    (process_method_func)daB_GND_Delete__FP11b_gnd_class,
    (process_method_func)daB_GND_Execute__FP11b_gnd_class,
    (process_method_func)daB_GND_IsDelete__FP11b_gnd_class,
    (process_method_func)daB_GND_Draw__FP11b_gnd_class,
};

/* 80602E8C-80602EBC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_GND */
extern actor_process_profile_definition g_profile_B_GND = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_B_GND,             // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(b_gnd_class),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  214,                    // mPriority
  &l_daB_GND_Method,      // sub_method
  0x00044000,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80602EBC-80602EC8 0004EC 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80602EC8-80602ED4 0004F8 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80602ED4-80602EE0 000504 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80602EE0-80602EF4 000510 0014+00 2/2 0/0 0/0 .data            __vt__18mDoExt_3DlineMat_c */
SECTION_DATA extern void* __vt__18mDoExt_3DlineMat_c[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 80602EF4-80602F00 000524 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80602F00-80602F0C 000530 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80602F0C-80602F18 00053C 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80602F18-80602F3C 000548 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80602330,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80602328,
};

/* 80602F3C-80602F48 00056C 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80602F48-80602F54 000578 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80602F54-80602F60 000584 000C+00 2/2 0/0 0/0 .data            __vt__13daB_GND_HIO_c */
SECTION_DATA extern void* __vt__13daB_GND_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13daB_GND_HIO_cFv,
};

/* 805F4A4C-805F4A94 0000EC 0048+00 1/1 0/0 0/0 .text            __ct__13daB_GND_HIO_cFv */
daB_GND_HIO_c::daB_GND_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80602678-8060267C 000014 0004+00 4/28 0/0 0/0 .rodata          @3835 */
SECTION_RODATA static u8 const lit_3835[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80602678, &lit_3835);

/* 8060267C-80602680 000018 0004+00 2/5 0/0 0/0 .rodata          @3836 */
SECTION_RODATA static f32 const lit_3836 = -1.0f;
COMPILER_STRIP_GATE(0x8060267C, &lit_3836);

/* 806029AC-806029AC 000348 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_806029AC = "B_gnd";
#pragma pop

/* 805F4A94-805F4B48 000134 00B4+00 15/15 0/0 0/0 .text            anm_init__FP11b_gnd_classifUcf */
static void anm_init(b_gnd_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806029AC-806029AC 000348 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_806029B2 = "B_hg";
#pragma pop

/* 805F4B48-805F4C00 0001E8 00B8+00 7/7 0/0 0/0 .text            h_anm_init__FP11b_gnd_classifUcf */
static void h_anm_init(b_gnd_class* param_0, int param_1, f32 param_2, u8 param_3,
                           f32 param_4) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80602680-80602684 00001C 0004+00 1/1 0/0 0/0 .rodata          @3902 */
SECTION_RODATA static f32 const lit_3902 = 0.75f;
COMPILER_STRIP_GATE(0x80602680, &lit_3902);

/* 80602684-8060268C 000020 0008+00 2/4 0/0 0/0 .rodata          @3904 */
SECTION_RODATA static u8 const lit_3904[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80602684, &lit_3904);

/* 805F4C00-805F4DCC 0002A0 01CC+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
static void nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* 805F4DCC-805F4F38 00046C 016C+00 1/1 0/0 0/0 .text            h_nodeCallBack__FP8J3DJointi */
static void h_nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8060268C-80602690 000028 0004+00 0/5 0/0 0/0 .rodata          @4102 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4102 = 100.0f;
COMPILER_STRIP_GATE(0x8060268C, &lit_4102);
#pragma pop

/* 80602690-80602694 00002C 0004+00 0/3 0/0 0/0 .rodata          @4103 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4103 = 3000.0f;
COMPILER_STRIP_GATE(0x80602690, &lit_4103);
#pragma pop

/* 805F4F38-805F53A4 0005D8 046C+00 1/0 0/0 0/0 .text            daB_GND_Draw__FP11b_gnd_class */
static void daB_GND_Draw(b_gnd_class* param_0) {
    // NONMATCHING
}

/* 805F53A4-805F53E0 000A44 003C+00 6/6 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80602694-8060269C 000030 0008+00 0/3 0/0 0/0 .rodata          @4154 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4154[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80602694, &lit_4154);
#pragma pop

/* 8060269C-806026A4 000038 0008+00 0/3 0/0 0/0 .rodata          @4155 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4155[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8060269C, &lit_4155);
#pragma pop

/* 806026A4-806026AC 000040 0008+00 0/3 0/0 0/0 .rodata          @4156 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4156[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x806026A4, &lit_4156);
#pragma pop

/* 806026AC-806026B0 000048 0004+00 0/4 0/0 0/0 .rodata          @4157 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4157 = 1000.0f;
COMPILER_STRIP_GATE(0x806026AC, &lit_4157);
#pragma pop

/* 805F53E0-805F5574 000A80 0194+00 1/1 0/0 0/0 .text            shot_s_sub__FPvPv */
static void shot_s_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806026B0-806026B4 00004C 0004+00 0/1 0/0 0/0 .rodata          @4312 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4312 = -5000.0f;
COMPILER_STRIP_GATE(0x806026B0, &lit_4312);
#pragma pop

/* 806026B4-806026B8 000050 0004+00 0/2 0/0 0/0 .rodata          @4313 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4313 = 6000.0f;
COMPILER_STRIP_GATE(0x806026B4, &lit_4313);
#pragma pop

/* 806026B8-806026BC 000054 0004+00 0/6 0/0 0/0 .rodata          @4314 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4314 = 200.0f;
COMPILER_STRIP_GATE(0x806026B8, &lit_4314);
#pragma pop

/* 806026BC-806026C0 000058 0004+00 0/2 0/0 0/0 .rodata          @4315 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4315 = 2000.0f;
COMPILER_STRIP_GATE(0x806026BC, &lit_4315);
#pragma pop

/* 806026C0-806026C4 00005C 0004+00 0/2 0/0 0/0 .rodata          @4316 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4316 = 250.0f;
COMPILER_STRIP_GATE(0x806026C0, &lit_4316);
#pragma pop

/* 806026C4-806026C8 000060 0004+00 0/4 0/0 0/0 .rodata          @4317 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4317 = 500.0f;
COMPILER_STRIP_GATE(0x806026C4, &lit_4317);
#pragma pop

/* 806026C8-806026CC 000064 0004+00 0/1 0/0 0/0 .rodata          @4318 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4318 = -10000.0f;
COMPILER_STRIP_GATE(0x806026C8, &lit_4318);
#pragma pop

/* 806026CC-806026D0 000068 0004+00 0/1 0/0 0/0 .rodata          @4319 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4319 = 700.0f;
COMPILER_STRIP_GATE(0x806026CC, &lit_4319);
#pragma pop

/* 806026D0-806026D4 00006C 0004+00 0/1 0/0 0/0 .rodata          @4320 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4320 = -700.0f;
COMPILER_STRIP_GATE(0x806026D0, &lit_4320);
#pragma pop

/* 806026D4-806026D8 000070 0004+00 0/1 0/0 0/0 .rodata          @4321 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4321 = 2500.0f;
COMPILER_STRIP_GATE(0x806026D4, &lit_4321);
#pragma pop

/* 80602F68-80602F6C 000008 0001+03 3/3 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80602F6C-80602F70 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80602F70-80602F74 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80602F74-80602F78 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80602F78-80602F7C 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80602F7C-80602F80 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80602F80-80602F84 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80602F84-80602F88 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80602F88-80602F8C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80602F8C-80602F90 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80602F90-80602F94 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80602F94-80602F98 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80602F98-80602F9C 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80602F9C-80602FA0 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80602FA0-80602FA4 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80602FA4-80602FA8 -00001 0004+00 1/2 0/0 0/0 .bss             None */
/* 80602FA4 0001+00 data_80602FA4 @1009 */
/* 80602FA5 0003+00 data_80602FA5 None */
static u8 struct_80602FA4[4];

/* 80602FA8-80602FB4 000048 000C+00 0/1 0/0 0/0 .bss             @3810 */
#pragma push
#pragma force_active on
static u8 lit_3810[12];
#pragma pop

/* 80602FB4-80602FD0 000054 001C+00 3/5 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[28];

/* 80602FD0-80602FE0 000070 000C+04 0/1 0/0 0/0 .bss             @4187 */
#pragma push
#pragma force_active on
static u8 lit_4187[12 + 4 /* padding */];
#pragma pop

/* 80602FE0-80602FEC 000080 000C+00 0/1 0/0 0/0 .bss             k_pos$4186 */
#pragma push
#pragma force_active on
static u8 k_pos[12];
#pragma pop

/* 805F5574-805F5BE8 000C14 0674+00 1/1 0/0 0/0 .text            gake_check__FP11b_gnd_class */
static void gake_check(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806026D8-806026DC 000074 0004+00 0/12 0/0 0/0 .rodata          @4436 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4436 = 10.0f;
COMPILER_STRIP_GATE(0x806026D8, &lit_4436);
#pragma pop

/* 806026DC-806026E0 000078 0004+00 0/4 0/0 0/0 .rodata          @4437 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4437 = 150.0f;
COMPILER_STRIP_GATE(0x806026DC, &lit_4437);
#pragma pop

/* 806026E0-806026E4 00007C 0004+00 0/1 0/0 0/0 .rodata          @4438 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4438 = 900.0f;
COMPILER_STRIP_GATE(0x806026E0, &lit_4438);
#pragma pop

/* 806026E4-806026E8 000080 0004+00 0/1 0/0 0/0 .rodata          @4439 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4439 = 350.0f;
COMPILER_STRIP_GATE(0x806026E4, &lit_4439);
#pragma pop

/* 805F5BE8-805F5EF4 001288 030C+00 1/1 0/0 0/0 .text            saku_jump_check__FP11b_gnd_class */
static void saku_jump_check(b_gnd_class* param_0) {
    // NONMATCHING
}

/* 805F5EF4-805F5F3C 001594 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
// cM3dGPla::~cM3dGPla() {
extern "C" void __dt__8cM3dGPlaFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806026E8-806026EC 000084 0004+00 2/13 0/0 0/0 .rodata          @4460 */
SECTION_RODATA static f32 const lit_4460 = 2.0f;
COMPILER_STRIP_GATE(0x806026E8, &lit_4460);

/* 805F5F3C-805F6068 0015DC 012C+00 1/1 0/0 0/0 .text            b_gnd_h_wait__FP11b_gnd_class */
static void b_gnd_h_wait(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806026EC-806026F0 000088 0004+00 0/5 0/0 0/0 .rodata          @4503 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4503 = 0.5f;
COMPILER_STRIP_GATE(0x806026EC, &lit_4503);
#pragma pop

/* 806026F0-806026F4 00008C 0004+00 0/11 0/0 0/0 .rodata          @4504 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4504 = 3.0f;
COMPILER_STRIP_GATE(0x806026F0, &lit_4504);
#pragma pop

/* 806026F4-806026F8 000090 0004+00 0/1 0/0 0/0 .rodata          @4505 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4505 = 4000.0f;
COMPILER_STRIP_GATE(0x806026F4, &lit_4505);
#pragma pop

/* 806026F8-806026FC 000094 0004+00 0/1 0/0 0/0 .rodata          @4506 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4506 = 7500.0f;
COMPILER_STRIP_GATE(0x806026F8, &lit_4506);
#pragma pop

/* 805F6068-805F6290 001708 0228+00 1/1 0/0 0/0 .text            b_gnd_h_wait2__FP11b_gnd_class */
static void b_gnd_h_wait2(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806026FC-80602700 000098 0004+00 0/7 0/0 0/0 .rodata          @4960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4960 = 30.0f;
COMPILER_STRIP_GATE(0x806026FC, &lit_4960);
#pragma pop

/* 80602700-80602704 00009C 0004+00 0/6 0/0 0/0 .rodata          @4961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4961 = 5.0f;
COMPILER_STRIP_GATE(0x80602700, &lit_4961);
#pragma pop

/* 80602704-80602708 0000A0 0004+00 0/2 0/0 0/0 .rodata          @4962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4962 = 5000.0f;
COMPILER_STRIP_GATE(0x80602704, &lit_4962);
#pragma pop

/* 80602FEC-80602FF8 00008C 000C+00 0/1 0/0 0/0 .bss             @4509 */
#pragma push
#pragma force_active on
static u8 lit_4509[12];
#pragma pop

/* 80602FF8-8060305C 000098 0060+04 2/4 0/0 0/0 .bss             b_path */
static u8 b_path[96 + 4 /* padding */];

/* 805F6290-805F6FA4 001930 0D14+00 2/1 0/0 0/0 .text            b_gnd_h_run_a__FP11b_gnd_class */
static void b_gnd_h_run_a(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80602708-8060270C 0000A4 0004+00 0/5 0/0 0/0 .rodata          @4963 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4963 = 15.0f;
COMPILER_STRIP_GATE(0x80602708, &lit_4963);
#pragma pop

/* 8060270C-80602710 0000A8 0004+00 0/2 0/0 0/0 .rodata          @4964 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4964 = 800.0f;
COMPILER_STRIP_GATE(0x8060270C, &lit_4964);
#pragma pop

/* 80602710-80602714 0000AC 0004+00 0/0 0/0 0/0 .rodata          @4965 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4965 = 7000.0f;
COMPILER_STRIP_GATE(0x80602710, &lit_4965);
#pragma pop

/* 80602714-80602718 0000B0 0004+00 0/2 0/0 0/0 .rodata          @4966 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4966 = 300.0f;
COMPILER_STRIP_GATE(0x80602714, &lit_4966);
#pragma pop

/* 80602718-8060271C 0000B4 0004+00 0/2 0/0 0/0 .rodata          @4967 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4967 = 600.0f;
COMPILER_STRIP_GATE(0x80602718, &lit_4967);
#pragma pop

/* 8060271C-80602720 0000B8 0004+00 0/3 0/0 0/0 .rodata          @4968 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4968 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x8060271C, &lit_4968);
#pragma pop

/* 80602720-80602724 0000BC 0004+00 1/5 0/0 0/0 .rodata          @4969 */
SECTION_RODATA static f32 const lit_4969 = 2.5f;
COMPILER_STRIP_GATE(0x80602720, &lit_4969);

/* 80602724-80602728 0000C0 0004+00 0/2 0/0 0/0 .rodata          @4970 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4970 = 13.0f / 10.0f;
COMPILER_STRIP_GATE(0x80602724, &lit_4970);
#pragma pop

/* 80602728-8060272C 0000C4 0004+00 0/4 0/0 0/0 .rodata          @4971 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4971 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80602728, &lit_4971);
#pragma pop

/* 8060272C-80602730 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4972 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4972 = 12000.0f;
COMPILER_STRIP_GATE(0x8060272C, &lit_4972);
#pragma pop

/* 80602730-80602734 0000CC 0004+00 0/0 0/0 0/0 .rodata          @4973 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4973 = -2989.0f;
COMPILER_STRIP_GATE(0x80602730, &lit_4973);
#pragma pop

/* 80602734-80602738 0000D0 0004+00 0/0 0/0 0/0 .rodata          @4974 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4974 = 1364.0f;
COMPILER_STRIP_GATE(0x80602734, &lit_4974);
#pragma pop

/* 80602738-8060273C 0000D4 0004+00 0/3 0/0 0/0 .rodata          @5101 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5101 = 400.0f;
COMPILER_STRIP_GATE(0x80602738, &lit_5101);
#pragma pop

/* 8060273C-80602740 0000D8 0004+00 0/1 0/0 0/0 .rodata          @5102 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5102 = 1700.0f;
COMPILER_STRIP_GATE(0x8060273C, &lit_5102);
#pragma pop

/* 80602740-80602744 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5103 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5103 = 550.0f;
COMPILER_STRIP_GATE(0x80602740, &lit_5103);
#pragma pop

/* 80602744-80602748 0000E0 0004+00 0/2 0/0 0/0 .rodata          @5104 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5104 = -200.0f;
COMPILER_STRIP_GATE(0x80602744, &lit_5104);
#pragma pop

/* 80602748-8060274C 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5105 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5105 = 7.0f / 5.0f;
COMPILER_STRIP_GATE(0x80602748, &lit_5105);
#pragma pop

/* 805F6FA4-805F74F4 002644 0550+00 1/1 0/0 0/0 .text            b_gnd_h_run_p__FP11b_gnd_class */
static void b_gnd_h_run_p(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8060274C-80602750 0000E8 0004+00 0/4 0/0 0/0 .rodata          @5137 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5137 = 55.0f;
COMPILER_STRIP_GATE(0x8060274C, &lit_5137);
#pragma pop

/* 80602750-80602754 0000EC 0004+00 0/3 0/0 0/0 .rodata          @5138 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5138 = 1.5f;
COMPILER_STRIP_GATE(0x80602750, &lit_5138);
#pragma pop

/* 805F74F4-805F76C4 002B94 01D0+00 1/1 0/0 0/0 .text            b_gnd_h_jump__FP11b_gnd_class */
static void b_gnd_h_jump(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80602754-80602758 0000F0 0004+00 0/6 0/0 0/0 .rodata          @5206 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5206 = 50.0f;
COMPILER_STRIP_GATE(0x80602754, &lit_5206);
#pragma pop

/* 80602758-8060275C 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5207 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5207 = 12.0f / 5.0f;
COMPILER_STRIP_GATE(0x80602758, &lit_5207);
#pragma pop

/* 8060275C-80602760 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5208 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5208 = 701.0f;
COMPILER_STRIP_GATE(0x8060275C, &lit_5208);
#pragma pop

/* 80602760-80602764 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5209 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5209 = -5920.0f;
COMPILER_STRIP_GATE(0x80602760, &lit_5209);
#pragma pop

/* 80602764-80602768 000100 0004+00 0/3 0/0 0/0 .rodata          @5210 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5210 = 4.0f;
COMPILER_STRIP_GATE(0x80602764, &lit_5210);
#pragma pop

/* 80602768-8060276C 000104 0004+00 0/2 0/0 0/0 .rodata          @5211 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5211 = 14.0f;
COMPILER_STRIP_GATE(0x80602768, &lit_5211);
#pragma pop

/* 805F76C4-805F7A10 002D64 034C+00 1/1 0/0 0/0 .text            b_gnd_h_end__FP11b_gnd_class */
static void b_gnd_h_end(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8060276C-80602770 000108 0004+00 0/1 0/0 0/0 .rodata          @5305 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5305 = 43.0f / 10.0f;
COMPILER_STRIP_GATE(0x8060276C, &lit_5305);
#pragma pop

/* 80602770-80602774 00010C 0004+00 0/2 0/0 0/0 .rodata          @5306 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5306 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80602770, &lit_5306);
#pragma pop

/* 805F7A10-805F7E88 0030B0 0478+00 2/1 0/0 0/0 .text            b_gnd_g_wait__FP11b_gnd_class */
static void b_gnd_g_wait(b_gnd_class* param_0) {
    // NONMATCHING
}

/* 805F7E88-805F878C 003528 0904+00 2/1 0/0 0/0 .text            b_gnd_g_attack__FP11b_gnd_class */
static void b_gnd_g_attack(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80602774-80602778 000110 0004+00 0/0 0/0 0/0 .rodata          @5307 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5307 = 650.0f;
COMPILER_STRIP_GATE(0x80602774, &lit_5307);
#pragma pop

/* 80602778-8060277C 000114 0004+00 0/0 0/0 0/0 .rodata          @5536 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5536 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x80602778, &lit_5536);
#pragma pop

/* 8060277C-80602780 000118 0004+00 0/0 0/0 0/0 .rodata          @5537 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5537 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x8060277C, &lit_5537);
#pragma pop

/* 80602780-80602784 00011C 0004+00 0/0 0/0 0/0 .rodata          @5538 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5538 = 0x40551EB8;
COMPILER_STRIP_GATE(0x80602780, &lit_5538);
#pragma pop

/* 80602784-80602788 000120 0004+00 0/0 0/0 0/0 .rodata          @5539 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5539 = 450.0f;
COMPILER_STRIP_GATE(0x80602784, &lit_5539);
#pragma pop

/* 80602788-8060278C 000124 0004+00 0/1 0/0 0/0 .rodata          @5540 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5540 = 60.0f;
COMPILER_STRIP_GATE(0x80602788, &lit_5540);
#pragma pop

/* 8060278C-80602790 000128 0004+00 0/4 0/0 0/0 .rodata          @5541 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5541 = 20.0f;
COMPILER_STRIP_GATE(0x8060278C, &lit_5541);
#pragma pop

/* 80602790-80602794 00012C 0004+00 0/1 0/0 0/0 .rodata          @5634 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5634 = 7.0f / 20.0f;
COMPILER_STRIP_GATE(0x80602790, &lit_5634);
#pragma pop

/* 80602794-80602798 000130 0004+00 0/3 0/0 0/0 .rodata          @5635 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5635 = 25.0f;
COMPILER_STRIP_GATE(0x80602794, &lit_5635);
#pragma pop

/* 805F878C-805F8C20 003E2C 0494+00 1/1 0/0 0/0 .text            b_gnd_g_defence__FP11b_gnd_class */
static void b_gnd_g_defence(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80602798-8060279C 000134 0004+00 0/2 0/0 0/0 .rodata          @5702 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5702 = 70.0f;
COMPILER_STRIP_GATE(0x80602798, &lit_5702);
#pragma pop

/* 805F8C20-805F8F88 0042C0 0368+00 1/1 0/0 0/0 .text            b_gnd_g_jump__FP11b_gnd_class */
static void b_gnd_g_jump(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8060279C-806027A0 000138 0004+00 0/1 0/0 0/0 .rodata          @5751 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5751 = 6.0f;
COMPILER_STRIP_GATE(0x8060279C, &lit_5751);
#pragma pop

/* 805F8F88-805F9220 004628 0298+00 1/1 0/0 0/0 .text            b_gnd_g_side__FP11b_gnd_class */
static void b_gnd_g_side(b_gnd_class* param_0) {
    // NONMATCHING
}

/* 805F9220-805F92FC 0048C0 00DC+00 1/1 0/0 0/0 .text            b_gnd_g_tuba__FP11b_gnd_class */
static void b_gnd_g_tuba(b_gnd_class* param_0) {
    // NONMATCHING
}

/* 805F92FC-805F94A8 00499C 01AC+00 1/1 0/0 0/0 .text            b_gnd_g_damage__FP11b_gnd_class */
static void b_gnd_g_damage(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806027A0-806027A4 00013C 0004+00 0/1 0/0 0/0 .rodata          @5894 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5894 = 35.0f;
COMPILER_STRIP_GATE(0x806027A0, &lit_5894);
#pragma pop

/* 806027A4-806027A8 000140 0004+00 0/1 0/0 0/0 .rodata          @5895 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5895 = 9.0f;
COMPILER_STRIP_GATE(0x806027A4, &lit_5895);
#pragma pop

/* 805F94A8-805F98A0 004B48 03F8+00 1/1 0/0 0/0 .text            b_gnd_g_down__FP11b_gnd_class */
static void b_gnd_g_down(b_gnd_class* param_0) {
    // NONMATCHING
}

/* 805F98A0-805F98F8 004F40 0058+00 1/1 0/0 0/0 .text            b_gnd_g_end__FP11b_gnd_class */
static void b_gnd_g_end(b_gnd_class* param_0) {
    // NONMATCHING
}

/* 805F98F8-805F9BE4 004F98 02EC+00 1/1 0/0 0/0 .text            damage_check__FP11b_gnd_class */
static void damage_check(b_gnd_class* param_0) {
    // NONMATCHING
}

/* 805F9BE4-805FA2FC 005284 0718+00 1/1 0/0 0/0 .text            eff_set_h__FP11b_gnd_class */
static void eff_set_h(b_gnd_class* param_0) {
    // NONMATCHING
}

/* 805FA2FC-805FA3E4 00599C 00E8+00 1/1 0/0 0/0 .text            eff_set__FP11b_gnd_class */
static void eff_set(b_gnd_class* param_0) {
    // NONMATCHING
}

/* 805FA3E4-805FA430 005A84 004C+00 2/2 0/0 0/0 .text            s_fkdel_sub__FPvPv */
static void s_fkdel_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 805FA430-805FA47C 005AD0 004C+00 1/1 0/0 0/0 .text            s_objgbdel_sub__FPvPv */
static void s_objgbdel_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 805FA47C-805FA758 005B1C 02DC+00 1/1 0/0 0/0 .text            h_damage_check__FP11b_gnd_class */
static void h_damage_check(b_gnd_class* param_0) {
    // NONMATCHING
}

/* 805FA758-805FAFF0 005DF8 0898+00 2/1 0/0 0/0 .text            action__FP11b_gnd_class */
static void action(b_gnd_class* param_0) {
    // NONMATCHING
}

/* 805FAFF0-805FB0F0 006690 0100+00 1/1 0/0 0/0 .text            ball_bg_check__FP11b_gnd_classi */
static void ball_bg_check(b_gnd_class* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806027A8-806027AC 000144 0004+00 0/0 0/0 0/0 .rodata          @6508 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6508 = 380.0f;
COMPILER_STRIP_GATE(0x806027A8, &lit_6508);
#pragma pop

/* 806027AC-806027B0 000148 0004+00 0/0 0/0 0/0 .rodata          @6509 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6509 = -450.0f;
COMPILER_STRIP_GATE(0x806027AC, &lit_6509);
#pragma pop

/* 806027B0-806027B4 00014C 0004+00 0/2 0/0 0/0 .rodata          @6510 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6510 = 7.0f;
COMPILER_STRIP_GATE(0x806027B0, &lit_6510);
#pragma pop

/* 806027B4-806027B8 000150 0004+00 0/1 0/0 0/0 .rodata          @6631 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6631 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x806027B4, &lit_6631);
#pragma pop

/* 805FB0F0-805FB414 006790 0324+00 1/1 0/0 0/0 .text himo_control1__FP11b_gnd_classP4cXyziSc */
static void himo_control1(b_gnd_class* param_0, cXyz* param_1, int param_2, s8 param_3) {
    // NONMATCHING
}

/* 805FB414-805FB620 006AB4 020C+00 1/1 0/0 0/0 .text himo_control2__FP11b_gnd_classP4cXyziSc */
static void himo_control2(b_gnd_class* param_0, cXyz* param_1, int param_2, s8 param_3) {
    // NONMATCHING
}

/* 805FB620-805FB704 006CC0 00E4+00 1/1 0/0 0/0 .text            cam_3d_morf__FP11b_gnd_classf */
static void cam_3d_morf(b_gnd_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* 805FB704-805FB7A4 006DA4 00A0+00 1/1 0/0 0/0 .text            cam_spd_set__FP11b_gnd_class */
static void cam_spd_set(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806029AC-806029AC 000348 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_806029B7 = "force_start";
SECTION_DEAD static char const* const stringBase_806029C3 = "force_end";
#pragma pop

/* 805FB7A4-805FDAE0 006E44 233C+00 2/1 0/0 0/0 .text            demo_camera__FP11b_gnd_class */
static void demo_camera(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806027B8-806027BC 000154 0004+00 0/0 0/0 0/0 .rodata          @7202 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7202 = -500.0f;
COMPILER_STRIP_GATE(0x806027B8, &lit_7202);
#pragma pop

/* 806027BC-806027C0 000158 0004+00 0/0 0/0 0/0 .rodata          @7203 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7203 = -300.0f;
COMPILER_STRIP_GATE(0x806027BC, &lit_7203);
#pragma pop

/* 806027C0-806027C4 00015C 0004+00 0/0 0/0 0/0 .rodata          @7204 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7204 = -1000.0f;
COMPILER_STRIP_GATE(0x806027C0, &lit_7204);
#pragma pop

/* 806027C4-806027C8 000160 0004+00 0/0 0/0 0/0 .rodata          @7205 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7205 = 1100.0f;
COMPILER_STRIP_GATE(0x806027C4, &lit_7205);
#pragma pop

/* 806027C8-806027CC 000164 0004+00 0/0 0/0 0/0 .rodata          @7206 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7206 = -2000.0f;
COMPILER_STRIP_GATE(0x806027C8, &lit_7206);
#pragma pop

/* 806027CC-806027D0 000168 0004+00 0/1 0/0 0/0 .rodata          @7207 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7207 = -400.0f;
COMPILER_STRIP_GATE(0x806027CC, &lit_7207);
#pragma pop

/* 806027D0-806027D4 00016C 0004+00 0/0 0/0 0/0 .rodata          @7208 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7208 = 1318.0f;
COMPILER_STRIP_GATE(0x806027D0, &lit_7208);
#pragma pop

/* 806027D4-806027D8 000170 0004+00 0/0 0/0 0/0 .rodata          @7209 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7209 = -1355.0f;
COMPILER_STRIP_GATE(0x806027D4, &lit_7209);
#pragma pop

/* 806027D8-806027DC 000174 0004+00 0/0 0/0 0/0 .rodata          @7210 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7210 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x806027D8, &lit_7210);
#pragma pop

/* 806027DC-806027E0 000178 0004+00 0/0 0/0 0/0 .rodata          @7211 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7211 = -1500.0f;
COMPILER_STRIP_GATE(0x806027DC, &lit_7211);
#pragma pop

/* 806027E0-806027E4 00017C 0004+00 0/0 0/0 0/0 .rodata          @7212 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7212 = -4000.0f;
COMPILER_STRIP_GATE(0x806027E0, &lit_7212);
#pragma pop

/* 806027E4-806027E8 000180 0004+00 0/0 0/0 0/0 .rodata          @7213 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7213 = -286.0f;
COMPILER_STRIP_GATE(0x806027E4, &lit_7213);
#pragma pop

/* 806027E8-806027EC 000184 0004+00 0/0 0/0 0/0 .rodata          @7214 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7214 = -1780.0f;
COMPILER_STRIP_GATE(0x806027E8, &lit_7214);
#pragma pop

/* 806027EC-806027F0 000188 0004+00 0/0 0/0 0/0 .rodata          @7215 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7215 = 389.0f;
COMPILER_STRIP_GATE(0x806027EC, &lit_7215);
#pragma pop

/* 806027F0-806027F4 00018C 0004+00 0/0 0/0 0/0 .rodata          @7216 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7216 = 1326.0f;
COMPILER_STRIP_GATE(0x806027F0, &lit_7216);
#pragma pop

/* 806027F4-806027F8 000190 0004+00 0/0 0/0 0/0 .rodata          @7217 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7217 = -2356.0f;
COMPILER_STRIP_GATE(0x806027F4, &lit_7217);
#pragma pop

/* 806027F8-806027FC 000194 0004+00 0/0 0/0 0/0 .rodata          @7218 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7218 = 3.0f / 100.0f;
COMPILER_STRIP_GATE(0x806027F8, &lit_7218);
#pragma pop

/* 806027FC-80602800 000198 0004+00 0/0 0/0 0/0 .rodata          @7219 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7219 = 79.0f;
COMPILER_STRIP_GATE(0x806027FC, &lit_7219);
#pragma pop

/* 80602800-80602804 00019C 0004+00 0/0 0/0 0/0 .rodata          @7220 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7220 = 1305.0f;
COMPILER_STRIP_GATE(0x80602800, &lit_7220);
#pragma pop

/* 80602804-80602808 0001A0 0004+00 0/0 0/0 0/0 .rodata          @7221 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7221 = -1029.0f;
COMPILER_STRIP_GATE(0x80602804, &lit_7221);
#pragma pop

/* 80602808-8060280C 0001A4 0004+00 0/1 0/0 0/0 .rodata          @7222 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7222 = 86.0f;
COMPILER_STRIP_GATE(0x80602808, &lit_7222);
#pragma pop

/* 8060280C-80602810 0001A8 0004+00 0/0 0/0 0/0 .rodata          @7223 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7223 = 1321.0f;
COMPILER_STRIP_GATE(0x8060280C, &lit_7223);
#pragma pop

/* 80602810-80602814 0001AC 0004+00 0/0 0/0 0/0 .rodata          @7224 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7224 = -1277.0f;
COMPILER_STRIP_GATE(0x80602810, &lit_7224);
#pragma pop

/* 80602814-80602818 0001B0 0004+00 0/1 0/0 0/0 .rodata          @7225 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7225 = -50.0f;
COMPILER_STRIP_GATE(0x80602814, &lit_7225);
#pragma pop

/* 80602818-8060281C 0001B4 0004+00 0/0 0/0 0/0 .rodata          @7226 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7226 = 11.0f / 20.0f;
COMPILER_STRIP_GATE(0x80602818, &lit_7226);
#pragma pop

/* 8060281C-80602820 0001B8 0004+00 0/1 0/0 0/0 .rodata          @7227 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7227 = 80.0f;
COMPILER_STRIP_GATE(0x8060281C, &lit_7227);
#pragma pop

/* 80602820-80602824 0001BC 0004+00 0/0 0/0 0/0 .rodata          @7228 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7228 = 280.0f;
COMPILER_STRIP_GATE(0x80602820, &lit_7228);
#pragma pop

/* 80602824-80602828 0001C0 0004+00 0/0 0/0 0/0 .rodata          @7229 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7229 = 212.0f;
COMPILER_STRIP_GATE(0x80602824, &lit_7229);
#pragma pop

/* 80602828-8060282C 0001C4 0004+00 0/0 0/0 0/0 .rodata          @7230 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7230 = 340.0f;
COMPILER_STRIP_GATE(0x80602828, &lit_7230);
#pragma pop

/* 8060282C-80602830 0001C8 0004+00 0/0 0/0 0/0 .rodata          @7231 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7231 = 180.0f;
COMPILER_STRIP_GATE(0x8060282C, &lit_7231);
#pragma pop

/* 80602830-80602834 0001CC 0004+00 0/0 0/0 0/0 .rodata          @7232 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7232 = 260.0f;
COMPILER_STRIP_GATE(0x80602830, &lit_7232);
#pragma pop

/* 80602834-80602838 0001D0 0004+00 0/1 0/0 0/0 .rodata          @7233 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7233 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x80602834, &lit_7233);
#pragma pop

/* 80602838-8060283C 0001D4 0004+00 0/0 0/0 0/0 .rodata          @7234 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7234 = 792.0f;
COMPILER_STRIP_GATE(0x80602838, &lit_7234);
#pragma pop

/* 8060283C-80602840 0001D8 0004+00 0/0 0/0 0/0 .rodata          @7235 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7235 = 1595.0f;
COMPILER_STRIP_GATE(0x8060283C, &lit_7235);
#pragma pop

/* 80602840-80602844 0001DC 0004+00 0/0 0/0 0/0 .rodata          @7236 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7236 = 1160.0f;
COMPILER_STRIP_GATE(0x80602840, &lit_7236);
#pragma pop

/* 80602844-80602848 0001E0 0004+00 0/0 0/0 0/0 .rodata          @7237 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7237 = 938.0f;
COMPILER_STRIP_GATE(0x80602844, &lit_7237);
#pragma pop

/* 80602848-8060284C 0001E4 0004+00 0/0 0/0 0/0 .rodata          @7238 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7238 = 1675.0f;
COMPILER_STRIP_GATE(0x80602848, &lit_7238);
#pragma pop

/* 8060284C-80602850 0001E8 0004+00 0/0 0/0 0/0 .rodata          @7239 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7239 = 1337.0f;
COMPILER_STRIP_GATE(0x8060284C, &lit_7239);
#pragma pop

/* 80602850-80602854 0001EC 0004+00 0/1 0/0 0/0 .rodata          @7240 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7240 = 12.0f;
COMPILER_STRIP_GATE(0x80602850, &lit_7240);
#pragma pop

/* 80602854-80602858 0001F0 0004+00 0/0 0/0 0/0 .rodata          @7241 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7241 = -81.0f;
COMPILER_STRIP_GATE(0x80602854, &lit_7241);
#pragma pop

/* 80602858-8060285C 0001F4 0004+00 0/0 0/0 0/0 .rodata          @7242 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7242 = 1391.0f;
COMPILER_STRIP_GATE(0x80602858, &lit_7242);
#pragma pop

/* 8060285C-80602860 0001F8 0004+00 0/0 0/0 0/0 .rodata          @7243 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7243 = -2144.0f;
COMPILER_STRIP_GATE(0x8060285C, &lit_7243);
#pragma pop

/* 80602860-80602864 0001FC 0004+00 0/0 0/0 0/0 .rodata          @7244 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7244 = 37.0f;
COMPILER_STRIP_GATE(0x80602860, &lit_7244);
#pragma pop

/* 80602864-80602868 000200 0004+00 0/0 0/0 0/0 .rodata          @7245 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7245 = 1366.0f;
COMPILER_STRIP_GATE(0x80602864, &lit_7245);
#pragma pop

/* 80602868-8060286C 000204 0004+00 0/0 0/0 0/0 .rodata          @7246 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7246 = -1865.0f;
COMPILER_STRIP_GATE(0x80602868, &lit_7246);
#pragma pop

/* 8060286C-80602870 000208 0004+00 0/0 0/0 0/0 .rodata          @7247 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7247 = 1352.0f;
COMPILER_STRIP_GATE(0x8060286C, &lit_7247);
#pragma pop

/* 80602870-80602874 00020C 0004+00 0/0 0/0 0/0 .rodata          @7248 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7248 = -1866.0f;
COMPILER_STRIP_GATE(0x80602870, &lit_7248);
#pragma pop

/* 80602874-80602878 000210 0004+00 0/0 0/0 0/0 .rodata          @7249 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7249 = 129.0f;
COMPILER_STRIP_GATE(0x80602874, &lit_7249);
#pragma pop

/* 80602878-8060287C 000214 0004+00 0/0 0/0 0/0 .rodata          @7250 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7250 = 1358.0f;
COMPILER_STRIP_GATE(0x80602878, &lit_7250);
#pragma pop

/* 8060287C-80602880 000218 0004+00 0/0 0/0 0/0 .rodata          @7251 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7251 = -2165.0f;
COMPILER_STRIP_GATE(0x8060287C, &lit_7251);
#pragma pop

/* 80602880-80602884 00021C 0004+00 0/0 0/0 0/0 .rodata          @7252 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7252 = 7.0f / 100.0f;
COMPILER_STRIP_GATE(0x80602880, &lit_7252);
#pragma pop

/* 80602884-80602888 000220 0004+00 0/0 0/0 0/0 .rodata          @7253 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_7253 = 0x3B03126F;
COMPILER_STRIP_GATE(0x80602884, &lit_7253);
#pragma pop

/* 80602888-8060288C 000224 0004+00 0/0 0/0 0/0 .rodata          @7254 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7254 = 101.0f;
COMPILER_STRIP_GATE(0x80602888, &lit_7254);
#pragma pop

/* 8060288C-80602890 000228 0004+00 0/0 0/0 0/0 .rodata          @7255 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7255 = 1206.0f;
COMPILER_STRIP_GATE(0x8060288C, &lit_7255);
#pragma pop

/* 80602890-80602894 00022C 0004+00 0/0 0/0 0/0 .rodata          @7256 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7256 = -582.0f;
COMPILER_STRIP_GATE(0x80602890, &lit_7256);
#pragma pop

/* 80602894-80602898 000230 0004+00 0/0 0/0 0/0 .rodata          @7257 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7257 = 154.0f;
COMPILER_STRIP_GATE(0x80602894, &lit_7257);
#pragma pop

/* 80602898-8060289C 000234 0004+00 0/0 0/0 0/0 .rodata          @7258 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7258 = 1199.0f;
COMPILER_STRIP_GATE(0x80602898, &lit_7258);
#pragma pop

/* 8060289C-806028A0 000238 0004+00 0/0 0/0 0/0 .rodata          @7259 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7259 = -819.0f;
COMPILER_STRIP_GATE(0x8060289C, &lit_7259);
#pragma pop

/* 806028A0-806028A4 00023C 0004+00 0/0 0/0 0/0 .rodata          @7260 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7260 = 135.0f;
COMPILER_STRIP_GATE(0x806028A0, &lit_7260);
#pragma pop

/* 806028A4-806028A8 000240 0004+00 0/1 0/0 0/0 .rodata          @7261 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7261 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x806028A4, &lit_7261);
#pragma pop

/* 806028A8-806028AC 000244 0004+00 0/0 0/0 0/0 .rodata          @7262 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_7262 = 0xC247999A;
COMPILER_STRIP_GATE(0x806028A8, &lit_7262);
#pragma pop

/* 806028AC-806028B0 000248 0004+00 0/0 0/0 0/0 .rodata          @7263 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7263 = 48.0f;
COMPILER_STRIP_GATE(0x806028AC, &lit_7263);
#pragma pop

/* 806028B0-806028B4 00024C 0004+00 0/0 0/0 0/0 .rodata          @7264 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7264 = -2.0f / 5.0f;
COMPILER_STRIP_GATE(0x806028B0, &lit_7264);
#pragma pop

/* 806028B4-806028B8 000250 0004+00 0/0 0/0 0/0 .rodata          @7265 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7265 = 3.0f / 20.0f;
COMPILER_STRIP_GATE(0x806028B4, &lit_7265);
#pragma pop

/* 806028B8-806028BC 000254 0004+00 0/0 0/0 0/0 .rodata          @7266 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7266 = 1400.0f;
COMPILER_STRIP_GATE(0x806028B8, &lit_7266);
#pragma pop

/* 806028BC-806028C0 000258 0004+00 0/0 0/0 0/0 .rodata          @7267 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_7267 = 0x425ECCCD;
COMPILER_STRIP_GATE(0x806028BC, &lit_7267);
#pragma pop

/* 806028C0-806028C4 00025C 0004+00 0/0 0/0 0/0 .rodata          @7268 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7268 = 1146.0f;
COMPILER_STRIP_GATE(0x806028C0, &lit_7268);
#pragma pop

/* 806028C4-806028C8 000260 0004+00 0/0 0/0 0/0 .rodata          @7269 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7269 = -151.0f;
COMPILER_STRIP_GATE(0x806028C4, &lit_7269);
#pragma pop

/* 806028C8-806028CC 000264 0004+00 0/0 0/0 0/0 .rodata          @7270 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7270 = -131.0f;
COMPILER_STRIP_GATE(0x806028C8, &lit_7270);
#pragma pop

/* 806028CC-806028D0 000268 0004+00 0/0 0/0 0/0 .rodata          @7271 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7271 = -156.0f;
COMPILER_STRIP_GATE(0x806028CC, &lit_7271);
#pragma pop

/* 806028D0-806028D4 00026C 0004+00 0/1 0/0 0/0 .rodata          @7272 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7272 = 90.0f;
COMPILER_STRIP_GATE(0x806028D0, &lit_7272);
#pragma pop

/* 806028D4-806028D8 000270 0004+00 0/0 0/0 0/0 .rodata          @7273 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7273 = 1250.0f;
COMPILER_STRIP_GATE(0x806028D4, &lit_7273);
#pragma pop

/* 806028D8-806028DC 000274 0004+00 0/0 0/0 0/0 .rodata          @7274 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7274 = -57.0f;
COMPILER_STRIP_GATE(0x806028D8, &lit_7274);
#pragma pop

/* 806028DC-806028E0 000278 0004+00 0/0 0/0 0/0 .rodata          @7275 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7275 = -80.0f;
COMPILER_STRIP_GATE(0x806028DC, &lit_7275);
#pragma pop

/* 806028E0-806028E4 00027C 0004+00 0/0 0/0 0/0 .rodata          @7276 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7276 = 1188.0f;
COMPILER_STRIP_GATE(0x806028E0, &lit_7276);
#pragma pop

/* 806028E4-806028E8 000280 0004+00 0/0 0/0 0/0 .rodata          @7277 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7277 = -106.0f;
COMPILER_STRIP_GATE(0x806028E4, &lit_7277);
#pragma pop

/* 806028E8-806028EC 000284 0004+00 0/0 0/0 0/0 .rodata          @7278 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7278 = 1430.0f;
COMPILER_STRIP_GATE(0x806028E8, &lit_7278);
#pragma pop

/* 806028EC-806028F0 000288 0004+00 0/0 0/0 0/0 .rodata          @7279 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7279 = 1603.0f;
COMPILER_STRIP_GATE(0x806028EC, &lit_7279);
#pragma pop

/* 806028F0-806028F4 00028C 0004+00 0/0 0/0 0/0 .rodata          @7280 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7280 = -2033.0f;
COMPILER_STRIP_GATE(0x806028F0, &lit_7280);
#pragma pop

/* 806028F4-806028F8 000290 0004+00 0/0 0/0 0/0 .rodata          @7281 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7281 = -70.0f;
COMPILER_STRIP_GATE(0x806028F4, &lit_7281);
#pragma pop

/* 806028F8-806028FC 000294 0004+00 0/0 0/0 0/0 .rodata          @7282 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7282 = 1564.0f;
COMPILER_STRIP_GATE(0x806028F8, &lit_7282);
#pragma pop

/* 806028FC-80602900 000298 0004+00 0/0 0/0 0/0 .rodata          @7283 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7283 = -1884.0f;
COMPILER_STRIP_GATE(0x806028FC, &lit_7283);
#pragma pop

/* 80602900-80602904 00029C 0004+00 0/1 0/0 0/0 .rodata          @7284 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7284 = -5.0f;
COMPILER_STRIP_GATE(0x80602900, &lit_7284);
#pragma pop

/* 80602904-80602908 0002A0 0004+00 0/1 0/0 0/0 .rodata          @7285 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7285 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80602904, &lit_7285);
#pragma pop

/* 80602908-8060290C 0002A4 0004+00 0/0 0/0 0/0 .rodata          @7286 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7286 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x80602908, &lit_7286);
#pragma pop

/* 8060290C-80602910 0002A8 0004+00 0/0 0/0 0/0 .rodata          @7287 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7287 = -600.0f;
COMPILER_STRIP_GATE(0x8060290C, &lit_7287);
#pragma pop

/* 80602910-80602914 0002AC 0004+00 0/0 0/0 0/0 .rodata          @7288 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7288 = -250.0f;
COMPILER_STRIP_GATE(0x80602910, &lit_7288);
#pragma pop

/* 80602914-80602918 0002B0 0004+00 0/1 0/0 0/0 .rodata          @7289 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7289 = 120.0f;
COMPILER_STRIP_GATE(0x80602914, &lit_7289);
#pragma pop

/* 80602918-8060291C 0002B4 0004+00 0/1 0/0 0/0 .rodata          @7743 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7743 = 21.0f;
COMPILER_STRIP_GATE(0x80602918, &lit_7743);
#pragma pop

/* 8060291C-80602920 0002B8 0004+00 0/1 0/0 0/0 .rodata          @7744 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7744 = 26.0f;
COMPILER_STRIP_GATE(0x8060291C, &lit_7744);
#pragma pop

/* 80602920-80602924 0002BC 0004+00 0/2 0/0 0/0 .rodata          @7745 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7745 = 17.0f;
COMPILER_STRIP_GATE(0x80602920, &lit_7745);
#pragma pop

/* 80602924-80602928 0002C0 0004+00 0/1 0/0 0/0 .rodata          @7746 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7746 = 16.5f;
COMPILER_STRIP_GATE(0x80602924, &lit_7746);
#pragma pop

/* 80602928-8060292C 0002C4 0004+00 0/1 0/0 0/0 .rodata          @7747 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7747 = 9.5f;
COMPILER_STRIP_GATE(0x80602928, &lit_7747);
#pragma pop

/* 8060292C-80602930 0002C8 0004+00 0/1 0/0 0/0 .rodata          @7748 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7748 = 13.0f;
COMPILER_STRIP_GATE(0x8060292C, &lit_7748);
#pragma pop

/* 80602930-80602934 0002CC 0004+00 0/1 0/0 0/0 .rodata          @7749 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7749 = 19.0f;
COMPILER_STRIP_GATE(0x80602930, &lit_7749);
#pragma pop

/* 80602934-80602938 0002D0 0004+00 0/1 0/0 0/0 .rodata          @7750 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7750 = 8.0f;
COMPILER_STRIP_GATE(0x80602934, &lit_7750);
#pragma pop

/* 80602938-8060293C 0002D4 0004+00 0/1 0/0 0/0 .rodata          @7751 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7751 = 11.0f;
COMPILER_STRIP_GATE(0x80602938, &lit_7751);
#pragma pop

/* 8060293C-80602940 0002D8 0004+00 0/1 0/0 0/0 .rodata          @7752 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7752 = 28.0f;
COMPILER_STRIP_GATE(0x8060293C, &lit_7752);
#pragma pop

/* 80602940-80602944 0002DC 0004+00 0/1 0/0 0/0 .rodata          @7753 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7753 = 31.0f;
COMPILER_STRIP_GATE(0x80602940, &lit_7753);
#pragma pop

/* 80602944-80602948 0002E0 0004+00 0/1 0/0 0/0 .rodata          @7754 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7754 = 32.0f;
COMPILER_STRIP_GATE(0x80602944, &lit_7754);
#pragma pop

/* 80602948-8060294C 0002E4 0004+00 0/1 0/0 0/0 .rodata          @7755 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7755 = 18.0f;
COMPILER_STRIP_GATE(0x80602948, &lit_7755);
#pragma pop

/* 8060294C-80602950 0002E8 0004+00 0/1 0/0 0/0 .rodata          @7756 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7756 = 24.0f;
COMPILER_STRIP_GATE(0x8060294C, &lit_7756);
#pragma pop

/* 80602950-80602954 0002EC 0004+00 0/1 0/0 0/0 .rodata          @7757 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7757 = 27.0f;
COMPILER_STRIP_GATE(0x80602950, &lit_7757);
#pragma pop

/* 805FDAE0-805FEC58 009180 1178+00 1/1 0/0 0/0 .text            anm_se_set__FP11b_gnd_class */
static void anm_se_set(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80602954-80602958 0002F0 0004+00 0/1 0/0 0/0 .rodata          @8733 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8733 = -20.0f;
COMPILER_STRIP_GATE(0x80602954, &lit_8733);
#pragma pop

/* 80602958-8060295C 0002F4 0004+00 0/1 0/0 0/0 .rodata          @8734 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8734 = -100.0f;
COMPILER_STRIP_GATE(0x80602958, &lit_8734);
#pragma pop

/* 8060295C-80602960 0002F8 0004+00 0/1 0/0 0/0 .rodata          @8735 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8735 = 7.5f;
COMPILER_STRIP_GATE(0x8060295C, &lit_8735);
#pragma pop

/* 80602960-80602964 0002FC 0004+00 0/1 0/0 0/0 .rodata          @8736 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8736 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80602960, &lit_8736);
#pragma pop

/* 80602964-80602968 000300 0004+00 0/1 0/0 0/0 .rodata          @8737 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8737 = -30.0f;
COMPILER_STRIP_GATE(0x80602964, &lit_8737);
#pragma pop

/* 80602968-8060296C 000304 0004+00 0/1 0/0 0/0 .rodata          @8738 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8738 = -1200.0f;
COMPILER_STRIP_GATE(0x80602968, &lit_8738);
#pragma pop

/* 8060296C-80602970 000308 0004+00 0/1 0/0 0/0 .rodata          @8739 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_8739 = 0x42A39EB8;
COMPILER_STRIP_GATE(0x8060296C, &lit_8739);
#pragma pop

/* 80602970-80602974 00030C 0004+00 0/1 0/0 0/0 .rodata          @8740 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8740 = 127.0f / 50.0f;
COMPILER_STRIP_GATE(0x80602970, &lit_8740);
#pragma pop

/* 80602974-80602978 000310 0004+00 0/1 0/0 0/0 .rodata          @8741 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8741 = 29.0f / 10.0f;
COMPILER_STRIP_GATE(0x80602974, &lit_8741);
#pragma pop

/* 80602978-8060297C 000314 0004+00 0/1 0/0 0/0 .rodata          @8742 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8742 = -130.0f;
COMPILER_STRIP_GATE(0x80602978, &lit_8742);
#pragma pop

/* 8060297C-80602980 000318 0004+00 0/1 0/0 0/0 .rodata          @8743 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8743 = 130.0f;
COMPILER_STRIP_GATE(0x8060297C, &lit_8743);
#pragma pop

/* 80602980-80602984 00031C 0004+00 0/1 0/0 0/0 .rodata          @8744 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8744 = 20000.0f;
COMPILER_STRIP_GATE(0x80602980, &lit_8744);
#pragma pop

/* 80602984-80602988 000320 0004+00 0/1 0/0 0/0 .rodata          @8745 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8745 = 13000.0f;
COMPILER_STRIP_GATE(0x80602984, &lit_8745);
#pragma pop

/* 80602988-8060298C 000324 0004+00 0/1 0/0 0/0 .rodata          @8746 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8746 = -20000.0f;
COMPILER_STRIP_GATE(0x80602988, &lit_8746);
#pragma pop

/* 8060298C-80602990 000328 0004+00 0/1 0/0 0/0 .rodata          @8747 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8747 = 100000.0f;
COMPILER_STRIP_GATE(0x8060298C, &lit_8747);
#pragma pop

/* 80602990-80602994 00032C 0004+00 0/1 0/0 0/0 .rodata          @8748 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8748 = -13456.0f;
COMPILER_STRIP_GATE(0x80602990, &lit_8748);
#pragma pop

/* 80602994-80602998 000330 0004+00 0/1 0/0 0/0 .rodata          @8749 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8749 = -17.0f;
COMPILER_STRIP_GATE(0x80602994, &lit_8749);
#pragma pop

/* 80602998-8060299C 000334 0004+00 0/1 0/0 0/0 .rodata          @8750 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8750 = 0.25f;
COMPILER_STRIP_GATE(0x80602998, &lit_8750);
#pragma pop

/* 8060299C-806029A0 000338 0004+00 0/1 0/0 0/0 .rodata          @8751 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8751 = 1500.0f;
COMPILER_STRIP_GATE(0x8060299C, &lit_8751);
#pragma pop

/* 806029A0-806029A4 00033C 0004+00 0/1 0/0 0/0 .rodata          @8752 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8752 = -15.0f;
COMPILER_STRIP_GATE(0x806029A0, &lit_8752);
#pragma pop

/* 805FEC58-806009F8 00A2F8 1DA0+00 2/1 0/0 0/0 .text            daB_GND_Execute__FP11b_gnd_class */
static void daB_GND_Execute(b_gnd_class* param_0) {
    // NONMATCHING
}

/* 806009F8-80600A1C 00C098 0024+00 1/1 0/0 0/0 .text            multVecZero__14mDoMtx_stack_cFP3Vec
 */
// void mDoMtx_stack_c::multVecZero(Vec* param_0) {
extern "C" void multVecZero__14mDoMtx_stack_cFP3Vec() {
    // NONMATCHING
}

/* 80600A1C-80600A38 00C0BC 001C+00 1/1 0/0 0/0 .text            setDownPos__13fopEn_enemy_cFPC4cXyz
 */
// void fopEn_enemy_c::setDownPos(cXyz const* param_0) {
extern "C" void setDownPos__13fopEn_enemy_cFPC4cXyz() {
    // NONMATCHING
}

/* 80600A38-80600A54 00C0D8 001C+00 1/1 0/0 0/0 .text            __as__5csXyzFRC5csXyz */
// void csXyz::operator=(csXyz const& param_0) {
extern "C" void __as__5csXyzFRC5csXyz() {
    // NONMATCHING
}

/* 80600A54-80600A5C 00C0F4 0008+00 1/0 0/0 0/0 .text            daB_GND_IsDelete__FP11b_gnd_class
 */
static bool daB_GND_IsDelete(b_gnd_class* param_0) {
    return true;
}

/* 80600A5C-80600B14 00C0FC 00B8+00 1/0 0/0 0/0 .text            daB_GND_Delete__FP11b_gnd_class */
static void daB_GND_Delete(b_gnd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806029A4-806029AC 000340 0008+00 0/1 0/0 0/0 .rodata          blur_model$8822 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const blur_model[8] = {
    0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x65,
};
COMPILER_STRIP_GATE(0x806029A4, &blur_model);
#pragma pop

/* 80600B14-80601468 00C1B4 0954+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80601468-806014B0 00CB08 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 806014B0-80601960 00CB50 04B0+00 1/0 0/0 0/0 .text            daB_GND_Create__FP10fopAc_ac_c */
static void daB_GND_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80601960-80601D24 00D000 03C4+00 1/1 0/0 0/0 .text            __ct__11b_gnd_classFv */
b_gnd_class::b_gnd_class() {
    // NONMATCHING
}

/* 80601D24-80601D40 00D3C4 001C+00 1/1 0/0 0/0 .text            __ct__19mDoExt_3DlineMat1_cFv */
// mDoExt_3DlineMat1_c::mDoExt_3DlineMat1_c() {
extern "C" void __ct__19mDoExt_3DlineMat1_cFv() {
    // NONMATCHING
}

/* 80601D40-80601DA0 00D3E0 0060+00 1/1 0/0 0/0 .text            __dt__8g_himo_sFv */
g_himo_s::~g_himo_s() {
    // NONMATCHING
}

/* 80601DA0-80601DE8 00D440 0048+00 1/1 0/0 0/0 .text            __ct__8g_himo_sFv */
g_himo_s::g_himo_s() {
    // NONMATCHING
}

/* 80601DE8-80601DEC 00D488 0004+00 3/3 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 80601DEC-80601E4C 00D48C 0060+00 1/1 0/0 0/0 .text            __dt__16Z2SoundObjSimpleFv */
// Z2SoundObjSimple::~Z2SoundObjSimple() {
extern "C" void __dt__16Z2SoundObjSimpleFv() {
    // NONMATCHING
}

/* 80601E4C-80601E94 00D4EC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80601E94-80601EDC 00D534 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80601EDC-80601F24 00D57C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80601F24-80601FF0 00D5C4 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
// dCcD_Sph::~dCcD_Sph() {
extern "C" void __dt__8dCcD_SphFv() {
    // NONMATCHING
}

/* 80601FF0-80602074 00D690 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
// dCcD_Sph::dCcD_Sph() {
extern "C" void __ct__8dCcD_SphFv() {
    // NONMATCHING
}

/* 80602074-806020D0 00D714 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 806020D0-80602140 00D770 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80602140-806021B0 00D7E0 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 806021B0-806021E8 00D850 0038+00 1/1 0/0 0/0 .text            __ct__11J3DLightObjFv */
// J3DLightObj::J3DLightObj() {
extern "C" void __ct__11J3DLightObjFv() {
    // NONMATCHING
}

/* 806021E8-80602230 00D888 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80602230-80602278 00D8D0 0048+00 2/1 0/0 0/0 .text            __dt__13daB_GND_HIO_cFv */
daB_GND_HIO_c::~daB_GND_HIO_c() {
    // NONMATCHING
}

/* 80602278-806022F0 00D918 0078+00 0/0 1/0 0/0 .text            __sinit_d_a_b_gnd_cpp */
void __sinit_d_a_b_gnd_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80602278, __sinit_d_a_b_gnd_cpp);
#pragma pop

/* 806022F0-80602328 00D990 0038+00 1/1 0/0 0/0 .text            __arraydtor$4508 */
void func_806022F0() {
    // NONMATCHING
}

/* 80602328-80602330 00D9C8 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80602328() {
    // NONMATCHING
}

/* 80602330-80602338 00D9D0 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80602330() {
    // NONMATCHING
}

/* 80602338-8060234C 00D9D8 0014+00 1/1 0/0 0/0 .text            cancelOriginalDemo__9daPy_py_cFv */
// void daPy_py_c::cancelOriginalDemo() {
extern "C" void cancelOriginalDemo__9daPy_py_cFv() {
    // NONMATCHING
}

/* 8060234C-80602368 00D9EC 001C+00 1/1 0/0 0/0 .text            __ct__4cXyzFRC4cXyz */
// cXyz::cXyz(cXyz const& param_0) {
extern "C" void __ct__4cXyzFRC4cXyz() {
    // NONMATCHING
}

/* 80602368-80602384 00DA08 001C+00 1/1 0/0 0/0 .text            getTrigA__8mDoCPd_cFUl */
// void mDoCPd_c::getTrigA(u32 param_0) {
extern "C" void getTrigA__8mDoCPd_cFUl() {
    // NONMATCHING
}

/* 80602384-80602404 00DA24 0080+00 2/2 0/0 0/0 .text
 * dComIfGp_particle_set__FUlUsPC4cXyzPC5csXyzPC4cXyz           */
static void dComIfGp_particle_set(u32 param_0, u16 param_1, cXyz const* param_2,
                                      csXyz const* param_3, cXyz const* param_4) {
    // NONMATCHING
}

/* 80602404-80602418 00DAA4 0014+00 1/1 0/0 0/0 .text            getAnmMtx__8J3DModelFi */
// void J3DModel::getAnmMtx(int param_0) {
extern "C" void getAnmMtx__8J3DModelFi() {
    // NONMATCHING
}

/* 80602418-80602478 00DAB8 0060+00 1/1 0/0 0/0 .text
 * dComIfGp_setHitMark__FUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl */
static void dComIfGp_setHitMark(u16 param_0, fopAc_ac_c* param_1, cXyz const* param_2,
                                    csXyz const* param_3, cXyz const* param_4, u32 param_5) {
    // NONMATCHING
}

/* 80602478-8060248C 00DB18 0014+00 1/1 0/0 0/0 .text            dComIfGp_setDoStatusForce__FUcUc */
static void dComIfGp_setDoStatusForce(u8 param_0, u8 param_1) {
    // NONMATCHING
}

/* 8060248C-8060249C 00DB2C 0010+00 1/1 0/0 0/0 .text            __ct__4cXyzFfff */
// cXyz::cXyz(f32 param_0, f32 param_1, f32 param_2) {
extern "C" void __ct__4cXyzFfff() {
    // NONMATCHING
}

/* 8060249C-806024AC 00DB3C 0010+00 1/1 0/0 0/0 .text            daPy_getPlayerActorClass__Fv */
static void daPy_getPlayerActorClass() {
    // NONMATCHING
}

/* 806024AC-806024EC 00DB4C 0040+00 1/1 0/0 0/0 .text            setFrame__13mDoExt_morf_cFf */
// void mDoExt_morf_c::setFrame(f32 param_0) {
extern "C" void setFrame__13mDoExt_morf_cFf() {
    // NONMATCHING
}

/* 806024EC-8060251C 00DB8C 0030+00 1/1 0/0 0/0 .text            isStop__13mDoExt_morf_cFv */
// void mDoExt_morf_c::isStop() {
extern "C" void isStop__13mDoExt_morf_cFv() {
    // NONMATCHING
}

/* 8060251C-80602590 00DBBC 0074+00 2/2 0/0 0/0 .text
 * dComIfGp_particle_set__FUsPC4cXyzPC5csXyzPC4cXyz             */
static void dComIfGp_particle_set(u16 param_0, cXyz const* param_1, csXyz const* param_2,
                                      cXyz const* param_3) {
    // NONMATCHING
}

/* 80602590-806025A4 00DC30 0014+00 1/1 0/0 0/0 .text            changeDemoMode__9daPy_py_cFUliis */
// void daPy_py_c::changeDemoMode(u32 param_0, int param_1, int param_2, s16 param_3) {
extern "C" void changeDemoMode__9daPy_py_cFUliis() {
    // NONMATCHING
}

/* 806025A4-806025B8 00DC44 0014+00 1/1 0/0 0/0 .text            changeOriginalDemo__9daPy_py_cFv */
// void daPy_py_c::changeOriginalDemo() {
extern "C" void changeOriginalDemo__9daPy_py_cFv() {
    // NONMATCHING
}

/* 806025B8-806025C4 00DC58 000C+00 1/1 0/0 0/0 .text            changeDemoMode__9daHorse_cFUli */
// void daHorse_c::changeDemoMode(u32 param_0, int param_1) {
extern "C" void changeDemoMode__9daHorse_cFUli() {
    // NONMATCHING
}

/* 806025C4-806025D4 00DC64 0010+00 1/1 0/0 0/0 .text            set__4cXyzFfff */
// void cXyz::set(f32 param_0, f32 param_1, f32 param_2) {
extern "C" void set__4cXyzFfff() {
    // NONMATCHING
}

/* 806025D4-806025F0 00DC74 001C+00 2/2 0/0 0/0 .text            __as__4cXyzFRC4cXyz */
// void cXyz::operator=(cXyz const& param_0) {
extern "C" void __as__4cXyzFRC4cXyz() {
    // NONMATCHING
}

/* 806025F0-80602604 00DC90 0014+00 1/1 0/0 0/0 .text            changeOriginalDemo__9daHorse_cFv */
// void daHorse_c::changeOriginalDemo() {
extern "C" void changeOriginalDemo__9daHorse_cFv() {
    // NONMATCHING
}

/* 80602604-8060261C 00DCA4 0018+00 1/1 0/0 0/0 .text            dComIfGp_getCamera__Fi */
static void dComIfGp_getCamera(int param_0) {
    // NONMATCHING
}

/* 8060261C-80602638 00DCBC 001C+00 1/1 0/0 0/0 .text            dComIfGp_getPlayerCameraID__Fi */
static void dComIfGp_getPlayerCameraID(int param_0) {
    // NONMATCHING
}

/* 80602638-80602650 00DCD8 0018+00 1/1 0/0 0/0 .text            dComIfGp_getPlayer__Fi */
// static void dComIfGp_getPlayer(int param_0) {
extern "C" void dComIfGp_getPlayer__Fi() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8060305C-80603060 0000FC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_8060305C[4];
#pragma pop

/* 80603060-80603064 000100 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80603060[4];
#pragma pop

/* 80603064-80603068 000104 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80603064[4];
#pragma pop

/* 80603068-8060306C 000108 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80603068[4];
#pragma pop

/* 8060306C-80603070 00010C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8060306C[4];
#pragma pop

/* 80603070-80603074 000110 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80603070[4];
#pragma pop

/* 80603074-80603078 000114 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80603074[4];
#pragma pop

/* 80603078-8060307C 000118 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80603078[4];
#pragma pop

/* 8060307C-80603080 00011C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8060307C[4];
#pragma pop

/* 80603080-80603084 000120 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80603080[4];
#pragma pop

/* 80603084-80603088 000124 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80603084[4];
#pragma pop

/* 80603088-8060308C 000128 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80603088[4];
#pragma pop

/* 8060308C-80603090 00012C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8060308C[4];
#pragma pop

/* 80603090-80603094 000130 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80603090[4];
#pragma pop

/* 80603094-80603098 000134 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80603094[4];
#pragma pop

/* 80603098-8060309C 000138 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80603098[4];
#pragma pop

/* 8060309C-806030A0 00013C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8060309C[4];
#pragma pop

/* 806030A0-806030A4 000140 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_806030A0[4];
#pragma pop

/* 806030A4-806030A8 000144 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_806030A4[4];
#pragma pop

/* 806030A8-806030AC 000148 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_806030A8[4];
#pragma pop

/* 806030AC-806030B0 00014C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_806030AC[4];
#pragma pop

/* 806030B0-806030B4 000150 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_806030B0[4];
#pragma pop

/* 806030B4-806030B8 000154 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_806030B4[4];
#pragma pop

/* 806030B8-806030BC 000158 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_806030B8[4];
#pragma pop

/* 806030BC-806030C0 00015C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_806030BC[4];
#pragma pop

/* 806029AC-806029AC 000348 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
