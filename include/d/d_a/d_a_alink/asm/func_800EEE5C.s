/* 800EEE5C 000EBD9C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800EEE60 000EBDA0  7C 08 02 A6 */ mflr r0
/* 800EEE64 000EBDA4  90 01 00 14 */ stw r0, 0x14(r1)
/* 800EEE68 000EBDA8  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800EEE6C 000EBDAC  93 C1 00 08 */ stw r30, 8(r1)
/* 800EEE70 000EBDB0  7C 7E 1B 78 */ mr r30, r3
/* 800EEE74 000EBDB4  7C 9F 23 78 */ mr r31, r4
/* 800EEE78 000EBDB8  81 83 06 28 */ lwz r12, 0x628(r3)
/* 800EEE7C 000EBDBC  81 8C 01 88 */ lwz r12, 0x188(r12)
/* 800EEE80 000EBDC0  7D 89 03 A6 */ mtctr r12
/* 800EEE84 000EBDC4  4E 80 04 21 */ bctrl
/* 800EEE88 000EBDC8  28 03 00 00 */ cmplwi r3, 0
/* 800EEE8C 000EBDCC  41 82 00 80 */ beq lbl_800EEF0C
/* 800EEE90 000EBDD0  7F C3 F3 78 */ mr r3, r30
/* 800EEE94 000EBDD4  4B FC A3 C1 */ bl daAlink_c_NS_checkNoUpperAnime
/* 800EEE98 000EBDD8  2C 03 00 00 */ cmpwi r3, 0
/* 800EEE9C 000EBDDC  41 82 00 70 */ beq lbl_800EEF0C
/* 800EEEA0 000EBDE0  A0 1E 2F DC */ lhz r0, 0x2fdc(r30)
/* 800EEEA4 000EBDE4  28 00 01 03 */ cmplwi r0, 0x103
/* 800EEEA8 000EBDE8  40 82 00 64 */ bne lbl_800EEF0C
/* 800EEEAC 000EBDEC  4B FF D8 C1 */ bl daAlink_c_NS_checkHorseZeldaBowMode
/* 800EEEB0 000EBDF0  2C 03 00 00 */ cmpwi r3, 0
/* 800EEEB4 000EBDF4  40 82 00 58 */ bne lbl_800EEF0C
/* 800EEEB8 000EBDF8  2C 1F 00 00 */ cmpwi r31, 0
/* 800EEEBC 000EBDFC  41 82 00 14 */ beq lbl_800EEED0
/* 800EEEC0 000EBE00  7F C3 F3 78 */ mr r3, r30
/* 800EEEC4 000EBE04  4B FF FF 6D */ bl daAlink_c_NS_checkHorseSwordUpSpped
/* 800EEEC8 000EBE08  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800EEECC 000EBE0C  40 82 00 28 */ bne lbl_800EEEF4
lbl_800EEED0:
/* 800EEED0 000EBE10  2C 1F 00 00 */ cmpwi r31, 0
/* 800EEED4 000EBE14  40 82 00 38 */ bne lbl_800EEF0C
/* 800EEED8 000EBE18  80 7E 27 EC */ lwz r3, 0x27ec(r30)
/* 800EEEDC 000EBE1C  4B FE D6 6D */ bl daAlink_c_NS_checkEnemyGroup
/* 800EEEE0 000EBE20  2C 03 00 00 */ cmpwi r3, 0
/* 800EEEE4 000EBE24  41 82 00 28 */ beq lbl_800EEF0C
/* 800EEEE8 000EBE28  80 1E 05 74 */ lwz r0, 0x574(r30)
/* 800EEEEC 000EBE2C  54 00 05 29 */ rlwinm. r0, r0, 0, 0x14, 0x14
/* 800EEEF0 000EBE30  41 82 00 1C */ beq lbl_800EEF0C
lbl_800EEEF4:
/* 800EEEF4 000EBE34  7F C3 F3 78 */ mr r3, r30
/* 800EEEF8 000EBE38  4B FF E0 A5 */ bl daAlink_c_NS_setHorseSwordUpAnime
/* 800EEEFC 000EBE3C  3C 60 80 39 */ lis r3, lbl_8038E5A4@ha
/* 800EEF00 000EBE40  38 63 E5 A4 */ addi r3, r3, lbl_8038E5A4@l
/* 800EEF04 000EBE44  A8 03 00 50 */ lha r0, 0x50(r3)
/* 800EEF08 000EBE48  B0 1E 30 02 */ sth r0, 0x3002(r30)
lbl_800EEF0C:
/* 800EEF0C 000EBE4C  80 1E 05 74 */ lwz r0, 0x574(r30)
/* 800EEF10 000EBE50  54 00 05 66 */ rlwinm r0, r0, 0, 0x15, 0x13
/* 800EEF14 000EBE54  90 1E 05 74 */ stw r0, 0x574(r30)
/* 800EEF18 000EBE58  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800EEF1C 000EBE5C  83 C1 00 08 */ lwz r30, 8(r1)
/* 800EEF20 000EBE60  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800EEF24 000EBE64  7C 08 03 A6 */ mtlr r0
/* 800EEF28 000EBE68  38 21 00 10 */ addi r1, r1, 0x10
/* 800EEF2C 000EBE6C  4E 80 00 20 */ blr