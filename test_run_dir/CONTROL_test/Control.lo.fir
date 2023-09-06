circuit Control :
  module Control :
    input clock : Clock
    input reset : UInt<1>
    input io_opcode : UInt<7>
    input io_rs1_no : UInt<5>
    input io_rd_no : UInt<5>
    input io_fun3 : UInt<3>
    output io_mem_write : UInt<1>
    output io_branch : UInt<1>
    output io_mem_read : UInt<1>
    output io_reg_write : UInt<1>
    output io_men_to_reg : UInt<1>
    output io_alu_operation : UInt<4>
    output io_operand_A : UInt<3>
    output io_operand_B : UInt<2>
    output io_extend : UInt<2>
    output io_next_pc_sel : UInt<2>
    output io_avl_ope : UInt<2>
    output io_is_I : UInt<1>
    output io_is_V : UInt<1>
    output io_V_opeA : UInt<2>
    output io_V_opeB : UInt<2>
    output io_V_imm : UInt<2>
    output io_V_men_to_reg : UInt<1>

    node _T = eq(io_opcode, UInt<6>("h33")) @[CONTROL.scala 35:18]
    node _T_1 = eq(io_opcode, UInt<5>("h13")) @[CONTROL.scala 55:24]
    node _T_2 = eq(io_opcode, UInt<6>("h23")) @[CONTROL.scala 75:24]
    node _T_3 = eq(io_opcode, UInt<2>("h3")) @[CONTROL.scala 95:24]
    node _T_4 = eq(io_opcode, UInt<7>("h63")) @[CONTROL.scala 115:24]
    node _T_5 = eq(io_opcode, UInt<7>("h6f")) @[CONTROL.scala 135:24]
    node _T_6 = eq(io_opcode, UInt<7>("h67")) @[CONTROL.scala 155:24]
    node _T_7 = eq(io_opcode, UInt<6>("h37")) @[CONTROL.scala 175:24]
    node _T_8 = eq(io_opcode, UInt<5>("h17")) @[CONTROL.scala 195:24]
    node _T_9 = eq(io_opcode, UInt<7>("h57")) @[CONTROL.scala 215:24]
    node _T_10 = eq(io_fun3, UInt<3>("h7")) @[CONTROL.scala 215:44]
    node _T_11 = and(_T_9, _T_10) @[CONTROL.scala 215:33]
    node _T_12 = neq(io_rs1_no, UInt<1>("h0")) @[CONTROL.scala 233:21]
    node _T_13 = eq(io_rs1_no, UInt<1>("h0")) @[CONTROL.scala 235:28]
    node _T_14 = neq(io_rd_no, UInt<1>("h0")) @[CONTROL.scala 235:48]
    node _T_15 = and(_T_13, _T_14) @[CONTROL.scala 235:36]
    node _T_16 = eq(io_rs1_no, UInt<1>("h0")) @[CONTROL.scala 237:28]
    node _T_17 = eq(io_rd_no, UInt<1>("h0")) @[CONTROL.scala 237:48]
    node _T_18 = and(_T_16, _T_17) @[CONTROL.scala 237:36]
    node _GEN_0 = mux(_T_18, UInt<2>("h2"), UInt<1>("h0")) @[CONTROL.scala 237:57 CONTROL.scala 238:20 CONTROL.scala 240:20]
    node _GEN_1 = mux(_T_15, UInt<1>("h1"), _GEN_0) @[CONTROL.scala 235:57 CONTROL.scala 236:20]
    node _GEN_2 = mux(_T_12, UInt<1>("h0"), _GEN_1) @[CONTROL.scala 233:30 CONTROL.scala 234:20]
    node _T_19 = eq(io_opcode, UInt<7>("h57")) @[CONTROL.scala 243:24]
    node _T_20 = neq(io_fun3, UInt<3>("h7")) @[CONTROL.scala 243:44]
    node _T_21 = and(_T_19, _T_20) @[CONTROL.scala 243:33]
    node _GEN_3 = mux(_T_21, UInt<1>("h0"), UInt<1>("h0")) @[CONTROL.scala 243:53 CONTROL.scala 244:18 CONTROL.scala 263:18]
    node _GEN_4 = mux(_T_21, UInt<1>("h1"), UInt<1>("h0")) @[CONTROL.scala 243:53 CONTROL.scala 247:18 CONTROL.scala 266:18]
    node _GEN_5 = mux(_T_11, UInt<1>("h0"), _GEN_3) @[CONTROL.scala 215:53 CONTROL.scala 216:18]
    node _GEN_6 = mux(_T_11, UInt<1>("h1"), _GEN_4) @[CONTROL.scala 215:53 CONTROL.scala 219:18]
    node _GEN_7 = mux(_T_11, UInt<1>("h0"), _GEN_4) @[CONTROL.scala 215:53 CONTROL.scala 221:22]
    node _GEN_8 = mux(_T_11, UInt<3>("h4"), _GEN_3) @[CONTROL.scala 215:53 CONTROL.scala 222:18]
    node _GEN_9 = mux(_T_11, UInt<2>("h2"), _GEN_3) @[CONTROL.scala 215:53 CONTROL.scala 223:18]
    node _GEN_10 = mux(_T_11, _GEN_2, _GEN_3) @[CONTROL.scala 215:53]
    node _GEN_11 = mux(_T_8, UInt<1>("h0"), _GEN_5) @[CONTROL.scala 195:35 CONTROL.scala 196:18]
    node _GEN_12 = mux(_T_8, UInt<1>("h1"), _GEN_6) @[CONTROL.scala 195:35 CONTROL.scala 199:18]
    node _GEN_13 = mux(_T_8, UInt<3>("h7"), _GEN_7) @[CONTROL.scala 195:35 CONTROL.scala 201:22]
    node _GEN_14 = mux(_T_8, UInt<2>("h2"), _GEN_8) @[CONTROL.scala 195:35 CONTROL.scala 202:18]
    node _GEN_15 = mux(_T_8, UInt<1>("h1"), _GEN_9) @[CONTROL.scala 195:35 CONTROL.scala 203:18]
    node _GEN_16 = mux(_T_8, UInt<2>("h2"), _GEN_5) @[CONTROL.scala 195:35 CONTROL.scala 204:15]
    node _GEN_17 = mux(_T_8, UInt<1>("h0"), _GEN_10) @[CONTROL.scala 195:35 CONTROL.scala 206:16]
    node _GEN_18 = mux(_T_8, UInt<1>("h1"), _GEN_5) @[CONTROL.scala 195:35 CONTROL.scala 207:13]
    node _GEN_19 = mux(_T_8, UInt<1>("h0"), _GEN_6) @[CONTROL.scala 195:35 CONTROL.scala 208:13]
    node _GEN_20 = mux(_T_8, UInt<1>("h0"), _GEN_7) @[CONTROL.scala 195:35 CONTROL.scala 209:15]
    node _GEN_21 = mux(_T_7, UInt<1>("h0"), _GEN_11) @[CONTROL.scala 175:35 CONTROL.scala 176:18]
    node _GEN_22 = mux(_T_7, UInt<1>("h1"), _GEN_12) @[CONTROL.scala 175:35 CONTROL.scala 179:18]
    node _GEN_23 = mux(_T_7, UInt<3>("h6"), _GEN_13) @[CONTROL.scala 175:35 CONTROL.scala 181:22]
    node _GEN_24 = mux(_T_7, UInt<2>("h3"), _GEN_14) @[CONTROL.scala 175:35 CONTROL.scala 182:18]
    node _GEN_25 = mux(_T_7, UInt<1>("h1"), _GEN_15) @[CONTROL.scala 175:35 CONTROL.scala 183:18]
    node _GEN_26 = mux(_T_7, UInt<2>("h2"), _GEN_16) @[CONTROL.scala 175:35 CONTROL.scala 184:15]
    node _GEN_27 = mux(_T_7, UInt<1>("h0"), _GEN_17) @[CONTROL.scala 175:35 CONTROL.scala 186:16]
    node _GEN_28 = mux(_T_7, UInt<1>("h1"), _GEN_18) @[CONTROL.scala 175:35 CONTROL.scala 187:13]
    node _GEN_29 = mux(_T_7, UInt<1>("h0"), _GEN_19) @[CONTROL.scala 175:35 CONTROL.scala 188:13]
    node _GEN_30 = mux(_T_7, UInt<1>("h0"), _GEN_20) @[CONTROL.scala 175:35 CONTROL.scala 189:15]
    node _GEN_31 = mux(_T_6, UInt<1>("h0"), _GEN_21) @[CONTROL.scala 155:36 CONTROL.scala 156:18]
    node _GEN_32 = mux(_T_6, UInt<1>("h1"), _GEN_22) @[CONTROL.scala 155:36 CONTROL.scala 159:18]
    node _GEN_33 = mux(_T_6, UInt<2>("h3"), _GEN_23) @[CONTROL.scala 155:36 CONTROL.scala 161:22]
    node _GEN_34 = mux(_T_6, UInt<1>("h1"), _GEN_24) @[CONTROL.scala 155:36 CONTROL.scala 162:18]
    node _GEN_35 = mux(_T_6, UInt<1>("h0"), _GEN_25) @[CONTROL.scala 155:36 CONTROL.scala 163:18]
    node _GEN_36 = mux(_T_6, UInt<1>("h0"), _GEN_26) @[CONTROL.scala 155:36 CONTROL.scala 164:15]
    node _GEN_37 = mux(_T_6, UInt<2>("h3"), _GEN_21) @[CONTROL.scala 155:36 CONTROL.scala 165:20]
    node _GEN_38 = mux(_T_6, UInt<1>("h0"), _GEN_27) @[CONTROL.scala 155:36 CONTROL.scala 166:16]
    node _GEN_39 = mux(_T_6, UInt<1>("h1"), _GEN_28) @[CONTROL.scala 155:36 CONTROL.scala 167:13]
    node _GEN_40 = mux(_T_6, UInt<1>("h0"), _GEN_29) @[CONTROL.scala 155:36 CONTROL.scala 168:13]
    node _GEN_41 = mux(_T_6, UInt<1>("h0"), _GEN_30) @[CONTROL.scala 155:36 CONTROL.scala 169:15]
    node _GEN_42 = mux(_T_5, UInt<1>("h0"), _GEN_31) @[CONTROL.scala 135:36 CONTROL.scala 136:18]
    node _GEN_43 = mux(_T_5, UInt<1>("h1"), _GEN_32) @[CONTROL.scala 135:36 CONTROL.scala 139:18]
    node _GEN_44 = mux(_T_5, UInt<2>("h3"), _GEN_33) @[CONTROL.scala 135:36 CONTROL.scala 141:22]
    node _GEN_45 = mux(_T_5, UInt<1>("h1"), _GEN_34) @[CONTROL.scala 135:36 CONTROL.scala 142:18]
    node _GEN_46 = mux(_T_5, UInt<1>("h0"), _GEN_35) @[CONTROL.scala 135:36 CONTROL.scala 143:18]
    node _GEN_47 = mux(_T_5, UInt<1>("h0"), _GEN_36) @[CONTROL.scala 135:36 CONTROL.scala 144:15]
    node _GEN_48 = mux(_T_5, UInt<2>("h2"), _GEN_37) @[CONTROL.scala 135:36 CONTROL.scala 145:20]
    node _GEN_49 = mux(_T_5, UInt<1>("h0"), _GEN_38) @[CONTROL.scala 135:36 CONTROL.scala 146:16]
    node _GEN_50 = mux(_T_5, UInt<1>("h1"), _GEN_39) @[CONTROL.scala 135:36 CONTROL.scala 147:13]
    node _GEN_51 = mux(_T_5, UInt<1>("h0"), _GEN_40) @[CONTROL.scala 135:36 CONTROL.scala 148:13]
    node _GEN_52 = mux(_T_5, UInt<1>("h0"), _GEN_41) @[CONTROL.scala 135:36 CONTROL.scala 149:15]
    node _GEN_53 = mux(_T_4, UInt<1>("h0"), _GEN_42) @[CONTROL.scala 115:35 CONTROL.scala 116:18]
    node _GEN_54 = mux(_T_4, UInt<1>("h1"), _GEN_42) @[CONTROL.scala 115:35 CONTROL.scala 117:15]
    node _GEN_55 = mux(_T_4, UInt<1>("h0"), _GEN_43) @[CONTROL.scala 115:35 CONTROL.scala 119:18]
    node _GEN_56 = mux(_T_4, UInt<2>("h2"), _GEN_44) @[CONTROL.scala 115:35 CONTROL.scala 121:22]
    node _GEN_57 = mux(_T_4, UInt<1>("h0"), _GEN_45) @[CONTROL.scala 115:35 CONTROL.scala 122:18]
    node _GEN_58 = mux(_T_4, UInt<1>("h0"), _GEN_46) @[CONTROL.scala 115:35 CONTROL.scala 123:18]
    node _GEN_59 = mux(_T_4, UInt<1>("h0"), _GEN_47) @[CONTROL.scala 115:35 CONTROL.scala 124:15]
    node _GEN_60 = mux(_T_4, UInt<1>("h1"), _GEN_48) @[CONTROL.scala 115:35 CONTROL.scala 125:20]
    node _GEN_61 = mux(_T_4, UInt<1>("h0"), _GEN_49) @[CONTROL.scala 115:35 CONTROL.scala 126:16]
    node _GEN_62 = mux(_T_4, UInt<1>("h1"), _GEN_50) @[CONTROL.scala 115:35 CONTROL.scala 127:13]
    node _GEN_63 = mux(_T_4, UInt<1>("h0"), _GEN_51) @[CONTROL.scala 115:35 CONTROL.scala 128:13]
    node _GEN_64 = mux(_T_4, UInt<1>("h0"), _GEN_52) @[CONTROL.scala 115:35 CONTROL.scala 129:15]
    node _GEN_65 = mux(_T_3, UInt<1>("h0"), _GEN_53) @[CONTROL.scala 95:34 CONTROL.scala 96:18]
    node _GEN_66 = mux(_T_3, UInt<1>("h0"), _GEN_54) @[CONTROL.scala 95:34 CONTROL.scala 97:15]
    node _GEN_67 = mux(_T_3, UInt<1>("h1"), _GEN_53) @[CONTROL.scala 95:34 CONTROL.scala 98:17]
    node _GEN_68 = mux(_T_3, UInt<1>("h1"), _GEN_55) @[CONTROL.scala 95:34 CONTROL.scala 99:18]
    node _GEN_69 = mux(_T_3, UInt<3>("h4"), _GEN_56) @[CONTROL.scala 95:34 CONTROL.scala 101:22]
    node _GEN_70 = mux(_T_3, UInt<1>("h0"), _GEN_57) @[CONTROL.scala 95:34 CONTROL.scala 102:18]
    node _GEN_71 = mux(_T_3, UInt<1>("h1"), _GEN_58) @[CONTROL.scala 95:34 CONTROL.scala 103:18]
    node _GEN_72 = mux(_T_3, UInt<1>("h0"), _GEN_59) @[CONTROL.scala 95:34 CONTROL.scala 104:15]
    node _GEN_73 = mux(_T_3, UInt<1>("h0"), _GEN_60) @[CONTROL.scala 95:34 CONTROL.scala 105:20]
    node _GEN_74 = mux(_T_3, UInt<1>("h0"), _GEN_61) @[CONTROL.scala 95:34 CONTROL.scala 106:16]
    node _GEN_75 = mux(_T_3, UInt<1>("h1"), _GEN_62) @[CONTROL.scala 95:34 CONTROL.scala 107:13]
    node _GEN_76 = mux(_T_3, UInt<1>("h0"), _GEN_63) @[CONTROL.scala 95:34 CONTROL.scala 108:13]
    node _GEN_77 = mux(_T_3, UInt<1>("h0"), _GEN_64) @[CONTROL.scala 95:34 CONTROL.scala 109:15]
    node _GEN_78 = mux(_T_2, UInt<1>("h1"), _GEN_65) @[CONTROL.scala 75:35 CONTROL.scala 76:18]
    node _GEN_79 = mux(_T_2, UInt<1>("h0"), _GEN_66) @[CONTROL.scala 75:35 CONTROL.scala 77:15]
    node _GEN_80 = mux(_T_2, UInt<1>("h0"), _GEN_67) @[CONTROL.scala 75:35 CONTROL.scala 78:17]
    node _GEN_81 = mux(_T_2, UInt<1>("h0"), _GEN_68) @[CONTROL.scala 75:35 CONTROL.scala 79:18]
    node _GEN_82 = mux(_T_2, UInt<3>("h5"), _GEN_69) @[CONTROL.scala 75:35 CONTROL.scala 81:22]
    node _GEN_83 = mux(_T_2, UInt<1>("h0"), _GEN_70) @[CONTROL.scala 75:35 CONTROL.scala 82:18]
    node _GEN_84 = mux(_T_2, UInt<1>("h1"), _GEN_71) @[CONTROL.scala 75:35 CONTROL.scala 83:18]
    node _GEN_85 = mux(_T_2, UInt<1>("h1"), _GEN_72) @[CONTROL.scala 75:35 CONTROL.scala 84:15]
    node _GEN_86 = mux(_T_2, UInt<1>("h0"), _GEN_73) @[CONTROL.scala 75:35 CONTROL.scala 85:20]
    node _GEN_87 = mux(_T_2, UInt<1>("h0"), _GEN_74) @[CONTROL.scala 75:35 CONTROL.scala 86:16]
    node _GEN_88 = mux(_T_2, UInt<1>("h1"), _GEN_75) @[CONTROL.scala 75:35 CONTROL.scala 87:13]
    node _GEN_89 = mux(_T_2, UInt<1>("h0"), _GEN_76) @[CONTROL.scala 75:35 CONTROL.scala 88:13]
    node _GEN_90 = mux(_T_2, UInt<1>("h0"), _GEN_77) @[CONTROL.scala 75:35 CONTROL.scala 89:15]
    node _GEN_91 = mux(_T_2, UInt<1>("h0"), _GEN_65) @[CONTROL.scala 75:35 CONTROL.scala 92:21]
    node _GEN_92 = mux(_T_1, UInt<1>("h0"), _GEN_78) @[CONTROL.scala 55:35 CONTROL.scala 56:18]
    node _GEN_93 = mux(_T_1, UInt<1>("h0"), _GEN_79) @[CONTROL.scala 55:35 CONTROL.scala 57:15]
    node _GEN_94 = mux(_T_1, UInt<1>("h0"), _GEN_80) @[CONTROL.scala 55:35 CONTROL.scala 58:17]
    node _GEN_95 = mux(_T_1, UInt<1>("h1"), _GEN_81) @[CONTROL.scala 55:35 CONTROL.scala 59:18]
    node _GEN_96 = mux(_T_1, UInt<1>("h1"), _GEN_82) @[CONTROL.scala 55:35 CONTROL.scala 61:22]
    node _GEN_97 = mux(_T_1, UInt<1>("h0"), _GEN_83) @[CONTROL.scala 55:35 CONTROL.scala 62:18]
    node _GEN_98 = mux(_T_1, UInt<1>("h1"), _GEN_84) @[CONTROL.scala 55:35 CONTROL.scala 63:18]
    node _GEN_99 = mux(_T_1, UInt<1>("h0"), _GEN_85) @[CONTROL.scala 55:35 CONTROL.scala 64:15]
    node _GEN_100 = mux(_T_1, UInt<1>("h0"), _GEN_86) @[CONTROL.scala 55:35 CONTROL.scala 65:20]
    node _GEN_101 = mux(_T_1, UInt<1>("h0"), _GEN_87) @[CONTROL.scala 55:35 CONTROL.scala 66:16]
    node _GEN_102 = mux(_T_1, UInt<1>("h1"), _GEN_88) @[CONTROL.scala 55:35 CONTROL.scala 67:13]
    node _GEN_103 = mux(_T_1, UInt<1>("h0"), _GEN_89) @[CONTROL.scala 55:35 CONTROL.scala 68:13]
    node _GEN_104 = mux(_T_1, UInt<1>("h0"), _GEN_90) @[CONTROL.scala 55:35 CONTROL.scala 69:15]
    node _GEN_105 = mux(_T_1, UInt<1>("h0"), _GEN_91) @[CONTROL.scala 55:35 CONTROL.scala 72:21]
    node _GEN_106 = mux(_T, UInt<1>("h0"), _GEN_92) @[CONTROL.scala 35:29 CONTROL.scala 36:18]
    node _GEN_107 = mux(_T, UInt<1>("h0"), _GEN_93) @[CONTROL.scala 35:29 CONTROL.scala 37:15]
    node _GEN_108 = mux(_T, UInt<1>("h0"), _GEN_94) @[CONTROL.scala 35:29 CONTROL.scala 38:17]
    node _GEN_109 = mux(_T, UInt<1>("h1"), _GEN_95) @[CONTROL.scala 35:29 CONTROL.scala 39:18]
    node _GEN_110 = mux(_T, UInt<1>("h0"), _GEN_96) @[CONTROL.scala 35:29 CONTROL.scala 41:22]
    node _GEN_111 = mux(_T, UInt<1>("h0"), _GEN_97) @[CONTROL.scala 35:29 CONTROL.scala 42:18]
    node _GEN_112 = mux(_T, UInt<1>("h0"), _GEN_98) @[CONTROL.scala 35:29 CONTROL.scala 43:18]
    node _GEN_113 = mux(_T, UInt<1>("h0"), _GEN_99) @[CONTROL.scala 35:29 CONTROL.scala 44:15]
    node _GEN_114 = mux(_T, UInt<1>("h0"), _GEN_100) @[CONTROL.scala 35:29 CONTROL.scala 45:20]
    node _GEN_115 = mux(_T, UInt<1>("h0"), _GEN_101) @[CONTROL.scala 35:29 CONTROL.scala 46:16]
    node _GEN_116 = mux(_T, UInt<1>("h1"), _GEN_102) @[CONTROL.scala 35:29 CONTROL.scala 47:13]
    node _GEN_117 = mux(_T, UInt<1>("h0"), _GEN_103) @[CONTROL.scala 35:29 CONTROL.scala 48:13]
    node _GEN_118 = mux(_T, UInt<1>("h0"), _GEN_104) @[CONTROL.scala 35:29 CONTROL.scala 49:15]
    node _GEN_119 = mux(_T, UInt<1>("h0"), _GEN_105) @[CONTROL.scala 35:29 CONTROL.scala 52:21]
    io_mem_write <= _GEN_106
    io_branch <= _GEN_107
    io_mem_read <= _GEN_108
    io_reg_write <= _GEN_109
    io_men_to_reg <= _GEN_108
    io_alu_operation <= _GEN_110
    io_operand_A <= _GEN_111
    io_operand_B <= _GEN_112
    io_extend <= _GEN_113
    io_next_pc_sel <= _GEN_114
    io_avl_ope <= _GEN_115
    io_is_I <= _GEN_116
    io_is_V <= _GEN_117
    io_V_opeA <= _GEN_118
    io_V_opeB <= _GEN_118
    io_V_imm <= _GEN_118
    io_V_men_to_reg <= _GEN_119
