.include "macros.inc"

.section .text, "ax" # 80261b54


.global dkWpillar_c_NS_create
dkWpillar_c_NS_create:
/* 80261B54 0025EA94  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80261B58 0025EA98  7C 08 02 A6 */	mflr r0
/* 80261B5C 0025EA9C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80261B60 0025EAA0  39 61 00 30 */	addi r11, r1, 0x30
/* 80261B64 0025EAA4  48 10 06 75 */	bl _savegpr_28
/* 80261B68 0025EAA8  7C 7F 1B 78 */	mr r31, r3
/* 80261B6C 0025EAAC  28 03 00 00 */	cmplwi r3, 0
/* 80261B70 0025EAB0  41 82 00 A4 */	beq lbl_80261C14
/* 80261B74 0025EAB4  7C 7C 1B 78 */	mr r28, r3
/* 80261B78 0025EAB8  3B A3 00 FC */	addi r29, r3, 0xfc
/* 80261B7C 0025EABC  3C 60 80 3A */	lis r3, lbl_803A3354@ha
/* 80261B80 0025EAC0  38 03 33 54 */	addi r0, r3, lbl_803A3354@l
/* 80261B84 0025EAC4  90 1D 00 00 */	stw r0, 0(r29)
/* 80261B88 0025EAC8  7F A3 EB 78 */	mr r3, r29
/* 80261B8C 0025EACC  38 80 00 00 */	li r4, 0
/* 80261B90 0025EAD0  48 0C 68 6D */	bl J3DFrameCtrl_NS_init
/* 80261B94 0025EAD4  38 00 00 00 */	li r0, 0
/* 80261B98 0025EAD8  90 1D 00 18 */	stw r0, 0x18(r29)
/* 80261B9C 0025EADC  3B BC 01 18 */	addi r29, r28, 0x118
/* 80261BA0 0025EAE0  3C 60 80 3A */	lis r3, lbl_803A3354@ha
/* 80261BA4 0025EAE4  38 03 33 54 */	addi r0, r3, lbl_803A3354@l
/* 80261BA8 0025EAE8  90 1C 01 18 */	stw r0, 0x118(r28)
/* 80261BAC 0025EAEC  7F A3 EB 78 */	mr r3, r29
/* 80261BB0 0025EAF0  38 80 00 00 */	li r4, 0
/* 80261BB4 0025EAF4  48 0C 68 49 */	bl J3DFrameCtrl_NS_init
/* 80261BB8 0025EAF8  38 00 00 00 */	li r0, 0
/* 80261BBC 0025EAFC  90 1D 00 14 */	stw r0, 0x14(r29)
/* 80261BC0 0025EB00  3B BC 01 30 */	addi r29, r28, 0x130
/* 80261BC4 0025EB04  3C 60 80 3A */	lis r3, lbl_803A3354@ha
/* 80261BC8 0025EB08  38 03 33 54 */	addi r0, r3, lbl_803A3354@l
/* 80261BCC 0025EB0C  90 1C 01 30 */	stw r0, 0x130(r28)
/* 80261BD0 0025EB10  7F A3 EB 78 */	mr r3, r29
/* 80261BD4 0025EB14  38 80 00 00 */	li r4, 0
/* 80261BD8 0025EB18  48 0C 68 25 */	bl J3DFrameCtrl_NS_init
/* 80261BDC 0025EB1C  38 00 00 00 */	li r0, 0
/* 80261BE0 0025EB20  90 1D 00 14 */	stw r0, 0x14(r29)
/* 80261BE4 0025EB24  3B BC 01 4C */	addi r29, r28, 0x14c
/* 80261BE8 0025EB28  7F A3 EB 78 */	mr r3, r29
/* 80261BEC 0025EB2C  3C 80 80 3A */	lis r4, lbl_803A1EC8@ha
/* 80261BF0 0025EB30  38 84 1E C8 */	addi r4, r4, lbl_803A1EC8@l
/* 80261BF4 0025EB34  48 0C 3A D1 */	bl J3DLightInfo_NS___as
/* 80261BF8 0025EB38  38 7D 00 74 */	addi r3, r29, 0x74
.global J3DLightObj
/* 80261BFC 0025EB3C  3C 80 80 02 */	lis r4, J3DLightObj@ha
.global J3DLightObj
/* 80261C00 0025EB40  38 84 8C 0C */	addi r4, r4, J3DLightObj@l
/* 80261C04 0025EB44  38 A0 00 00 */	li r5, 0
/* 80261C08 0025EB48  38 C0 00 74 */	li r6, 0x74
/* 80261C0C 0025EB4C  38 E0 00 06 */	li r7, 6
/* 80261C10 0025EB50  48 10 01 51 */	bl func_80361D60
lbl_80261C14:
/* 80261C14 0025EB54  38 7F 00 DC */	addi r3, r31, 0xdc
/* 80261C18 0025EB58  4B DB C0 A5 */	bl fopAcM_gc_c_NS_gndCheck
/* 80261C1C 0025EB5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80261C20 0025EB60  41 82 00 40 */	beq lbl_80261C60
/* 80261C24 0025EB64  3C 60 80 40 */	lis r3, lbl_804061C0@ha
/* 80261C28 0025EB68  38 63 61 C0 */	addi r3, r3, lbl_804061C0@l
/* 80261C2C 0025EB6C  3B C3 0F 38 */	addi r30, r3, 0xf38
/* 80261C30 0025EB70  7F C3 F3 78 */	mr r3, r30
/* 80261C34 0025EB74  3C 80 80 3F */	lis r4, lbl_803F1CC4@ha
/* 80261C38 0025EB78  38 84 1C C4 */	addi r4, r4, lbl_803F1CC4@l
/* 80261C3C 0025EB7C  3B A4 00 14 */	addi r29, r4, 0x14
/* 80261C40 0025EB80  7F A4 EB 78 */	mr r4, r29
/* 80261C44 0025EB84  4B E1 34 BD */	bl dBgS_NS_GetRoomId
/* 80261C48 0025EB88  7C 7C 1B 78 */	mr r28, r3
/* 80261C4C 0025EB8C  7F C3 F3 78 */	mr r3, r30
/* 80261C50 0025EB90  7F A4 EB 78 */	mr r4, r29
/* 80261C54 0025EB94  4B E1 2F 95 */	bl dBgS_NS_GetPolyColor
/* 80261C58 0025EB98  54 65 06 3E */	clrlwi r5, r3, 0x18
/* 80261C5C 0025EB9C  48 00 00 10 */	b lbl_80261C6C
lbl_80261C60:
/* 80261C60 0025EBA0  8B 8D 87 E4 */	lbz r28, lbl_80450D64-_SDA_BASE_(r13)
/* 80261C64 0025EBA4  7F 9C 07 74 */	extsb r28, r28
/* 80261C68 0025EBA8  38 A0 00 FF */	li r5, 0xff
lbl_80261C6C:
/* 80261C6C 0025EBAC  38 7F 01 4C */	addi r3, r31, 0x14c
/* 80261C70 0025EBB0  7F 84 07 74 */	extsb r4, r28
/* 80261C74 0025EBB4  4B F4 6C 79 */	bl dKy_tevstr_init
/* 80261C78 0025EBB8  3C 60 80 43 */	lis r3, lbl_8042CA54@ha
/* 80261C7C 0025EBBC  38 63 CA 54 */	addi r3, r3, lbl_8042CA54@l
/* 80261C80 0025EBC0  38 80 00 10 */	li r4, 0x10
/* 80261C84 0025EBC4  38 BF 00 DC */	addi r5, r31, 0xdc
/* 80261C88 0025EBC8  38 DF 01 4C */	addi r6, r31, 0x14c
/* 80261C8C 0025EBCC  4B F4 1B 39 */	bl dScnKy_env_light_c_NS_settingTevStruct
/* 80261C90 0025EBD0  3C 60 80 40 */	lis r3, lbl_804061C0@ha
/* 80261C94 0025EBD4  3B A3 61 C0 */	addi r29, r3, lbl_804061C0@l
/* 80261C98 0025EBD8  80 7D 5D 3C */	lwz r3, 0x5d3c(r29)
/* 80261C9C 0025EBDC  38 80 00 00 */	li r4, 0
/* 80261CA0 0025EBE0  90 81 00 08 */	stw r4, 8(r1)
/* 80261CA4 0025EBE4  7F 80 07 74 */	extsb r0, r28
/* 80261CA8 0025EBE8  90 01 00 0C */	stw r0, 0xc(r1)
/* 80261CAC 0025EBEC  90 81 00 10 */	stw r4, 0x10(r1)
/* 80261CB0 0025EBF0  90 81 00 14 */	stw r4, 0x14(r1)
/* 80261CB4 0025EBF4  90 81 00 18 */	stw r4, 0x18(r1)
/* 80261CB8 0025EBF8  38 80 00 00 */	li r4, 0
/* 80261CBC 0025EBFC  38 A0 01 BD */	li r5, 0x1bd
/* 80261CC0 0025EC00  38 DF 00 DC */	addi r6, r31, 0xdc
/* 80261CC4 0025EC04  38 FF 01 4C */	addi r7, r31, 0x14c
/* 80261CC8 0025EC08  39 00 00 00 */	li r8, 0
/* 80261CCC 0025EC0C  39 3F 00 E8 */	addi r9, r31, 0xe8
/* 80261CD0 0025EC10  39 40 00 FF */	li r10, 0xff
/* 80261CD4 0025EC14  C0 22 B5 F8 */	lfs f1, lbl_80454FF8-_SDA2_BASE_(r2)
/* 80261CD8 0025EC18  4B DE AD B9 */	bl dPa_control_c_NS_set
/* 80261CDC 0025EC1C  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 80261CE0 0025EC20  2C 00 00 03 */	cmpwi r0, 3
/* 80261CE4 0025EC24  41 82 00 48 */	beq lbl_80261D2C
/* 80261CE8 0025EC28  80 7D 5D 3C */	lwz r3, 0x5d3c(r29)
/* 80261CEC 0025EC2C  38 80 00 00 */	li r4, 0
/* 80261CF0 0025EC30  90 81 00 08 */	stw r4, 8(r1)
/* 80261CF4 0025EC34  7F 80 07 74 */	extsb r0, r28
/* 80261CF8 0025EC38  90 01 00 0C */	stw r0, 0xc(r1)
/* 80261CFC 0025EC3C  90 81 00 10 */	stw r4, 0x10(r1)
/* 80261D00 0025EC40  90 81 00 14 */	stw r4, 0x14(r1)
/* 80261D04 0025EC44  90 81 00 18 */	stw r4, 0x18(r1)
/* 80261D08 0025EC48  38 80 00 00 */	li r4, 0
/* 80261D0C 0025EC4C  38 A0 01 BE */	li r5, 0x1be
/* 80261D10 0025EC50  38 DF 00 DC */	addi r6, r31, 0xdc
/* 80261D14 0025EC54  38 FF 01 4C */	addi r7, r31, 0x14c
/* 80261D18 0025EC58  39 00 00 00 */	li r8, 0
/* 80261D1C 0025EC5C  39 3F 00 E8 */	addi r9, r31, 0xe8
/* 80261D20 0025EC60  39 40 00 FF */	li r10, 0xff
/* 80261D24 0025EC64  C0 22 B5 F8 */	lfs f1, lbl_80454FF8-_SDA2_BASE_(r2)
/* 80261D28 0025EC68  4B DE AD 69 */	bl dPa_control_c_NS_set
lbl_80261D2C:
/* 80261D2C 0025EC6C  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 80261D30 0025EC70  2C 00 00 01 */	cmpwi r0, 1
/* 80261D34 0025EC74  40 82 00 0C */	bne lbl_80261D40
/* 80261D38 0025EC78  38 60 00 05 */	li r3, 5
/* 80261D3C 0025EC7C  48 00 01 B0 */	b lbl_80261EEC
lbl_80261D40:
/* 80261D40 0025EC80  38 60 22 00 */	li r3, 0x2200
/* 80261D44 0025EC84  38 80 00 20 */	li r4, 0x20
/* 80261D48 0025EC88  4B DA D2 FD */	bl mDoExt_createSolidHeapFromGameToCurrent_X1_
/* 80261D4C 0025EC8C  90 7F 01 48 */	stw r3, 0x148(r31)
/* 80261D50 0025EC90  80 1F 01 48 */	lwz r0, 0x148(r31)
/* 80261D54 0025EC94  28 00 00 00 */	cmplwi r0, 0
/* 80261D58 0025EC98  41 82 01 04 */	beq lbl_80261E5C
/* 80261D5C 0025EC9C  38 62 B5 F0 */	addi r3, r2, lbl_80454FF0-_SDA2_BASE_
/* 80261D60 0025ECA0  38 80 00 1C */	li r4, 0x1c
/* 80261D64 0025ECA4  3C A0 80 40 */	lis r5, lbl_804061C0@ha
/* 80261D68 0025ECA8  38 A5 61 C0 */	addi r5, r5, lbl_804061C0@l
/* 80261D6C 0025ECAC  3F 85 00 02 */	addis r28, r5, 2
/* 80261D70 0025ECB0  3B 9C C2 F8 */	addi r28, r28, -15624
/* 80261D74 0025ECB4  7F 85 E3 78 */	mr r5, r28
/* 80261D78 0025ECB8  38 C0 00 80 */	li r6, 0x80
/* 80261D7C 0025ECBC  4B DD A5 71 */	bl dRes_control_c_NS_getRes
/* 80261D80 0025ECC0  7C 7D 1B 78 */	mr r29, r3
/* 80261D84 0025ECC4  3C 80 00 08 */	lis r4, 8
/* 80261D88 0025ECC8  3C A0 11 00 */	lis r5, 0x11000284@ha
/* 80261D8C 0025ECCC  38 A5 02 84 */	addi r5, r5, 0x11000284@l
/* 80261D90 0025ECD0  4B DB 2E C5 */	bl mDoExt_J3DModel__create
/* 80261D94 0025ECD4  90 7F 00 F8 */	stw r3, 0xf8(r31)
/* 80261D98 0025ECD8  38 62 B5 F0 */	addi r3, r2, lbl_80454FF0-_SDA2_BASE_
/* 80261D9C 0025ECDC  38 80 00 0B */	li r4, 0xb
/* 80261DA0 0025ECE0  7F 85 E3 78 */	mr r5, r28
/* 80261DA4 0025ECE4  38 C0 00 80 */	li r6, 0x80
/* 80261DA8 0025ECE8  4B DD A5 45 */	bl dRes_control_c_NS_getRes
/* 80261DAC 0025ECEC  7C 64 1B 78 */	mr r4, r3
/* 80261DB0 0025ECF0  38 7F 00 FC */	addi r3, r31, 0xfc
/* 80261DB4 0025ECF4  38 A0 00 01 */	li r5, 1
/* 80261DB8 0025ECF8  38 C0 00 00 */	li r6, 0
/* 80261DBC 0025ECFC  C0 22 B5 F8 */	lfs f1, lbl_80454FF8-_SDA2_BASE_(r2)
/* 80261DC0 0025ED00  38 E0 00 00 */	li r7, 0
/* 80261DC4 0025ED04  39 00 FF FF */	li r8, -1
/* 80261DC8 0025ED08  39 20 00 00 */	li r9, 0
/* 80261DCC 0025ED0C  4B DA BA 11 */	bl mDoExt_bckAnm_NS_init
/* 80261DD0 0025ED10  7C 7E 1B 78 */	mr r30, r3
/* 80261DD4 0025ED14  38 62 B5 F0 */	addi r3, r2, lbl_80454FF0-_SDA2_BASE_
/* 80261DD8 0025ED18  38 80 00 3B */	li r4, 0x3b
/* 80261DDC 0025ED1C  7F 85 E3 78 */	mr r5, r28
/* 80261DE0 0025ED20  38 C0 00 80 */	li r6, 0x80
/* 80261DE4 0025ED24  4B DD A5 09 */	bl dRes_control_c_NS_getRes
/* 80261DE8 0025ED28  7C 65 1B 78 */	mr r5, r3
/* 80261DEC 0025ED2C  38 7F 01 18 */	addi r3, r31, 0x118
/* 80261DF0 0025ED30  38 9D 00 58 */	addi r4, r29, 0x58
/* 80261DF4 0025ED34  38 C0 00 00 */	li r6, 0
/* 80261DF8 0025ED38  38 E0 00 02 */	li r7, 2
/* 80261DFC 0025ED3C  C0 22 B5 F8 */	lfs f1, lbl_80454FF8-_SDA2_BASE_(r2)
/* 80261E00 0025ED40  39 00 00 00 */	li r8, 0
/* 80261E04 0025ED44  39 20 FF FF */	li r9, -1
/* 80261E08 0025ED48  4B DA B8 35 */	bl mDoExt_btkAnm_NS_init
/* 80261E0C 0025ED4C  7F DE 18 38 */	and r30, r30, r3
/* 80261E10 0025ED50  38 62 B5 F0 */	addi r3, r2, lbl_80454FF0-_SDA2_BASE_
/* 80261E14 0025ED54  38 80 00 2E */	li r4, 0x2e
/* 80261E18 0025ED58  7F 85 E3 78 */	mr r5, r28
/* 80261E1C 0025ED5C  38 C0 00 80 */	li r6, 0x80
/* 80261E20 0025ED60  4B DD A4 CD */	bl dRes_control_c_NS_getRes
/* 80261E24 0025ED64  7C 65 1B 78 */	mr r5, r3
/* 80261E28 0025ED68  38 7F 01 30 */	addi r3, r31, 0x130
/* 80261E2C 0025ED6C  38 9D 00 58 */	addi r4, r29, 0x58
/* 80261E30 0025ED70  38 C0 00 00 */	li r6, 0
/* 80261E34 0025ED74  38 E0 00 02 */	li r7, 2
/* 80261E38 0025ED78  C0 22 B5 F8 */	lfs f1, lbl_80454FF8-_SDA2_BASE_(r2)
/* 80261E3C 0025ED7C  39 00 00 00 */	li r8, 0
/* 80261E40 0025ED80  39 20 FF FF */	li r9, -1
/* 80261E44 0025ED84  4B DA B8 C9 */	bl mDoExt_brkAnm_NS_init
/* 80261E48 0025ED88  7F DE 18 38 */	and r30, r30, r3
/* 80261E4C 0025ED8C  4B DA D3 A9 */	bl mDoExt_restoreCurrentHeap
/* 80261E50 0025ED90  80 7F 01 48 */	lwz r3, 0x148(r31)
/* 80261E54 0025ED94  4B DA D2 39 */	bl mDoExt_adjustSolidHeap
/* 80261E58 0025ED98  48 00 00 0C */	b lbl_80261E64
lbl_80261E5C:
/* 80261E5C 0025ED9C  38 60 00 05 */	li r3, 5
/* 80261E60 0025EDA0  48 00 00 8C */	b lbl_80261EEC
lbl_80261E64:
/* 80261E64 0025EDA4  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 80261E68 0025EDA8  28 00 00 00 */	cmplwi r0, 0
/* 80261E6C 0025EDAC  41 82 00 0C */	beq lbl_80261E78
/* 80261E70 0025EDB0  2C 1E 00 00 */	cmpwi r30, 0
/* 80261E74 0025EDB4  40 82 00 0C */	bne lbl_80261E80
lbl_80261E78:
/* 80261E78 0025EDB8  38 60 00 05 */	li r3, 5
/* 80261E7C 0025EDBC  48 00 00 70 */	b lbl_80261EEC
lbl_80261E80:
/* 80261E80 0025EDC0  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 80261E84 0025EDC4  2C 00 00 02 */	cmpwi r0, 2
/* 80261E88 0025EDC8  40 82 00 18 */	bne lbl_80261EA0
/* 80261E8C 0025EDCC  C0 22 B5 FC */	lfs f1, lbl_80454FFC-_SDA2_BASE_(r2)
/* 80261E90 0025EDD0  D0 3F 00 E8 */	stfs f1, 0xe8(r31)
/* 80261E94 0025EDD4  C0 02 B6 00 */	lfs f0, lbl_80455000-_SDA2_BASE_(r2)
/* 80261E98 0025EDD8  D0 1F 00 EC */	stfs f0, 0xec(r31)
/* 80261E9C 0025EDDC  D0 3F 00 F0 */	stfs f1, 0xf0(r31)
lbl_80261EA0:
/* 80261EA0 0025EDE0  80 7F 00 F8 */	lwz r3, 0xf8(r31)
/* 80261EA4 0025EDE4  C0 1F 00 E8 */	lfs f0, 0xe8(r31)
/* 80261EA8 0025EDE8  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80261EAC 0025EDEC  C0 1F 00 EC */	lfs f0, 0xec(r31)
/* 80261EB0 0025EDF0  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80261EB4 0025EDF4  C0 1F 00 F0 */	lfs f0, 0xf0(r31)
/* 80261EB8 0025EDF8  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 80261EBC 0025EDFC  3C 60 80 3E */	lis r3, lbl_803DD470@ha
/* 80261EC0 0025EE00  38 63 D4 70 */	addi r3, r3, lbl_803DD470@l
/* 80261EC4 0025EE04  C0 3F 00 DC */	lfs f1, 0xdc(r31)
/* 80261EC8 0025EE08  C0 5F 00 E0 */	lfs f2, 0xe0(r31)
/* 80261ECC 0025EE0C  C0 7F 00 E4 */	lfs f3, 0xe4(r31)
/* 80261ED0 0025EE10  48 0E 4A 19 */	bl PSMTXTrans
/* 80261ED4 0025EE14  3C 60 80 3E */	lis r3, lbl_803DD470@ha
/* 80261ED8 0025EE18  38 63 D4 70 */	addi r3, r3, lbl_803DD470@l
/* 80261EDC 0025EE1C  80 9F 00 F8 */	lwz r4, 0xf8(r31)
/* 80261EE0 0025EE20  38 84 00 24 */	addi r4, r4, 0x24
/* 80261EE4 0025EE24  48 0E 45 CD */	bl PSMTXCopy
/* 80261EE8 0025EE28  38 60 00 04 */	li r3, 4
lbl_80261EEC:
/* 80261EEC 0025EE2C  39 61 00 30 */	addi r11, r1, 0x30
/* 80261EF0 0025EE30  48 10 03 35 */	bl _restgpr_28
/* 80261EF4 0025EE34  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80261EF8 0025EE38  7C 08 03 A6 */	mtlr r0
/* 80261EFC 0025EE3C  38 21 00 30 */	addi r1, r1, 0x30
/* 80261F00 0025EE40  4E 80 00 20 */	blr 
/* 80261F04 0025EE44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261F08 0025EE48  7C 08 02 A6 */	mflr r0
/* 80261F0C 0025EE4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80261F10 0025EE50  4B FF FC 45 */	bl dkWpillar_c_NS_create
/* 80261F14 0025EE54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80261F18 0025EE58  7C 08 03 A6 */	mtlr r0
/* 80261F1C 0025EE5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80261F20 0025EE60  4E 80 00 20 */	blr 

