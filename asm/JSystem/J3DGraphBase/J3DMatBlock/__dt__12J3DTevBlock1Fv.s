lbl_803228F4:
/* 803228F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803228F8  7C 08 02 A6 */	mflr r0
/* 803228FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80322900  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80322904  7C 7F 1B 79 */	or. r31, r3, r3
/* 80322908  41 82 00 30 */	beq lbl_80322938
/* 8032290C  3C 60 80 3D */	lis r3, __vt__12J3DTevBlock1@ha /* 0x803CE37C@ha */
/* 80322910  38 03 E3 7C */	addi r0, r3, __vt__12J3DTevBlock1@l /* 0x803CE37C@l */
/* 80322914  90 1F 00 00 */	stw r0, 0(r31)
/* 80322918  41 82 00 10 */	beq lbl_80322928
/* 8032291C  3C 60 80 3D */	lis r3, __vt__11J3DTevBlock@ha /* 0x803CE958@ha */
/* 80322920  38 03 E9 58 */	addi r0, r3, __vt__11J3DTevBlock@l /* 0x803CE958@l */
/* 80322924  90 1F 00 00 */	stw r0, 0(r31)
lbl_80322928:
/* 80322928  7C 80 07 35 */	extsh. r0, r4
/* 8032292C  40 81 00 0C */	ble lbl_80322938
/* 80322930  7F E3 FB 78 */	mr r3, r31
/* 80322934  4B FA C4 09 */	bl __dl__FPv
lbl_80322938:
/* 80322938  7F E3 FB 78 */	mr r3, r31
/* 8032293C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80322940  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80322944  7C 08 03 A6 */	mtlr r0
/* 80322948  38 21 00 10 */	addi r1, r1, 0x10
/* 8032294C  4E 80 00 20 */	blr 
