lbl_80690648:
/* 80690648  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8069064C  7C 08 02 A6 */	mflr r0
/* 80690650  90 01 00 14 */	stw r0, 0x14(r1)
/* 80690654  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80690658  93 C1 00 08 */	stw r30, 8(r1)
/* 8069065C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80690660  7C 9F 23 78 */	mr r31, r4
/* 80690664  41 82 00 94 */	beq lbl_806906F8
/* 80690668  3C 60 80 3B */	lis r3, __vt__8dCcD_Sph@ha /* 0x803ABFC0@ha */
/* 8069066C  38 63 BF C0 */	addi r3, r3, __vt__8dCcD_Sph@l /* 0x803ABFC0@l */
/* 80690670  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 80690674  38 03 00 2C */	addi r0, r3, 0x2c
/* 80690678  90 1E 01 20 */	stw r0, 0x120(r30)
/* 8069067C  38 03 00 84 */	addi r0, r3, 0x84
/* 80690680  90 1E 01 34 */	stw r0, 0x134(r30)
/* 80690684  34 1E 01 04 */	addic. r0, r30, 0x104
/* 80690688  41 82 00 54 */	beq lbl_806906DC
/* 8069068C  3C 60 80 3C */	lis r3, __vt__12cCcD_SphAttr@ha /* 0x803C3540@ha */
/* 80690690  38 63 35 40 */	addi r3, r3, __vt__12cCcD_SphAttr@l /* 0x803C3540@l */
/* 80690694  90 7E 01 20 */	stw r3, 0x120(r30)
/* 80690698  38 03 00 58 */	addi r0, r3, 0x58
/* 8069069C  90 1E 01 34 */	stw r0, 0x134(r30)
/* 806906A0  34 1E 01 24 */	addic. r0, r30, 0x124
/* 806906A4  41 82 00 10 */	beq lbl_806906B4
/* 806906A8  3C 60 80 69 */	lis r3, __vt__8cM3dGSph@ha /* 0x8069103C@ha */
/* 806906AC  38 03 10 3C */	addi r0, r3, __vt__8cM3dGSph@l /* 0x8069103C@l */
/* 806906B0  90 1E 01 34 */	stw r0, 0x134(r30)
lbl_806906B4:
/* 806906B4  34 1E 01 04 */	addic. r0, r30, 0x104
/* 806906B8  41 82 00 24 */	beq lbl_806906DC
/* 806906BC  3C 60 80 3C */	lis r3, __vt__14cCcD_ShapeAttr@ha /* 0x803C36D0@ha */
/* 806906C0  38 03 36 D0 */	addi r0, r3, __vt__14cCcD_ShapeAttr@l /* 0x803C36D0@l */
/* 806906C4  90 1E 01 20 */	stw r0, 0x120(r30)
/* 806906C8  34 1E 01 04 */	addic. r0, r30, 0x104
/* 806906CC  41 82 00 10 */	beq lbl_806906DC
/* 806906D0  3C 60 80 69 */	lis r3, __vt__8cM3dGAab@ha /* 0x80691048@ha */
/* 806906D4  38 03 10 48 */	addi r0, r3, __vt__8cM3dGAab@l /* 0x80691048@l */
/* 806906D8  90 1E 01 1C */	stw r0, 0x11c(r30)
lbl_806906DC:
/* 806906DC  7F C3 F3 78 */	mr r3, r30
/* 806906E0  38 80 00 00 */	li r4, 0
/* 806906E4  4B 9F 3A 01 */	bl __dt__12dCcD_GObjInfFv
/* 806906E8  7F E0 07 35 */	extsh. r0, r31
/* 806906EC  40 81 00 0C */	ble lbl_806906F8
/* 806906F0  7F C3 F3 78 */	mr r3, r30
/* 806906F4  4B C3 E6 49 */	bl __dl__FPv
lbl_806906F8:
/* 806906F8  7F C3 F3 78 */	mr r3, r30
/* 806906FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80690700  83 C1 00 08 */	lwz r30, 8(r1)
/* 80690704  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80690708  7C 08 03 A6 */	mtlr r0
/* 8069070C  38 21 00 10 */	addi r1, r1, 0x10
/* 80690710  4E 80 00 20 */	blr 
