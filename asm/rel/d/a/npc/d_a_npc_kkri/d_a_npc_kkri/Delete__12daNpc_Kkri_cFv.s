lbl_8054FC10:
/* 8054FC10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8054FC14  7C 08 02 A6 */	mflr r0
/* 8054FC18  90 01 00 14 */	stw r0, 0x14(r1)
/* 8054FC1C  38 80 FF FF */	li r4, -1
/* 8054FC20  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 8054FC24  81 8C 00 08 */	lwz r12, 8(r12)
/* 8054FC28  7D 89 03 A6 */	mtctr r12
/* 8054FC2C  4E 80 04 21 */	bctrl 
/* 8054FC30  38 60 00 01 */	li r3, 1
/* 8054FC34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8054FC38  7C 08 03 A6 */	mtlr r0
/* 8054FC3C  38 21 00 10 */	addi r1, r1, 0x10
/* 8054FC40  4E 80 00 20 */	blr 