.global dkWpillar_c_NS_dtor
dkWpillar_c_NS_dtor:
/* 80261F24 0025EE64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261F28 0025EE68  7C 08 02 A6 */	mflr r0
/* 80261F2C 0025EE6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80261F30 0025EE70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80261F34 0025EE74  93 C1 00 08 */	stw r30, 8(r1)
/* 80261F38 0025EE78  7C 7F 1B 79 */	or. r31, r3, r3
/* 80261F3C 0025EE7C  7C 9E 23 78 */	mr r30, r4
/* 80261F40 0025EE80  41 82 00 90 */	beq lbl_80261FD0
/* 80261F44 0025EE84  80 7F 01 48 */	lwz r3, 0x148(r31)
/* 80261F48 0025EE88  28 03 00 00 */	cmplwi r3, 0
/* 80261F4C 0025EE8C  41 82 00 08 */	beq lbl_80261F54
/* 80261F50 0025EE90  4B DA D2 3D */	bl mDoExt_destroySolidHeap
lbl_80261F54:
/* 80261F54 0025EE94  34 1F 01 30 */	addic. r0, r31, 0x130
/* 80261F58 0025EE98  41 82 00 20 */	beq lbl_80261F78
/* 80261F5C 0025EE9C  34 1F 01 30 */	addic. r0, r31, 0x130
/* 80261F60 0025EEA0  41 82 00 18 */	beq lbl_80261F78
/* 80261F64 0025EEA4  34 1F 01 30 */	addic. r0, r31, 0x130
/* 80261F68 0025EEA8  41 82 00 10 */	beq lbl_80261F78
/* 80261F6C 0025EEAC  3C 60 80 3A */	lis r3, lbl_803A3354@ha
/* 80261F70 0025EEB0  38 03 33 54 */	addi r0, r3, lbl_803A3354@l
/* 80261F74 0025EEB4  90 1F 01 30 */	stw r0, 0x130(r31)
lbl_80261F78:
/* 80261F78 0025EEB8  34 1F 01 18 */	addic. r0, r31, 0x118
/* 80261F7C 0025EEBC  41 82 00 20 */	beq lbl_80261F9C
/* 80261F80 0025EEC0  34 1F 01 18 */	addic. r0, r31, 0x118
/* 80261F84 0025EEC4  41 82 00 18 */	beq lbl_80261F9C
/* 80261F88 0025EEC8  34 1F 01 18 */	addic. r0, r31, 0x118
/* 80261F8C 0025EECC  41 82 00 10 */	beq lbl_80261F9C
/* 80261F90 0025EED0  3C 60 80 3A */	lis r3, lbl_803A3354@ha
/* 80261F94 0025EED4  38 03 33 54 */	addi r0, r3, lbl_803A3354@l
/* 80261F98 0025EED8  90 1F 01 18 */	stw r0, 0x118(r31)
lbl_80261F9C:
/* 80261F9C 0025EEDC  34 1F 00 FC */	addic. r0, r31, 0xfc
/* 80261FA0 0025EEE0  41 82 00 20 */	beq lbl_80261FC0
/* 80261FA4 0025EEE4  34 1F 00 FC */	addic. r0, r31, 0xfc
/* 80261FA8 0025EEE8  41 82 00 18 */	beq lbl_80261FC0
/* 80261FAC 0025EEEC  34 1F 00 FC */	addic. r0, r31, 0xfc
/* 80261FB0 0025EEF0  41 82 00 10 */	beq lbl_80261FC0
/* 80261FB4 0025EEF4  3C 60 80 3A */	lis r3, lbl_803A3354@ha
/* 80261FB8 0025EEF8  38 03 33 54 */	addi r0, r3, lbl_803A3354@l
/* 80261FBC 0025EEFC  90 1F 00 FC */	stw r0, 0xfc(r31)
lbl_80261FC0:
/* 80261FC0 0025EF00  7F C0 07 35 */	extsh. r0, r30
/* 80261FC4 0025EF04  40 81 00 0C */	ble lbl_80261FD0
/* 80261FC8 0025EF08  7F E3 FB 78 */	mr r3, r31
/* 80261FCC 0025EF0C  48 06 CD 71 */	bl __dl
lbl_80261FD0:
/* 80261FD0 0025EF10  7F E3 FB 78 */	mr r3, r31
/* 80261FD4 0025EF14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80261FD8 0025EF18  83 C1 00 08 */	lwz r30, 8(r1)
/* 80261FDC 0025EF1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80261FE0 0025EF20  7C 08 03 A6 */	mtlr r0
/* 80261FE4 0025EF24  38 21 00 10 */	addi r1, r1, 0x10
/* 80261FE8 0025EF28  4E 80 00 20 */	blr 
/* 80261FEC 0025EF2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261FF0 0025EF30  7C 08 02 A6 */	mflr r0
/* 80261FF4 0025EF34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80261FF8 0025EF38  38 80 FF FF */	li r4, -1
/* 80261FFC 0025EF3C  4B FF FF 29 */	bl dkWpillar_c_NS_dtor
/* 80262000 0025EF40  38 60 00 01 */	li r3, 1
/* 80262004 0025EF44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80262008 0025EF48  7C 08 03 A6 */	mtlr r0
/* 8026200C 0025EF4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80262010 0025EF50  4E 80 00 20 */	blr 

