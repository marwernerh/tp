lbl_80574268:
/* 80574268  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8057426C  7C 08 02 A6 */	mflr r0
/* 80574270  90 01 00 14 */	stw r0, 0x14(r1)
/* 80574274  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80574278  93 C1 00 08 */	stw r30, 8(r1)
/* 8057427C  7C 7E 1B 78 */	mr r30, r3
/* 80574280  80 03 0B 58 */	lwz r0, 0xb58(r3)
/* 80574284  2C 00 00 01 */	cmpwi r0, 1
/* 80574288  41 82 00 28 */	beq lbl_805742B0
/* 8057428C  83 FE 0B 5C */	lwz r31, 0xb5c(r30)
/* 80574290  38 7E 0B 50 */	addi r3, r30, 0xb50
/* 80574294  4B BD 16 05 */	bl initialize__22daNpcT_MotionSeqMngr_cFv
/* 80574298  93 FE 0B 5C */	stw r31, 0xb5c(r30)
/* 8057429C  38 00 00 01 */	li r0, 1
/* 805742A0  90 1E 0B 58 */	stw r0, 0xb58(r30)
/* 805742A4  3C 60 80 57 */	lis r3, lit_4541@ha /* 0x80576648@ha */
/* 805742A8  C0 03 66 48 */	lfs f0, lit_4541@l(r3)  /* 0x80576648@l */
/* 805742AC  D0 1E 0B 68 */	stfs f0, 0xb68(r30)
lbl_805742B0:
/* 805742B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 805742B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 805742B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805742BC  7C 08 03 A6 */	mtlr r0
/* 805742C0  38 21 00 10 */	addi r1, r1, 0x10
/* 805742C4  4E 80 00 20 */	blr 
