lbl_80CBE9DC:
/* 80CBE9DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CBE9E0  7C 08 02 A6 */	mflr r0
/* 80CBE9E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CBE9E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80CBE9EC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80CBE9F0  41 82 00 1C */	beq lbl_80CBEA0C
/* 80CBE9F4  3C A0 80 CC */	lis r5, __vt__14mDoHIO_entry_c@ha /* 0x80CBF774@ha */
/* 80CBE9F8  38 05 F7 74 */	addi r0, r5, __vt__14mDoHIO_entry_c@l /* 0x80CBF774@l */
/* 80CBE9FC  90 1F 00 00 */	stw r0, 0(r31)
/* 80CBEA00  7C 80 07 35 */	extsh. r0, r4
/* 80CBEA04  40 81 00 08 */	ble lbl_80CBEA0C
/* 80CBEA08  4B 61 03 35 */	bl __dl__FPv
lbl_80CBEA0C:
/* 80CBEA0C  7F E3 FB 78 */	mr r3, r31
/* 80CBEA10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80CBEA14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CBEA18  7C 08 03 A6 */	mtlr r0
/* 80CBEA1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80CBEA20  4E 80 00 20 */	blr 
