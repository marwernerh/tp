.include "macros.inc"

.section .text, "ax" # 80271cd0


.global JFWSystem_NS_firstInit
JFWSystem_NS_firstInit:
/* 80271CD0 0026EC10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80271CD4 0026EC14  7C 08 02 A6 */	mflr r0
/* 80271CD8 0026EC18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80271CDC 0026EC1C  48 0C 82 85 */	bl OSInit
/* 80271CE0 0026EC20  48 0D 74 11 */	bl DVDInit
/* 80271CE4 0026EC24  80 6D 81 F0 */	lwz r3, lbl_80450770-_SDA_BASE_(r13)
/* 80271CE8 0026EC28  38 80 00 00 */	li r4, 0
/* 80271CEC 0026EC2C  48 05 D0 C9 */	bl JKRExpHeap_NS_createRoot
/* 80271CF0 0026EC30  7C 64 1B 78 */	mr r4, r3
/* 80271CF4 0026EC34  90 8D 8C 20 */	stw r4, lbl_804511A0-_SDA_BASE_(r13)
/* 80271CF8 0026EC38  80 6D 81 F4 */	lwz r3, lbl_80450774-_SDA_BASE_(r13)
/* 80271CFC 0026EC3C  38 A0 00 00 */	li r5, 0
/* 80271D00 0026EC40  48 05 D1 2D */	bl JKRExpHeap_NS_create
/* 80271D04 0026EC44  90 6D 8C 24 */	stw r3, lbl_804511A4-_SDA_BASE_(r13)
/* 80271D08 0026EC48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80271D0C 0026EC4C  7C 08 03 A6 */	mtlr r0
/* 80271D10 0026EC50  38 21 00 10 */	addi r1, r1, 0x10
/* 80271D14 0026EC54  4E 80 00 20 */	blr 

