/**
 * f_op_scene.cpp
 * Scene Process Framework
 */

#include "f_op/f_op_scene.h"
#include "f_pc/f_pc_manager.h"

/* 8001EB34-8001EB5C 019474 0028+00 1/0 0/0 0/0 .text            fopScn_Draw__FP11scene_class */
static int fopScn_Draw(scene_class* i_this) {
    return fpcNd_DrawMethod((nodedraw_method_class*)i_this->submethod, i_this);
}

/* 8001EB5C-8001EB84 01949C 0028+00 1/0 0/0 0/0 .text            fopScn_Execute__FP11scene_class */
static int fopScn_Execute(scene_class* i_this) {
    return fpcMtd_Execute(i_this->submethod, i_this);
}

/* 8001EB84-8001EBAC 0194C4 0028+00 1/0 0/0 0/0 .text            fopScn_IsDelete__FPv */
static int fopScn_IsDelete(void* i_this) {
    return fpcMtd_IsDelete(static_cast<scene_class*>(i_this)->submethod, i_this);
}

/* 8001EBAC-8001EC00 0194EC 0054+00 1/0 0/0 0/0 .text            fopScn_Delete__FPv */
static int fopScn_Delete(void* i_this) {
    scene_class* scene = (scene_class*)i_this;
    int ret = fpcMtd_Delete(scene->submethod, scene);
    if (ret == 1) {
        fopScnTg_QueueTo(&scene->scene_tag);
    }
    return ret;
}

/* 8001EC00-8001EC74 019540 0074+00 1/0 0/0 0/0 .text            fopScn_Create__FPv */
static int fopScn_Create(void* i_this) {
    scene_class* scene = (scene_class*)i_this;
    if (fpcM_IsFirstCreating(i_this)) {
        scene_process_profile_definition* profile = (scene_process_profile_definition*)fpcM_GetProfile(i_this);
        scene->submethod = profile->submethod;

        fopScnTg_Init(&scene->scene_tag, i_this);
        fopScnTg_ToQueue(&scene->scene_tag);

        u32* append = (u32*)fpcM_GetAppend(i_this);
        if (append != NULL) {
            scene->base.base.parameters = *append;
        }
    }

    return fpcMtd_Create(scene->submethod, i_this);
}

/* 803A38B0-803A38C8 -00001 0014+04 0/0 9/0 0/0 .data            g_fopScn_Method */
leafdraw_method_class g_fopScn_Method = {
    (process_method_func)fopScn_Create,  
    (process_method_func)fopScn_Delete,
    (process_method_func)fopScn_Execute, 
    (process_method_func)fopScn_IsDelete,
    (process_method_func)fopScn_Draw
};
