lbl_805419AC:
/* 805419AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805419B0  7C 08 02 A6 */	mflr r0
/* 805419B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 805419B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805419BC  93 C1 00 08 */	stw r30, 8(r1)
/* 805419C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 805419C4  7C 9F 23 78 */	mr r31, r4
/* 805419C8  41 82 00 38 */	beq lbl_80541A00
/* 805419CC  3C 80 80 54 */	lis r4, __vt__12dBgS_ObjAcch@ha /* 0x80541F8C@ha */
/* 805419D0  38 84 1F 8C */	addi r4, r4, __vt__12dBgS_ObjAcch@l /* 0x80541F8C@l */
/* 805419D4  90 9E 00 10 */	stw r4, 0x10(r30)
/* 805419D8  38 04 00 0C */	addi r0, r4, 0xc
/* 805419DC  90 1E 00 14 */	stw r0, 0x14(r30)
/* 805419E0  38 04 00 18 */	addi r0, r4, 0x18
/* 805419E4  90 1E 00 24 */	stw r0, 0x24(r30)
/* 805419E8  38 80 00 00 */	li r4, 0
/* 805419EC  4B B3 45 A9 */	bl __dt__9dBgS_AcchFv
/* 805419F0  7F E0 07 35 */	extsh. r0, r31
/* 805419F4  40 81 00 0C */	ble lbl_80541A00
/* 805419F8  7F C3 F3 78 */	mr r3, r30
/* 805419FC  4B D8 D3 41 */	bl __dl__FPv
lbl_80541A00:
/* 80541A00  7F C3 F3 78 */	mr r3, r30
/* 80541A04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80541A08  83 C1 00 08 */	lwz r30, 8(r1)
/* 80541A0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80541A10  7C 08 03 A6 */	mtlr r0
/* 80541A14  38 21 00 10 */	addi r1, r1, 0x10
/* 80541A18  4E 80 00 20 */	blr 
