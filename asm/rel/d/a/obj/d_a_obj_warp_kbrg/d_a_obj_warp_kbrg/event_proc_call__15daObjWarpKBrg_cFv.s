lbl_80D27890:
/* 80D27890  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D27894  7C 08 02 A6 */	mflr r0
/* 80D27898  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D2789C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D278A0  7C 7F 1B 78 */	mr r31, r3
/* 80D278A4  3C 60 80 D3 */	lis r3, cNullVec__6Z2Calc@ha /* 0x80D29710@ha */
/* 80D278A8  38 A3 97 10 */	addi r5, r3, cNullVec__6Z2Calc@l /* 0x80D29710@l */
/* 80D278AC  3C 60 80 D3 */	lis r3, data_80D29928@ha /* 0x80D29928@ha */
/* 80D278B0  38 83 99 28 */	addi r4, r3, data_80D29928@l /* 0x80D29928@l */
/* 80D278B4  88 04 00 00 */	lbz r0, 0(r4)
/* 80D278B8  7C 00 07 75 */	extsb. r0, r0
/* 80D278BC  40 82 01 18 */	bne lbl_80D279D4
/* 80D278C0  80 65 00 38 */	lwz r3, 0x38(r5)
/* 80D278C4  80 05 00 3C */	lwz r0, 0x3c(r5)
/* 80D278C8  90 65 00 BC */	stw r3, 0xbc(r5)
/* 80D278CC  90 05 00 C0 */	stw r0, 0xc0(r5)
/* 80D278D0  80 05 00 40 */	lwz r0, 0x40(r5)
/* 80D278D4  90 05 00 C4 */	stw r0, 0xc4(r5)
/* 80D278D8  38 65 00 BC */	addi r3, r5, 0xbc
/* 80D278DC  80 C5 00 44 */	lwz r6, 0x44(r5)
/* 80D278E0  80 05 00 48 */	lwz r0, 0x48(r5)
/* 80D278E4  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80D278E8  90 03 00 10 */	stw r0, 0x10(r3)
/* 80D278EC  80 05 00 4C */	lwz r0, 0x4c(r5)
/* 80D278F0  90 03 00 14 */	stw r0, 0x14(r3)
/* 80D278F4  80 C5 00 50 */	lwz r6, 0x50(r5)
/* 80D278F8  80 05 00 54 */	lwz r0, 0x54(r5)
/* 80D278FC  90 C3 00 18 */	stw r6, 0x18(r3)
/* 80D27900  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80D27904  80 05 00 58 */	lwz r0, 0x58(r5)
/* 80D27908  90 03 00 20 */	stw r0, 0x20(r3)
/* 80D2790C  80 C5 00 5C */	lwz r6, 0x5c(r5)
/* 80D27910  80 05 00 60 */	lwz r0, 0x60(r5)
/* 80D27914  90 C3 00 24 */	stw r6, 0x24(r3)
/* 80D27918  90 03 00 28 */	stw r0, 0x28(r3)
/* 80D2791C  80 05 00 64 */	lwz r0, 0x64(r5)
/* 80D27920  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80D27924  80 C5 00 68 */	lwz r6, 0x68(r5)
/* 80D27928  80 05 00 6C */	lwz r0, 0x6c(r5)
/* 80D2792C  90 C3 00 30 */	stw r6, 0x30(r3)
/* 80D27930  90 03 00 34 */	stw r0, 0x34(r3)
/* 80D27934  80 05 00 70 */	lwz r0, 0x70(r5)
/* 80D27938  90 03 00 38 */	stw r0, 0x38(r3)
/* 80D2793C  80 C5 00 74 */	lwz r6, 0x74(r5)
/* 80D27940  80 05 00 78 */	lwz r0, 0x78(r5)
/* 80D27944  90 C3 00 3C */	stw r6, 0x3c(r3)
/* 80D27948  90 03 00 40 */	stw r0, 0x40(r3)
/* 80D2794C  80 05 00 7C */	lwz r0, 0x7c(r5)
/* 80D27950  90 03 00 44 */	stw r0, 0x44(r3)
/* 80D27954  80 C5 00 80 */	lwz r6, 0x80(r5)
/* 80D27958  80 05 00 84 */	lwz r0, 0x84(r5)
/* 80D2795C  90 C3 00 48 */	stw r6, 0x48(r3)
/* 80D27960  90 03 00 4C */	stw r0, 0x4c(r3)
/* 80D27964  80 05 00 88 */	lwz r0, 0x88(r5)
/* 80D27968  90 03 00 50 */	stw r0, 0x50(r3)
/* 80D2796C  80 C5 00 8C */	lwz r6, 0x8c(r5)
/* 80D27970  80 05 00 90 */	lwz r0, 0x90(r5)
/* 80D27974  90 C3 00 54 */	stw r6, 0x54(r3)
/* 80D27978  90 03 00 58 */	stw r0, 0x58(r3)
/* 80D2797C  80 05 00 94 */	lwz r0, 0x94(r5)
/* 80D27980  90 03 00 5C */	stw r0, 0x5c(r3)
/* 80D27984  80 C5 00 98 */	lwz r6, 0x98(r5)
/* 80D27988  80 05 00 9C */	lwz r0, 0x9c(r5)
/* 80D2798C  90 C3 00 60 */	stw r6, 0x60(r3)
/* 80D27990  90 03 00 64 */	stw r0, 0x64(r3)
/* 80D27994  80 05 00 A0 */	lwz r0, 0xa0(r5)
/* 80D27998  90 03 00 68 */	stw r0, 0x68(r3)
/* 80D2799C  80 C5 00 A4 */	lwz r6, 0xa4(r5)
/* 80D279A0  80 05 00 A8 */	lwz r0, 0xa8(r5)
/* 80D279A4  90 C3 00 6C */	stw r6, 0x6c(r3)
/* 80D279A8  90 03 00 70 */	stw r0, 0x70(r3)
/* 80D279AC  80 05 00 AC */	lwz r0, 0xac(r5)
/* 80D279B0  90 03 00 74 */	stw r0, 0x74(r3)
/* 80D279B4  80 C5 00 B0 */	lwz r6, 0xb0(r5)
/* 80D279B8  80 05 00 B4 */	lwz r0, 0xb4(r5)
/* 80D279BC  90 C3 00 78 */	stw r6, 0x78(r3)
/* 80D279C0  90 03 00 7C */	stw r0, 0x7c(r3)
/* 80D279C4  80 05 00 B8 */	lwz r0, 0xb8(r5)
/* 80D279C8  90 03 00 80 */	stw r0, 0x80(r3)
/* 80D279CC  38 00 00 01 */	li r0, 1
/* 80D279D0  98 04 00 00 */	stb r0, 0(r4)
lbl_80D279D4:
/* 80D279D4  38 00 00 00 */	li r0, 0
/* 80D279D8  90 1F 05 5C */	stw r0, 0x55c(r31)
/* 80D279DC  88 7F 06 9B */	lbz r3, 0x69b(r31)
/* 80D279E0  28 03 00 00 */	cmplwi r3, 0
/* 80D279E4  41 82 00 0C */	beq lbl_80D279F0
/* 80D279E8  38 03 FF FF */	addi r0, r3, -1
/* 80D279EC  98 1F 06 9B */	stb r0, 0x69b(r31)
lbl_80D279F0:
/* 80D279F0  7F E3 FB 78 */	mr r3, r31
/* 80D279F4  88 1F 05 CA */	lbz r0, 0x5ca(r31)
/* 80D279F8  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80D279FC  39 85 00 BC */	addi r12, r5, 0xbc
/* 80D27A00  7D 8C 02 14 */	add r12, r12, r0
/* 80D27A04  4B 63 A6 81 */	bl __ptmf_scall
/* 80D27A08  60 00 00 00 */	nop 
/* 80D27A0C  A0 1F 00 FA */	lhz r0, 0xfa(r31)
/* 80D27A10  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 80D27A14  2C 00 00 01 */	cmpwi r0, 1
/* 80D27A18  41 82 00 0C */	beq lbl_80D27A24
/* 80D27A1C  38 00 00 00 */	li r0, 0
/* 80D27A20  98 1F 06 9A */	stb r0, 0x69a(r31)
lbl_80D27A24:
/* 80D27A24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D27A28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D27A2C  7C 08 03 A6 */	mtlr r0
/* 80D27A30  38 21 00 10 */	addi r1, r1, 0x10
/* 80D27A34  4E 80 00 20 */	blr 