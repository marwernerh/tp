lbl_80878DD8:
/* 80878DD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80878DDC  7C 08 02 A6 */	mflr r0
/* 80878DE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80878DE4  3C 60 80 94 */	lis r3, daMP_c_Dlst_base@ha /* 0x80945B0C@ha */
/* 80878DE8  38 63 5B 0C */	addi r3, r3, daMP_c_Dlst_base@l /* 0x80945B0C@l */
/* 80878DEC  48 00 00 19 */	bl dComIfGd_set2DOpa__FP12dDlst_base_c
/* 80878DF0  38 60 00 01 */	li r3, 1
/* 80878DF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80878DF8  7C 08 03 A6 */	mtlr r0
/* 80878DFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80878E00  4E 80 00 20 */	blr 
