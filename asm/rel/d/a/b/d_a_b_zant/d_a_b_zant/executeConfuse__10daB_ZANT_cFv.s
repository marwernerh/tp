lbl_806414E4:
/* 806414E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 806414E8  7C 08 02 A6 */	mflr r0
/* 806414EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 806414F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 806414F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 806414F8  7C 7F 1B 78 */	mr r31, r3
/* 806414FC  3C 80 80 65 */	lis r4, lit_3757@ha /* 0x8064EB1C@ha */
/* 80641500  3B C4 EB 1C */	addi r30, r4, lit_3757@l /* 0x8064EB1C@l */
/* 80641504  80 03 06 DC */	lwz r0, 0x6dc(r3)
/* 80641508  2C 00 00 05 */	cmpwi r0, 5
/* 8064150C  41 82 00 CC */	beq lbl_806415D8
/* 80641510  40 80 00 1C */	bge lbl_8064152C
/* 80641514  2C 00 00 01 */	cmpwi r0, 1
/* 80641518  41 82 00 80 */	beq lbl_80641598
/* 8064151C  40 80 01 0C */	bge lbl_80641628
/* 80641520  2C 00 00 00 */	cmpwi r0, 0
/* 80641524  40 80 00 14 */	bge lbl_80641538
/* 80641528  48 00 01 00 */	b lbl_80641628
lbl_8064152C:
/* 8064152C  2C 00 00 07 */	cmpwi r0, 7
/* 80641530  40 80 00 F8 */	bge lbl_80641628
/* 80641534  48 00 00 DC */	b lbl_80641610
lbl_80641538:
/* 80641538  38 00 00 04 */	li r0, 4
/* 8064153C  90 1F 05 5C */	stw r0, 0x55c(r31)
/* 80641540  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 80641544  D0 1F 05 2C */	stfs f0, 0x52c(r31)
/* 80641548  D0 1F 04 FC */	stfs f0, 0x4fc(r31)
/* 8064154C  38 00 00 01 */	li r0, 1
/* 80641550  90 1F 06 DC */	stw r0, 0x6dc(r31)
/* 80641554  38 80 00 14 */	li r4, 0x14
/* 80641558  38 A0 00 00 */	li r5, 0
/* 8064155C  C0 3E 00 5C */	lfs f1, 0x5c(r30)
/* 80641560  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 80641564  4B FF D0 61 */	bl setBck__10daB_ZANT_cFiUcff
/* 80641568  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070412@ha */
/* 8064156C  38 03 04 12 */	addi r0, r3, 0x0412 /* 0x00070412@l */
/* 80641570  90 01 00 08 */	stw r0, 8(r1)
/* 80641574  38 7F 05 F0 */	addi r3, r31, 0x5f0
/* 80641578  38 81 00 08 */	addi r4, r1, 8
/* 8064157C  38 A0 FF FF */	li r5, -1
/* 80641580  81 9F 05 F0 */	lwz r12, 0x5f0(r31)
/* 80641584  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80641588  7D 89 03 A6 */	mtctr r12
/* 8064158C  4E 80 04 21 */	bctrl 
/* 80641590  38 00 00 00 */	li r0, 0
/* 80641594  98 1F 07 02 */	stb r0, 0x702(r31)
lbl_80641598:
/* 80641598  80 7F 05 B4 */	lwz r3, 0x5b4(r31)
/* 8064159C  38 80 00 01 */	li r4, 1
/* 806415A0  88 03 00 11 */	lbz r0, 0x11(r3)
/* 806415A4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 806415A8  40 82 00 18 */	bne lbl_806415C0
/* 806415AC  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 806415B0  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 806415B4  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 806415B8  41 82 00 08 */	beq lbl_806415C0
/* 806415BC  38 80 00 00 */	li r4, 0
lbl_806415C0:
/* 806415C0  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 806415C4  41 82 00 64 */	beq lbl_80641628
/* 806415C8  7F E3 FB 78 */	mr r3, r31
/* 806415CC  38 80 00 00 */	li r4, 0
/* 806415D0  48 00 AB F1 */	bl setBaseActionMode__10daB_ZANT_cFi
/* 806415D4  48 00 00 54 */	b lbl_80641628
lbl_806415D8:
/* 806415D8  38 80 00 0A */	li r4, 0xa
/* 806415DC  38 A0 00 02 */	li r5, 2
/* 806415E0  C0 3E 00 5C */	lfs f1, 0x5c(r30)
/* 806415E4  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 806415E8  4B FF CF DD */	bl setBck__10daB_ZANT_cFiUcff
/* 806415EC  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 806415F0  D0 1F 05 2C */	stfs f0, 0x52c(r31)
/* 806415F4  D0 1F 04 FC */	stfs f0, 0x4fc(r31)
/* 806415F8  38 00 00 00 */	li r0, 0
/* 806415FC  98 1F 07 02 */	stb r0, 0x702(r31)
/* 80641600  38 00 00 14 */	li r0, 0x14
/* 80641604  90 1F 06 E8 */	stw r0, 0x6e8(r31)
/* 80641608  38 00 00 06 */	li r0, 6
/* 8064160C  90 1F 06 DC */	stw r0, 0x6dc(r31)
lbl_80641610:
/* 80641610  80 1F 06 E8 */	lwz r0, 0x6e8(r31)
/* 80641614  2C 00 00 00 */	cmpwi r0, 0
/* 80641618  40 82 00 10 */	bne lbl_80641628
/* 8064161C  7F E3 FB 78 */	mr r3, r31
/* 80641620  38 80 00 00 */	li r4, 0
/* 80641624  48 00 AB 9D */	bl setBaseActionMode__10daB_ZANT_cFi
lbl_80641628:
/* 80641628  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8064162C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80641630  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80641634  7C 08 03 A6 */	mtlr r0
/* 80641638  38 21 00 20 */	addi r1, r1, 0x20
/* 8064163C  4E 80 00 20 */	blr 