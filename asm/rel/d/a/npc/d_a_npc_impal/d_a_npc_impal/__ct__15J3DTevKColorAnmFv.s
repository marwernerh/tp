lbl_80A083A4:
/* 80A083A4  38 80 00 00 */	li r4, 0
/* 80A083A8  B0 83 00 00 */	sth r4, 0(r3)
/* 80A083AC  38 00 00 01 */	li r0, 1
/* 80A083B0  B0 03 00 02 */	sth r0, 2(r3)
/* 80A083B4  90 83 00 04 */	stw r4, 4(r3)
/* 80A083B8  4E 80 00 20 */	blr 
