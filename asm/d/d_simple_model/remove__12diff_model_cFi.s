lbl_80049210:
/* 80049210  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80049214  7C 08 02 A6 */	mflr r0
/* 80049218  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004921C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80049220  7C 7F 1B 78 */	mr r31, r3
/* 80049224  80 63 00 08 */	lwz r3, 8(r3)
/* 80049228  38 03 FF FF */	addi r0, r3, -1
/* 8004922C  90 1F 00 08 */	stw r0, 8(r31)
/* 80049230  80 1F 00 08 */	lwz r0, 8(r31)
/* 80049234  2C 00 00 00 */	cmpwi r0, 0
/* 80049238  41 82 00 0C */	beq lbl_80049244
/* 8004923C  2C 04 00 00 */	cmpwi r4, 0
/* 80049240  41 82 00 1C */	beq lbl_8004925C
lbl_80049244:
/* 80049244  80 7F 00 00 */	lwz r3, 0(r31)
/* 80049248  28 03 00 00 */	cmplwi r3, 0
/* 8004924C  41 82 00 10 */	beq lbl_8004925C
/* 80049250  4B FC 5F 3D */	bl mDoExt_destroySolidHeap__FP12JKRSolidHeap
/* 80049254  7F E3 FB 78 */	mr r3, r31
/* 80049258  48 00 01 11 */	bl init__12diff_model_cFv
lbl_8004925C:
/* 8004925C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80049260  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80049264  7C 08 03 A6 */	mtlr r0
/* 80049268  38 21 00 10 */	addi r1, r1, 0x10
/* 8004926C  4E 80 00 20 */	blr 