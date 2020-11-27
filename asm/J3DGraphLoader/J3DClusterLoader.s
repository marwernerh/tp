.include "macros.inc"

.section .text, "ax" # 80334130


.global J3DClusterLoaderDataBase_NS_load
J3DClusterLoaderDataBase_NS_load:
/* 80334130 00331070  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80334134 00331074  7C 08 02 A6 */	mflr r0
/* 80334138 00331078  90 01 00 24 */	stw r0, 0x24(r1)
/* 8033413C 0033107C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80334140 00331080  7C 7F 1B 78 */	mr r31, r3
/* 80334144 00331084  80 83 00 00 */	lwz r4, 0(r3)
/* 80334148 00331088  3C 04 B5 CD */	addis r0, r4, 0xb5cd
/* 8033414C 0033108C  28 00 44 31 */	cmplwi r0, 0x4431
/* 80334150 00331090  40 82 00 40 */	bne lbl_80334190
/* 80334154 00331094  80 7F 00 04 */	lwz r3, 4(r31)
/* 80334158 00331098  3C 03 9D 94 */	addis r0, r3, 0x9d94
/* 8033415C 0033109C  28 00 73 31 */	cmplwi r0, 0x7331
/* 80334160 003310A0  40 82 00 30 */	bne lbl_80334190
/* 80334164 003310A4  38 61 00 08 */	addi r3, r1, 8
/* 80334168 003310A8  48 00 00 65 */	bl J3DClusterLoader_v15
/* 8033416C 003310AC  38 61 00 08 */	addi r3, r1, 8
/* 80334170 003310B0  7F E4 FB 78 */	mr r4, r31
/* 80334174 003310B4  48 00 00 D1 */	bl J3DClusterLoader_v15_NS_load
/* 80334178 003310B8  7C 7F 1B 78 */	mr r31, r3
/* 8033417C 003310BC  38 61 00 08 */	addi r3, r1, 8
/* 80334180 003310C0  38 80 FF FF */	li r4, -1
/* 80334184 003310C4  48 00 00 65 */	bl J3DClusterLoader_v15_NS_dtor
/* 80334188 003310C8  7F E3 FB 78 */	mr r3, r31
/* 8033418C 003310CC  48 00 00 2C */	b lbl_803341B8
lbl_80334190:
/* 80334190 003310D0  3C 04 B5 CD */	addis r0, r4, 0xb5cd
/* 80334194 003310D4  28 00 44 32 */	cmplwi r0, 0x4432
/* 80334198 003310D8  40 82 00 1C */	bne lbl_803341B4
/* 8033419C 003310DC  80 7F 00 04 */	lwz r3, 4(r31)
/* 803341A0 003310E0  3C 03 9D 94 */	addis r0, r3, 0x9d94
/* 803341A4 003310E4  28 00 73 32 */	cmplwi r0, 0x7332
/* 803341A8 003310E8  40 82 00 0C */	bne lbl_803341B4
/* 803341AC 003310EC  38 60 00 00 */	li r3, 0
/* 803341B0 003310F0  48 00 00 08 */	b lbl_803341B8
lbl_803341B4:
/* 803341B4 003310F4  38 60 00 00 */	li r3, 0
lbl_803341B8:
/* 803341B8 003310F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803341BC 003310FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803341C0 00331100  7C 08 03 A6 */	mtlr r0
/* 803341C4 00331104  38 21 00 20 */	addi r1, r1, 0x20
/* 803341C8 00331108  4E 80 00 20 */	blr 

.global J3DClusterLoader_v15
J3DClusterLoader_v15:
/* 803341CC 0033110C  3C 80 80 3D */	lis r4, lbl_803CF0F8@ha
/* 803341D0 00331110  38 04 F0 F8 */	addi r0, r4, lbl_803CF0F8@l
/* 803341D4 00331114  90 03 00 00 */	stw r0, 0(r3)
/* 803341D8 00331118  3C 80 80 3D */	lis r4, lbl_803CF0E8@ha
/* 803341DC 0033111C  38 04 F0 E8 */	addi r0, r4, lbl_803CF0E8@l
/* 803341E0 00331120  90 03 00 00 */	stw r0, 0(r3)
/* 803341E4 00331124  4E 80 00 20 */	blr 

