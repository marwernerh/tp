lbl_80049368:
/* 80049368  38 00 00 00 */	li r0, 0
/* 8004936C  90 03 00 04 */	stw r0, 4(r3)
/* 80049370  90 03 00 00 */	stw r0, 0(r3)
/* 80049374  90 03 00 0C */	stw r0, 0xc(r3)
/* 80049378  90 03 00 08 */	stw r0, 8(r3)
/* 8004937C  38 00 00 3F */	li r0, 0x3f
/* 80049380  98 03 00 11 */	stb r0, 0x11(r3)
/* 80049384  4E 80 00 20 */	blr 