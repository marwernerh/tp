lbl_805807C4:
/* 805807C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 805807C8  7C 08 02 A6 */	mflr r0
/* 805807CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 805807D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 805807D4  7C 60 1B 78 */	mr r0, r3
/* 805807D8  3C 60 80 58 */	lis r3, ccCylSrc@ha /* 0x805814AC@ha */
/* 805807DC  3B E3 14 AC */	addi r31, r3, ccCylSrc@l /* 0x805814AC@l */
/* 805807E0  1C 64 00 0C */	mulli r3, r4, 0xc
/* 805807E4  38 63 05 B0 */	addi r3, r3, 0x5b0
/* 805807E8  7C 60 1A 14 */	add r3, r0, r3
/* 805807EC  38 81 00 08 */	addi r4, r1, 8
/* 805807F0  4B A9 4B 21 */	bl mDoLib_project__FP3VecP3Vec
/* 805807F4  38 60 00 00 */	li r3, 0
/* 805807F8  C0 41 00 08 */	lfs f2, 8(r1)
/* 805807FC  C0 3F 00 74 */	lfs f1, 0x74(r31)
/* 80580800  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80580804  4C 41 13 82 */	cror 2, 1, 2
/* 80580808  40 82 00 38 */	bne lbl_80580840
/* 8058080C  C0 1F 00 DC */	lfs f0, 0xdc(r31)
/* 80580810  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80580814  4C 40 13 82 */	cror 2, 0, 2
/* 80580818  40 82 00 28 */	bne lbl_80580840
/* 8058081C  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80580820  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80580824  4C 41 13 82 */	cror 2, 1, 2
/* 80580828  40 82 00 18 */	bne lbl_80580840
/* 8058082C  C0 1F 00 E0 */	lfs f0, 0xe0(r31)
/* 80580830  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80580834  4C 40 13 82 */	cror 2, 0, 2
/* 80580838  40 82 00 08 */	bne lbl_80580840
/* 8058083C  38 60 00 01 */	li r3, 1
lbl_80580840:
/* 80580840  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80580844  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80580848  7C 08 03 A6 */	mtlr r0
/* 8058084C  38 21 00 20 */	addi r1, r1, 0x20
/* 80580850  4E 80 00 20 */	blr 