.global J3DClusterLoader_v15_NS_dtor
J3DClusterLoader_v15_NS_dtor:
/* 803341E8 00331128  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803341EC 0033112C  7C 08 02 A6 */	mflr r0
/* 803341F0 00331130  90 01 00 14 */	stw r0, 0x14(r1)
/* 803341F4 00331134  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803341F8 00331138  7C 7F 1B 79 */	or. r31, r3, r3
/* 803341FC 0033113C  41 82 00 30 */	beq lbl_8033422C
/* 80334200 00331140  3C 60 80 3D */	lis r3, lbl_803CF0E8@ha
/* 80334204 00331144  38 03 F0 E8 */	addi r0, r3, lbl_803CF0E8@l
/* 80334208 00331148  90 1F 00 00 */	stw r0, 0(r31)
/* 8033420C 0033114C  41 82 00 10 */	beq lbl_8033421C
/* 80334210 00331150  3C 60 80 3D */	lis r3, lbl_803CF0F8@ha
/* 80334214 00331154  38 03 F0 F8 */	addi r0, r3, lbl_803CF0F8@l
/* 80334218 00331158  90 1F 00 00 */	stw r0, 0(r31)
lbl_8033421C:
/* 8033421C 0033115C  7C 80 07 35 */	extsh. r0, r4
/* 80334220 00331160  40 81 00 0C */	ble lbl_8033422C
/* 80334224 00331164  7F E3 FB 78 */	mr r3, r31
/* 80334228 00331168  4B F9 AB 15 */	bl __dl
lbl_8033422C:
/* 8033422C 0033116C  7F E3 FB 78 */	mr r3, r31
/* 80334230 00331170  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80334234 00331174  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80334238 00331178  7C 08 03 A6 */	mtlr r0
/* 8033423C 0033117C  38 21 00 10 */	addi r1, r1, 0x10
/* 80334240 00331180  4E 80 00 20 */	blr 

.global J3DClusterLoader_v15_NS_load
J3DClusterLoader_v15_NS_load:
/* 80334244 00331184  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80334248 00331188  7C 08 02 A6 */	mflr r0
/* 8033424C 0033118C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80334250 00331190  39 61 00 20 */	addi r11, r1, 0x20
/* 80334254 00331194  48 02 DF 7D */	bl func_803621D0
/* 80334258 00331198  7C 7A 1B 78 */	mr r26, r3
/* 8033425C 0033119C  7C 9F 23 78 */	mr r31, r4
/* 80334260 003311A0  38 60 00 28 */	li r3, 0x28
/* 80334264 003311A4  4B F9 A9 E9 */	bl __nw
/* 80334268 003311A8  7C 60 1B 79 */	or. r0, r3, r3
/* 8033426C 003311AC  41 82 00 0C */	beq lbl_80334278
/* 80334270 003311B0  4B FF 9F 89 */	bl J3DDeformData
/* 80334274 003311B4  7C 60 1B 78 */	mr r0, r3
lbl_80334278:
/* 80334278 003311B8  90 1A 00 04 */	stw r0, 4(r26)
/* 8033427C 003311BC  3B 9F 00 20 */	addi r28, r31, 0x20
/* 80334280 003311C0  3B 60 00 00 */	li r27, 0
/* 80334284 003311C4  3C 60 43 4C */	lis r3, 0x434C5331@ha
/* 80334288 003311C8  3B A3 53 31 */	addi r29, r3, 0x434C5331@l
/* 8033428C 003311CC  3C 60 80 3A */	lis r3, lbl_803A2098@ha
/* 80334290 003311D0  3B C3 20 98 */	addi r30, r3, lbl_803A2098@l
/* 80334294 003311D4  83 FF 00 0C */	lwz r31, 0xc(r31)
/* 80334298 003311D8  48 00 00 3C */	b lbl_803342D4
lbl_8033429C:
/* 8033429C 003311DC  80 1C 00 00 */	lwz r0, 0(r28)
/* 803342A0 003311E0  7C 00 E8 00 */	cmpw r0, r29
/* 803342A4 003311E4  41 82 00 08 */	beq lbl_803342AC
/* 803342A8 003311E8  48 00 00 14 */	b lbl_803342BC
lbl_803342AC:
/* 803342AC 003311EC  7F 43 D3 78 */	mr r3, r26
/* 803342B0 003311F0  7F 84 E3 78 */	mr r4, r28
/* 803342B4 003311F4  48 00 00 45 */	bl J3DClusterLoader_v15_NS_readCluster
/* 803342B8 003311F8  48 00 00 10 */	b lbl_803342C8
lbl_803342BC:
/* 803342BC 003311FC  7F C3 F3 78 */	mr r3, r30
/* 803342C0 00331200  4C C6 31 82 */	crclr 6
/* 803342C4 00331204  4B CD 27 F9 */	bl OSReport
lbl_803342C8:
/* 803342C8 00331208  80 1C 00 04 */	lwz r0, 4(r28)
/* 803342CC 0033120C  7F 9C 02 14 */	add r28, r28, r0
/* 803342D0 00331210  3B 7B 00 01 */	addi r27, r27, 1
lbl_803342D4:
/* 803342D4 00331214  7C 1B F8 40 */	cmplw r27, r31
/* 803342D8 00331218  41 80 FF C4 */	blt lbl_8033429C
/* 803342DC 0033121C  80 7A 00 04 */	lwz r3, 4(r26)
/* 803342E0 00331220  39 61 00 20 */	addi r11, r1, 0x20
/* 803342E4 00331224  48 02 DF 39 */	bl func_8036221C
/* 803342E8 00331228  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803342EC 0033122C  7C 08 03 A6 */	mtlr r0
/* 803342F0 00331230  38 21 00 20 */	addi r1, r1, 0x20
/* 803342F4 00331234  4E 80 00 20 */	blr 

