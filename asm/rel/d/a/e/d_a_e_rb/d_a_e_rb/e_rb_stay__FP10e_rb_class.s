lbl_80762764:
/* 80762764  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80762768  7C 08 02 A6 */	mflr r0
/* 8076276C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80762770  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80762774  93 C1 00 08 */	stw r30, 8(r1)
/* 80762778  7C 7E 1B 78 */	mr r30, r3
/* 8076277C  3C 80 80 76 */	lis r4, lit_3788@ha /* 0x80764D0C@ha */
/* 80762780  3B E4 4D 0C */	addi r31, r4, lit_3788@l /* 0x80764D0C@l */
/* 80762784  38 00 00 03 */	li r0, 3
/* 80762788  B0 03 0A 4A */	sth r0, 0xa4a(r3)
/* 8076278C  A8 03 0A 44 */	lha r0, 0xa44(r3)
/* 80762790  2C 00 00 01 */	cmpwi r0, 1
/* 80762794  41 82 00 38 */	beq lbl_807627CC
/* 80762798  40 80 00 34 */	bge lbl_807627CC
/* 8076279C  2C 00 00 00 */	cmpwi r0, 0
/* 807627A0  40 80 00 08 */	bge lbl_807627A8
/* 807627A4  48 00 00 28 */	b lbl_807627CC
lbl_807627A8:
/* 807627A8  38 80 00 05 */	li r4, 5
/* 807627AC  C0 3F 00 08 */	lfs f1, 8(r31)
/* 807627B0  38 A0 00 00 */	li r5, 0
/* 807627B4  C0 5F 00 04 */	lfs f2, 4(r31)
/* 807627B8  4B FF FC 05 */	bl anm_init__FP10e_rb_classifUcf
/* 807627BC  38 00 00 01 */	li r0, 1
/* 807627C0  B0 1E 0A 44 */	sth r0, 0xa44(r30)
/* 807627C4  C0 1F 00 54 */	lfs f0, 0x54(r31)
/* 807627C8  D0 1E 0A 20 */	stfs f0, 0xa20(r30)
lbl_807627CC:
/* 807627CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807627D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 807627D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807627D8  7C 08 03 A6 */	mtlr r0
/* 807627DC  38 21 00 10 */	addi r1, r1, 0x10
/* 807627E0  4E 80 00 20 */	blr 
