lbl_80779D98:
/* 80779D98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80779D9C  7C 08 02 A6 */	mflr r0
/* 80779DA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80779DA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80779DA8  7C 7F 1B 79 */	or. r31, r3, r3
/* 80779DAC  41 82 00 10 */	beq lbl_80779DBC
/* 80779DB0  7C 80 07 35 */	extsh. r0, r4
/* 80779DB4  40 81 00 08 */	ble lbl_80779DBC
/* 80779DB8  4B B5 4F 85 */	bl __dl__FPv
lbl_80779DBC:
/* 80779DBC  7F E3 FB 78 */	mr r3, r31
/* 80779DC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80779DC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80779DC8  7C 08 03 A6 */	mtlr r0
/* 80779DCC  38 21 00 10 */	addi r1, r1, 0x10
/* 80779DD0  4E 80 00 20 */	blr 