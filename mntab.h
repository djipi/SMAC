#ifdef DEF_MN
/*
 *  Keyword definitions
 */
#define	MN__68000	3
#define	MN__ASSERT	28
#define	MN__BSS	4
#define	MN__CARGS	10
#define	MN__CCUNDEF	51
#define	MN__COMM	8
#define	MN__DATA	5
#define	MN__DC	12
#define	MN__DCB	17
#define	MN__DISABLE	22
#define	MN__DPHRASE	42
#define	MN__DS	13
#define	MN__DSP	16
#define	MN__DUMP	20
#define	MN__EJECT	46
#define	MN__ELSE	501
#define	MN__ENABLE	23
#define	MN__END	34
#define	MN__ENDIF	502
#define	MN__ENDM	505
#define	MN__ENDR	507
#define	MN__EQU	18
#define	MN__EQURUNDEF	50
#define	MN__ERROR	47
#define	MN__EVEN	1
#define	MN__EXITM	510
#define	MN__EXTERN	24
#define	MN__FAIL	56
#define	MN__GLOBL	24
#define	MN__GOTO	11
#define	MN__GPU	15
#define	MN__GPUMAIN	53
#define	MN__IF	500
#define	MN__IIF	503
#define	MN__INCBIN	21
#define	MN__INCLUDE	33
#define	MN__INIT	9
#define	MN__JPAD	54
#define	MN__LIST	38
#define	MN__LONG	40
#define	MN__MACRO	504
#define	MN__MACUNDEF	14
#define	MN__NLIST	39
#define	MN__NOCLEAR	49
#define	MN__NOJPAD	55
#define	MN__NOLIST	39
#define	MN__OFFSET	7
#define	MN__ORG	0
#define	MN__PHRASE	41
#define	MN__PRINT	52
#define	MN__QPHRASE	43
#define	MN__REGBANK0	25
#define	MN__REGBANK1	26
#define	MN__REGUNDEF	50
#define	MN__REPT	506
#define	MN__SUBTTL	45
#define	MN__TEXT	6
#define	MN__TITLE	44
#define	MN__UNDEFMAC	14
#define	MN__WARN	48
#define	MN_ABCD	1001
#define	MN_ADD	1003
#define	MN_ADDA	1005
#define	MN_ADDI	1006
#define	MN_ADDQ	1007
#define	MN_ADDX	1008
#define	MN_AND	1010
#define	MN_ANDI	1012
#define	MN_ASL	1015
#define	MN_ASR	1019
#define	MN_ASSERT	28
#define	MN_BCC	1023
#define	MN_BCHG	1037
#define	MN_BCLR	1041
#define	MN_BCS	1024
#define	MN_BEQ	1025
#define	MN_BGE	1026
#define	MN_BGT	1027
#define	MN_BHI	1028
#define	MN_BHS	1023
#define	MN_BLE	1029
#define	MN_BLO	1024
#define	MN_BLS	1030
#define	MN_BLT	1031
#define	MN_BMI	1032
#define	MN_BNE	1033
#define	MN_BNZ	1033
#define	MN_BPL	1034
#define	MN_BRA	1045
#define	MN_BSET	1046
#define	MN_BSR	1050
#define	MN_BSS	4
#define	MN_BT	1045
#define	MN_BTST	1051
#define	MN_BVC	1035
#define	MN_BVS	1036
#define	MN_BZ	1025
#define	MN_BZE	1025
#define	MN_CARGS	10
#define	MN_CCUNDEF	51
#define	MN_CHK	1055
#define	MN_CLR	1056
#define	MN_CMP	1058
#define	MN_CMPA	1060
#define	MN_CMPI	1061
#define	MN_CMPM	1062
#define	MN_COMM	8
#define	MN_DATA	5
#define	MN_DBCC	1063
#define	MN_DBCS	1064
#define	MN_DBEQ	1065
#define	MN_DBF	1066
#define	MN_DBGE	1067
#define	MN_DBGT	1068
#define	MN_DBHI	1069
#define	MN_DBHS	1069
#define	MN_DBLE	1070
#define	MN_DBLO	1064
#define	MN_DBLS	1071
#define	MN_DBLT	1072
#define	MN_DBMI	1073
#define	MN_DBNE	1074
#define	MN_DBNZ	1074
#define	MN_DBPL	1075
#define	MN_DBRA	1066
#define	MN_DBT	1076
#define	MN_DBVC	1077
#define	MN_DBVS	1078
#define	MN_DBZE	1065
#define	MN_DC	12
#define	MN_DCB	17
#define	MN_DISABLE	22
#define	MN_DIVS	1079
#define	MN_DIVU	1080
#define	MN_DPHRASE	42
#define	MN_DS	13
#define	MN_DUMP	20
#define	MN_EJECT	46
#define	MN_ELSE	501
#define	MN_ENABLE	23
#define	MN_END	34
#define	MN_ENDIF	502
#define	MN_ENDM	505
#define	MN_ENDR	507
#define	MN_EOR	1081
#define	MN_EORI	1082
#define	MN_EQU	18
#define	MN_EQURUNDEF	50
#define	MN_ERROR	47
#define	MN_EVEN	1
#define	MN_EXG	1085
#define	MN_EXITM	510
#define	MN_EXT	1086
#define	MN_EXTERN	24
#define	MN_FAIL	56
#define	MN_GLOBL	24
#define	MN_GOTO	11
#define	MN_IF	500
#define	MN_IIF	503
#define	MN_ILLEGAL	1088
#define	MN_INCBIN	21
#define	MN_INCLUDE	33
#define	MN_INIT	9
#define	MN_JMP	1089
#define	MN_JPAD	54
#define	MN_JSR	1090
#define	MN_LEA	1091
#define	MN_LINK	1092
#define	MN_LIST	38
#define	MN_LONG	40
#define	MN_LSL	1093
#define	MN_LSR	1097
#define	MN_MACRO	504
#define	MN_MACUNDEF	14
#define	MN_MOVE	1101
#define	MN_MOVEA	1108
#define	MN_MOVEM	1109
#define	MN_MOVEP	1110
#define	MN_MOVEQ	1112
#define	MN_MULS	1113
#define	MN_MULU	1114
#define	MN_NBCD	1115
#define	MN_NEG	1116
#define	MN_NEGX	1117
#define	MN_NLIST	39
#define	MN_NOCLEAR	49
#define	MN_NOJPAD	55
#define	MN_NOLIST	39
#define	MN_NOP	1118
#define	MN_NOT	1119
#define	MN_OFFSET	7
#define	MN_OR	1120
#define	MN_ORG	0
#define	MN_ORI	1122
#define	MN_PEA	1125
#define	MN_PHRASE	41
#define	MN_PRINT	52
#define	MN_QPHRASE	43
#define	MN_REGUNDEF	50
#define	MN_REPT	506
#define	MN_RESET	1126
#define	MN_ROL	1127
#define	MN_ROR	1131
#define	MN_ROXL	1135
#define	MN_ROXR	1139
#define	MN_RTE	1143
#define	MN_RTR	1144
#define	MN_RTS	1145
#define	MN_SBCD	1146
#define	MN_SCC	1148
#define	MN_SCS	1149
#define	MN_SEQ	1150
#define	MN_SF	1151
#define	MN_SGE	1152
#define	MN_SGT	1153
#define	MN_SHI	1154
#define	MN_SHS	1148
#define	MN_SLE	1155
#define	MN_SLO	1149
#define	MN_SLS	1156
#define	MN_SLT	1157
#define	MN_SMI	1158
#define	MN_SNE	1159
#define	MN_SNZ	1159
#define	MN_SPL	1160
#define	MN_ST	1161
#define	MN_STOP	1164
#define	MN_SUB	1165
#define	MN_SUBA	1167
#define	MN_SUBI	1168
#define	MN_SUBQ	1169
#define	MN_SUBTTL	45
#define	MN_SUBX	1170
#define	MN_SVC	1162
#define	MN_SVS	1163
#define	MN_SWAP	1172
#define	MN_SZE	1150
#define	MN_TAS	1173
#define	MN_TEXT	6
#define	MN_TITLE	44
#define	MN_TRAP	1174
#define	MN_TRAPV	1175
#define	MN_TST	1176
#define	MN_UNDEFMAC	14
#define	MN_UNLK	1177
#define	MN_WARN	48
#endif

