/* 800CF2DC 000CC21C  80 83 06 50 */ lwz r4, 0x650(r3)
/* 800CF2E0 000CC220  80 84 00 84 */ lwz r4, 0x84(r4)
/* 800CF2E4 000CC224  80 84 00 0C */ lwz r4, 0xc(r4)
/* 800CF2E8 000CC228  A0 03 30 B8 */ lhz r0, 0x30b8(r3)
/* 800CF2EC 000CC22C  1C 00 00 30 */ mulli r0, r0, 0x30
/* 800CF2F0 000CC230  7C 64 02 14 */ add r3, r4, r0
/* 800CF2F4 000CC234  4E 80 00 20 */ blr