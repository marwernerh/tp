lbl_80B24728:
/* 80B24728  80 83 00 00 */	lwz r4, 0(r3)
/* 80B2472C  2C 04 00 00 */	cmpwi r4, 0
/* 80B24730  41 82 00 0C */	beq lbl_80B2473C
/* 80B24734  38 04 FF FF */	addi r0, r4, -1
/* 80B24738  90 03 00 00 */	stw r0, 0(r3)
lbl_80B2473C:
/* 80B2473C  80 63 00 00 */	lwz r3, 0(r3)
/* 80B24740  4E 80 00 20 */	blr 
