lbl_80225BB8:
/* 80225BB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80225BBC  7C 08 02 A6 */	mflr r0
/* 80225BC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80225BC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80225BC8  7C 7F 1B 78 */	mr r31, r3
/* 80225BCC  3C 80 80 3C */	lis r4, __vt__13COutFontSet_c@ha /* 0x803BFDE8@ha */
/* 80225BD0  38 04 FD E8 */	addi r0, r4, __vt__13COutFontSet_c@l /* 0x803BFDE8@l */
/* 80225BD4  90 03 00 00 */	stw r0, 0(r3)
/* 80225BD8  48 00 00 65 */	bl initialize__13COutFontSet_cFv
/* 80225BDC  7F E3 FB 78 */	mr r3, r31
/* 80225BE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80225BE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80225BE8  7C 08 03 A6 */	mtlr r0
/* 80225BEC  38 21 00 10 */	addi r1, r1, 0x10
/* 80225BF0  4E 80 00 20 */	blr 