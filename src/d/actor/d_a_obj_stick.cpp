/**
 * @file d_a_obj_stick.cpp
 * 
*/

#include "d/actor/d_a_obj_stick.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __dt__13daObj_Stick_cFv();
extern "C" void create__13daObj_Stick_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void CreateHeap__13daObj_Stick_cFv();
extern "C" void Delete__13daObj_Stick_cFv();
extern "C" void Execute__13daObj_Stick_cFv();
extern "C" void Draw__13daObj_Stick_cFv();
extern "C" void createHeapCallBack__13daObj_Stick_cFP10fopAc_ac_c();
extern "C" void getResName__13daObj_Stick_cFv();
extern "C" void isDelete__13daObj_Stick_cFv();
extern "C" void setEnvTevColor__13daObj_Stick_cFv();
extern "C" void setRoomNo__13daObj_Stick_cFv();
extern "C" void setMtx__13daObj_Stick_cFv();
extern "C" static void daObj_Stick_Create__FPv();
extern "C" static void daObj_Stick_Delete__FPv();
extern "C" static void daObj_Stick_Execute__FPv();
extern "C" static void daObj_Stick_Draw__FPv();
extern "C" static bool daObj_Stick_IsDelete__FPv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __sinit_d_a_obj_stick_cpp();
extern "C" void __dt__19daObj_Stick_Param_cFv();
extern "C" static void func_80599E18();
extern "C" static void func_80599E20();
extern "C" u8 const m__19daObj_Stick_Param_c[16];
extern "C" extern char const* const d_a_obj_stick__stringBase0;
extern "C" u8 mCcDSph__13daObj_Stick_c[64];

//
// External References:
//

extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void __dl__FPv();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" u8 const mCcDObjData__8daNpcT_c[48];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80599E68-80599E68 00002C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80599E68 = "Taro6";
#pragma pop

/* 80599E70-80599EB0 000000 0040+00 2/2 0/0 0/0 .data            mCcDSph__13daObj_Stick_c */
SECTION_DATA u8 daObj_Stick_c::mCcDSph[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80599EB0-80599EB4 -00001 0004+00 1/1 0/0 0/0 .data            l_resName */
SECTION_DATA static void* l_resName = (void*)&d_a_obj_stick__stringBase0;

/* 80599EB4-80599ED4 -00001 0020+00 1/0 0/0 0/0 .data            daObj_Stick_MethodTable */
static actor_method_class daObj_Stick_MethodTable = {
    (process_method_func)daObj_Stick_Create__FPv,
    (process_method_func)daObj_Stick_Delete__FPv,
    (process_method_func)daObj_Stick_Execute__FPv,
    (process_method_func)daObj_Stick_IsDelete__FPv,
    (process_method_func)daObj_Stick_Draw__FPv,
};

/* 80599ED4-80599F04 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_STICK */
extern actor_process_profile_definition g_profile_OBJ_STICK = {
  fpcLy_CURRENT_e,          // mLayerID
  7,                        // mListID
  fpcPi_CURRENT_e,          // mListPrio
  PROC_OBJ_STICK,           // mProcName
  &g_fpcLf_Method.base,    // sub_method
  sizeof(daObj_Stick_c),    // mSize
  0,                        // mSizeOther
  0,                        // mParameters
  &g_fopAc_Method.base,     // sub_method
  85,                       // mPriority
  &daObj_Stick_MethodTable, // sub_method
  0x00044100,               // mStatus
  fopAc_ACTOR_e,            // mActorType
  fopAc_CULLBOX_CUSTOM_e,   // cullType
};

/* 80599F04-80599F28 000094 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80599E20,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80599E18,
};

/* 80599F28-80599F34 0000B8 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80599F34-80599F40 0000C4 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80599F40-80599F4C 0000D0 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80599F4C-80599F58 0000DC 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80599F58-80599F64 0000E8 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80599F64-80599F70 0000F4 000C+00 2/2 0/0 0/0 .data            __vt__13daObj_Stick_c */
SECTION_DATA extern void* __vt__13daObj_Stick_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13daObj_Stick_cFv,
};

/* 8059922C-805993E8 0000EC 01BC+00 1/0 0/0 0/0 .text            __dt__13daObj_Stick_cFv */
daObj_Stick_c::~daObj_Stick_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80599E3C-80599E4C 000000 0010+00 3/3 0/0 0/0 .rodata          m__19daObj_Stick_Param_c */
SECTION_RODATA u8 const daObj_Stick_Param_c::m[16] = {
    0x00, 0x00, 0x00, 0x00, 0xC0, 0x40, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80599E3C, &daObj_Stick_Param_c::m);

/* 80599E4C-80599E50 000010 0004+00 0/1 0/0 0/0 .rodata          @3918 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3918 = -50.0f;
COMPILER_STRIP_GATE(0x80599E4C, &lit_3918);
#pragma pop

/* 80599E50-80599E54 000014 0004+00 0/1 0/0 0/0 .rodata          @3919 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3919 = -75.0f;
COMPILER_STRIP_GATE(0x80599E50, &lit_3919);
#pragma pop

/* 80599E54-80599E58 000018 0004+00 0/1 0/0 0/0 .rodata          @3920 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3920 = 50.0f;
COMPILER_STRIP_GATE(0x80599E54, &lit_3920);
#pragma pop

/* 80599E58-80599E5C 00001C 0004+00 0/1 0/0 0/0 .rodata          @3921 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3921 = 75.0f;
COMPILER_STRIP_GATE(0x80599E58, &lit_3921);
#pragma pop

/* 80599E5C-80599E60 000020 0004+00 1/3 0/0 0/0 .rodata          @3922 */
SECTION_RODATA static f32 const lit_3922 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80599E5C, &lit_3922);

