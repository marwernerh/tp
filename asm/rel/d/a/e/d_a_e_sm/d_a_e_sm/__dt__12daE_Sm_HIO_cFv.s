lbl_807980E8:
/* 807980E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807980EC  7C 08 02 A6 */	mflr r0
/* 807980F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 807980F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807980F8  7C 7F 1B 79 */	or. r31, r3, r3
/* 807980FC  41 82 00 1C */	beq lbl_80798118
/* 80798100  3C A0 80 7A */	lis r5, __vt__12daE_Sm_HIO_c@ha /* 0x80798968@ha */
/* 80798104  38 05 89 68 */	addi r0, r5, __vt__12daE_Sm_HIO_c@l /* 0x80798968@l */
/* 80798108  90 1F 00 00 */	stw r0, 0(r31)
/* 8079810C  7C 80 07 35 */	extsh. r0, r4
/* 80798110  40 81 00 08 */	ble lbl_80798118
/* 80798114  4B B3 6C 29 */	bl __dl__FPv
lbl_80798118:
/* 80798118  7F E3 FB 78 */	mr r3, r31
/* 8079811C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80798120  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80798124  7C 08 03 A6 */	mtlr r0
/* 80798128  38 21 00 10 */	addi r1, r1, 0x10
/* 8079812C  4E 80 00 20 */	blr 