#ifdef DECL_MN
/*
 *  keyword state-machine tables
 *
 */

int mnbase[430] = {
 0, 23, 43, 47, 67, 75, 71, 7,
 19, 91, 85, 97, 98, 105, 103, 106,
 6, 103, 123, 133, 34, 10, 0, 30,
 32, 147, 152, 160, 52, 142, 150, 40,
 49, 70, 75, 109, 114, 56, 69, 71,
 158, 119, 139, 138, 143, 156, 157, 177,
 148, 161, 174, 182, 170, 181, 176, 189,
 186, 173, 191, 190, 180, 178, 189, 185,
 190, 195, 189, 208, 210, 210, 209, 205,
 214, 204, 232, 207, 206, 213, 230, 230,
 229, 225, 221, 236, 231, 242, 228, 245,
 229, 247, 235, 238, 241, 252, 234, 245,
 255, 253, 252, 259, 257, 257, 264, 249,
 259, 262, 265, 262, 271, 270, 274, 261,
 277, 276, 283, 274, 282, 279, 277, 292,
 293, 298, 295, 282, 280, 285, 305, 287,
 305, 292, 0, 292, 294, 296, 294, 303,
 298, 317, 301, 313, 306, 310, 319, 306,
 325, 306, 310, 325, 322, 323, 318, 314,
 314, 330, 334, 337, 320, 326, 338, 335,
 342, 340, 340, 330, 340, 342, 344, 351,
 331, 336, 353, 340, 355, 360, 353, 358,
 357, 347, 346, 347, 361, 356, 370, 359,
 372, 371, 358, 371, 369, 377, 371, 376,
 373, 385, 384, 384, 392, 379, 376, 379,
 396, 396, 402, 396, 397, 389, 393, 396,
 391, 407, 401, 413, 401, 412, 416, 399,
 416, 410, 402, 416, 406, 420, 410, 422,
 406, 413, 421, 418, 426, 417, 436, 424,
 421, 419, 421, 437, 431, 440, 429, 445,
 431, 428, 438, 435, 447, 442, 441, 1,
 451, 450, 444, 446, 459, 460, 445, 448,
 463, 462, 466, 461, 453, 457, 459, 455,
 471, 465, 476, 465, 468, 480, 463, 480,
 465, 479, 469, 469, 477, 475, 484, 475,
 494, 482, 479, 496, 479, 480, 481, 490,
 498, 490, 487, 487, 503, 506, 508, 490,
 499, 506, 492, 496, 502, 498, 506, 512,
 511, 500, 507, 509, 523, 505, 521, 526,
 509, 524, 511, 511, 531, 519, 514, 515,
 532, 516, 535, 2, 524, 524, 540, 543,
 545, 527, 536, 543, 529, 533, 539, 535,
 542, 554, 547, 536, 543, 545, 540, 556,
 561, 544, 559, 546, 546, 566, 567, 555,
 550, 566, 566, 553, 569, 563, 557, 572,
 564, 565, 579, 567, 578, 579, 583, 581,
 566, 567, 583, 570, 586, 579, 579, 573,
 589, 583, 577, 592, 584, 585, 591, 587,
 598, 599, 603, 601, 586, 587, 603, 590,
 596, 607, 600, 600, 608, 610, 611, 613,
 606, 614, 615, 603, 617, 618, 623, 619,
 621, 622, 624, 615, 625, 626, 614, 628,
 623, 630, 635, 632, 632, 633, 637, 636,
 636, 3, 637, 641, 639, 640
};

