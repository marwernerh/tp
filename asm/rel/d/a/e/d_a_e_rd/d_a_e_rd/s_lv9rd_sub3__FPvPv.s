lbl_80512E08:
/* 80512E08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80512E0C  7C 08 02 A6 */	mflr r0
/* 80512E10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80512E14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80512E18  7C 7F 1B 78 */	mr r31, r3
/* 80512E1C  4B B0 5E C5 */	bl fopAc_IsActor__FPv
/* 80512E20  2C 03 00 00 */	cmpwi r3, 0
/* 80512E24  41 82 00 38 */	beq lbl_80512E5C
/* 80512E28  A8 1F 00 08 */	lha r0, 8(r31)
/* 80512E2C  2C 00 01 D4 */	cmpwi r0, 0x1d4
/* 80512E30  40 82 00 2C */	bne lbl_80512E5C
/* 80512E34  88 1F 05 B7 */	lbz r0, 0x5b7(r31)
/* 80512E38  28 00 00 0D */	cmplwi r0, 0xd
/* 80512E3C  41 82 00 0C */	beq lbl_80512E48
/* 80512E40  28 00 00 0E */	cmplwi r0, 0xe
/* 80512E44  40 82 00 18 */	bne lbl_80512E5C
lbl_80512E48:
/* 80512E48  38 00 00 01 */	li r0, 1
/* 80512E4C  98 1F 09 A4 */	stb r0, 0x9a4(r31)
/* 80512E50  3C 60 80 52 */	lis r3, lit_9772@ha /* 0x80518714@ha */
/* 80512E54  C0 03 87 14 */	lfs f0, lit_9772@l(r3)  /* 0x80518714@l */
/* 80512E58  D0 1F 09 80 */	stfs f0, 0x980(r31)
lbl_80512E5C:
/* 80512E5C  38 60 00 00 */	li r3, 0
/* 80512E60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80512E64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80512E68  7C 08 03 A6 */	mtlr r0
/* 80512E6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80512E70  4E 80 00 20 */	blr 
