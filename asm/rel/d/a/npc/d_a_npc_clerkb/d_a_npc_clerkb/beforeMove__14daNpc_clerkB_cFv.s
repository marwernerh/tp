lbl_8099774C:
/* 8099774C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80997750  7C 08 02 A6 */	mflr r0
/* 80997754  90 01 00 14 */	stw r0, 0x14(r1)
/* 80997758  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8099775C  93 C1 00 08 */	stw r30, 8(r1)
/* 80997760  7C 7E 1B 78 */	mr r30, r3
/* 80997764  3B E0 00 00 */	li r31, 0
/* 80997768  88 03 0E 25 */	lbz r0, 0xe25(r3)
/* 8099776C  28 00 00 00 */	cmplwi r0, 0
/* 80997770  40 82 00 1C */	bne lbl_8099778C
/* 80997774  4B 69 82 E1 */	bl dComIfGs_wolfeye_effect_check__Fv
/* 80997778  2C 03 00 00 */	cmpwi r3, 0
/* 8099777C  40 82 00 14 */	bne lbl_80997790
/* 80997780  88 1E 0A 89 */	lbz r0, 0xa89(r30)
/* 80997784  28 00 00 00 */	cmplwi r0, 0
/* 80997788  41 82 00 08 */	beq lbl_80997790
lbl_8099778C:
/* 8099778C  3B E0 00 01 */	li r31, 1
lbl_80997790:
/* 80997790  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80997794  40 82 00 10 */	bne lbl_809977A4
/* 80997798  88 1E 0E 2B */	lbz r0, 0xe2b(r30)
/* 8099779C  28 00 00 00 */	cmplwi r0, 0
/* 809977A0  41 82 00 0C */	beq lbl_809977AC
lbl_809977A4:
/* 809977A4  38 00 00 00 */	li r0, 0
/* 809977A8  90 1E 05 5C */	stw r0, 0x55c(r30)
lbl_809977AC:
/* 809977AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809977B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 809977B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809977B8  7C 08 03 A6 */	mtlr r0
/* 809977BC  38 21 00 10 */	addi r1, r1, 0x10
/* 809977C0  4E 80 00 20 */	blr 