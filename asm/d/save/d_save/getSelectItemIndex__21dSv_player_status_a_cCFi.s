lbl_80032A5C:
/* 80032A5C  2C 04 00 04 */	cmpwi r4, 4
/* 80032A60  40 80 00 10 */	bge lbl_80032A70
/* 80032A64  7C 63 22 14 */	add r3, r3, r4
/* 80032A68  88 63 00 0B */	lbz r3, 0xb(r3)
/* 80032A6C  4E 80 00 20 */	blr 
lbl_80032A70:
/* 80032A70  38 60 00 00 */	li r3, 0
/* 80032A74  4E 80 00 20 */	blr 