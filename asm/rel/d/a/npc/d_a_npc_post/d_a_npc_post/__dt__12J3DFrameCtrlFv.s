lbl_80AACAEC:
/* 80AACAEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AACAF0  7C 08 02 A6 */	mflr r0
/* 80AACAF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AACAF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80AACAFC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80AACB00  41 82 00 1C */	beq lbl_80AACB1C
/* 80AACB04  3C A0 80 AB */	lis r5, __vt__12J3DFrameCtrl@ha /* 0x80AADA78@ha */
/* 80AACB08  38 05 DA 78 */	addi r0, r5, __vt__12J3DFrameCtrl@l /* 0x80AADA78@l */
/* 80AACB0C  90 1F 00 00 */	stw r0, 0(r31)
/* 80AACB10  7C 80 07 35 */	extsh. r0, r4
/* 80AACB14  40 81 00 08 */	ble lbl_80AACB1C
/* 80AACB18  4B 82 22 25 */	bl __dl__FPv
lbl_80AACB1C:
/* 80AACB1C  7F E3 FB 78 */	mr r3, r31
/* 80AACB20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80AACB24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AACB28  7C 08 03 A6 */	mtlr r0
/* 80AACB2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80AACB30  4E 80 00 20 */	blr 
