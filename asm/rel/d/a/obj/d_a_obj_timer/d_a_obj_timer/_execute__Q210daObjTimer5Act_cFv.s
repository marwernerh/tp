lbl_804854BC:
/* 804854BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804854C0  7C 08 02 A6 */	mflr r0
/* 804854C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 804854C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804854CC  93 C1 00 08 */	stw r30, 8(r1)
/* 804854D0  7C 7E 1B 78 */	mr r30, r3
/* 804854D4  3C 60 80 48 */	lis r3, cNullVec__6Z2Calc@ha /* 0x80485648@ha */
/* 804854D8  3B E3 56 48 */	addi r31, r3, cNullVec__6Z2Calc@l /* 0x80485648@l */
/* 804854DC  3C 60 80 48 */	lis r3, data_804856E8@ha /* 0x804856E8@ha */
/* 804854E0  38 A3 56 E8 */	addi r5, r3, data_804856E8@l /* 0x804856E8@l */
/* 804854E4  88 05 00 00 */	lbz r0, 0(r5)
/* 804854E8  7C 00 07 75 */	extsb. r0, r0
/* 804854EC  40 82 00 40 */	bne lbl_8048552C
/* 804854F0  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 804854F4  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 804854F8  90 7F 00 38 */	stw r3, 0x38(r31)
/* 804854FC  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 80485500  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 80485504  90 1F 00 40 */	stw r0, 0x40(r31)
/* 80485508  38 9F 00 38 */	addi r4, r31, 0x38
/* 8048550C  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 80485510  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 80485514  90 64 00 0C */	stw r3, 0xc(r4)
/* 80485518  90 04 00 10 */	stw r0, 0x10(r4)
/* 8048551C  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 80485520  90 04 00 14 */	stw r0, 0x14(r4)
/* 80485524  38 00 00 01 */	li r0, 1
/* 80485528  98 05 00 00 */	stb r0, 0(r5)
lbl_8048552C:
/* 8048552C  7F C3 F3 78 */	mr r3, r30
/* 80485530  38 80 00 08 */	li r4, 8
/* 80485534  38 A0 00 08 */	li r5, 8
/* 80485538  48 00 00 E5 */	bl func_8048561C
/* 8048553C  7C 64 1B 78 */	mr r4, r3
/* 80485540  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80485544  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80485548  88 1E 04 BA */	lbz r0, 0x4ba(r30)
/* 8048554C  7C 05 07 74 */	extsb r5, r0
/* 80485550  4B BA FE 11 */	bl isSwitch__10dSv_info_cCFii
/* 80485554  2C 03 00 00 */	cmpwi r3, 0
/* 80485558  41 82 00 14 */	beq lbl_8048556C
/* 8048555C  7F C3 F3 78 */	mr r3, r30
/* 80485560  4B B9 47 1D */	bl fopAcM_delete__FP10fopAc_ac_c
/* 80485564  38 60 00 01 */	li r3, 1
/* 80485568  48 00 00 24 */	b lbl_8048558C
lbl_8048556C:
/* 8048556C  7F C3 F3 78 */	mr r3, r30
/* 80485570  80 1E 05 68 */	lwz r0, 0x568(r30)
/* 80485574  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80485578  39 9F 00 38 */	addi r12, r31, 0x38
/* 8048557C  7D 8C 02 14 */	add r12, r12, r0
/* 80485580  4B ED CB 05 */	bl __ptmf_scall
/* 80485584  60 00 00 00 */	nop 
/* 80485588  38 60 00 01 */	li r3, 1
lbl_8048558C:
/* 8048558C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80485590  83 C1 00 08 */	lwz r30, 8(r1)
/* 80485594  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80485598  7C 08 03 A6 */	mtlr r0
/* 8048559C  38 21 00 10 */	addi r1, r1, 0x10
/* 804855A0  4E 80 00 20 */	blr 