lbl_80097778:
/* 80097778  80 03 06 0C */	lwz r0, 0x60c(r3)
/* 8009777C  7C 00 23 78 */	or r0, r0, r4
/* 80097780  90 03 06 0C */	stw r0, 0x60c(r3)
/* 80097784  7C 03 03 78 */	mr r3, r0
/* 80097788  4E 80 00 20 */	blr 