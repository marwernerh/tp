//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_profile
//

#include "f_pc/f_pc_profile.h"
#include "dol2asm.h"
#include "dolphin/types.h"

/* ############################################################################################## */
/* 80450D50-80450D58 0004+04 s=1 e=0 z=2  None .sbss      g_fpcPf_ProfileList_p */
process_profile_definition** g_fpcPf_ProfileList_p;

/* 80023564-80023578 0014+00 s=0 e=1 z=0  None .text      fpcPf_Get__Fs */
process_profile_definition* fpcPf_Get(s16 profileID) {
    return g_fpcPf_ProfileList_p[profileID];
}