int mntab[769] = {
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, 1, -1,
 247, 323, -2, -2, -2, -1, -1, -1,
 130, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, 22, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, 2, 3, 4, 5, 6, 7, 8,
 80, 9, 10, 129, 11, 12, 13, 14,
 15, 16, 17, 18, 19, 20, 105, 21,
 23, 24, 25, 26, 27, 28, 29, 81,
 30, 31, 82, 32, 33, 34, 35, 36,
 37, 38, 39, 40, 41, 43, 42, 44,
 128, 131, 47, 132, 48, 149, 49, 50,
 155, 45, 156, 51, 52, 53, 46, 54,
 157, 55, 56, 57, 60, 58, 61, 158,
 165, 59, 166, 62, 66, 67, 68, 63,
 64, 72, 65, 73, 69, 74, 75, 159,
 76, 77, 160, 70, 167, 78, -2, 79,
 71, -2, 86, 93, 83, 87, 89, 84,
 88, 85, 90, 96, 106, 100, 97, 102,
 91, 94, 103, 161, 92, 98, 107, 95,
 99, 101, 163, 108, 104, 109, 110, 162,
 111, -2, 112, 113, 164, 170, 123, 114,
 115, 116, 124, 117, 171, 172, 125, 118,
 119, 120, 121, 173, 133, 122, 134, 126,
 127, 136, 150, 137, -2, 151, 152, 153,
 174, 138, 135, 168, 154, -2, -2, 169,
 139, -2, 142, 140, 143, 141, 144, -2,
 175, 145, 146, -2, -2, -2, 147, -2,
 148, 176, -2, -2, -2, 177, -2, 178,
 179, -2, -2, -2, -2, -2, 180, 181,
 -2, -2, -2, -2, -2, -2, 182, -2,
 183, 184, -2, 185, -2, 186, -2, 187,
 188, 198, 199, 200, 189, 190, 191, 201,
 192, 204, 193, 205, -2, 196, 194, 206,
 197, 202, 195, 207, 203, -2, 210, 208,
 211, 212, -2, 213, -2, 214, 216, -2,
 -2, 217, 209, 215, 219, -2, 218, 220,
 221, 222, 223, -2, 224, 225, 226, 229,
 -2, -2, -2, 230, 231, 227, 232, 228,
 233, 237, -2, -2, -2, -2, -2, -2,
 -2, 234, -2, -2, 235, -2, 236, -2,
 -2, -2, -2, -2, 238, -2, 239, -2,
 -2, -2, -2, 240, -2, -2, -2, -2,
 241, 242, 243, -2, -2, 244, 246, 248,
 -2, -2, 249, 250, 251, 245, 252, -2,
 253, 254, -2, 255, 256, 257, 258, 260,
 261, 259, 262, 263, 265, 266, 267, 268,
 -2, 269, 271, 272, 273, 274, 264, 270,
 275, 276, 279, -2, 280, 281, 282, 283,
 277, 285, 278, 286, 287, 288, 289, -2,
 284, -2, -2, 290, -2, -2, -2, -2,
 291, -2, 292, -2, -2, -2, -2, -2,
 -2, -2, -2, -2, -2, -2, -2, -2,
 -2, -2, -2, -2, -2, -2, -2, -2,
 -2, 293, 294, -2, -2, -2, -2, 295,
 -2, -2, -2, -2, 296, 297, -2, 298,
 299, -2, -2, 300, 301, -2, -2, 302,
 -2, 303, 304, -2, -2, -2, -2, -2,
 306, 308, -2, 307, 305, -2, -2, -2,
 309, 310, 311, 312, 313, 314, 315, 316,
 317, -2, 318, -2, -2, -2, -2, -2,
 -2, -2, 320, 321, 322, -2, -2, -2,
 324, 325, 326, -2, -2, 327, -2, 328,
 -2, 319, 329, -2, 330, -2, 331, 332,
 333, -2, -2, 334, 335, -2, 336, -2,
 -2, 337, 338, -2, -2, -2, -2, 340,
 342, 343, 341, 344, 339, 345, 346, 347,
 348, 349, 350, -2, 352, -2, 353, 354,
 -2, 355, -2, 356, 357, 358, -2, 359,
 -2, 360, -2, -2, 361, 351, -2, 362,
 363, 364, -2, 365, -2, -2, 366, 367,
 368, 369, 370, -2, 371, 372, -2, 373,
 -2, -2, -2, -2, -2, 374, 375, -2,
 376, 377, 378, -2, 379, -2, 380, -2,
 -2, 381, -2, 382, 383, 384, -2, 385,
 -2, 386, 387, 388, 389, 390, -2, 391,
 392, 393, 394, -2, 395, -2, 396, 397,
 398, -2, 399, -2, 400, -2, 401, 402,
 403, -2, -2, -2, -2, 404, 405, -2,
 406, -2, 407, 408, 409, -2, 410, -2,
 411, -2, 412, 413, 414, -2, -2, -2,
 -2, 415, 416, 417, -2, 418, -2, -2,
 -2, 419, -2, -2, 420, -2, -2, 421,
 422, -2, -2, -2, 423, -2, -2, 424,
 -2, -2, 425, 426, 427, 428, -2, -2,
 -2, 429, -2, -2, -2, -2, -2, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1
};

