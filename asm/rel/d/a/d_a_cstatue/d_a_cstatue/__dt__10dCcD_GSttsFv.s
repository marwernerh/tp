lbl_8066469C:
/* 8066469C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806646A0  7C 08 02 A6 */	mflr r0
/* 806646A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 806646A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806646AC  7C 7F 1B 79 */	or. r31, r3, r3
/* 806646B0  41 82 00 30 */	beq lbl_806646E0
/* 806646B4  3C 60 80 66 */	lis r3, __vt__10dCcD_GStts@ha /* 0x80667B14@ha */
/* 806646B8  38 03 7B 14 */	addi r0, r3, __vt__10dCcD_GStts@l /* 0x80667B14@l */
/* 806646BC  90 1F 00 00 */	stw r0, 0(r31)
/* 806646C0  41 82 00 10 */	beq lbl_806646D0
/* 806646C4  3C 60 80 66 */	lis r3, __vt__10cCcD_GStts@ha /* 0x80667B08@ha */
/* 806646C8  38 03 7B 08 */	addi r0, r3, __vt__10cCcD_GStts@l /* 0x80667B08@l */
/* 806646CC  90 1F 00 00 */	stw r0, 0(r31)
lbl_806646D0:
/* 806646D0  7C 80 07 35 */	extsh. r0, r4
/* 806646D4  40 81 00 0C */	ble lbl_806646E0
/* 806646D8  7F E3 FB 78 */	mr r3, r31
/* 806646DC  4B C6 A6 61 */	bl __dl__FPv
lbl_806646E0:
/* 806646E0  7F E3 FB 78 */	mr r3, r31
/* 806646E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806646E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806646EC  7C 08 03 A6 */	mtlr r0
/* 806646F0  38 21 00 10 */	addi r1, r1, 0x10
/* 806646F4  4E 80 00 20 */	blr 