lbl_802935A0:
/* 802935A0  A0 A3 00 02 */	lhz r5, 2(r3)
/* 802935A4  38 00 00 01 */	li r0, 1
/* 802935A8  7C 00 20 30 */	slw r0, r0, r4
/* 802935AC  7C A0 00 78 */	andc r0, r5, r0
/* 802935B0  B0 03 00 02 */	sth r0, 2(r3)
/* 802935B4  54 80 08 3C */	slwi r0, r4, 1
/* 802935B8  7C 63 02 14 */	add r3, r3, r0
/* 802935BC  A0 63 00 04 */	lhz r3, 4(r3)
/* 802935C0  4E 80 00 20 */	blr 