.global dkWpillar_c_NS_execute
dkWpillar_c_NS_execute:
/* 80262014 0025EF54  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80262018 0025EF58  7C 08 02 A6 */	mflr r0
/* 8026201C 0025EF5C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80262020 0025EF60  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80262024 0025EF64  7C 7F 1B 78 */	mr r31, r3
/* 80262028 0025EF68  38 7F 00 FC */	addi r3, r31, 0xfc
/* 8026202C 0025EF6C  4B DA B3 FD */	bl mDoExt_baseAnm_NS_play
/* 80262030 0025EF70  38 60 00 01 */	li r3, 1
/* 80262034 0025EF74  88 1F 01 01 */	lbz r0, 0x101(r31)
/* 80262038 0025EF78  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8026203C 0025EF7C  40 82 00 18 */	bne lbl_80262054
/* 80262040 0025EF80  C0 22 B6 04 */	lfs f1, lbl_80455004-_SDA2_BASE_(r2)
/* 80262044 0025EF84  C0 1F 01 08 */	lfs f0, 0x108(r31)
/* 80262048 0025EF88  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8026204C 0025EF8C  41 82 00 08 */	beq lbl_80262054
/* 80262050 0025EF90  38 60 00 00 */	li r3, 0
lbl_80262054:
/* 80262054 0025EF94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80262058 0025EF98  41 82 00 10 */	beq lbl_80262068
/* 8026205C 0025EF9C  7F E3 FB 78 */	mr r3, r31
/* 80262060 0025EFA0  4B DB D6 E9 */	bl fopKyM_Delete
/* 80262064 0025EFA4  48 00 00 2C */	b lbl_80262090
lbl_80262068:
/* 80262068 0025EFA8  38 7F 00 DC */	addi r3, r31, 0xdc
/* 8026206C 0025EFAC  38 81 00 08 */	addi r4, r1, 8
/* 80262070 0025EFB0  4B DB B8 21 */	bl fopAcM_getWaterY
/* 80262074 0025EFB4  2C 03 00 00 */	cmpwi r3, 0
/* 80262078 0025EFB8  41 82 00 18 */	beq lbl_80262090
/* 8026207C 0025EFBC  80 7F 00 F8 */	lwz r3, 0xf8(r31)
/* 80262080 0025EFC0  C0 01 00 08 */	lfs f0, 8(r1)
/* 80262084 0025EFC4  D0 03 00 40 */	stfs f0, 0x40(r3)
/* 80262088 0025EFC8  C0 01 00 08 */	lfs f0, 8(r1)
/* 8026208C 0025EFCC  D0 1F 00 E0 */	stfs f0, 0xe0(r31)
lbl_80262090:
/* 80262090 0025EFD0  38 60 00 01 */	li r3, 1
/* 80262094 0025EFD4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80262098 0025EFD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026209C 0025EFDC  7C 08 03 A6 */	mtlr r0
/* 802620A0 0025EFE0  38 21 00 20 */	addi r1, r1, 0x20
/* 802620A4 0025EFE4  4E 80 00 20 */	blr 
/* 802620A8 0025EFE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802620AC 0025EFEC  7C 08 02 A6 */	mflr r0
/* 802620B0 0025EFF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802620B4 0025EFF4  4B FF FF 61 */	bl dkWpillar_c_NS_execute
/* 802620B8 0025EFF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802620BC 0025EFFC  7C 08 03 A6 */	mtlr r0
/* 802620C0 0025F000  38 21 00 10 */	addi r1, r1, 0x10
/* 802620C4 0025F004  4E 80 00 20 */	blr 

