lbl_8024205C:
/* 8024205C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80242060  7C 08 02 A6 */	mflr r0
/* 80242064  90 01 00 14 */	stw r0, 0x14(r1)
/* 80242068  80 63 00 08 */	lwz r3, 8(r3)
/* 8024206C  48 01 37 65 */	bl setAlphaRate__13CPaneMgrAlphaFf
/* 80242070  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80242074  7C 08 03 A6 */	mtlr r0
/* 80242078  38 21 00 10 */	addi r1, r1, 0x10
/* 8024207C  4E 80 00 20 */	blr 