/* 801A8A34 001A5974  3C 60 80 43 */ lis r3, lbl_8042CA54@ha
/* 801A8A38 001A5978  38 63 CA 54 */ addi r3, r3, lbl_8042CA54@l
/* 801A8A3C 001A597C  80 63 0E 80 */ lwz r3, 0xe80(r3)
/* 801A8A40 001A5980  4E 80 00 20 */ blr