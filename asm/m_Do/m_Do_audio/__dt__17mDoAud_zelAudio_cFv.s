lbl_80007368:
/* 80007368  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000736C  7C 08 02 A6 */	mflr r0
/* 80007370  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007374  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80007378  93 C1 00 08 */	stw r30, 8(r1)
/* 8000737C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80007380  7C 9F 23 78 */	mr r31, r4
/* 80007384  41 82 00 28 */	beq lbl_800073AC
/* 80007388  3C 80 80 3A */	lis r4, __vt__17mDoAud_zelAudio_c@ha /* 0x803A2F40@ha */
/* 8000738C  38 04 2F 40 */	addi r0, r4, __vt__17mDoAud_zelAudio_c@l /* 0x803A2F40@l */
/* 80007390  90 1E 05 14 */	stw r0, 0x514(r30)
/* 80007394  38 80 00 00 */	li r4, 0
/* 80007398  48 00 00 31 */	bl __dt__10Z2AudioMgrFv
/* 8000739C  7F E0 07 35 */	extsh. r0, r31
/* 800073A0  40 81 00 0C */	ble lbl_800073AC
/* 800073A4  7F C3 F3 78 */	mr r3, r30
/* 800073A8  48 2C 79 95 */	bl __dl__FPv
lbl_800073AC:
/* 800073AC  7F C3 F3 78 */	mr r3, r30
/* 800073B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800073B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 800073B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800073BC  7C 08 03 A6 */	mtlr r0
/* 800073C0  38 21 00 10 */	addi r1, r1, 0x10
/* 800073C4  4E 80 00 20 */	blr 