.global dkWpillar_c_NS_draw
dkWpillar_c_NS_draw:
/* 802620C8 0025F008  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802620CC 0025F00C  7C 08 02 A6 */	mflr r0
/* 802620D0 0025F010  90 01 00 14 */	stw r0, 0x14(r1)
/* 802620D4 0025F014  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802620D8 0025F018  93 C1 00 08 */	stw r30, 8(r1)
/* 802620DC 0025F01C  7C 7E 1B 78 */	mr r30, r3
/* 802620E0 0025F020  3C 60 80 43 */	lis r3, lbl_8042CA54@ha
/* 802620E4 0025F024  38 63 CA 54 */	addi r3, r3, lbl_8042CA54@l
/* 802620E8 0025F028  38 80 00 10 */	li r4, 0x10
/* 802620EC 0025F02C  38 BE 00 DC */	addi r5, r30, 0xdc
/* 802620F0 0025F030  38 DE 01 4C */	addi r6, r30, 0x14c
/* 802620F4 0025F034  4B F4 16 D1 */	bl dScnKy_env_light_c_NS_settingTevStruct
/* 802620F8 0025F038  3C 60 80 43 */	lis r3, lbl_8042CA54@ha
/* 802620FC 0025F03C  38 63 CA 54 */	addi r3, r3, lbl_8042CA54@l
/* 80262100 0025F040  80 9E 00 F8 */	lwz r4, 0xf8(r30)
/* 80262104 0025F044  80 84 00 04 */	lwz r4, 4(r4)
/* 80262108 0025F048  38 BE 01 4C */	addi r5, r30, 0x14c
/* 8026210C 0025F04C  4B F4 2C 95 */	bl dScnKy_env_light_c_NS_setLightTevColorType_MAJI
/* 80262110 0025F050  3C 60 80 40 */	lis r3, lbl_804061C0@ha
/* 80262114 0025F054  38 63 61 C0 */	addi r3, r3, lbl_804061C0@l
/* 80262118 0025F058  80 03 5F 6C */	lwz r0, 0x5f6c(r3)
/* 8026211C 0025F05C  3C 60 80 43 */	lis r3, lbl_80434AC8@ha
/* 80262120 0025F060  3B E3 4A C8 */	addi r31, r3, lbl_80434AC8@l
/* 80262124 0025F064  90 1F 00 48 */	stw r0, 0x48(r31)
/* 80262128 0025F068  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8026212C 0025F06C  80 7E 00 F8 */	lwz r3, 0xf8(r30)
/* 80262130 0025F070  80 83 00 04 */	lwz r4, 4(r3)
/* 80262134 0025F074  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80262138 0025F078  C0 3E 01 0C */	lfs f1, 0x10c(r30)
/* 8026213C 0025F07C  4B DA B8 91 */	bl mDoExt_bckAnm_NS_entry
/* 80262140 0025F080  C0 3E 01 0C */	lfs f1, 0x10c(r30)
/* 80262144 0025F084  80 7E 00 F8 */	lwz r3, 0xf8(r30)
/* 80262148 0025F088  80 83 00 04 */	lwz r4, 4(r3)
/* 8026214C 0025F08C  38 7E 01 18 */	addi r3, r30, 0x118
/* 80262150 0025F090  38 84 00 58 */	addi r4, r4, 0x58
/* 80262154 0025F094  4B DA B5 85 */	bl mDoExt_btkAnm_NS_entry
/* 80262158 0025F098  C0 3E 01 0C */	lfs f1, 0x10c(r30)
/* 8026215C 0025F09C  80 7E 00 F8 */	lwz r3, 0xf8(r30)
/* 80262160 0025F0A0  80 83 00 04 */	lwz r4, 4(r3)
/* 80262164 0025F0A4  38 7E 01 30 */	addi r3, r30, 0x130
/* 80262168 0025F0A8  38 84 00 58 */	addi r4, r4, 0x58
/* 8026216C 0025F0AC  4B DA B6 3D */	bl mDoExt_brkAnm_NS_entry
/* 80262170 0025F0B0  80 7E 00 F8 */	lwz r3, 0xf8(r30)
/* 80262174 0025F0B4  4B DA BB 51 */	bl mDoExt_modelUpdateDL
/* 80262178 0025F0B8  3C 60 80 40 */	lis r3, lbl_804061C0@ha
/* 8026217C 0025F0BC  38 63 61 C0 */	addi r3, r3, lbl_804061C0@l
/* 80262180 0025F0C0  80 03 5F 80 */	lwz r0, 0x5f80(r3)
/* 80262184 0025F0C4  90 1F 00 48 */	stw r0, 0x48(r31)
/* 80262188 0025F0C8  80 03 5F 84 */	lwz r0, 0x5f84(r3)
/* 8026218C 0025F0CC  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 80262190 0025F0D0  38 60 00 01 */	li r3, 1
/* 80262194 0025F0D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80262198 0025F0D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026219C 0025F0DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802621A0 0025F0E0  7C 08 03 A6 */	mtlr r0
/* 802621A4 0025F0E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802621A8 0025F0E8  4E 80 00 20 */	blr 
/* 802621AC 0025F0EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802621B0 0025F0F0  7C 08 02 A6 */	mflr r0
/* 802621B4 0025F0F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802621B8 0025F0F8  4B FF FF 11 */	bl dkWpillar_c_NS_draw
/* 802621BC 0025F0FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802621C0 0025F100  7C 08 03 A6 */	mtlr r0
/* 802621C4 0025F104  38 21 00 10 */	addi r1, r1, 0x10
/* 802621C8 0025F108  4E 80 00 20 */	blr 