int mncheck[769] = {
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, 0, -1,
 130, 247, 323, 425, 425, -1, -1, -1,
 22, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, 1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, 0, 0, 0, 0, 0, 0, 0,
 7, 0, 0, 21, 0, 0, 0, 0,
 0, 0, 0, 0, 0, 0, 16, 0,
 1, 1, 1, 1, 1, 1, 1, 8,
 1, 1, 8, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 2, 1, 2,
 20, 23, 3, 24, 3, 28, 3, 3,
 31, 2, 32, 3, 3, 3, 2, 3,
 32, 3, 3, 3, 4, 3, 4, 33,
 37, 3, 38, 4, 5, 5, 5, 4,
 4, 6, 4, 6, 5, 6, 6, 34,
 6, 6, 34, 5, 39, 6, 5, 6,
 5, 9, 10, 12, 9, 10, 11, 9,
 10, 9, 11, 13, 17, 14, 13, 15,
 11, 12, 15, 35, 11, 13, 17, 12,
 13, 14, 36, 17, 15, 18, 18, 35,
 18, 18, 18, 18, 36, 41, 19, 18,
 18, 18, 19, 18, 42, 43, 19, 18,
 18, 18, 18, 44, 25, 18, 25, 19,
 19, 26, 29, 26, 30, 29, 29, 30,
 45, 26, 25, 40, 30, 48, 49, 40,
 26, 46, 27, 26, 27, 26, 27, 46,
 46, 27, 27, 52, 47, 49, 27, 50,
 27, 47, 53, 51, 54, 47, 55, 56,
 57, 50, 58, 59, 47, 51, 60, 61,
 62, 51, 51, 63, 56, 56, 64, 53,
 65, 66, 58, 67, 68, 67, 67, 67,
 67, 70, 71, 72, 67, 67, 67, 73,
 67, 75, 67, 76, 67, 69, 67, 77,
 69, 74, 67, 78, 74, 79, 80, 79,
 81, 82, 83, 84, 86, 85, 87, 88,
 89, 90, 79, 85, 91, 92, 90, 93,
 94, 95, 96, 92, 97, 98, 99, 100,
 101, 102, 101, 103, 104, 99, 105, 99,
 106, 109, 107, 99, 108, 110, 111, 99,
 107, 106, 112, 115, 106, 113, 107, 116,
 114, 108, 108, 117, 118, 110, 119, 113,
 120, 112, 114, 121, 122, 123, 114, 114,
 124, 125, 126, 127, 116, 128, 129, 131,
 120, 132, 133, 134, 135, 128, 136, 137,
 138, 139, 140, 141, 142, 143, 144, 145,
 146, 144, 147, 148, 149, 150, 151, 152,
 153, 154, 155, 156, 157, 158, 148, 154,
 159, 160, 161, 162, 163, 164, 165, 166,
 160, 167, 160, 168, 169, 170, 171, 172,
 166, 173, 174, 175, 176, 177, 178, 179,
 180, 173, 181, 182, 183, 184, 185, 186,
 187, 173, 188, 182, 190, 191, 189, 182,
 173, 192, 193, 194, 188, 195, 185, 187,
 189, 196, 198, 199, 189, 189, 197, 200,
 197, 201, 191, 194, 202, 203, 204, 205,
 206, 203, 207, 208, 209, 210, 203, 211,
 212, 213, 214, 215, 216, 217, 218, 219,
 220, 221, 223, 220, 214, 222, 224, 222,
 225, 226, 227, 228, 229, 230, 231, 232,
 233, 234, 235, 236, 237, 238, 239, 240,
 241, 236, 242, 243, 244, 245, 239, 246,
 248, 249, 250, 251, 252, 253, 239, 254,
 255, 239, 256, 257, 258, 239, 259, 260,
 261, 262, 259, 263, 264, 265, 266, 259,
 267, 268, 269, 270, 271, 272, 273, 274,
 275, 276, 274, 277, 269, 278, 279, 280,
 281, 282, 283, 284, 285, 286, 287, 288,
 289, 290, 291, 292, 293, 294, 295, 296,
 297, 298, 299, 300, 301, 283, 302, 303,
 304, 305, 306, 307, 308, 309, 310, 311,
 312, 313, 314, 315, 316, 317, 318, 319,
 308, 320, 321, 308, 308, 322, 324, 325,
 326, 327, 328, 329, 330, 331, 332, 333,
 334, 335, 336, 337, 338, 339, 340, 341,
 342, 343, 344, 345, 346, 347, 348, 349,
 350, 351, 352, 353, 354, 355, 356, 357,
 358, 359, 360, 361, 362, 363, 364, 365,
 366, 367, 368, 369, 370, 371, 372, 373,
 374, 375, 376, 377, 378, 379, 380, 381,
 382, 383, 384, 385, 386, 387, 388, 389,
 390, 391, 392, 393, 394, 395, 396, 397,
 398, 399, 400, 401, 402, 403, 404, 405,
 406, 407, 408, 409, 410, 411, 412, 413,
 414, 415, 416, 417, 418, 419, 420, 421,
 422, 423, 424, 426, 427, 428, 429, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1
};

