lbl_8050D1F4:
/* 8050D1F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8050D1F8  7C 08 02 A6 */	mflr r0
/* 8050D1FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8050D200  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8050D204  93 C1 00 08 */	stw r30, 8(r1)
/* 8050D208  7C 7E 1B 78 */	mr r30, r3
/* 8050D20C  7C 9F 23 78 */	mr r31, r4
/* 8050D210  4B B0 BA D1 */	bl fopAc_IsActor__FPv
/* 8050D214  2C 03 00 00 */	cmpwi r3, 0
/* 8050D218  41 82 00 2C */	beq lbl_8050D244
/* 8050D21C  A8 1E 00 08 */	lha r0, 8(r30)
/* 8050D220  2C 00 01 D4 */	cmpwi r0, 0x1d4
/* 8050D224  40 82 00 20 */	bne lbl_8050D244
/* 8050D228  7C 1E F8 40 */	cmplw r30, r31
/* 8050D22C  41 82 00 18 */	beq lbl_8050D244
/* 8050D230  A8 1E 09 72 */	lha r0, 0x972(r30)
/* 8050D234  2C 00 00 1A */	cmpwi r0, 0x1a
/* 8050D238  40 82 00 0C */	bne lbl_8050D244
/* 8050D23C  7F C3 F3 78 */	mr r3, r30
/* 8050D240  48 00 00 08 */	b lbl_8050D248
lbl_8050D244:
/* 8050D244  38 60 00 00 */	li r3, 0
lbl_8050D248:
/* 8050D248  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8050D24C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8050D250  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8050D254  7C 08 03 A6 */	mtlr r0
/* 8050D258  38 21 00 10 */	addi r1, r1, 0x10
/* 8050D25C  4E 80 00 20 */	blr 