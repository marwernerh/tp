lbl_806044D8:
/* 806044D8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 806044DC  7C 08 02 A6 */	mflr r0
/* 806044E0  90 01 00 34 */	stw r0, 0x34(r1)
/* 806044E4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 806044E8  F3 E1 00 28 */	psq_st f31, 40(r1), 0, 0 /* qr0 */
/* 806044EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 806044F0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 806044F4  7C 7E 1B 78 */	mr r30, r3
/* 806044F8  3C 80 80 60 */	lis r4, lit_3646@ha /* 0x806053C8@ha */
/* 806044FC  3B E4 53 C8 */	addi r31, r4, lit_3646@l /* 0x806053C8@l */
/* 80604500  C3 FF 00 10 */	lfs f31, 0x10(r31)
/* 80604504  A8 03 06 70 */	lha r0, 0x670(r3)
/* 80604508  2C 00 00 01 */	cmpwi r0, 1
/* 8060450C  41 82 00 6C */	beq lbl_80604578
/* 80604510  40 80 00 8C */	bge lbl_8060459C
/* 80604514  2C 00 00 00 */	cmpwi r0, 0
/* 80604518  40 80 00 08 */	bge lbl_80604520
/* 8060451C  48 00 00 80 */	b lbl_8060459C
lbl_80604520:
/* 80604520  38 80 00 04 */	li r4, 4
/* 80604524  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 80604528  38 A0 00 02 */	li r5, 2
/* 8060452C  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80604530  4B FF FE 41 */	bl anm_init__FP11b_gos_classifUcf
/* 80604534  38 00 00 01 */	li r0, 1
/* 80604538  B0 1E 06 70 */	sth r0, 0x670(r30)
/* 8060453C  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80604540  4B C6 34 15 */	bl cM_rndF__Ff
/* 80604544  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 80604548  EC 00 08 2A */	fadds f0, f0, f1
/* 8060454C  FC 00 00 1E */	fctiwz f0, f0
/* 80604550  D8 01 00 08 */	stfd f0, 8(r1)
/* 80604554  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80604558  B0 1E 06 8C */	sth r0, 0x68c(r30)
/* 8060455C  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 80604560  4B C6 33 F5 */	bl cM_rndF__Ff
/* 80604564  FC 00 08 1E */	fctiwz f0, f1
/* 80604568  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8060456C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80604570  B0 1E 06 80 */	sth r0, 0x680(r30)
/* 80604574  48 00 00 28 */	b lbl_8060459C
lbl_80604578:
/* 80604578  3C 60 80 60 */	lis r3, l_HIO@ha /* 0x8060561C@ha */
/* 8060457C  38 63 56 1C */	addi r3, r3, l_HIO@l /* 0x8060561C@l */
/* 80604580  C3 E3 00 0C */	lfs f31, 0xc(r3)
/* 80604584  A8 1E 06 8C */	lha r0, 0x68c(r30)
/* 80604588  2C 00 00 00 */	cmpwi r0, 0
/* 8060458C  40 82 00 10 */	bne lbl_8060459C
/* 80604590  38 00 00 00 */	li r0, 0
/* 80604594  B0 1E 06 6E */	sth r0, 0x66e(r30)
/* 80604598  B0 1E 06 70 */	sth r0, 0x670(r30)
lbl_8060459C:
/* 8060459C  38 7E 05 2C */	addi r3, r30, 0x52c
/* 806045A0  FC 20 F8 90 */	fmr f1, f31
/* 806045A4  C0 5F 00 00 */	lfs f2, 0(r31)
/* 806045A8  FC 60 10 90 */	fmr f3, f2
/* 806045AC  4B C6 B4 91 */	bl cLib_addCalc2__FPffff
/* 806045B0  38 7E 04 DE */	addi r3, r30, 0x4de
/* 806045B4  A8 9E 06 80 */	lha r4, 0x680(r30)
/* 806045B8  38 A0 00 01 */	li r5, 1
/* 806045BC  38 C0 08 00 */	li r6, 0x800
/* 806045C0  4B C6 C0 49 */	bl cLib_addCalcAngleS2__FPssss
/* 806045C4  E3 E1 00 28 */	psq_l f31, 40(r1), 0, 0 /* qr0 */
/* 806045C8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 806045CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 806045D0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 806045D4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 806045D8  7C 08 03 A6 */	mtlr r0
/* 806045DC  38 21 00 30 */	addi r1, r1, 0x30
/* 806045E0  4E 80 00 20 */	blr 