/*   1 abcd  */  {SIZN|SIZB, M_DREG, M_DREG, 0xc100, 2, m_abcd},
/*   2 -     */  {SIZN|SIZB, M_APREDEC, M_APREDEC, 0xc108, 0, m_abcd},
/*   3 add   */  {SIZN|SIZB|SIZW|SIZL, C_ALL, M_DREG, 0xd01c, 4, m_ea},
/*   4 -     */  {SIZN|SIZB|SIZW|SIZL, M_DREG, C_ALTMEM, 0xd115, 5, m_ea},
/*   5 adda  */  {SIZN|SIZW|SIZL, C_ALL, M_AREG, 0xd0c0, 6, m_adda},
/*   6 addi  */  {SIZN|SIZW|SIZB|SIZL, M_IMMED, C_ALTDATA, 0x0607, 0, m_ea},
/*   7 addq  */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, C_ALT, 0x5000, 0, m_addq},
/*   8 addx  */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_DREG, 0xd101, 9, m_abcd},
/*   9 -     */  {SIZN|SIZB|SIZW|SIZL, M_APREDEC, M_APREDEC, 0xd109, 0, m_abcd},
/*  10 and   */  {SIZN|SIZB|SIZW|SIZL, C_DATA, M_DREG, 0xc01c, 11, m_ea},
/*  11 -     */  {SIZN|SIZB|SIZW|SIZL, M_DREG, C_ALTMEM, 0xc115, 12, m_ea},
/*  12 andi  */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, C_ALTDATA, 0x0207, 13, m_ea},
/*  13 -     */  {SIZN|SIZB, M_IMMED, M_AM_CCR, 0x023c, 14, m_imm8},
/*  14 -     */  {SIZN|SIZW, M_IMMED, M_AM_SR, 0x027c, 0, m_imm},
/*  15 asl   */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_DREG, 0xe120, 16, m_shr},
/*  16 -     */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, M_DREG, 0xe100, 17, m_shi},
/*  17 -     */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_AM_NONE, 0xe301, 18, m_reg},
/*  18 -     */  {SIZN|SIZW, C_ALTMEM, M_AM_NONE, 0xe1c0, 0, m_ea},
/*  19 asr   */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_DREG, 0xe020, 20, m_shr},
/*  20 -     */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, M_DREG, 0xe000, 21, m_shi},
/*  21 -     */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_AM_NONE, 0xe201, 22, m_reg},
/*  22 -     */  {SIZN|SIZW, C_ALTMEM, M_AM_NONE, 0xe0c0, 0, m_ea},
/*  23 bcc   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6400, 0, m_br},
/*  24 bcs   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6500, 0, m_br},
/*  25 beq   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6700, 0, m_br},
/*  26 bge   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6c00, 0, m_br},
/*  27 bgt   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6e00, 0, m_br},
/*  28 bhi   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6200, 0, m_br},
/*  29 ble   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6f00, 0, m_br},
/*  30 bls   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6300, 0, m_br},
/*  31 blt   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6d00, 0, m_br},
/*  32 bmi   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6b00, 0, m_br},
/*  33 bne   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6600, 0, m_br},
/*  34 bpl   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6a00, 0, m_br},
/*  35 bvc   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6800, 0, m_br},
/*  36 bvs   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6900, 0, m_br},
/*  37 bchg  */  {SIZN|SIZL, M_DREG, M_DREG, 0x0140, 38, m_bitop},
/*  38 -     */  {SIZN|SIZB, M_DREG, C_ALTDATA, 0x0140, 39, m_bitop},
/*  39 -     */  {SIZN|SIZL, M_IMMED, M_DREG, 0x0840, 40, m_bitop},
/*  40 -     */  {SIZN|SIZB, M_IMMED, C_ALTDATA, 0x0840, 0, m_bitop},
/*  41 bclr  */  {SIZN|SIZL, M_DREG, M_DREG, 0x0180, 42, m_bitop},
/*  42 -     */  {SIZN|SIZB, M_DREG, C_ALTDATA, 0x0180, 43, m_bitop},
/*  43 -     */  {SIZN|SIZL, M_IMMED, M_DREG, 0x0880, 44, m_bitop},
/*  44 -     */  {SIZN|SIZB, M_IMMED, C_ALTDATA, 0x0880, 0, m_bitop},
/*  45 bra   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6000, 0, m_br},
/*  46 bset  */  {SIZN|SIZL, M_DREG, M_DREG, 0x01c0, 47, m_bitop},
/*  47 -     */  {SIZN|SIZB, M_DREG, C_ALTDATA, 0x01c0, 48, m_bitop},
/*  48 -     */  {SIZN|SIZL, M_IMMED, M_DREG, 0x08c0, 49, m_bitop},
/*  49 -     */  {SIZN|SIZB, M_IMMED, C_ALTDATA, 0x08c0, 0, m_bitop},
/*  50 bsr   */  {SIZN|SIZB|SIZW, C_LABEL, M_AM_NONE, 0x6100, 0, m_br},
/*  51 btst  */  {SIZN|SIZL, M_DREG, M_DREG, 0x0100, 52, m_bitop},
/*  52 -     */  {SIZN|SIZB, M_DREG, C_DATA, 0x0100, 53, m_bitop},
/*  53 -     */  {SIZN|SIZL, M_IMMED, M_DREG, 0x0800, 54, m_bitop},
/*  54 -     */  {SIZN|SIZB, M_IMMED, C_DATA-M_IMMED, 0x0800, 0, m_bitop},
/*  55 chk   */  {SIZN|SIZW, C_DATA, M_DREG, 0x4198, 0, m_ea},
/*  56 clr   */  {SIZN|SIZB|SIZW|SIZL, C_ALTDATA, M_AM_NONE, 0x4204, 57, m_ea},
/*  57 -     */  {SIZN|SIZW|SIZL, M_AREG, M_AM_NONE, 0x90c8, 0, m_clra},
/*  58 cmp   */  {SIZN|SIZW|SIZL, M_AREG, M_DREG, 0xb01c, 59, m_ea},
/*  59 -     */  {SIZN|SIZB|SIZW|SIZL, C_ALL, M_DREG, 0xb01c, 60, m_ea},
/*  60 cmpa  */  {SIZN|SIZW|SIZL, C_ALL, M_AREG, 0xb0c0, 61, m_adda},
/*  61 cmpi  */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, C_ALTDATA, 0x0c07, 62, m_ea},
/*  62 cmpm  */  {SIZN|SIZB|SIZW|SIZL, M_APOSTINC, M_APOSTINC, 0xb10b, 0, m_reg},
/*  63 dbcc  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x54c8, 0, m_dbra},
/*  64 dbcs  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x55c8, 0, m_dbra},
/*  65 dbeq  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x57c8, 0, m_dbra},
/*  66 dbf   */  {SIZN|SIZW, M_DREG, C_LABEL, 0x51c8, 0, m_dbra},
/*  67 dbge  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x5cc8, 0, m_dbra},
/*  68 dbgt  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x5ec8, 0, m_dbra},
/*  69 dbhi  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x52c8, 0, m_dbra},
/*  70 dble  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x5fc8, 0, m_dbra},
/*  71 dbls  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x53c8, 0, m_dbra},
/*  72 dblt  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x5dc8, 0, m_dbra},
/*  73 dbmi  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x5bc8, 0, m_dbra},
/*  74 dbne  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x56c8, 0, m_dbra},
/*  75 dbpl  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x5ac8, 0, m_dbra},
/*  76 dbt   */  {SIZN|SIZW, M_DREG, C_LABEL, 0x50c8, 0, m_dbra},
/*  77 dbvc  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x58c8, 0, m_dbra},
/*  78 dbvs  */  {SIZN|SIZW, M_DREG, C_LABEL, 0x59c8, 0, m_dbra},
/*  79 divs  */  {SIZN|SIZW, C_DATA, M_DREG, 0x81d8, 0, m_ea},
/*  80 divu  */  {SIZN|SIZW, C_DATA, M_DREG, 0x80d8, 0, m_ea},
/*  81 eor   */  {SIZN|SIZB|SIZW|SIZL, M_DREG, C_ALTDATA, 0xb115, 82, m_ea},
/*  82 eori  */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, C_ALTDATA, 0x0a07, 83, m_ea},
/*  83 -     */  {SIZN|SIZB, M_IMMED, M_AM_CCR, 0x0a3c, 84, m_imm8},
/*  84 -     */  {SIZN|SIZW, M_IMMED, M_AM_SR, 0x0a7c, 0, m_imm},
/*  85 exg   */  {SIZN|SIZL, M_DREG|M_AREG, M_DREG|M_AREG, 0xc100, 0, m_exg},
/*  86 ext   */  {SIZN|SIZW, M_DREG, M_AM_NONE, 0x4880, 87, m_reg},
/*  87 -     */  {SIZL, M_DREG, M_AM_NONE, 0x48c0, 0, m_reg},
/*  88 illegal*/  {SIZN, M_AM_NONE, M_AM_NONE, 0x4afc, 0, m_self},
/*  89 jmp   */  {SIZN, C_CTRL, M_AM_NONE, 0x4ec0, 0, m_ea},
/*  90 jsr   */  {SIZN, C_CTRL, M_AM_NONE, 0x4e80, 0, m_ea},
/*  91 lea   */  {SIZN|SIZL, C_CTRL, M_AREG, 0x41d8, 0, m_ea},
/*  92 link  */  {SIZN, M_AREG, M_IMMED, 0x4e50, 0, m_link},
/*  93 lsl   */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_DREG, 0xe128, 94, m_shr},
/*  94 -     */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, M_DREG, 0xe108, 95, m_shi},
/*  95 -     */  {SIZN|SIZB|SIZW|SIZL, C_ALTMEM, M_AM_NONE, 0xe3c0, 96, m_ea},
/*  96 -     */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_AM_NONE, 0xe309, 0, m_reg},
/*  97 lsr   */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_DREG, 0xe028, 98, m_shr},
/*  98 -     */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, M_DREG, 0xe008, 99, m_shi},
/*  99 -     */  {SIZN|SIZB|SIZW|SIZL, C_ALTMEM, M_AM_NONE, 0xe2c0, 100, m_ea},
/* 100 -     */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_AM_NONE, 0xe209, 0, m_reg},
/* 101 move  */  {SIZN|SIZB|SIZW|SIZL, C_ALL, C_ALTDATA, 0x0000, 102, m_move},
/* 102 -     */  {SIZN|SIZW|SIZL, C_ALL, M_AREG, 0x0040, 103, m_move},
/* 103 -     */  {SIZN|SIZW, C_DATA, M_AM_SR, 0x46c0, 104, m_ea},
/* 104 -     */  {SIZN|SIZW, M_AM_SR, C_ALTDATA, 0x40c1, 105, m_ea},
/* 105 -     */  {SIZN|SIZW, C_DATA, M_AM_CCR, 0x44c0, 106, m_ea},
/* 106 -     */  {SIZN|SIZL, M_AM_USP, M_AREG, 0x4e68, 107, m_usp},
/* 107 -     */  {SIZN|SIZL, M_AREG, M_AM_USP, 0x4e60, 0, m_usp},
/* 108 movea */  {SIZN|SIZW|SIZL, C_ALL, M_AREG, 0x0040, 0, m_move},
/* 109 movem */  {CGSPECIAL, M_AM_NONE, M_AM_NONE, 0x4880, 0, m_movem},
/* 110 movep */  {SIZN|SIZW|SIZL, M_DREG, M_AIND|M_ADISP, 0x0188, 111, m_movep},
/* 111 -     */  {SIZN|SIZW|SIZL, M_AIND|M_ADISP, M_DREG, 0x0108, 0, m_movep},
/* 112 moveq */  {SIZN|SIZL, M_IMMED, M_DREG, 0x7000, 0, m_moveq},
/* 113 muls  */  {SIZN|SIZW, C_DATA, M_DREG, 0xc1d8, 0, m_ea},
/* 114 mulu  */  {SIZN|SIZW, C_DATA, M_DREG, 0xc0d8, 0, m_ea},
/* 115 nbcd  */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x4800, 0, m_ea},
/* 116 neg   */  {SIZN|SIZB|SIZW|SIZL, C_ALTDATA, M_AM_NONE, 0x4404, 0, m_ea},
/* 117 negx  */  {SIZN|SIZB|SIZW|SIZL, C_ALTDATA, M_AM_NONE, 0x4004, 0, m_ea},
/* 118 nop   */  {SIZN, M_AM_NONE, M_AM_NONE, 0x4e71, 0, m_self},
/* 119 not   */  {SIZN|SIZB|SIZW|SIZL, C_ALTDATA, M_AM_NONE, 0x4604, 0, m_ea},
/* 120 or    */  {SIZN|SIZB|SIZW|SIZL, C_DATA, M_DREG, 0x801c, 121, m_ea},
/* 121 -     */  {SIZN|SIZB|SIZW|SIZL, M_DREG, C_MEM, 0x8115, 122, m_ea},
/* 122 ori   */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, C_ALTDATA, 0x0007, 123, m_ea},
/* 123 -     */  {SIZN|SIZB, M_IMMED, M_AM_CCR, 0x003c, 124, m_imm8},
/* 124 -     */  {SIZN|SIZW, M_IMMED, M_AM_SR, 0x007c, 0, m_imm},
/* 125 pea   */  {SIZN|SIZL, C_CTRL, M_AM_NONE, 0x4840, 0, m_ea},
/* 126 reset */  {SIZN, M_AM_NONE, M_AM_NONE, 0x4e70, 0, m_self},
/* 127 rol   */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_DREG, 0xe138, 128, m_shr},
/* 128 -     */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, M_DREG, 0xe118, 129, m_shi},
/* 129 -     */  {SIZN|SIZB|SIZW|SIZL, C_ALTMEM, M_AM_NONE, 0xe7c0, 130, m_ea},
/* 130 -     */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_AM_NONE, 0xe319, 0, m_reg},
/* 131 ror   */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_DREG, 0xe038, 132, m_shr},
/* 132 -     */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, M_DREG, 0xe018, 133, m_shi},
/* 133 -     */  {SIZN|SIZB|SIZW|SIZL, C_ALTMEM, M_AM_NONE, 0xe6c0, 134, m_ea},
/* 134 -     */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_AM_NONE, 0xe219, 0, m_reg},
/* 135 roxl  */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_DREG, 0xe130, 136, m_shr},
/* 136 -     */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, M_DREG, 0xe110, 137, m_shi},
/* 137 -     */  {SIZN|SIZB|SIZW|SIZL, C_ALTMEM, M_AM_NONE, 0xe5c0, 138, m_ea},
/* 138 -     */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_AM_NONE, 0xe311, 0, m_reg},
/* 139 roxr  */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_DREG, 0xe030, 140, m_shr},
/* 140 -     */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, M_DREG, 0xe010, 141, m_shi},
/* 141 -     */  {SIZN|SIZB|SIZW|SIZL, C_ALTMEM, M_AM_NONE, 0xe4c0, 142, m_ea},
/* 142 -     */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_AM_NONE, 0xe211, 0, m_reg},
/* 143 rte   */  {SIZN, M_AM_NONE, M_AM_NONE, 0x4e73, 0, m_self},
/* 144 rtr   */  {SIZN, M_AM_NONE, M_AM_NONE, 0x4e77, 0, m_self},
/* 145 rts   */  {SIZN, M_AM_NONE, M_AM_NONE, 0x4e75, 0, m_self},
/* 146 sbcd  */  {SIZN|SIZB, M_DREG, M_DREG, 0x8100, 147, m_abcd},
/* 147 -     */  {SIZN|SIZB, M_APREDEC, M_APREDEC, 0x8108, 0, m_abcd},
/* 148 scc   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x54c0, 0, m_ea},
/* 149 scs   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x55c0, 0, m_ea},
/* 150 seq   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x57c0, 0, m_ea},
/* 151 sf    */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x51c0, 0, m_ea},
/* 152 sge   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x5cc0, 0, m_ea},
/* 153 sgt   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x5ec0, 0, m_ea},
/* 154 shi   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x52c0, 0, m_ea},
/* 155 sle   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x5fc0, 0, m_ea},
/* 156 sls   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x53c0, 0, m_ea},
/* 157 slt   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x5dc0, 0, m_ea},
/* 158 smi   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x5bc0, 0, m_ea},
/* 159 sne   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x56c0, 0, m_ea},
/* 160 spl   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x5ac0, 0, m_ea},
/* 161 st    */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x50c0, 0, m_ea},
/* 162 svc   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x58c0, 0, m_ea},
/* 163 svs   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x59c0, 0, m_ea},
/* 164 stop  */  {SIZN, M_IMMED, M_AM_NONE, 0x4e72, 0, m_imm},
/* 165 sub   */  {SIZN|SIZB|SIZW|SIZL, C_ALL, M_DREG, 0x901c, 166, m_ea},
/* 166 -     */  {SIZN|SIZB|SIZW|SIZL, M_DREG, C_ALTMEM, 0x9115, 167, m_ea},
/* 167 suba  */  {SIZN|SIZW|SIZL, C_ALL, M_AREG, 0x90c0, 168, m_adda},
/* 168 subi  */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, C_ALTDATA, 0x0407, 0, m_ea},
/* 169 subq  */  {SIZN|SIZB|SIZW|SIZL, M_IMMED, C_ALT, 0x5100, 0, m_addq},
/* 170 subx  */  {SIZN|SIZB|SIZW|SIZL, M_DREG, M_DREG, 0x9101, 171, m_abcd},
/* 171 -     */  {SIZN|SIZB|SIZW|SIZL, M_APREDEC, M_APREDEC, 0x9109, 0, m_abcd},
/* 172 swap  */  {SIZN|SIZW, M_DREG, M_AM_NONE, 0x4840, 0, m_reg},
/* 173 tas   */  {SIZN|SIZB, C_ALTDATA, M_AM_NONE, 0x4ac0, 0, m_ea},
/* 174 trap  */  {SIZN, M_IMMED, M_AM_NONE, 0x4e40, 0, m_trap},
/* 175 trapv */  {SIZN, M_AM_NONE, M_AM_NONE, 0x4e76, 0, m_self},
/* 176 tst   */  {SIZN|SIZB|SIZW|SIZL, C_ALTDATA, M_AM_NONE, 0x4a04, 0, m_ea},
/* 177 unlk  */  {SIZN, M_AREG, M_AM_NONE, 0x4e58, 0, m_reg},