.global J3DClusterLoader_v15_NS_readCluster
J3DClusterLoader_v15_NS_readCluster:
/* 803342F8 00331238  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803342FC 0033123C  7C 08 02 A6 */	mflr r0
/* 80334300 00331240  90 01 00 34 */	stw r0, 0x34(r1)
/* 80334304 00331244  39 61 00 30 */	addi r11, r1, 0x30
/* 80334308 00331248  48 02 DE BD */	bl func_803621C4
/* 8033430C 0033124C  7C 7B 1B 78 */	mr r27, r3
/* 80334310 00331250  7C 9C 23 78 */	mr r28, r4
/* 80334314 00331254  A0 04 00 08 */	lhz r0, 8(r4)
/* 80334318 00331258  80 63 00 04 */	lwz r3, 4(r3)
/* 8033431C 0033125C  B0 03 00 00 */	sth r0, 0(r3)
/* 80334320 00331260  A0 04 00 0A */	lhz r0, 0xa(r4)
/* 80334324 00331264  80 7B 00 04 */	lwz r3, 4(r27)
/* 80334328 00331268  B0 03 00 02 */	sth r0, 2(r3)
/* 8033432C 0033126C  A0 04 00 0E */	lhz r0, 0xe(r4)
/* 80334330 00331270  80 7B 00 04 */	lwz r3, 4(r27)
/* 80334334 00331274  B0 03 00 14 */	sth r0, 0x14(r3)
/* 80334338 00331278  A0 04 00 10 */	lhz r0, 0x10(r4)
/* 8033433C 0033127C  80 7B 00 04 */	lwz r3, 4(r27)
/* 80334340 00331280  B0 03 00 16 */	sth r0, 0x16(r3)
/* 80334344 00331284  A0 04 00 0C */	lhz r0, 0xc(r4)
/* 80334348 00331288  80 7B 00 04 */	lwz r3, 4(r27)
/* 8033434C 0033128C  B0 03 00 04 */	sth r0, 4(r3)
/* 80334350 00331290  80 04 00 28 */	lwz r0, 0x28(r4)
/* 80334354 00331294  28 00 00 00 */	cmplwi r0, 0
/* 80334358 00331298  41 82 00 3C */	beq lbl_80334394
/* 8033435C 0033129C  38 60 00 10 */	li r3, 0x10
/* 80334360 003312A0  4B F9 A8 ED */	bl __nw
/* 80334364 003312A4  7C 7A 1B 79 */	or. r26, r3, r3
/* 80334368 003312A8  41 82 00 20 */	beq lbl_80334388
/* 8033436C 003312AC  7F 83 E3 78 */	mr r3, r28
/* 80334370 003312B0  80 9C 00 28 */	lwz r4, 0x28(r28)
/* 80334374 003312B4  4B FD 61 BD */	bl JSUConvertOffsetToPtr_X39_
/* 80334378 003312B8  7C 64 1B 78 */	mr r4, r3
/* 8033437C 003312BC  7F 43 D3 78 */	mr r3, r26
/* 80334380 003312C0  4B FA A6 61 */	bl JUTNameTab_X1_
/* 80334384 003312C4  7C 7A 1B 78 */	mr r26, r3
lbl_80334388:
/* 80334388 003312C8  80 7B 00 04 */	lwz r3, 4(r27)
/* 8033438C 003312CC  93 43 00 20 */	stw r26, 0x20(r3)
/* 80334390 003312D0  48 00 00 10 */	b lbl_803343A0
lbl_80334394:
/* 80334394 003312D4  38 00 00 00 */	li r0, 0
/* 80334398 003312D8  80 7B 00 04 */	lwz r3, 4(r27)
/* 8033439C 003312DC  90 03 00 20 */	stw r0, 0x20(r3)
lbl_803343A0:
/* 803343A0 003312E0  80 1C 00 2C */	lwz r0, 0x2c(r28)
/* 803343A4 003312E4  28 00 00 00 */	cmplwi r0, 0
/* 803343A8 003312E8  41 82 00 3C */	beq lbl_803343E4
/* 803343AC 003312EC  38 60 00 10 */	li r3, 0x10
/* 803343B0 003312F0  4B F9 A8 9D */	bl __nw
/* 803343B4 003312F4  7C 7A 1B 79 */	or. r26, r3, r3
/* 803343B8 003312F8  41 82 00 20 */	beq lbl_803343D8
/* 803343BC 003312FC  7F 83 E3 78 */	mr r3, r28
/* 803343C0 00331300  80 9C 00 2C */	lwz r4, 0x2c(r28)
/* 803343C4 00331304  4B FD 61 6D */	bl JSUConvertOffsetToPtr_X39_
/* 803343C8 00331308  7C 64 1B 78 */	mr r4, r3
/* 803343CC 0033130C  7F 43 D3 78 */	mr r3, r26
/* 803343D0 00331310  4B FA A6 11 */	bl JUTNameTab_X1_
/* 803343D4 00331314  7C 7A 1B 78 */	mr r26, r3
lbl_803343D8:
/* 803343D8 00331318  80 7B 00 04 */	lwz r3, 4(r27)
/* 803343DC 0033131C  93 43 00 24 */	stw r26, 0x24(r3)
/* 803343E0 00331320  48 00 00 10 */	b lbl_803343F0
lbl_803343E4:
/* 803343E4 00331324  38 00 00 00 */	li r0, 0
/* 803343E8 00331328  80 7B 00 04 */	lwz r3, 4(r27)
/* 803343EC 0033132C  90 03 00 24 */	stw r0, 0x24(r3)
lbl_803343F0:
/* 803343F0 00331330  7F 83 E3 78 */	mr r3, r28
/* 803343F4 00331334  80 9C 00 20 */	lwz r4, 0x20(r28)
/* 803343F8 00331338  4B FD 61 69 */	bl JSUConvertOffsetToPtr_X41_
/* 803343FC 0033133C  80 9B 00 04 */	lwz r4, 4(r27)
/* 80334400 00331340  90 64 00 18 */	stw r3, 0x18(r4)
/* 80334404 00331344  7F 83 E3 78 */	mr r3, r28
/* 80334408 00331348  80 9C 00 24 */	lwz r4, 0x24(r28)
/* 8033440C 0033134C  4B FD 61 55 */	bl JSUConvertOffsetToPtr_X41_
/* 80334410 00331350  80 9B 00 04 */	lwz r4, 4(r27)
/* 80334414 00331354  90 64 00 1C */	stw r3, 0x1c(r4)
/* 80334418 00331358  83 1C 00 14 */	lwz r24, 0x14(r28)
/* 8033441C 0033135C  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 80334420 00331360  7F 38 00 50 */	subf r25, r24, r0
/* 80334424 00331364  80 1C 00 1C */	lwz r0, 0x1c(r28)
/* 80334428 00331368  7F 58 00 50 */	subf r26, r24, r0
/* 8033442C 0033136C  80 1C 00 20 */	lwz r0, 0x20(r28)
/* 80334430 00331370  7C 78 00 50 */	subf r3, r24, r0
/* 80334434 00331374  7C 7F 1B 78 */	mr r31, r3
/* 80334438 00331378  38 80 00 20 */	li r4, 0x20
/* 8033443C 0033137C  4B F9 A8 B1 */	bl __nwa_X1_
/* 80334440 00331380  7C 7E 1B 78 */	mr r30, r3
/* 80334444 00331384  7F 83 E3 78 */	mr r3, r28
/* 80334448 00331388  7F 04 C3 78 */	mr r4, r24
/* 8033444C 0033138C  48 00 02 29 */	bl JSUConvertOffsetToPtr_X65_
/* 80334450 00331390  7C 64 1B 78 */	mr r4, r3
/* 80334454 00331394  7F C3 F3 78 */	mr r3, r30
/* 80334458 00331398  7F E5 FB 78 */	mr r5, r31
/* 8033445C 0033139C  4B CC F0 E5 */	bl func_80003540
/* 80334460 003313A0  80 7B 00 04 */	lwz r3, 4(r27)
/* 80334464 003313A4  93 C3 00 08 */	stw r30, 8(r3)
/* 80334468 003313A8  7C 1E CA 14 */	add r0, r30, r25
/* 8033446C 003313AC  80 7B 00 04 */	lwz r3, 4(r27)
/* 80334470 003313B0  90 03 00 0C */	stw r0, 0xc(r3)
/* 80334474 003313B4  7C 1E D2 14 */	add r0, r30, r26
/* 80334478 003313B8  80 7B 00 04 */	lwz r3, 4(r27)
/* 8033447C 003313BC  90 03 00 10 */	stw r0, 0x10(r3)
/* 80334480 003313C0  3B A0 00 00 */	li r29, 0
/* 80334484 003313C4  3B 40 00 00 */	li r26, 0
/* 80334488 003313C8  7F 18 F0 50 */	subf r24, r24, r30
/* 8033448C 003313CC  48 00 00 A4 */	b lbl_80334530
lbl_80334490:
/* 80334490 003313D0  80 03 00 08 */	lwz r0, 8(r3)
/* 80334494 003313D4  7E E0 D2 14 */	add r23, r0, r26
/* 80334498 003313D8  7F 03 C3 78 */	mr r3, r24
/* 8033449C 003313DC  80 97 00 08 */	lwz r4, 8(r23)
/* 803344A0 003313E0  48 00 01 BD */	bl JSUConvertOffsetToPtr_X64_
/* 803344A4 003313E4  90 77 00 08 */	stw r3, 8(r23)
/* 803344A8 003313E8  7F 83 E3 78 */	mr r3, r28
/* 803344AC 003313EC  80 97 00 18 */	lwz r4, 0x18(r23)
/* 803344B0 003313F0  4B FB FE 11 */	bl JSUConvertOffsetToPtr_X28_
/* 803344B4 003313F4  90 77 00 18 */	stw r3, 0x18(r23)
/* 803344B8 003313F8  7F 03 C3 78 */	mr r3, r24
/* 803344BC 003313FC  80 97 00 1C */	lwz r4, 0x1c(r23)
/* 803344C0 00331400  48 00 01 85 */	bl JSUConvertOffsetToPtr_X63_
/* 803344C4 00331404  90 77 00 1C */	stw r3, 0x1c(r23)
/* 803344C8 00331408  38 60 00 14 */	li r3, 0x14
/* 803344CC 0033140C  4B F9 A7 81 */	bl __nw
/* 803344D0 00331410  7C 79 1B 79 */	or. r25, r3, r3
/* 803344D4 00331414  41 82 00 10 */	beq lbl_803344E4
/* 803344D8 00331418  80 9B 00 04 */	lwz r4, 4(r27)
/* 803344DC 0033141C  4B FF 9E C1 */	bl J3DDeformer
/* 803344E0 00331420  7C 79 1B 78 */	mr r25, r3
lbl_803344E4:
/* 803344E4 00331424  A0 17 00 14 */	lhz r0, 0x14(r23)
/* 803344E8 00331428  28 00 00 00 */	cmplwi r0, 0
/* 803344EC 0033142C  41 82 00 18 */	beq lbl_80334504
/* 803344F0 00331430  1C 00 00 03 */	mulli r0, r0, 3
/* 803344F4 00331434  54 03 10 3A */	slwi r3, r0, 2
/* 803344F8 00331438  4B F9 A7 CD */	bl __nwa
/* 803344FC 0033143C  90 79 00 0C */	stw r3, 0xc(r25)
/* 80334500 00331440  48 00 00 0C */	b lbl_8033450C
lbl_80334504:
/* 80334504 00331444  38 00 00 00 */	li r0, 0
/* 80334508 00331448  90 19 00 0C */	stw r0, 0xc(r25)
lbl_8033450C:
/* 8033450C 0033144C  88 17 00 0C */	lbz r0, 0xc(r23)
/* 80334510 00331450  90 19 00 10 */	stw r0, 0x10(r25)
/* 80334514 00331454  A0 17 00 10 */	lhz r0, 0x10(r23)
/* 80334518 00331458  54 03 10 3A */	slwi r3, r0, 2
/* 8033451C 0033145C  4B F9 A7 A9 */	bl __nwa
/* 80334520 00331460  90 79 00 08 */	stw r3, 8(r25)
/* 80334524 00331464  93 37 00 20 */	stw r25, 0x20(r23)
/* 80334528 00331468  3B BD 00 01 */	addi r29, r29, 1
/* 8033452C 0033146C  3B 5A 00 24 */	addi r26, r26, 0x24
lbl_80334530:
/* 80334530 00331470  80 7B 00 04 */	lwz r3, 4(r27)
/* 80334534 00331474  A0 03 00 00 */	lhz r0, 0(r3)
/* 80334538 00331478  7C 1D 00 00 */	cmpw r29, r0
/* 8033453C 0033147C  41 80 FF 54 */	blt lbl_80334490
/* 80334540 00331480  3A E0 00 00 */	li r23, 0
/* 80334544 00331484  3B A0 00 00 */	li r29, 0
/* 80334548 00331488  48 00 00 34 */	b lbl_8033457C
lbl_8033454C:
/* 8033454C 0033148C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80334550 00331490  7F 00 EA 14 */	add r24, r0, r29
/* 80334554 00331494  7F 83 E3 78 */	mr r3, r28
/* 80334558 00331498  80 98 00 04 */	lwz r4, 4(r24)
/* 8033455C 0033149C  4B FB FD 65 */	bl JSUConvertOffsetToPtr_X28_
/* 80334560 003314A0  90 78 00 04 */	stw r3, 4(r24)
/* 80334564 003314A4  7F 83 E3 78 */	mr r3, r28
/* 80334568 003314A8  80 98 00 08 */	lwz r4, 8(r24)
/* 8033456C 003314AC  4B FB FD 55 */	bl JSUConvertOffsetToPtr_X28_
/* 80334570 003314B0  90 78 00 08 */	stw r3, 8(r24)
/* 80334574 003314B4  3A F7 00 01 */	addi r23, r23, 1
/* 80334578 003314B8  3B BD 00 0C */	addi r29, r29, 0xc
lbl_8033457C:
/* 8033457C 003314BC  80 7B 00 04 */	lwz r3, 4(r27)
/* 80334580 003314C0  A0 03 00 02 */	lhz r0, 2(r3)
/* 80334584 003314C4  7C 17 00 00 */	cmpw r23, r0
/* 80334588 003314C8  41 80 FF C4 */	blt lbl_8033454C
/* 8033458C 003314CC  3A E0 00 00 */	li r23, 0
/* 80334590 003314D0  3B A0 00 00 */	li r29, 0
/* 80334594 003314D4  48 00 00 34 */	b lbl_803345C8
lbl_80334598:
/* 80334598 003314D8  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8033459C 003314DC  7F 00 EA 14 */	add r24, r0, r29
/* 803345A0 003314E0  7F 83 E3 78 */	mr r3, r28
/* 803345A4 003314E4  80 98 00 04 */	lwz r4, 4(r24)
/* 803345A8 003314E8  4B FB FD 19 */	bl JSUConvertOffsetToPtr_X28_
/* 803345AC 003314EC  90 78 00 04 */	stw r3, 4(r24)
/* 803345B0 003314F0  7F 83 E3 78 */	mr r3, r28
/* 803345B4 003314F4  80 98 00 08 */	lwz r4, 8(r24)
/* 803345B8 003314F8  4B FB FD 09 */	bl JSUConvertOffsetToPtr_X28_
/* 803345BC 003314FC  90 78 00 08 */	stw r3, 8(r24)
/* 803345C0 00331500  3A F7 00 01 */	addi r23, r23, 1
/* 803345C4 00331504  3B BD 00 0C */	addi r29, r29, 0xc
lbl_803345C8:
/* 803345C8 00331508  80 7B 00 04 */	lwz r3, 4(r27)
/* 803345CC 0033150C  A0 03 00 04 */	lhz r0, 4(r3)
/* 803345D0 00331510  7C 17 00 00 */	cmpw r23, r0
/* 803345D4 00331514  41 80 FF C4 */	blt lbl_80334598
/* 803345D8 00331518  7F C3 F3 78 */	mr r3, r30
/* 803345DC 0033151C  7F E4 FB 78 */	mr r4, r31
/* 803345E0 00331520  48 00 6F FD */	bl DCStoreRange
/* 803345E4 00331524  39 61 00 30 */	addi r11, r1, 0x30
/* 803345E8 00331528  48 02 DC 29 */	bl func_80362210
/* 803345EC 0033152C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803345F0 00331530  7C 08 03 A6 */	mtlr r0
/* 803345F4 00331534  38 21 00 30 */	addi r1, r1, 0x30
/* 803345F8 00331538  4E 80 00 20 */	blr 
/* 803345FC 0033153C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80334600 00331540  7C 08 02 A6 */	mflr r0
/* 80334604 00331544  90 01 00 14 */	stw r0, 0x14(r1)
/* 80334608 00331548  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8033460C 0033154C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80334610 00331550  41 82 00 1C */	beq lbl_8033462C
/* 80334614 00331554  3C A0 80 3D */	lis r5, lbl_803CF0F8@ha
/* 80334618 00331558  38 05 F0 F8 */	addi r0, r5, lbl_803CF0F8@l
/* 8033461C 0033155C  90 1F 00 00 */	stw r0, 0(r31)
/* 80334620 00331560  7C 80 07 35 */	extsh. r0, r4
/* 80334624 00331564  40 81 00 08 */	ble lbl_8033462C
/* 80334628 00331568  4B F9 A7 15 */	bl __dl
lbl_8033462C:
/* 8033462C 0033156C  7F E3 FB 78 */	mr r3, r31
/* 80334630 00331570  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80334634 00331574  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80334638 00331578  7C 08 03 A6 */	mtlr r0
/* 8033463C 0033157C  38 21 00 10 */	addi r1, r1, 0x10
/* 80334640 00331580  4E 80 00 20 */	blr 

