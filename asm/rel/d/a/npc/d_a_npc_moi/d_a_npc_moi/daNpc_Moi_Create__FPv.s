lbl_80A798D0:
/* 80A798D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A798D4  7C 08 02 A6 */	mflr r0
/* 80A798D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A798DC  4B FF A8 75 */	bl create__11daNpc_Moi_cFv
/* 80A798E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A798E4  7C 08 03 A6 */	mtlr r0
/* 80A798E8  38 21 00 10 */	addi r1, r1, 0x10
/* 80A798EC  4E 80 00 20 */	blr 