.global JFWSystem_NS_init
JFWSystem_NS_init:
/* 80271D18 0026EC58  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80271D1C 0026EC5C  7C 08 02 A6 */	mflr r0
/* 80271D20 0026EC60  90 01 00 34 */	stw r0, 0x34(r1)
/* 80271D24 0026EC64  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80271D28 0026EC68  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80271D2C 0026EC6C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80271D30 0026EC70  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80271D34 0026EC74  80 0D 8C 20 */	lwz r0, lbl_804511A0-_SDA_BASE_(r13)
/* 80271D38 0026EC78  28 00 00 00 */	cmplwi r0, 0
/* 80271D3C 0026EC7C  40 82 00 08 */	bne lbl_80271D44
/* 80271D40 0026EC80  4B FF FF 91 */	bl JFWSystem_NS_firstInit
lbl_80271D44:
/* 80271D44 0026EC84  38 00 00 01 */	li r0, 1
/* 80271D48 0026EC88  98 0D 8C 3C */	stb r0, lbl_804511BC-_SDA_BASE_(r13)
/* 80271D4C 0026EC8C  80 6D 81 FC */	lwz r3, lbl_8045077C-_SDA_BASE_(r13)
/* 80271D50 0026EC90  80 8D 82 00 */	lwz r4, lbl_80450780-_SDA_BASE_(r13)
/* 80271D54 0026EC94  80 AD 82 04 */	lwz r5, lbl_80450784-_SDA_BASE_(r13)
/* 80271D58 0026EC98  80 CD 82 08 */	lwz r6, lbl_80450788-_SDA_BASE_(r13)
/* 80271D5C 0026EC9C  80 ED 82 0C */	lwz r7, lbl_8045078C-_SDA_BASE_(r13)
/* 80271D60 0026ECA0  48 06 02 45 */	bl JKRAram_NS_create
/* 80271D64 0026ECA4  38 60 00 7C */	li r3, 0x7c
/* 80271D68 0026ECA8  48 05 CE E5 */	bl __nw
/* 80271D6C 0026ECAC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80271D70 0026ECB0  41 82 00 1C */	beq lbl_80271D8C
/* 80271D74 0026ECB4  48 0C EF 11 */	bl OSGetCurrentThread
/* 80271D78 0026ECB8  7C 64 1B 78 */	mr r4, r3
/* 80271D7C 0026ECBC  7F E3 FB 78 */	mr r3, r31
/* 80271D80 0026ECC0  38 A0 00 04 */	li r5, 4
/* 80271D84 0026ECC4  48 05 F9 35 */	bl JKRThread_X2_
/* 80271D88 0026ECC8  7C 7F 1B 78 */	mr r31, r3
lbl_80271D8C:
/* 80271D8C 0026ECCC  93 ED 8C 28 */	stw r31, lbl_804511A8-_SDA_BASE_(r13)
/* 80271D90 0026ECD0  80 6D 82 14 */	lwz r3, lbl_80450794-_SDA_BASE_(r13)
/* 80271D94 0026ECD4  48 07 2E C1 */	bl JUTVideo_NS_createManager
/* 80271D98 0026ECD8  83 ED 81 F8 */	lwz r31, lbl_80450778-_SDA_BASE_(r13)
/* 80271D9C 0026ECDC  38 60 00 1C */	li r3, 0x1c
/* 80271DA0 0026ECE0  48 05 CE AD */	bl __nw
/* 80271DA4 0026ECE4  28 03 00 00 */	cmplwi r3, 0
/* 80271DA8 0026ECE8  41 82 00 0C */	beq lbl_80271DB4
/* 80271DAC 0026ECEC  7F E4 FB 78 */	mr r4, r31
/* 80271DB0 0026ECF0  48 06 CD A9 */	bl JUTGraphFifo
lbl_80271DB4:
/* 80271DB4 0026ECF4  48 06 EA E5 */	bl JUTGamePad_NS_init
/* 80271DB8 0026ECF8  48 07 24 89 */	bl JUTDirectPrint_NS_start
/* 80271DBC 0026ECFC  7C 7E 1B 78 */	mr r30, r3
/* 80271DC0 0026ED00  48 07 2B 9D */	bl JUTAssertion_NS_create
/* 80271DC4 0026ED04  7F C3 F3 78 */	mr r3, r30
/* 80271DC8 0026ED08  48 07 00 79 */	bl JUTException_NS_create
/* 80271DCC 0026ED0C  38 60 00 70 */	li r3, 0x70
/* 80271DD0 0026ED10  48 05 CE 7D */	bl __nw
/* 80271DD4 0026ED14  7C 60 1B 79 */	or. r0, r3, r3
/* 80271DD8 0026ED18  41 82 00 14 */	beq lbl_80271DEC
/* 80271DDC 0026ED1C  80 8D 82 10 */	lwz r4, lbl_80450790-_SDA_BASE_(r13)
/* 80271DE0 0026ED20  38 A0 00 00 */	li r5, 0
/* 80271DE4 0026ED24  48 06 D1 B1 */	bl JUTResFont_X1_
/* 80271DE8 0026ED28  7C 60 1B 78 */	mr r0, r3
lbl_80271DEC:
/* 80271DEC 0026ED2C  90 0D 8C 30 */	stw r0, lbl_804511B0-_SDA_BASE_(r13)
/* 80271DF0 0026ED30  38 60 00 00 */	li r3, 0
/* 80271DF4 0026ED34  38 80 00 00 */	li r4, 0
/* 80271DF8 0026ED38  48 06 E3 99 */	bl JUTDbPrint_NS_start
/* 80271DFC 0026ED3C  90 6D 8C 2C */	stw r3, lbl_804511AC-_SDA_BASE_(r13)
/* 80271E00 0026ED40  80 8D 8C 30 */	lwz r4, lbl_804511B0-_SDA_BASE_(r13)
/* 80271E04 0026ED44  48 06 E4 01 */	bl JUTDbPrint_NS_changeFont
/* 80271E08 0026ED48  38 60 00 00 */	li r3, 0
/* 80271E0C 0026ED4C  48 07 63 E9 */	bl JUTConsoleManager_NS_createManager
/* 80271E10 0026ED50  90 6D 8C 34 */	stw r3, lbl_804511B4-_SDA_BASE_(r13)
/* 80271E14 0026ED54  38 60 00 3C */	li r3, 0x3c
/* 80271E18 0026ED58  38 80 00 C8 */	li r4, 0xc8
/* 80271E1C 0026ED5C  38 A0 00 00 */	li r5, 0
/* 80271E20 0026ED60  48 07 55 35 */	bl JUTConsole_NS_create
/* 80271E24 0026ED64  7C 7F 1B 78 */	mr r31, r3
/* 80271E28 0026ED68  93 ED 8C 38 */	stw r31, lbl_804511B8-_SDA_BASE_(r13)
/* 80271E2C 0026ED6C  83 CD 8C 30 */	lwz r30, lbl_804511B0-_SDA_BASE_(r13)
/* 80271E30 0026ED70  93 C3 00 4C */	stw r30, 0x4c(r3)
/* 80271E34 0026ED74  7F C3 F3 78 */	mr r3, r30
/* 80271E38 0026ED78  81 9E 00 00 */	lwz r12, 0(r30)
/* 80271E3C 0026ED7C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80271E40 0026ED80  7D 89 03 A6 */	mtctr r12
/* 80271E44 0026ED84  4E 80 04 21 */	bctrl 
/* 80271E48 0026ED88  C8 22 B8 48 */	lfd f1, lbl_80455248-_SDA2_BASE_(r2)
/* 80271E4C 0026ED8C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80271E50 0026ED90  90 01 00 0C */	stw r0, 0xc(r1)
/* 80271E54 0026ED94  3C 00 43 30 */	lis r0, 0x4330
/* 80271E58 0026ED98  90 01 00 08 */	stw r0, 8(r1)
/* 80271E5C 0026ED9C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80271E60 0026EDA0  EF E0 08 28 */	fsubs f31, f0, f1
/* 80271E64 0026EDA4  7F C3 F3 78 */	mr r3, r30
/* 80271E68 0026EDA8  81 9E 00 00 */	lwz r12, 0(r30)
/* 80271E6C 0026EDAC  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80271E70 0026EDB0  7D 89 03 A6 */	mtctr r12
/* 80271E74 0026EDB4  4E 80 04 21 */	bctrl 
/* 80271E78 0026EDB8  C8 22 B8 48 */	lfd f1, lbl_80455248-_SDA2_BASE_(r2)
/* 80271E7C 0026EDBC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80271E80 0026EDC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80271E84 0026EDC4  3C 00 43 30 */	lis r0, 0x4330
/* 80271E88 0026EDC8  90 01 00 10 */	stw r0, 0x10(r1)
/* 80271E8C 0026EDCC  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80271E90 0026EDD0  EC 00 08 28 */	fsubs f0, f0, f1
/* 80271E94 0026EDD4  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80271E98 0026EDD8  D3 FF 00 54 */	stfs f31, 0x54(r31)
/* 80271E9C 0026EDDC  80 6D 82 14 */	lwz r3, lbl_80450794-_SDA_BASE_(r13)
/* 80271EA0 0026EDE0  A0 03 00 06 */	lhz r0, 6(r3)
/* 80271EA4 0026EDE4  28 00 01 2C */	cmplwi r0, 0x12c
/* 80271EA8 0026EDE8  40 80 00 98 */	bge lbl_80271F40
/* 80271EAC 0026EDEC  80 6D 8C 30 */	lwz r3, lbl_804511B0-_SDA_BASE_(r13)
/* 80271EB0 0026EDF0  81 83 00 00 */	lwz r12, 0(r3)
/* 80271EB4 0026EDF4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80271EB8 0026EDF8  7D 89 03 A6 */	mtctr r12
/* 80271EBC 0026EDFC  4E 80 04 21 */	bctrl 
/* 80271EC0 0026EE00  C8 22 B8 48 */	lfd f1, lbl_80455248-_SDA2_BASE_(r2)
/* 80271EC4 0026EE04  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80271EC8 0026EE08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80271ECC 0026EE0C  3C 00 43 30 */	lis r0, 0x4330
/* 80271ED0 0026EE10  90 01 00 10 */	stw r0, 0x10(r1)
/* 80271ED4 0026EE14  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80271ED8 0026EE18  EC 20 08 28 */	fsubs f1, f0, f1
/* 80271EDC 0026EE1C  C0 02 B8 40 */	lfs f0, lbl_80455240-_SDA2_BASE_(r2)
/* 80271EE0 0026EE20  EF E0 00 72 */	fmuls f31, f0, f1
/* 80271EE4 0026EE24  80 6D 8C 30 */	lwz r3, lbl_804511B0-_SDA_BASE_(r13)
/* 80271EE8 0026EE28  81 83 00 00 */	lwz r12, 0(r3)
/* 80271EEC 0026EE2C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80271EF0 0026EE30  7D 89 03 A6 */	mtctr r12
/* 80271EF4 0026EE34  4E 80 04 21 */	bctrl 
/* 80271EF8 0026EE38  C8 22 B8 48 */	lfd f1, lbl_80455248-_SDA2_BASE_(r2)
/* 80271EFC 0026EE3C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80271F00 0026EE40  90 01 00 0C */	stw r0, 0xc(r1)
/* 80271F04 0026EE44  3C 00 43 30 */	lis r0, 0x4330
/* 80271F08 0026EE48  90 01 00 08 */	stw r0, 8(r1)
/* 80271F0C 0026EE4C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80271F10 0026EE50  EC 20 08 28 */	fsubs f1, f0, f1
/* 80271F14 0026EE54  C0 02 B8 44 */	lfs f0, lbl_80455244-_SDA2_BASE_(r2)
/* 80271F18 0026EE58  EC 00 00 72 */	fmuls f0, f0, f1
/* 80271F1C 0026EE5C  80 6D 8C 38 */	lwz r3, lbl_804511B8-_SDA_BASE_(r13)
/* 80271F20 0026EE60  D0 03 00 50 */	stfs f0, 0x50(r3)
/* 80271F24 0026EE64  D3 E3 00 54 */	stfs f31, 0x54(r3)
/* 80271F28 0026EE68  80 6D 8C 38 */	lwz r3, lbl_804511B8-_SDA_BASE_(r13)
/* 80271F2C 0026EE6C  38 00 00 14 */	li r0, 0x14
/* 80271F30 0026EE70  90 03 00 40 */	stw r0, 0x40(r3)
/* 80271F34 0026EE74  38 00 00 19 */	li r0, 0x19
/* 80271F38 0026EE78  90 03 00 44 */	stw r0, 0x44(r3)
/* 80271F3C 0026EE7C  48 00 00 84 */	b lbl_80271FC0
lbl_80271F40:
/* 80271F40 0026EE80  80 6D 8C 30 */	lwz r3, lbl_804511B0-_SDA_BASE_(r13)
/* 80271F44 0026EE84  81 83 00 00 */	lwz r12, 0(r3)
/* 80271F48 0026EE88  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80271F4C 0026EE8C  7D 89 03 A6 */	mtctr r12
/* 80271F50 0026EE90  4E 80 04 21 */	bctrl 
/* 80271F54 0026EE94  C8 22 B8 48 */	lfd f1, lbl_80455248-_SDA2_BASE_(r2)
/* 80271F58 0026EE98  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80271F5C 0026EE9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80271F60 0026EEA0  3C 00 43 30 */	lis r0, 0x4330
/* 80271F64 0026EEA4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80271F68 0026EEA8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80271F6C 0026EEAC  EF E0 08 28 */	fsubs f31, f0, f1
/* 80271F70 0026EEB0  80 6D 8C 30 */	lwz r3, lbl_804511B0-_SDA_BASE_(r13)
/* 80271F74 0026EEB4  81 83 00 00 */	lwz r12, 0(r3)
/* 80271F78 0026EEB8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80271F7C 0026EEBC  7D 89 03 A6 */	mtctr r12
/* 80271F80 0026EEC0  4E 80 04 21 */	bctrl 
/* 80271F84 0026EEC4  C8 22 B8 48 */	lfd f1, lbl_80455248-_SDA2_BASE_(r2)
/* 80271F88 0026EEC8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80271F8C 0026EECC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80271F90 0026EED0  3C 00 43 30 */	lis r0, 0x4330
/* 80271F94 0026EED4  90 01 00 08 */	stw r0, 8(r1)
/* 80271F98 0026EED8  C8 01 00 08 */	lfd f0, 8(r1)
/* 80271F9C 0026EEDC  EC 00 08 28 */	fsubs f0, f0, f1
/* 80271FA0 0026EEE0  80 6D 8C 38 */	lwz r3, lbl_804511B8-_SDA_BASE_(r13)
/* 80271FA4 0026EEE4  D0 03 00 50 */	stfs f0, 0x50(r3)
/* 80271FA8 0026EEE8  D3 E3 00 54 */	stfs f31, 0x54(r3)
/* 80271FAC 0026EEEC  80 6D 8C 38 */	lwz r3, lbl_804511B8-_SDA_BASE_(r13)
/* 80271FB0 0026EEF0  38 00 00 14 */	li r0, 0x14
/* 80271FB4 0026EEF4  90 03 00 40 */	stw r0, 0x40(r3)
/* 80271FB8 0026EEF8  38 00 00 32 */	li r0, 0x32
/* 80271FBC 0026EEFC  90 03 00 44 */	stw r0, 0x44(r3)
lbl_80271FC0:
/* 80271FC0 0026EF00  80 6D 8C 38 */	lwz r3, lbl_804511B8-_SDA_BASE_(r13)
/* 80271FC4 0026EF04  38 00 00 19 */	li r0, 0x19
/* 80271FC8 0026EF08  90 03 00 48 */	stw r0, 0x48(r3)
/* 80271FCC 0026EF0C  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80271FD0 0026EF10  80 83 00 24 */	lwz r4, 0x24(r3)
/* 80271FD4 0026EF14  7C 00 20 40 */	cmplw r0, r4
/* 80271FD8 0026EF18  40 81 00 08 */	ble lbl_80271FE0
/* 80271FDC 0026EF1C  90 83 00 48 */	stw r4, 0x48(r3)
lbl_80271FE0:
/* 80271FE0 0026EF20  38 00 00 00 */	li r0, 0
/* 80271FE4 0026EF24  80 6D 8C 38 */	lwz r3, lbl_804511B8-_SDA_BASE_(r13)
/* 80271FE8 0026EF28  98 03 00 68 */	stb r0, 0x68(r3)
/* 80271FEC 0026EF2C  38 00 00 03 */	li r0, 3
/* 80271FF0 0026EF30  80 6D 8C 38 */	lwz r3, lbl_804511B8-_SDA_BASE_(r13)
/* 80271FF4 0026EF34  90 03 00 58 */	stw r0, 0x58(r3)
/* 80271FF8 0026EF38  80 6D 8C 38 */	lwz r3, lbl_804511B8-_SDA_BASE_(r13)
/* 80271FFC 0026EF3C  48 07 65 25 */	bl JUTSetReportConsole
/* 80272000 0026EF40  80 6D 8C 38 */	lwz r3, lbl_804511B8-_SDA_BASE_(r13)
/* 80272004 0026EF44  48 07 65 2D */	bl JUTSetWarningConsole
/* 80272008 0026EF48  80 6D 8C 24 */	lwz r3, lbl_804511A4-_SDA_BASE_(r13)
/* 8027200C 0026EF4C  80 8D 82 18 */	lwz r4, lbl_80450798-_SDA_BASE_(r13)
/* 80272010 0026EF50  38 A0 00 04 */	li r5, 4
/* 80272014 0026EF54  48 05 C4 C1 */	bl JKRHeap_NS_alloc_X1_
/* 80272018 0026EF58  80 8D 82 18 */	lwz r4, lbl_80450798-_SDA_BASE_(r13)
/* 8027201C 0026EF5C  48 07 1F D1 */	bl JUTException_NS_createConsole
/* 80272020 0026EF60  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80272024 0026EF64  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80272028 0026EF68  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8027202C 0026EF6C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80272030 0026EF70  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80272034 0026EF74  7C 08 03 A6 */	mtlr r0
/* 80272038 0026EF78  38 21 00 30 */	addi r1, r1, 0x30
/* 8027203C 0026EF7C  4E 80 00 20 */	blr 
