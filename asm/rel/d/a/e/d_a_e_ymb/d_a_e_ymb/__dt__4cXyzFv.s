lbl_808164B4:
/* 808164B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 808164B8  7C 08 02 A6 */	mflr r0
/* 808164BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 808164C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 808164C4  7C 7F 1B 79 */	or. r31, r3, r3
/* 808164C8  41 82 00 10 */	beq lbl_808164D8
/* 808164CC  7C 80 07 35 */	extsh. r0, r4
/* 808164D0  40 81 00 08 */	ble lbl_808164D8
/* 808164D4  4B AB 88 69 */	bl __dl__FPv
lbl_808164D8:
/* 808164D8  7F E3 FB 78 */	mr r3, r31
/* 808164DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 808164E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 808164E4  7C 08 03 A6 */	mtlr r0
/* 808164E8  38 21 00 10 */	addi r1, r1, 0x10
/* 808164EC  4E 80 00 20 */	blr 