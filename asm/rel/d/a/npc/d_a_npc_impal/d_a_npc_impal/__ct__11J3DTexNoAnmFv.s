lbl_80A08458:
/* 80A08458  3C 80 80 A1 */	lis r4, __vt__11J3DTexNoAnm@ha /* 0x80A0C808@ha */
/* 80A0845C  38 04 C8 08 */	addi r0, r4, __vt__11J3DTexNoAnm@l /* 0x80A0C808@l */
/* 80A08460  90 03 00 00 */	stw r0, 0(r3)
/* 80A08464  38 80 00 00 */	li r4, 0
/* 80A08468  B0 83 00 04 */	sth r4, 4(r3)
/* 80A0846C  38 00 00 01 */	li r0, 1
/* 80A08470  B0 03 00 06 */	sth r0, 6(r3)
/* 80A08474  90 83 00 08 */	stw r4, 8(r3)
/* 80A08478  4E 80 00 20 */	blr 
