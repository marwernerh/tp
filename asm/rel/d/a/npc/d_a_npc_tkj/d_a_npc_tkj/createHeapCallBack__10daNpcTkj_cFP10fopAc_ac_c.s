lbl_80574058:
/* 80574058  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8057405C  7C 08 02 A6 */	mflr r0
/* 80574060  90 01 00 14 */	stw r0, 0x14(r1)
/* 80574064  4B FF FA B5 */	bl CreateHeap__10daNpcTkj_cFv
/* 80574068  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8057406C  7C 08 03 A6 */	mtlr r0
/* 80574070  38 21 00 10 */	addi r1, r1, 0x10
/* 80574074  4E 80 00 20 */	blr 