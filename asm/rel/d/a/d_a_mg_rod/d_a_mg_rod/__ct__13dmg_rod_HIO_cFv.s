lbl_804A95EC:
/* 804A95EC  3C 80 80 4C */	lis r4, lit_3879@ha /* 0x804BB534@ha */
/* 804A95F0  38 A4 B5 34 */	addi r5, r4, lit_3879@l /* 0x804BB534@l */
/* 804A95F4  3C 80 80 4C */	lis r4, __vt__13dmg_rod_HIO_c@ha /* 0x804BBB7C@ha */
/* 804A95F8  38 04 BB 7C */	addi r0, r4, __vt__13dmg_rod_HIO_c@l /* 0x804BBB7C@l */
/* 804A95FC  90 03 00 00 */	stw r0, 0(r3)
/* 804A9600  38 00 FF FF */	li r0, -1
/* 804A9604  98 03 00 04 */	stb r0, 4(r3)
/* 804A9608  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 804A960C  D0 03 00 08 */	stfs f0, 8(r3)
/* 804A9610  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 804A9614  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 804A9618  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 804A961C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 804A9620  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 804A9624  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 804A9628  C0 05 00 1C */	lfs f0, 0x1c(r5)
/* 804A962C  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 804A9630  C0 05 00 20 */	lfs f0, 0x20(r5)
/* 804A9634  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 804A9638  C0 05 00 24 */	lfs f0, 0x24(r5)
/* 804A963C  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 804A9640  38 00 00 00 */	li r0, 0
/* 804A9644  98 03 00 24 */	stb r0, 0x24(r3)
/* 804A9648  4E 80 00 20 */	blr 