/* 805993E8-805996BC 0002A8 02D4+00 1/1 0/0 0/0 .text            create__13daObj_Stick_cFv */
void daObj_Stick_c::create() {
    // NONMATCHING
}

/* 805996BC-80599704 00057C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80599704-8059974C 0005C4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 8059974C-805997BC 00060C 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 805997BC-80599818 00067C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80599818-80599888 0006D8 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80599888-80599900 000748 0078+00 1/1 0/0 0/0 .text            CreateHeap__13daObj_Stick_cFv */
void daObj_Stick_c::CreateHeap() {
    // NONMATCHING
}

/* 80599900-80599934 0007C0 0034+00 1/1 0/0 0/0 .text            Delete__13daObj_Stick_cFv */
void daObj_Stick_c::Delete() {
    // NONMATCHING
}

/* 80599934-80599A78 0007F4 0144+00 2/2 0/0 0/0 .text            Execute__13daObj_Stick_cFv */
void daObj_Stick_c::Execute() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80599E60-80599E64 000024 0004+00 0/1 0/0 0/0 .rodata          @4045 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4045 = 20.0f;
COMPILER_STRIP_GATE(0x80599E60, &lit_4045);
#pragma pop

/* 80599E64-80599E68 000028 0004+00 0/1 0/0 0/0 .rodata          @4046 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4046 = 1.0f;
COMPILER_STRIP_GATE(0x80599E64, &lit_4046);
#pragma pop

/* 80599A78-80599B3C 000938 00C4+00 1/1 0/0 0/0 .text            Draw__13daObj_Stick_cFv */
void daObj_Stick_c::Draw() {
    // NONMATCHING
}

/* 80599B3C-80599B5C 0009FC 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__13daObj_Stick_cFP10fopAc_ac_c            */
void daObj_Stick_c::createHeapCallBack(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80599B5C-80599B6C 000A1C 0010+00 3/3 0/0 0/0 .text            getResName__13daObj_Stick_cFv */
void daObj_Stick_c::getResName() {
    // NONMATCHING
}

/* 80599B6C-80599B8C 000A2C 0020+00 1/1 0/0 0/0 .text            isDelete__13daObj_Stick_cFv */
void daObj_Stick_c::isDelete() {
    // NONMATCHING
}

/* 80599B8C-80599BE8 000A4C 005C+00 2/2 0/0 0/0 .text            setEnvTevColor__13daObj_Stick_cFv
 */
void daObj_Stick_c::setEnvTevColor() {
    // NONMATCHING
}

/* 80599BE8-80599C28 000AA8 0040+00 2/2 0/0 0/0 .text            setRoomNo__13daObj_Stick_cFv */
void daObj_Stick_c::setRoomNo() {
    // NONMATCHING
}

/* 80599C28-80599C8C 000AE8 0064+00 1/1 0/0 0/0 .text            setMtx__13daObj_Stick_cFv */
void daObj_Stick_c::setMtx() {
    // NONMATCHING
}

/* 80599C8C-80599CAC 000B4C 0020+00 1/0 0/0 0/0 .text            daObj_Stick_Create__FPv */
static void daObj_Stick_Create(void* param_0) {
    // NONMATCHING
}

/* 80599CAC-80599CCC 000B6C 0020+00 1/0 0/0 0/0 .text            daObj_Stick_Delete__FPv */
static void daObj_Stick_Delete(void* param_0) {
    // NONMATCHING
}

/* 80599CCC-80599CEC 000B8C 0020+00 1/0 0/0 0/0 .text            daObj_Stick_Execute__FPv */
static void daObj_Stick_Execute(void* param_0) {
    // NONMATCHING
}

/* 80599CEC-80599D0C 000BAC 0020+00 1/0 0/0 0/0 .text            daObj_Stick_Draw__FPv */
static void daObj_Stick_Draw(void* param_0) {
    // NONMATCHING
}

/* 80599D0C-80599D14 000BCC 0008+00 1/0 0/0 0/0 .text            daObj_Stick_IsDelete__FPv */
static bool daObj_Stick_IsDelete(void* param_0) {
    return true;
}

/* 80599D14-80599D5C 000BD4 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80599F70-80599F7C 000100 000C+00 2/2 0/0 0/0 .data            __vt__19daObj_Stick_Param_c */
SECTION_DATA extern void* __vt__19daObj_Stick_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__19daObj_Stick_Param_cFv,
};

/* 80599F88-80599F94 000008 000C+00 1/1 0/0 0/0 .bss             @3805 */
static u8 lit_3805[12];

/* 80599F94-80599F98 000014 0004+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[4];

/* 80599D5C-80599DD0 000C1C 0074+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_stick_cpp */
void __sinit_d_a_obj_stick_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80599D5C, __sinit_d_a_obj_stick_cpp);
#pragma pop

/* 80599DD0-80599E18 000C90 0048+00 2/1 0/0 0/0 .text            __dt__19daObj_Stick_Param_cFv */
daObj_Stick_Param_c::~daObj_Stick_Param_c() {
    // NONMATCHING
}

/* 80599E18-80599E20 000CD8 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80599E18() {
    // NONMATCHING
}

/* 80599E20-80599E28 000CE0 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80599E20() {
    // NONMATCHING
}

/* 80599E68-80599E68 00002C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
