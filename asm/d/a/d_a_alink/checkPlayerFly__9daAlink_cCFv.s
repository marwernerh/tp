lbl_800D03B4:
/* 800D03B4  80 83 31 A0 */	lwz r4, 0x31a0(r3)
/* 800D03B8  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070852@ha */
/* 800D03BC  38 03 08 52 */	addi r0, r3, 0x0852 /* 0x00070852@l */
/* 800D03C0  7C 83 00 38 */	and r3, r4, r0
/* 800D03C4  4E 80 00 20 */	blr 