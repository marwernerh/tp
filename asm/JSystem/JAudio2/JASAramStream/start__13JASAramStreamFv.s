lbl_80296618:
/* 80296618  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029661C  7C 08 02 A6 */	mflr r0
/* 80296620  90 01 00 14 */	stw r0, 0x14(r1)
/* 80296624  38 80 00 00 */	li r4, 0
/* 80296628  38 A0 00 00 */	li r5, 0
/* 8029662C  48 0A 83 C9 */	bl OSSendMessage
/* 80296630  30 03 FF FF */	addic r0, r3, -1
/* 80296634  7C 00 19 10 */	subfe r0, r0, r3
/* 80296638  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8029663C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80296640  7C 08 03 A6 */	mtlr r0
/* 80296644  38 21 00 10 */	addi r1, r1, 0x10
/* 80296648  4E 80 00 20 */	blr 