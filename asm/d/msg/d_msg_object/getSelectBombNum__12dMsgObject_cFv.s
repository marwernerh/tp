lbl_802374D0:
/* 802374D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802374D4  7C 08 02 A6 */	mflr r0
/* 802374D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802374DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802374E0  7C 7F 1B 78 */	mr r31, r3
/* 802374E4  48 00 0F 5D */	bl getSelectCursorPos__12dMsgObject_cFv
/* 802374E8  88 1F 01 93 */	lbz r0, 0x193(r31)
/* 802374EC  28 00 00 00 */	cmplwi r0, 0
/* 802374F0  41 82 00 10 */	beq lbl_80237500
/* 802374F4  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 802374F8  7C 7F 02 14 */	add r3, r31, r0
/* 802374FC  88 63 01 90 */	lbz r3, 0x190(r3)
lbl_80237500:
/* 80237500  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80237504  7C 7F 02 14 */	add r3, r31, r0
/* 80237508  88 63 01 8A */	lbz r3, 0x18a(r3)
/* 8023750C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80237510  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80237514  7C 08 03 A6 */	mtlr r0
/* 80237518  38 21 00 10 */	addi r1, r1, 0x10
/* 8023751C  4E 80 00 20 */	blr 