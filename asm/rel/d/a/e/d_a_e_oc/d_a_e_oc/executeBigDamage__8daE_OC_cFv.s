lbl_80731124:
/* 80731124  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80731128  7C 08 02 A6 */	mflr r0
/* 8073112C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80731130  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80731134  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80731138  7C 7E 1B 78 */	mr r30, r3
/* 8073113C  3C 80 80 73 */	lis r4, lit_3911@ha /* 0x80735B28@ha */
/* 80731140  3B E4 5B 28 */	addi r31, r4, lit_3911@l /* 0x80735B28@l */
/* 80731144  38 80 00 01 */	li r4, 1
/* 80731148  98 83 06 EA */	stb r4, 0x6ea(r3)
/* 8073114C  A8 03 04 E6 */	lha r0, 0x4e6(r3)
/* 80731150  B0 03 06 D4 */	sth r0, 0x6d4(r3)
/* 80731154  80 03 06 B0 */	lwz r0, 0x6b0(r3)
/* 80731158  2C 00 00 04 */	cmpwi r0, 4
/* 8073115C  41 82 02 E4 */	beq lbl_80731440
/* 80731160  40 80 00 18 */	bge lbl_80731178
/* 80731164  2C 00 00 03 */	cmpwi r0, 3
/* 80731168  40 80 01 88 */	bge lbl_807312F0
/* 8073116C  2C 00 00 00 */	cmpwi r0, 0
/* 80731170  40 80 00 18 */	bge lbl_80731188
/* 80731174  48 00 05 6C */	b lbl_807316E0
lbl_80731178:
/* 80731178  2C 00 00 06 */	cmpwi r0, 6
/* 8073117C  41 82 05 04 */	beq lbl_80731680
/* 80731180  40 80 05 60 */	bge lbl_807316E0
/* 80731184  48 00 04 18 */	b lbl_8073159C
lbl_80731188:
/* 80731188  41 82 00 A0 */	beq lbl_80731228
/* 8073118C  98 9E 06 DC */	stb r4, 0x6dc(r30)
/* 80731190  38 80 00 15 */	li r4, 0x15
/* 80731194  38 A0 00 00 */	li r5, 0
/* 80731198  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8073119C  C0 5F 00 08 */	lfs f2, 8(r31)
/* 807311A0  4B FF D0 D5 */	bl setBck__8daE_OC_cFiUcff
/* 807311A4  80 1E 06 B0 */	lwz r0, 0x6b0(r30)
/* 807311A8  2C 00 00 01 */	cmpwi r0, 1
/* 807311AC  40 82 00 10 */	bne lbl_807311BC
/* 807311B0  38 00 1F 60 */	li r0, 0x1f60
/* 807311B4  B0 1E 06 BC */	sth r0, 0x6bc(r30)
/* 807311B8  48 00 00 0C */	b lbl_807311C4
lbl_807311BC:
/* 807311BC  38 00 E0 A0 */	li r0, -8032
/* 807311C0  B0 1E 06 BC */	sth r0, 0x6bc(r30)
lbl_807311C4:
/* 807311C4  A8 1E 05 62 */	lha r0, 0x562(r30)
/* 807311C8  2C 00 00 01 */	cmpwi r0, 1
/* 807311CC  40 80 00 30 */	bge lbl_807311FC
/* 807311D0  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070191@ha */
/* 807311D4  38 03 01 91 */	addi r0, r3, 0x0191 /* 0x00070191@l */
/* 807311D8  90 01 00 28 */	stw r0, 0x28(r1)
/* 807311DC  38 7E 05 C4 */	addi r3, r30, 0x5c4
/* 807311E0  38 81 00 28 */	addi r4, r1, 0x28
/* 807311E4  38 A0 FF FF */	li r5, -1
/* 807311E8  81 9E 05 C4 */	lwz r12, 0x5c4(r30)
/* 807311EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 807311F0  7D 89 03 A6 */	mtctr r12
/* 807311F4  4E 80 04 21 */	bctrl 
/* 807311F8  48 00 00 B4 */	b lbl_807312AC
lbl_807311FC:
/* 807311FC  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070190@ha */
/* 80731200  38 03 01 90 */	addi r0, r3, 0x0190 /* 0x00070190@l */
/* 80731204  90 01 00 24 */	stw r0, 0x24(r1)
/* 80731208  38 7E 05 C4 */	addi r3, r30, 0x5c4
/* 8073120C  38 81 00 24 */	addi r4, r1, 0x24
/* 80731210  38 A0 FF FF */	li r5, -1
/* 80731214  81 9E 05 C4 */	lwz r12, 0x5c4(r30)
/* 80731218  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8073121C  7D 89 03 A6 */	mtctr r12
/* 80731220  4E 80 04 21 */	bctrl 
/* 80731224  48 00 00 88 */	b lbl_807312AC
lbl_80731228:
/* 80731228  38 00 00 00 */	li r0, 0
/* 8073122C  98 1E 06 DC */	stb r0, 0x6dc(r30)
/* 80731230  38 80 00 13 */	li r4, 0x13
/* 80731234  38 A0 00 00 */	li r5, 0
/* 80731238  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8073123C  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80731240  4B FF D0 35 */	bl setBck__8daE_OC_cFiUcff
/* 80731244  38 00 00 00 */	li r0, 0
/* 80731248  B0 1E 06 BC */	sth r0, 0x6bc(r30)
/* 8073124C  A8 1E 05 62 */	lha r0, 0x562(r30)
/* 80731250  2C 00 00 01 */	cmpwi r0, 1
/* 80731254  40 80 00 30 */	bge lbl_80731284
/* 80731258  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070191@ha */
/* 8073125C  38 03 01 91 */	addi r0, r3, 0x0191 /* 0x00070191@l */
/* 80731260  90 01 00 20 */	stw r0, 0x20(r1)
/* 80731264  38 7E 05 C4 */	addi r3, r30, 0x5c4
/* 80731268  38 81 00 20 */	addi r4, r1, 0x20
/* 8073126C  38 A0 FF FF */	li r5, -1
/* 80731270  81 9E 05 C4 */	lwz r12, 0x5c4(r30)
/* 80731274  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80731278  7D 89 03 A6 */	mtctr r12
/* 8073127C  4E 80 04 21 */	bctrl 
/* 80731280  48 00 00 2C */	b lbl_807312AC
lbl_80731284:
/* 80731284  3C 60 00 07 */	lis r3, 0x0007 /* 0x0007017A@ha */
/* 80731288  38 03 01 7A */	addi r0, r3, 0x017A /* 0x0007017A@l */
/* 8073128C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80731290  38 7E 05 C4 */	addi r3, r30, 0x5c4
/* 80731294  38 81 00 1C */	addi r4, r1, 0x1c
/* 80731298  38 A0 FF FF */	li r5, -1
/* 8073129C  81 9E 05 C4 */	lwz r12, 0x5c4(r30)
/* 807312A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 807312A4  7D 89 03 A6 */	mtctr r12
/* 807312A8  4E 80 04 21 */	bctrl 
lbl_807312AC:
/* 807312AC  7F C3 F3 78 */	mr r3, r30
/* 807312B0  4B FF CA DD */	bl offTgSph__8daE_OC_cFv
/* 807312B4  38 00 00 03 */	li r0, 3
/* 807312B8  90 1E 06 B0 */	stw r0, 0x6b0(r30)
/* 807312BC  C0 1F 01 3C */	lfs f0, 0x13c(r31)
/* 807312C0  D0 1E 04 FC */	stfs f0, 0x4fc(r30)
/* 807312C4  C0 1F 00 D8 */	lfs f0, 0xd8(r31)
/* 807312C8  D0 1E 05 2C */	stfs f0, 0x52c(r30)
/* 807312CC  A8 7E 0E 4A */	lha r3, 0xe4a(r30)
/* 807312D0  3C 63 00 01 */	addis r3, r3, 1
/* 807312D4  38 03 80 00 */	addi r0, r3, -32768
/* 807312D8  B0 1E 04 DE */	sth r0, 0x4de(r30)
/* 807312DC  A8 1E 0E 4A */	lha r0, 0xe4a(r30)
/* 807312E0  B0 1E 04 E6 */	sth r0, 0x4e6(r30)
/* 807312E4  38 00 00 00 */	li r0, 0
/* 807312E8  B0 1E 06 BE */	sth r0, 0x6be(r30)
/* 807312EC  48 00 03 F4 */	b lbl_807316E0
lbl_807312F0:
/* 807312F0  88 1E 06 DC */	lbz r0, 0x6dc(r30)
/* 807312F4  28 00 00 00 */	cmplwi r0, 0
/* 807312F8  40 82 00 0C */	bne lbl_80731304
/* 807312FC  4B FF D0 81 */	bl setSpitEffect__8daE_OC_cFv
/* 80731300  48 00 00 20 */	b lbl_80731320
lbl_80731304:
/* 80731304  A8 1E 06 C2 */	lha r0, 0x6c2(r30)
/* 80731308  2C 00 00 00 */	cmpwi r0, 0
/* 8073130C  41 82 00 0C */	beq lbl_80731318
/* 80731310  4B FF D0 6D */	bl setSpitEffect__8daE_OC_cFv
/* 80731314  48 00 00 0C */	b lbl_80731320
lbl_80731318:
/* 80731318  38 00 00 05 */	li r0, 5
/* 8073131C  B0 1E 06 C2 */	sth r0, 0x6c2(r30)
lbl_80731320:
/* 80731320  7F C3 F3 78 */	mr r3, r30
/* 80731324  4B FF C6 71 */	bl checkDamageBg__8daE_OC_cFv
/* 80731328  A8 7E 06 BC */	lha r3, 0x6bc(r30)
/* 8073132C  7C 60 07 35 */	extsh. r0, r3
/* 80731330  41 82 00 30 */	beq lbl_80731360
/* 80731334  A8 1E 06 D8 */	lha r0, 0x6d8(r30)
/* 80731338  7C 00 1A 14 */	add r0, r0, r3
/* 8073133C  B0 1E 06 D8 */	sth r0, 0x6d8(r30)
/* 80731340  38 7E 06 BC */	addi r3, r30, 0x6bc
/* 80731344  38 80 00 00 */	li r4, 0
/* 80731348  38 A0 01 00 */	li r5, 0x100
/* 8073134C  4B B3 F8 45 */	bl cLib_chaseAngleS__FPsss
/* 80731350  38 7E 04 E4 */	addi r3, r30, 0x4e4
/* 80731354  38 80 C0 00 */	li r4, -16384
/* 80731358  38 A0 04 00 */	li r5, 0x400
/* 8073135C  4B B3 F8 35 */	bl cLib_chaseAngleS__FPsss
lbl_80731360:
/* 80731360  80 1E 07 74 */	lwz r0, 0x774(r30)
/* 80731364  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 80731368  41 82 00 0C */	beq lbl_80731374
/* 8073136C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80731370  D0 1E 05 2C */	stfs f0, 0x52c(r30)
lbl_80731374:
/* 80731374  80 1E 07 74 */	lwz r0, 0x774(r30)
/* 80731378  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8073137C  41 82 03 64 */	beq lbl_807316E0
/* 80731380  38 00 00 00 */	li r0, 0
/* 80731384  B0 1E 06 D8 */	sth r0, 0x6d8(r30)
/* 80731388  B0 1E 04 E4 */	sth r0, 0x4e4(r30)
/* 8073138C  7F C3 F3 78 */	mr r3, r30
/* 80731390  38 80 00 14 */	li r4, 0x14
/* 80731394  38 A0 00 00 */	li r5, 0
/* 80731398  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8073139C  C0 5F 00 08 */	lfs f2, 8(r31)
/* 807313A0  4B FF CE D5 */	bl setBck__8daE_OC_cFiUcff
/* 807313A4  3C 60 00 06 */	lis r3, 0x0006 /* 0x0006002C@ha */
/* 807313A8  38 03 00 2C */	addi r0, r3, 0x002C /* 0x0006002C@l */
/* 807313AC  90 01 00 18 */	stw r0, 0x18(r1)
/* 807313B0  38 7E 05 C4 */	addi r3, r30, 0x5c4
/* 807313B4  38 81 00 18 */	addi r4, r1, 0x18
/* 807313B8  38 A0 00 00 */	li r5, 0
/* 807313BC  38 C0 FF FF */	li r6, -1
/* 807313C0  81 9E 05 C4 */	lwz r12, 0x5c4(r30)
/* 807313C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 807313C8  7D 89 03 A6 */	mtctr r12
/* 807313CC  4E 80 04 21 */	bctrl 
/* 807313D0  88 1E 06 DC */	lbz r0, 0x6dc(r30)
/* 807313D4  28 00 00 00 */	cmplwi r0, 0
/* 807313D8  41 82 00 3C */	beq lbl_80731414
/* 807313DC  C0 1F 00 E4 */	lfs f0, 0xe4(r31)
/* 807313E0  80 7E 05 BC */	lwz r3, 0x5bc(r30)
/* 807313E4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 807313E8  3C 60 00 07 */	lis r3, 0x0007 /* 0x0007017B@ha */
/* 807313EC  38 03 01 7B */	addi r0, r3, 0x017B /* 0x0007017B@l */
/* 807313F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 807313F4  38 7E 05 C4 */	addi r3, r30, 0x5c4
/* 807313F8  38 81 00 14 */	addi r4, r1, 0x14
/* 807313FC  38 A0 00 00 */	li r5, 0
/* 80731400  38 C0 FF FF */	li r6, -1
/* 80731404  81 9E 05 C4 */	lwz r12, 0x5c4(r30)
/* 80731408  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8073140C  7D 89 03 A6 */	mtctr r12
/* 80731410  4E 80 04 21 */	bctrl 
lbl_80731414:
/* 80731414  38 00 00 04 */	li r0, 4
/* 80731418  90 1E 06 B0 */	stw r0, 0x6b0(r30)
/* 8073141C  38 7E 0E 60 */	addi r3, r30, 0xe60
/* 80731420  38 9E 0E 64 */	addi r4, r30, 0xe64
/* 80731424  38 BE 04 D0 */	addi r5, r30, 0x4d0
/* 80731428  38 C0 00 00 */	li r6, 0
/* 8073142C  C0 3F 01 38 */	lfs f1, 0x138(r31)
/* 80731430  38 FE 01 0C */	addi r7, r30, 0x10c
/* 80731434  39 00 00 01 */	li r8, 1
/* 80731438  4B 8E BB E9 */	bl fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci
/* 8073143C  48 00 02 A4 */	b lbl_807316E0
lbl_80731440:
/* 80731440  4B FF C6 D1 */	bl setGroundAngle__8daE_OC_cFv
/* 80731444  80 7E 05 BC */	lwz r3, 0x5bc(r30)
/* 80731448  38 63 00 0C */	addi r3, r3, 0xc
/* 8073144C  C0 3F 01 40 */	lfs f1, 0x140(r31)
/* 80731450  4B BF 6F DD */	bl checkPass__12J3DFrameCtrlFf
/* 80731454  2C 03 00 00 */	cmpwi r3, 0
/* 80731458  41 82 00 30 */	beq lbl_80731488
/* 8073145C  3C 60 00 06 */	lis r3, 0x0006 /* 0x0006002C@ha */
/* 80731460  38 03 00 2C */	addi r0, r3, 0x002C /* 0x0006002C@l */
/* 80731464  90 01 00 10 */	stw r0, 0x10(r1)
/* 80731468  38 7E 05 C4 */	addi r3, r30, 0x5c4
/* 8073146C  38 81 00 10 */	addi r4, r1, 0x10
/* 80731470  38 A0 00 00 */	li r5, 0
/* 80731474  38 C0 FF FF */	li r6, -1
/* 80731478  81 9E 05 C4 */	lwz r12, 0x5c4(r30)
/* 8073147C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80731480  7D 89 03 A6 */	mtctr r12
/* 80731484  4E 80 04 21 */	bctrl 
lbl_80731488:
/* 80731488  88 1E 06 DC */	lbz r0, 0x6dc(r30)
/* 8073148C  28 00 00 00 */	cmplwi r0, 0
/* 80731490  40 82 00 48 */	bne lbl_807314D8
/* 80731494  80 7E 05 BC */	lwz r3, 0x5bc(r30)
/* 80731498  38 63 00 0C */	addi r3, r3, 0xc
/* 8073149C  C0 3F 00 E4 */	lfs f1, 0xe4(r31)
/* 807314A0  4B BF 6F 8D */	bl checkPass__12J3DFrameCtrlFf
/* 807314A4  2C 03 00 00 */	cmpwi r3, 0
/* 807314A8  41 82 00 30 */	beq lbl_807314D8
/* 807314AC  3C 60 00 07 */	lis r3, 0x0007 /* 0x0007017B@ha */
/* 807314B0  38 03 01 7B */	addi r0, r3, 0x017B /* 0x0007017B@l */
/* 807314B4  90 01 00 0C */	stw r0, 0xc(r1)
/* 807314B8  38 7E 05 C4 */	addi r3, r30, 0x5c4
/* 807314BC  38 81 00 0C */	addi r4, r1, 0xc
/* 807314C0  38 A0 00 00 */	li r5, 0
/* 807314C4  38 C0 FF FF */	li r6, -1
/* 807314C8  81 9E 05 C4 */	lwz r12, 0x5c4(r30)
/* 807314CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 807314D0  7D 89 03 A6 */	mtctr r12
/* 807314D4  4E 80 04 21 */	bctrl 
lbl_807314D8:
/* 807314D8  7F C3 F3 78 */	mr r3, r30
/* 807314DC  4B FF C4 B9 */	bl checkDamageBg__8daE_OC_cFv
/* 807314E0  80 1E 07 74 */	lwz r0, 0x774(r30)
/* 807314E4  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 807314E8  41 82 00 0C */	beq lbl_807314F4
/* 807314EC  C0 1F 00 04 */	lfs f0, 4(r31)
/* 807314F0  D0 1E 05 2C */	stfs f0, 0x52c(r30)
lbl_807314F4:
/* 807314F4  38 7E 05 2C */	addi r3, r30, 0x52c
/* 807314F8  C0 3F 00 04 */	lfs f1, 4(r31)
/* 807314FC  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80731500  4B B3 F2 41 */	bl cLib_chaseF__FPfff
/* 80731504  80 7E 05 BC */	lwz r3, 0x5bc(r30)
/* 80731508  38 80 00 01 */	li r4, 1
/* 8073150C  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80731510  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80731514  40 82 00 18 */	bne lbl_8073152C
/* 80731518  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8073151C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80731520  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80731524  41 82 00 08 */	beq lbl_8073152C
/* 80731528  38 80 00 00 */	li r4, 0
lbl_8073152C:
/* 8073152C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80731530  41 82 01 B0 */	beq lbl_807316E0
/* 80731534  A8 1E 05 62 */	lha r0, 0x562(r30)
/* 80731538  2C 00 00 01 */	cmpwi r0, 1
/* 8073153C  40 80 00 20 */	bge lbl_8073155C
/* 80731540  7F C3 F3 78 */	mr r3, r30
/* 80731544  38 80 00 09 */	li r4, 9
/* 80731548  38 A0 00 00 */	li r5, 0
/* 8073154C  4B FF C7 71 */	bl setActionMode__8daE_OC_cFii
/* 80731550  7F C3 F3 78 */	mr r3, r30
/* 80731554  4B FF C8 39 */	bl offTgSph__8daE_OC_cFv
/* 80731558  48 00 01 88 */	b lbl_807316E0
lbl_8073155C:
/* 8073155C  38 00 00 05 */	li r0, 5
/* 80731560  90 1E 06 B0 */	stw r0, 0x6b0(r30)
/* 80731564  A0 1E 05 8E */	lhz r0, 0x58e(r30)
/* 80731568  60 00 00 01 */	ori r0, r0, 1
/* 8073156C  B0 1E 05 8E */	sth r0, 0x58e(r30)
/* 80731570  7F C3 F3 78 */	mr r3, r30
/* 80731574  4B FF CF 25 */	bl setStabPos__8daE_OC_cFv
/* 80731578  C0 3F 00 EC */	lfs f1, 0xec(r31)
/* 8073157C  4B B3 64 11 */	bl cM_rndFX__Ff
/* 80731580  C0 1F 01 18 */	lfs f0, 0x118(r31)
/* 80731584  EC 00 08 2A */	fadds f0, f0, f1
/* 80731588  FC 00 00 1E */	fctiwz f0, f0
/* 8073158C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80731590  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80731594  B0 1E 06 C0 */	sth r0, 0x6c0(r30)
/* 80731598  48 00 01 48 */	b lbl_807316E0
lbl_8073159C:
/* 8073159C  4B FF C5 75 */	bl setGroundAngle__8daE_OC_cFv
/* 807315A0  7F C3 F3 78 */	mr r3, r30
/* 807315A4  4B FF C3 F1 */	bl checkDamageBg__8daE_OC_cFv
/* 807315A8  7F C3 F3 78 */	mr r3, r30
/* 807315AC  4B FF CE ED */	bl setStabPos__8daE_OC_cFv
/* 807315B0  38 7E 05 2C */	addi r3, r30, 0x52c
/* 807315B4  C0 3F 00 04 */	lfs f1, 4(r31)
/* 807315B8  C0 5F 00 08 */	lfs f2, 8(r31)
/* 807315BC  4B B3 F1 85 */	bl cLib_chaseF__FPfff
/* 807315C0  80 1E 09 88 */	lwz r0, 0x988(r30)
/* 807315C4  60 00 00 01 */	ori r0, r0, 1
/* 807315C8  90 1E 09 88 */	stw r0, 0x988(r30)
/* 807315CC  80 1E 0A C0 */	lwz r0, 0xac0(r30)
/* 807315D0  60 00 00 01 */	ori r0, r0, 1
/* 807315D4  90 1E 0A C0 */	stw r0, 0xac0(r30)
/* 807315D8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 807315DC  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 807315E0  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 807315E4  88 03 05 68 */	lbz r0, 0x568(r3)
/* 807315E8  28 00 00 27 */	cmplwi r0, 0x27
/* 807315EC  40 82 00 2C */	bne lbl_80731618
/* 807315F0  80 1E 09 88 */	lwz r0, 0x988(r30)
/* 807315F4  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 807315F8  90 1E 09 88 */	stw r0, 0x988(r30)
/* 807315FC  80 1E 0A C0 */	lwz r0, 0xac0(r30)
/* 80731600  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80731604  90 1E 0A C0 */	stw r0, 0xac0(r30)
/* 80731608  38 7E 09 20 */	addi r3, r30, 0x920
/* 8073160C  4B B3 23 51 */	bl ClrCcMove__9cCcD_SttsFv
/* 80731610  38 00 00 1E */	li r0, 0x1e
/* 80731614  B0 1E 06 C0 */	sth r0, 0x6c0(r30)
lbl_80731618:
/* 80731618  A8 1E 06 C0 */	lha r0, 0x6c0(r30)
/* 8073161C  2C 00 00 00 */	cmpwi r0, 0
/* 80731620  40 82 00 C0 */	bne lbl_807316E0
/* 80731624  7F C3 F3 78 */	mr r3, r30
/* 80731628  38 80 00 17 */	li r4, 0x17
/* 8073162C  38 A0 00 00 */	li r5, 0
/* 80731630  C0 3F 00 E4 */	lfs f1, 0xe4(r31)
/* 80731634  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80731638  4B FF CC 3D */	bl setBck__8daE_OC_cFiUcff
/* 8073163C  3C 60 00 07 */	lis r3, 0x0007 /* 0x0007017D@ha */
/* 80731640  38 03 01 7D */	addi r0, r3, 0x017D /* 0x0007017D@l */
/* 80731644  90 01 00 08 */	stw r0, 8(r1)
/* 80731648  38 7E 05 C4 */	addi r3, r30, 0x5c4
/* 8073164C  38 81 00 08 */	addi r4, r1, 8
/* 80731650  38 A0 FF FF */	li r5, -1
/* 80731654  81 9E 05 C4 */	lwz r12, 0x5c4(r30)
/* 80731658  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8073165C  7D 89 03 A6 */	mtctr r12
/* 80731660  4E 80 04 21 */	bctrl 
/* 80731664  38 00 00 06 */	li r0, 6
/* 80731668  90 1E 06 B0 */	stw r0, 0x6b0(r30)
/* 8073166C  A0 7E 05 8E */	lhz r3, 0x58e(r30)
/* 80731670  38 00 FF E8 */	li r0, -24
/* 80731674  7C 60 00 38 */	and r0, r3, r0
/* 80731678  B0 1E 05 8E */	sth r0, 0x58e(r30)
/* 8073167C  48 00 00 64 */	b lbl_807316E0
lbl_80731680:
/* 80731680  38 7E 06 88 */	addi r3, r30, 0x688
/* 80731684  38 80 00 00 */	li r4, 0
/* 80731688  38 A0 04 00 */	li r5, 0x400
/* 8073168C  4B B3 F5 05 */	bl cLib_chaseAngleS__FPsss
/* 80731690  38 7E 06 8C */	addi r3, r30, 0x68c
/* 80731694  38 80 00 00 */	li r4, 0
/* 80731698  38 A0 04 00 */	li r5, 0x400
/* 8073169C  4B B3 F4 F5 */	bl cLib_chaseAngleS__FPsss
/* 807316A0  80 7E 05 BC */	lwz r3, 0x5bc(r30)
/* 807316A4  38 80 00 01 */	li r4, 1
/* 807316A8  88 03 00 11 */	lbz r0, 0x11(r3)
/* 807316AC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 807316B0  40 82 00 18 */	bne lbl_807316C8
/* 807316B4  C0 3F 00 04 */	lfs f1, 4(r31)
/* 807316B8  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 807316BC  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 807316C0  41 82 00 08 */	beq lbl_807316C8
/* 807316C4  38 80 00 00 */	li r4, 0
lbl_807316C8:
/* 807316C8  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 807316CC  41 82 00 14 */	beq lbl_807316E0
/* 807316D0  7F C3 F3 78 */	mr r3, r30
/* 807316D4  38 80 00 03 */	li r4, 3
/* 807316D8  38 A0 00 05 */	li r5, 5
/* 807316DC  4B FF C5 E1 */	bl setActionMode__8daE_OC_cFii
lbl_807316E0:
/* 807316E0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 807316E4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 807316E8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 807316EC  7C 08 03 A6 */	mtlr r0
/* 807316F0  38 21 00 40 */	addi r1, r1, 0x40
/* 807316F4  4E 80 00 20 */	blr 
