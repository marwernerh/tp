lbl_80537A1C:
/* 80537A1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80537A20  7C 08 02 A6 */	mflr r0
/* 80537A24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80537A28  7C 60 1B 78 */	mr r0, r3
/* 80537A2C  2C 04 00 00 */	cmpwi r4, 0
/* 80537A30  40 82 00 30 */	bne lbl_80537A60
/* 80537A34  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 80537A38  38 63 4A C8 */	addi r3, r3, j3dSys@l /* 0x80434AC8@l */
/* 80537A3C  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 80537A40  80 65 00 14 */	lwz r3, 0x14(r5)
/* 80537A44  28 03 00 00 */	cmplwi r3, 0
/* 80537A48  41 82 00 18 */	beq lbl_80537A60
/* 80537A4C  7C 04 03 78 */	mr r4, r0
/* 80537A50  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80537A54  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80537A58  7D 89 03 A6 */	mtctr r12
/* 80537A5C  4E 80 04 21 */	bctrl 
lbl_80537A60:
/* 80537A60  38 60 00 01 */	li r3, 1
/* 80537A64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80537A68  7C 08 03 A6 */	mtlr r0
/* 80537A6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80537A70  4E 80 00 20 */	blr 
