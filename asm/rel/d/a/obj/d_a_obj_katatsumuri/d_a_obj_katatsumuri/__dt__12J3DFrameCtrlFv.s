lbl_80C39E80:
/* 80C39E80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C39E84  7C 08 02 A6 */	mflr r0
/* 80C39E88  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C39E8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C39E90  7C 7F 1B 79 */	or. r31, r3, r3
/* 80C39E94  41 82 00 1C */	beq lbl_80C39EB0
/* 80C39E98  3C A0 80 C4 */	lis r5, __vt__12J3DFrameCtrl@ha /* 0x80C3C814@ha */
/* 80C39E9C  38 05 C8 14 */	addi r0, r5, __vt__12J3DFrameCtrl@l /* 0x80C3C814@l */
/* 80C39EA0  90 1F 00 00 */	stw r0, 0(r31)
/* 80C39EA4  7C 80 07 35 */	extsh. r0, r4
/* 80C39EA8  40 81 00 08 */	ble lbl_80C39EB0
/* 80C39EAC  4B 69 4E 91 */	bl __dl__FPv
lbl_80C39EB0:
/* 80C39EB0  7F E3 FB 78 */	mr r3, r31
/* 80C39EB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C39EB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C39EBC  7C 08 03 A6 */	mtlr r0
/* 80C39EC0  38 21 00 10 */	addi r1, r1, 0x10
/* 80C39EC4  4E 80 00 20 */	blr 
