lbl_80778934:
/* 80778934  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80778938  7C 08 02 A6 */	mflr r0
/* 8077893C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80778940  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80778944  7C 7F 1B 78 */	mr r31, r3
/* 80778948  38 7F 05 AC */	addi r3, r31, 0x5ac
/* 8077894C  80 9F 06 74 */	lwz r4, 0x674(r31)
/* 80778950  4B 8B 46 B9 */	bl dComIfG_resDelete__FP30request_of_phase_process_classPCc
/* 80778954  88 1F 13 2C */	lbz r0, 0x132c(r31)
/* 80778958  28 00 00 00 */	cmplwi r0, 0
/* 8077895C  41 82 00 10 */	beq lbl_8077896C
/* 80778960  38 00 00 00 */	li r0, 0
/* 80778964  3C 60 80 78 */	lis r3, data_8077A874@ha /* 0x8077A874@ha */
/* 80778968  98 03 A8 74 */	stb r0, data_8077A874@l(r3)  /* 0x8077A874@l */
lbl_8077896C:
/* 8077896C  80 1F 00 F0 */	lwz r0, 0xf0(r31)
/* 80778970  28 00 00 00 */	cmplwi r0, 0
/* 80778974  41 82 00 0C */	beq lbl_80778980
/* 80778978  80 7F 05 CC */	lwz r3, 0x5cc(r31)
/* 8077897C  4B 89 89 95 */	bl stopZelAnime__16mDoExt_McaMorfSOFv
lbl_80778980:
/* 80778980  38 60 00 01 */	li r3, 1
/* 80778984  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80778988  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8077898C  7C 08 03 A6 */	mtlr r0
/* 80778990  38 21 00 10 */	addi r1, r1, 0x10
/* 80778994  4E 80 00 20 */	blr 
