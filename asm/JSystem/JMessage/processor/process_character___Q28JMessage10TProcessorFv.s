lbl_802A81EC:
/* 802A81EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A81F0  7C 08 02 A6 */	mflr r0
/* 802A81F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A81F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A81FC  7C 7F 1B 78 */	mr r31, r3
/* 802A8200  38 7F 00 0C */	addi r3, r31, 0xc
/* 802A8204  80 9F 00 04 */	lwz r4, 4(r31)
/* 802A8208  80 84 00 04 */	lwz r4, 4(r4)
/* 802A820C  81 84 00 04 */	lwz r12, 4(r4)
/* 802A8210  7D 89 03 A6 */	mtctr r12
/* 802A8214  4E 80 04 21 */	bctrl 
/* 802A8218  7C 64 1B 78 */	mr r4, r3
/* 802A821C  2C 04 00 1A */	cmpwi r4, 0x1a
/* 802A8220  41 82 00 34 */	beq lbl_802A8254
/* 802A8224  40 80 00 3C */	bge lbl_802A8260
/* 802A8228  2C 04 00 00 */	cmpwi r4, 0
/* 802A822C  41 82 00 08 */	beq lbl_802A8234
/* 802A8230  48 00 00 30 */	b lbl_802A8260
lbl_802A8234:
/* 802A8234  7F E3 FB 78 */	mr r3, r31
/* 802A8238  81 9F 00 24 */	lwz r12, 0x24(r31)
/* 802A823C  7D 89 03 A6 */	mtctr r12
/* 802A8240  4E 80 04 21 */	bctrl 
/* 802A8244  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A8248  40 82 00 2C */	bne lbl_802A8274
/* 802A824C  38 60 00 00 */	li r3, 0
/* 802A8250  48 00 00 28 */	b lbl_802A8278
lbl_802A8254:
/* 802A8254  7F E3 FB 78 */	mr r3, r31
/* 802A8258  4B FF FD 8D */	bl on_tag___Q28JMessage10TProcessorFv
/* 802A825C  48 00 00 18 */	b lbl_802A8274
lbl_802A8260:
/* 802A8260  7F E3 FB 78 */	mr r3, r31
/* 802A8264  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A8268  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A826C  7D 89 03 A6 */	mtctr r12
/* 802A8270  4E 80 04 21 */	bctrl 
lbl_802A8274:
/* 802A8274  38 60 00 01 */	li r3, 1
lbl_802A8278:
/* 802A8278  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A827C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A8280  7C 08 03 A6 */	mtlr r0
/* 802A8284  38 21 00 10 */	addi r1, r1, 0x10
/* 802A8288  4E 80 00 20 */	blr 