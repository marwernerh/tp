lbl_80998994:
/* 80998994  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80998998  7C 08 02 A6 */	mflr r0
/* 8099899C  90 01 00 14 */	stw r0, 0x14(r1)
/* 809989A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809989A4  7C 7F 1B 79 */	or. r31, r3, r3
/* 809989A8  41 82 00 1C */	beq lbl_809989C4
/* 809989AC  3C A0 80 9A */	lis r5, __vt__10cCcD_GStts@ha /* 0x80999F00@ha */
/* 809989B0  38 05 9F 00 */	addi r0, r5, __vt__10cCcD_GStts@l /* 0x80999F00@l */
/* 809989B4  90 1F 00 00 */	stw r0, 0(r31)
/* 809989B8  7C 80 07 35 */	extsh. r0, r4
/* 809989BC  40 81 00 08 */	ble lbl_809989C4
/* 809989C0  4B 93 63 7D */	bl __dl__FPv
lbl_809989C4:
/* 809989C4  7F E3 FB 78 */	mr r3, r31
/* 809989C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809989CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809989D0  7C 08 03 A6 */	mtlr r0
/* 809989D4  38 21 00 10 */	addi r1, r1, 0x10
/* 809989D8  4E 80 00 20 */	blr 
