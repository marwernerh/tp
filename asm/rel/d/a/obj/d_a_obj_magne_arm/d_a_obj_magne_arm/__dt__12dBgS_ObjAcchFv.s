lbl_805926F0:
/* 805926F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805926F4  7C 08 02 A6 */	mflr r0
/* 805926F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 805926FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80592700  93 C1 00 08 */	stw r30, 8(r1)
/* 80592704  7C 7E 1B 79 */	or. r30, r3, r3
/* 80592708  7C 9F 23 78 */	mr r31, r4
/* 8059270C  41 82 00 38 */	beq lbl_80592744
/* 80592710  3C 80 80 59 */	lis r4, __vt__12dBgS_ObjAcch@ha /* 0x80592CF8@ha */
/* 80592714  38 84 2C F8 */	addi r4, r4, __vt__12dBgS_ObjAcch@l /* 0x80592CF8@l */
/* 80592718  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8059271C  38 04 00 0C */	addi r0, r4, 0xc
/* 80592720  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80592724  38 04 00 18 */	addi r0, r4, 0x18
/* 80592728  90 1E 00 24 */	stw r0, 0x24(r30)
/* 8059272C  38 80 00 00 */	li r4, 0
/* 80592730  4B AE 38 65 */	bl __dt__9dBgS_AcchFv
/* 80592734  7F E0 07 35 */	extsh. r0, r31
/* 80592738  40 81 00 0C */	ble lbl_80592744
/* 8059273C  7F C3 F3 78 */	mr r3, r30
/* 80592740  4B D3 C5 FD */	bl __dl__FPv
lbl_80592744:
/* 80592744  7F C3 F3 78 */	mr r3, r30
/* 80592748  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8059274C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80592750  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80592754  7C 08 03 A6 */	mtlr r0
/* 80592758  38 21 00 10 */	addi r1, r1, 0x10
/* 8059275C  4E 80 00 20 */	blr 
