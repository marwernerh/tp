lbl_80042914:
/* 80042914  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80042918  7C 08 02 A6 */	mflr r0
/* 8004291C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80042920  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80042924  93 C1 00 08 */	stw r30, 8(r1)
/* 80042928  7C 7E 1B 78 */	mr r30, r3
/* 8004292C  7C DF 33 78 */	mr r31, r6
/* 80042930  90 A3 01 00 */	stw r5, 0x100(r3)
/* 80042934  48 00 09 95 */	bl getPId__14dEvt_control_cFPv
/* 80042938  90 7E 01 04 */	stw r3, 0x104(r30)
/* 8004293C  93 FE 01 0C */	stw r31, 0x10c(r30)
/* 80042940  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80042944  83 C1 00 08 */	lwz r30, 8(r1)
/* 80042948  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004294C  7C 08 03 A6 */	mtlr r0
/* 80042950  38 21 00 10 */	addi r1, r1, 0x10
/* 80042954  4E 80 00 20 */	blr 