int mnaccept[769] = {
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, 3, 25, 26, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, 1045, -1, -1, -1, -1,
 -1, 1025, -1, -1, -1, -1, 12, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, 13, -1,
 -1, 500, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, 1120, -1, -1, -1, -1, -1, -1,
 -1, 1151, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, 1161,
 -1, -1, -1, 1003, -1, -1, -1, -1,
 -1, -1, -1, 12, 500, -1, -1, -1,
 1010, -1, -1, -1, -1, 1025, 1026, -1,
 -1, 1015, -1, 13, -1, -1, -1, 1019,
 -1, -1, -1, 1032, 1023, 1027, -1, 1028,
 -1, -1, 1033, 1029, 1034, -1, 1045, -1,
 -1, 1023, 1035, 1025, 1024, 1024, -1, -1,
 1055, 1030, 1031, 1056, 1050, 4, 1058, 1033,
 -1, -1, 1036, -1, 17, -1, 1066, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, 1081, -1, 18, 1076, -1, -1, -1,
 -1, -1, -1, -1, 34, 1085, -1, -1,
 -1, -1, 503, -1, 1089, -1, -1, 1090,
 1091, -1, 1086, -1, -1, 1093, -1, -1,
 -1, -1, -1, 1097, 1116, -1, -1, -1,
 0, 1125, 1122, -1, -1, -1, -1, -1,
 -1, -1, 1127, 1118, 1143, 1148, 1150, 1119,
 1131, -1, 1152, 1158, -1, 1154, -1, 1159,
 1155, 1144, 1145, 1160, -1, 1149, 1165, 1148,
 1162, 1153, 1149, -1, 1150, 1173, 1156, 1157,
 -1, -1, -1, 1176, 1159, -1, -1, -1,
 1163, 4, -1, -1, -1, -1, -1, 17,
 -1, -1, 16, -1, -1, -1, -1, 18,
 -1, 34, -1, -1, -1, -1, -1, 15,
 503, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, 0, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, 1001,
 -1, 1005, 1012, -1, 1037, 1041, 1046, 1051,
 -1, 1006, -1, 1060, 8, 5, 1063, 1065,
 1067, 1007, 1069, 1061, 1073, 1074, 1070, 1062,
 1008, 1075, 1066, 1077, 1069, 1065, 1064, 1068,
 1064, -1, -1, 20, 1071, 1072, 1079, -1,
 1080, 501, 1074, 1078, -1, -1, 1082, -1,
 -1, 505, 1, -1, -1, 56, 507, -1,
 11, -1, -1, 9, 54, 1092, 38, 40,
 -1, 1101, 1115, -1, -1, 1113, 1117, 1114,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, 506, -1, 1135, 1146, 1164, 1167, 1172,
 6, 1139, -1, 1174, -1, 1177, 1168, 48,
 -1, -1, -1, 8, 5, -1, 1169, -1,
 20, -1, -1, 501, -1, 1170, -1, -1,
 -1, 1, 505, -1, -1, 56, -1, 507,
 11, -1, -1, 9, 54, 38, 40, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, 506, -1, 6, -1, -1,
 48, -1, 10, -1, -1, -1, 46, -1,
 502, -1, 47, 510, -1, -1, 24, -1,
 -1, -1, 504, -1, 1108, 39, -1, -1,
 -1, -1, -1, 52, -1, -1, 1126, -1,
 1109, 44, 1175, 1110, 1112, -1, -1, 10,
 -1, -1, -1, 46, -1, 502, -1, 47,
 510, -1, 24, -1, -1, -1, 504, -1,
 39, -1, -1, -1, -1, -1, 52, -1,
 -1, -1, -1, 44, -1, 28, -1, -1,
 -1, 23, -1, 24, -1, 21, -1, -1,
 -1, 55, 39, 7, 41, -1, -1, 45,
 -1, 28, -1, -1, -1, 23, -1, 24,
 -1, 21, -1, -1, -1, 55, 39, 7,
 41, -1, -1, -1, 45, -1, 51, 22,
 42, -1, 1088, 33, -1, 49, 43, -1,
 -1, 51, 22, 42, -1, 53, 33, -1,
 49, 43, -1, -1, -1, -1, 14, 50,
 14, -1, 14, 50, 14, 50, 50, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1, -1, -1, -1, -1, -1, -1, -1,
 -1
};
#endif