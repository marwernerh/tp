lbl_800DE990:
/* 800DE990  38 80 00 00 */	li r4, 0
/* 800DE994  A0 03 1F BC */	lhz r0, 0x1fbc(r3)
/* 800DE998  28 00 00 0A */	cmplwi r0, 0xa
/* 800DE99C  40 82 00 14 */	bne lbl_800DE9B0
/* 800DE9A0  A8 03 30 1C */	lha r0, 0x301c(r3)
/* 800DE9A4  2C 00 00 00 */	cmpwi r0, 0
/* 800DE9A8  40 82 00 08 */	bne lbl_800DE9B0
/* 800DE9AC  38 80 00 01 */	li r4, 1
lbl_800DE9B0:
/* 800DE9B0  7C 83 23 78 */	mr r3, r4
/* 800DE9B4  4E 80 00 20 */	blr 