.global JSUConvertOffsetToPtr_X63_
JSUConvertOffsetToPtr_X63_:
/* 80334644 00331584  28 04 00 00 */	cmplwi r4, 0
/* 80334648 00331588  40 82 00 0C */	bne lbl_80334654
/* 8033464C 0033158C  38 60 00 00 */	li r3, 0
/* 80334650 00331590  4E 80 00 20 */	blr 
lbl_80334654:
/* 80334654 00331594  7C 63 22 14 */	add r3, r3, r4
/* 80334658 00331598  4E 80 00 20 */	blr 

.global JSUConvertOffsetToPtr_X64_
JSUConvertOffsetToPtr_X64_:
/* 8033465C 0033159C  28 04 00 00 */	cmplwi r4, 0
/* 80334660 003315A0  40 82 00 0C */	bne lbl_8033466C
/* 80334664 003315A4  38 60 00 00 */	li r3, 0
/* 80334668 003315A8  4E 80 00 20 */	blr 
lbl_8033466C:
/* 8033466C 003315AC  7C 63 22 14 */	add r3, r3, r4
/* 80334670 003315B0  4E 80 00 20 */	blr 

.global JSUConvertOffsetToPtr_X65_
JSUConvertOffsetToPtr_X65_:
/* 80334674 003315B4  28 04 00 00 */	cmplwi r4, 0
/* 80334678 003315B8  40 82 00 0C */	bne lbl_80334684
/* 8033467C 003315BC  38 60 00 00 */	li r3, 0
/* 80334680 003315C0  4E 80 00 20 */	blr 
lbl_80334684:
/* 80334684 003315C4  7C 63 22 14 */	add r3, r3, r4
/* 80334688 003315C8  4E 80 00 20 */	blr 
