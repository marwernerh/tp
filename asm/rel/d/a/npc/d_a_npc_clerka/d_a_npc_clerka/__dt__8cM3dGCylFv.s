lbl_80994968:
/* 80994968  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8099496C  7C 08 02 A6 */	mflr r0
/* 80994970  90 01 00 14 */	stw r0, 0x14(r1)
/* 80994974  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80994978  7C 7F 1B 79 */	or. r31, r3, r3
/* 8099497C  41 82 00 1C */	beq lbl_80994998
/* 80994980  3C A0 80 99 */	lis r5, __vt__8cM3dGCyl@ha /* 0x80995D30@ha */
/* 80994984  38 05 5D 30 */	addi r0, r5, __vt__8cM3dGCyl@l /* 0x80995D30@l */
/* 80994988  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8099498C  7C 80 07 35 */	extsh. r0, r4
/* 80994990  40 81 00 08 */	ble lbl_80994998
/* 80994994  4B 93 A3 A9 */	bl __dl__FPv
lbl_80994998:
/* 80994998  7F E3 FB 78 */	mr r3, r31
/* 8099499C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809949A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809949A4  7C 08 03 A6 */	mtlr r0
/* 809949A8  38 21 00 10 */	addi r1, r1, 0x10
/* 809949AC  4E 80 00 20 */	blr 
