lbl_80309FDC:
/* 80309FDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80309FE0  7C 08 02 A6 */	mflr r0
/* 80309FE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80309FE8  7C 85 23 78 */	mr r5, r4
/* 80309FEC  80 83 00 04 */	lwz r4, 4(r3)
/* 80309FF0  48 00 00 15 */	bl setAnmTevReg__19J2DAnmKeyLoader_v15FP15J2DAnmTevRegKeyPC19J3DAnmTevRegKeyData
/* 80309FF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80309FF8  7C 08 03 A6 */	mtlr r0
/* 80309FFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8030A000  4E 80 00 20 */	blr 
