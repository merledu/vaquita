circuit Top :
  module PC :
    input clock : Clock
    input reset : UInt<1>
    input io_in : SInt<32>
    output io_out : SInt<32>

    reg reg : SInt<32>, clock with :
      reset => (UInt<1>("h0"), reg) @[PC.scala 11:18]
    io_out <= reg @[PC.scala 12:8]
    reg <= mux(reset, asSInt(UInt<32>("h0")), io_in) @[PC.scala 11:18 PC.scala 11:18 PC.scala 13:5]

  module Program_Counter :
    input clock : Clock
    input reset : UInt<1>
    input io_pc : UInt<32>
    output io_out : UInt<32>

    node _io_out_T = add(io_pc, UInt<32>("h4")) @[PC4.scala 12:17]
    node _io_out_T_1 = tail(_io_out_T, 1) @[PC4.scala 12:17]
    io_out <= _io_out_T_1 @[PC4.scala 12:8]

  module InstMem1 :
    input clock : Clock
    input reset : UInt<1>
    input io_addr : UInt<32>
    output io_data : UInt<32>

    mem imem : @[INST_MEM.scala 17:16]
      data-type => UInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => io_data_MPORT
      read-under-write => undefined
    node _io_data_T = bits(io_addr, 9, 0) @[INST_MEM.scala 20:17]
    io_data <= imem.io_data_MPORT.data @[INST_MEM.scala 20:9]
    imem.io_data_MPORT.addr <= _io_data_T @[INST_MEM.scala 20:17]
    imem.io_data_MPORT.en <= UInt<1>("h1") @[INST_MEM.scala 20:17]
    imem.io_data_MPORT.clk <= clock @[INST_MEM.scala 20:17]

  module Control :
    input clock : Clock
    input reset : UInt<1>
    input io_opcode : UInt<7>
    input io_rs1_no : UInt<5>
    input io_rd_no : UInt<5>
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

    node _T = eq(io_opcode, UInt<6>("h33")) @[CONTROL.scala 30:18]
    node _T_1 = eq(io_opcode, UInt<5>("h13")) @[CONTROL.scala 45:24]
    node _T_2 = eq(io_opcode, UInt<6>("h23")) @[CONTROL.scala 60:24]
    node _T_3 = eq(io_opcode, UInt<2>("h3")) @[CONTROL.scala 75:24]
    node _T_4 = eq(io_opcode, UInt<7>("h63")) @[CONTROL.scala 90:24]
    node _T_5 = eq(io_opcode, UInt<7>("h6f")) @[CONTROL.scala 105:24]
    node _T_6 = eq(io_opcode, UInt<7>("h67")) @[CONTROL.scala 120:24]
    node _T_7 = eq(io_opcode, UInt<6>("h37")) @[CONTROL.scala 135:24]
    node _T_8 = eq(io_opcode, UInt<5>("h17")) @[CONTROL.scala 150:24]
    node _T_9 = eq(io_opcode, UInt<7>("h57")) @[CONTROL.scala 165:24]
    node _T_10 = neq(io_rs1_no, UInt<1>("h0")) @[CONTROL.scala 179:21]
    node _T_11 = eq(io_rs1_no, UInt<1>("h0")) @[CONTROL.scala 181:28]
    node _T_12 = neq(io_rd_no, UInt<1>("h0")) @[CONTROL.scala 181:48]
    node _T_13 = and(_T_11, _T_12) @[CONTROL.scala 181:36]
    node _T_14 = eq(io_rs1_no, UInt<1>("h0")) @[CONTROL.scala 183:28]
    node _T_15 = eq(io_rd_no, UInt<1>("h0")) @[CONTROL.scala 183:48]
    node _T_16 = and(_T_14, _T_15) @[CONTROL.scala 183:36]
    node _GEN_0 = mux(_T_16, UInt<2>("h2"), UInt<1>("h0")) @[CONTROL.scala 183:57 CONTROL.scala 184:20 CONTROL.scala 186:20]
    node _GEN_1 = mux(_T_13, UInt<1>("h1"), _GEN_0) @[CONTROL.scala 181:57 CONTROL.scala 182:20]
    node _GEN_2 = mux(_T_10, UInt<1>("h0"), _GEN_1) @[CONTROL.scala 179:30 CONTROL.scala 180:20]
    node _GEN_3 = mux(_T_9, UInt<1>("h0"), UInt<1>("h0")) @[CONTROL.scala 165:35 CONTROL.scala 166:18 CONTROL.scala 191:18]
    node _GEN_4 = mux(_T_9, UInt<1>("h1"), UInt<1>("h0")) @[CONTROL.scala 165:35 CONTROL.scala 169:18 CONTROL.scala 194:18]
    node _GEN_5 = mux(_T_9, UInt<4>("h8"), UInt<1>("h0")) @[CONTROL.scala 165:35 CONTROL.scala 171:22 CONTROL.scala 196:22]
    node _GEN_6 = mux(_T_9, UInt<3>("h4"), UInt<1>("h0")) @[CONTROL.scala 165:35 CONTROL.scala 172:18 CONTROL.scala 197:18]
    node _GEN_7 = mux(_T_9, UInt<2>("h2"), UInt<1>("h0")) @[CONTROL.scala 165:35 CONTROL.scala 173:18 CONTROL.scala 198:18]
    node _GEN_8 = mux(_T_9, _GEN_2, UInt<1>("h0")) @[CONTROL.scala 165:35 CONTROL.scala 201:16]
    node _GEN_9 = mux(_T_8, UInt<1>("h0"), _GEN_3) @[CONTROL.scala 150:35 CONTROL.scala 151:18]
    node _GEN_10 = mux(_T_8, UInt<1>("h1"), _GEN_4) @[CONTROL.scala 150:35 CONTROL.scala 154:18]
    node _GEN_11 = mux(_T_8, UInt<3>("h7"), _GEN_5) @[CONTROL.scala 150:35 CONTROL.scala 156:22]
    node _GEN_12 = mux(_T_8, UInt<2>("h2"), _GEN_6) @[CONTROL.scala 150:35 CONTROL.scala 157:18]
    node _GEN_13 = mux(_T_8, UInt<1>("h1"), _GEN_7) @[CONTROL.scala 150:35 CONTROL.scala 158:18]
    node _GEN_14 = mux(_T_8, UInt<2>("h2"), _GEN_3) @[CONTROL.scala 150:35 CONTROL.scala 159:15]
    node _GEN_15 = mux(_T_8, UInt<1>("h0"), _GEN_8) @[CONTROL.scala 150:35 CONTROL.scala 161:16]
    node _GEN_16 = mux(_T_8, UInt<1>("h1"), _GEN_3) @[CONTROL.scala 150:35 CONTROL.scala 162:13]
    node _GEN_17 = mux(_T_8, UInt<1>("h0"), _GEN_4) @[CONTROL.scala 150:35 CONTROL.scala 163:13]
    node _GEN_18 = mux(_T_7, UInt<1>("h0"), _GEN_9) @[CONTROL.scala 135:35 CONTROL.scala 136:18]
    node _GEN_19 = mux(_T_7, UInt<1>("h1"), _GEN_10) @[CONTROL.scala 135:35 CONTROL.scala 139:18]
    node _GEN_20 = mux(_T_7, UInt<3>("h6"), _GEN_11) @[CONTROL.scala 135:35 CONTROL.scala 141:22]
    node _GEN_21 = mux(_T_7, UInt<2>("h3"), _GEN_12) @[CONTROL.scala 135:35 CONTROL.scala 142:18]
    node _GEN_22 = mux(_T_7, UInt<1>("h1"), _GEN_13) @[CONTROL.scala 135:35 CONTROL.scala 143:18]
    node _GEN_23 = mux(_T_7, UInt<2>("h2"), _GEN_14) @[CONTROL.scala 135:35 CONTROL.scala 144:15]
    node _GEN_24 = mux(_T_7, UInt<1>("h0"), _GEN_15) @[CONTROL.scala 135:35 CONTROL.scala 146:16]
    node _GEN_25 = mux(_T_7, UInt<1>("h1"), _GEN_16) @[CONTROL.scala 135:35 CONTROL.scala 147:13]
    node _GEN_26 = mux(_T_7, UInt<1>("h0"), _GEN_17) @[CONTROL.scala 135:35 CONTROL.scala 148:13]
    node _GEN_27 = mux(_T_6, UInt<1>("h0"), _GEN_18) @[CONTROL.scala 120:36 CONTROL.scala 121:18]
    node _GEN_28 = mux(_T_6, UInt<1>("h1"), _GEN_19) @[CONTROL.scala 120:36 CONTROL.scala 124:18]
    node _GEN_29 = mux(_T_6, UInt<2>("h3"), _GEN_20) @[CONTROL.scala 120:36 CONTROL.scala 126:22]
    node _GEN_30 = mux(_T_6, UInt<1>("h1"), _GEN_21) @[CONTROL.scala 120:36 CONTROL.scala 127:18]
    node _GEN_31 = mux(_T_6, UInt<1>("h0"), _GEN_22) @[CONTROL.scala 120:36 CONTROL.scala 128:18]
    node _GEN_32 = mux(_T_6, UInt<1>("h0"), _GEN_23) @[CONTROL.scala 120:36 CONTROL.scala 129:15]
    node _GEN_33 = mux(_T_6, UInt<2>("h3"), _GEN_18) @[CONTROL.scala 120:36 CONTROL.scala 130:20]
    node _GEN_34 = mux(_T_6, UInt<1>("h0"), _GEN_24) @[CONTROL.scala 120:36 CONTROL.scala 131:16]
    node _GEN_35 = mux(_T_6, UInt<1>("h1"), _GEN_25) @[CONTROL.scala 120:36 CONTROL.scala 132:13]
    node _GEN_36 = mux(_T_6, UInt<1>("h0"), _GEN_26) @[CONTROL.scala 120:36 CONTROL.scala 133:13]
    node _GEN_37 = mux(_T_5, UInt<1>("h0"), _GEN_27) @[CONTROL.scala 105:36 CONTROL.scala 106:18]
    node _GEN_38 = mux(_T_5, UInt<1>("h1"), _GEN_28) @[CONTROL.scala 105:36 CONTROL.scala 109:18]
    node _GEN_39 = mux(_T_5, UInt<2>("h3"), _GEN_29) @[CONTROL.scala 105:36 CONTROL.scala 111:22]
    node _GEN_40 = mux(_T_5, UInt<1>("h1"), _GEN_30) @[CONTROL.scala 105:36 CONTROL.scala 112:18]
    node _GEN_41 = mux(_T_5, UInt<1>("h0"), _GEN_31) @[CONTROL.scala 105:36 CONTROL.scala 113:18]
    node _GEN_42 = mux(_T_5, UInt<1>("h0"), _GEN_32) @[CONTROL.scala 105:36 CONTROL.scala 114:15]
    node _GEN_43 = mux(_T_5, UInt<2>("h2"), _GEN_33) @[CONTROL.scala 105:36 CONTROL.scala 115:20]
    node _GEN_44 = mux(_T_5, UInt<1>("h0"), _GEN_34) @[CONTROL.scala 105:36 CONTROL.scala 116:16]
    node _GEN_45 = mux(_T_5, UInt<1>("h1"), _GEN_35) @[CONTROL.scala 105:36 CONTROL.scala 117:13]
    node _GEN_46 = mux(_T_5, UInt<1>("h0"), _GEN_36) @[CONTROL.scala 105:36 CONTROL.scala 118:13]
    node _GEN_47 = mux(_T_4, UInt<1>("h0"), _GEN_37) @[CONTROL.scala 90:35 CONTROL.scala 91:18]
    node _GEN_48 = mux(_T_4, UInt<1>("h1"), _GEN_37) @[CONTROL.scala 90:35 CONTROL.scala 92:15]
    node _GEN_49 = mux(_T_4, UInt<1>("h0"), _GEN_38) @[CONTROL.scala 90:35 CONTROL.scala 94:18]
    node _GEN_50 = mux(_T_4, UInt<2>("h2"), _GEN_39) @[CONTROL.scala 90:35 CONTROL.scala 96:22]
    node _GEN_51 = mux(_T_4, UInt<1>("h0"), _GEN_40) @[CONTROL.scala 90:35 CONTROL.scala 97:18]
    node _GEN_52 = mux(_T_4, UInt<1>("h0"), _GEN_41) @[CONTROL.scala 90:35 CONTROL.scala 98:18]
    node _GEN_53 = mux(_T_4, UInt<1>("h0"), _GEN_42) @[CONTROL.scala 90:35 CONTROL.scala 99:15]
    node _GEN_54 = mux(_T_4, UInt<1>("h1"), _GEN_43) @[CONTROL.scala 90:35 CONTROL.scala 100:20]
    node _GEN_55 = mux(_T_4, UInt<1>("h0"), _GEN_44) @[CONTROL.scala 90:35 CONTROL.scala 101:16]
    node _GEN_56 = mux(_T_4, UInt<1>("h1"), _GEN_45) @[CONTROL.scala 90:35 CONTROL.scala 102:13]
    node _GEN_57 = mux(_T_4, UInt<1>("h0"), _GEN_46) @[CONTROL.scala 90:35 CONTROL.scala 103:13]
    node _GEN_58 = mux(_T_3, UInt<1>("h0"), _GEN_47) @[CONTROL.scala 75:34 CONTROL.scala 76:18]
    node _GEN_59 = mux(_T_3, UInt<1>("h0"), _GEN_48) @[CONTROL.scala 75:34 CONTROL.scala 77:15]
    node _GEN_60 = mux(_T_3, UInt<1>("h1"), _GEN_47) @[CONTROL.scala 75:34 CONTROL.scala 78:17]
    node _GEN_61 = mux(_T_3, UInt<1>("h1"), _GEN_49) @[CONTROL.scala 75:34 CONTROL.scala 79:18]
    node _GEN_62 = mux(_T_3, UInt<3>("h4"), _GEN_50) @[CONTROL.scala 75:34 CONTROL.scala 81:22]
    node _GEN_63 = mux(_T_3, UInt<1>("h0"), _GEN_51) @[CONTROL.scala 75:34 CONTROL.scala 82:18]
    node _GEN_64 = mux(_T_3, UInt<1>("h1"), _GEN_52) @[CONTROL.scala 75:34 CONTROL.scala 83:18]
    node _GEN_65 = mux(_T_3, UInt<1>("h0"), _GEN_53) @[CONTROL.scala 75:34 CONTROL.scala 84:15]
    node _GEN_66 = mux(_T_3, UInt<1>("h0"), _GEN_54) @[CONTROL.scala 75:34 CONTROL.scala 85:20]
    node _GEN_67 = mux(_T_3, UInt<1>("h0"), _GEN_55) @[CONTROL.scala 75:34 CONTROL.scala 86:16]
    node _GEN_68 = mux(_T_3, UInt<1>("h1"), _GEN_56) @[CONTROL.scala 75:34 CONTROL.scala 87:13]
    node _GEN_69 = mux(_T_3, UInt<1>("h0"), _GEN_57) @[CONTROL.scala 75:34 CONTROL.scala 88:13]
    node _GEN_70 = mux(_T_2, UInt<1>("h1"), _GEN_58) @[CONTROL.scala 60:35 CONTROL.scala 61:18]
    node _GEN_71 = mux(_T_2, UInt<1>("h0"), _GEN_59) @[CONTROL.scala 60:35 CONTROL.scala 62:15]
    node _GEN_72 = mux(_T_2, UInt<1>("h0"), _GEN_60) @[CONTROL.scala 60:35 CONTROL.scala 63:17]
    node _GEN_73 = mux(_T_2, UInt<1>("h0"), _GEN_61) @[CONTROL.scala 60:35 CONTROL.scala 64:18]
    node _GEN_74 = mux(_T_2, UInt<3>("h5"), _GEN_62) @[CONTROL.scala 60:35 CONTROL.scala 66:22]
    node _GEN_75 = mux(_T_2, UInt<1>("h0"), _GEN_63) @[CONTROL.scala 60:35 CONTROL.scala 67:18]
    node _GEN_76 = mux(_T_2, UInt<1>("h1"), _GEN_64) @[CONTROL.scala 60:35 CONTROL.scala 68:18]
    node _GEN_77 = mux(_T_2, UInt<1>("h1"), _GEN_65) @[CONTROL.scala 60:35 CONTROL.scala 69:15]
    node _GEN_78 = mux(_T_2, UInt<1>("h0"), _GEN_66) @[CONTROL.scala 60:35 CONTROL.scala 70:20]
    node _GEN_79 = mux(_T_2, UInt<1>("h0"), _GEN_67) @[CONTROL.scala 60:35 CONTROL.scala 71:16]
    node _GEN_80 = mux(_T_2, UInt<1>("h1"), _GEN_68) @[CONTROL.scala 60:35 CONTROL.scala 72:13]
    node _GEN_81 = mux(_T_2, UInt<1>("h0"), _GEN_69) @[CONTROL.scala 60:35 CONTROL.scala 73:13]
    node _GEN_82 = mux(_T_1, UInt<1>("h0"), _GEN_70) @[CONTROL.scala 45:35 CONTROL.scala 46:18]
    node _GEN_83 = mux(_T_1, UInt<1>("h0"), _GEN_71) @[CONTROL.scala 45:35 CONTROL.scala 47:15]
    node _GEN_84 = mux(_T_1, UInt<1>("h0"), _GEN_72) @[CONTROL.scala 45:35 CONTROL.scala 48:17]
    node _GEN_85 = mux(_T_1, UInt<1>("h1"), _GEN_73) @[CONTROL.scala 45:35 CONTROL.scala 49:18]
    node _GEN_86 = mux(_T_1, UInt<1>("h1"), _GEN_74) @[CONTROL.scala 45:35 CONTROL.scala 51:22]
    node _GEN_87 = mux(_T_1, UInt<1>("h0"), _GEN_75) @[CONTROL.scala 45:35 CONTROL.scala 52:18]
    node _GEN_88 = mux(_T_1, UInt<1>("h1"), _GEN_76) @[CONTROL.scala 45:35 CONTROL.scala 53:18]
    node _GEN_89 = mux(_T_1, UInt<1>("h0"), _GEN_77) @[CONTROL.scala 45:35 CONTROL.scala 54:15]
    node _GEN_90 = mux(_T_1, UInt<1>("h0"), _GEN_78) @[CONTROL.scala 45:35 CONTROL.scala 55:20]
    node _GEN_91 = mux(_T_1, UInt<1>("h0"), _GEN_79) @[CONTROL.scala 45:35 CONTROL.scala 56:16]
    node _GEN_92 = mux(_T_1, UInt<1>("h1"), _GEN_80) @[CONTROL.scala 45:35 CONTROL.scala 57:13]
    node _GEN_93 = mux(_T_1, UInt<1>("h0"), _GEN_81) @[CONTROL.scala 45:35 CONTROL.scala 58:13]
    node _GEN_94 = mux(_T, UInt<1>("h0"), _GEN_82) @[CONTROL.scala 30:29 CONTROL.scala 31:18]
    node _GEN_95 = mux(_T, UInt<1>("h0"), _GEN_83) @[CONTROL.scala 30:29 CONTROL.scala 32:15]
    node _GEN_96 = mux(_T, UInt<1>("h0"), _GEN_84) @[CONTROL.scala 30:29 CONTROL.scala 33:17]
    node _GEN_97 = mux(_T, UInt<1>("h1"), _GEN_85) @[CONTROL.scala 30:29 CONTROL.scala 34:18]
    node _GEN_98 = mux(_T, UInt<1>("h0"), _GEN_86) @[CONTROL.scala 30:29 CONTROL.scala 36:22]
    node _GEN_99 = mux(_T, UInt<1>("h0"), _GEN_87) @[CONTROL.scala 30:29 CONTROL.scala 37:18]
    node _GEN_100 = mux(_T, UInt<1>("h0"), _GEN_88) @[CONTROL.scala 30:29 CONTROL.scala 38:18]
    node _GEN_101 = mux(_T, UInt<1>("h0"), _GEN_89) @[CONTROL.scala 30:29 CONTROL.scala 39:15]
    node _GEN_102 = mux(_T, UInt<1>("h0"), _GEN_90) @[CONTROL.scala 30:29 CONTROL.scala 40:20]
    node _GEN_103 = mux(_T, UInt<1>("h0"), _GEN_91) @[CONTROL.scala 30:29 CONTROL.scala 41:16]
    node _GEN_104 = mux(_T, UInt<1>("h1"), _GEN_92) @[CONTROL.scala 30:29 CONTROL.scala 42:13]
    node _GEN_105 = mux(_T, UInt<1>("h0"), _GEN_93) @[CONTROL.scala 30:29 CONTROL.scala 43:13]
    io_mem_write <= _GEN_94
    io_branch <= _GEN_95
    io_mem_read <= _GEN_96
    io_reg_write <= _GEN_97
    io_men_to_reg <= _GEN_96
    io_alu_operation <= _GEN_98
    io_operand_A <= _GEN_99
    io_operand_B <= _GEN_100
    io_extend <= _GEN_101
    io_next_pc_sel <= _GEN_102
    io_avl_ope <= _GEN_103
    io_is_I <= _GEN_104
    io_is_V <= _GEN_105

  module Immde :
    input clock : Clock
    input reset : UInt<1>
    input io_instr : UInt<32>
    input io_pc : UInt<32>
    output io_I_type : SInt<32>
    output io_S_type : SInt<32>
    output io_SB_type : SInt<32>
    output io_U_type : SInt<32>
    output io_UJ_type : SInt<32>

    node _io_I_type_T = bits(io_instr, 31, 31) @[IMMEDIATE.scala 18:35]
    node _io_I_type_T_1 = bits(_io_I_type_T, 0, 0) @[Bitwise.scala 72:15]
    node io_I_type_hi = mux(_io_I_type_T_1, UInt<20>("hfffff"), UInt<20>("h0")) @[Bitwise.scala 72:12]
    node io_I_type_lo = bits(io_instr, 31, 20) @[IMMEDIATE.scala 18:50]
    node _io_I_type_T_2 = cat(io_I_type_hi, io_I_type_lo) @[Cat.scala 30:58]
    node _io_I_type_T_3 = asSInt(_io_I_type_T_2) @[IMMEDIATE.scala 18:59]
    node _io_S_type_T = bits(io_instr, 31, 31) @[IMMEDIATE.scala 20:35]
    node _io_S_type_T_1 = bits(_io_S_type_T, 0, 0) @[Bitwise.scala 72:15]
    node io_S_type_hi_hi = mux(_io_S_type_T_1, UInt<20>("hfffff"), UInt<20>("h0")) @[Bitwise.scala 72:12]
    node io_S_type_hi_lo = bits(io_instr, 31, 25) @[IMMEDIATE.scala 20:50]
    node io_S_type_lo = bits(io_instr, 11, 7) @[IMMEDIATE.scala 20:67]
    node io_S_type_hi = cat(io_S_type_hi_hi, io_S_type_hi_lo) @[Cat.scala 30:58]
    node _io_S_type_T_2 = cat(io_S_type_hi, io_S_type_lo) @[Cat.scala 30:58]
    node _io_S_type_T_3 = asSInt(_io_S_type_T_2) @[IMMEDIATE.scala 20:75]
    node _a_T = bits(io_instr, 31, 31) @[IMMEDIATE.scala 22:30]
    node _a_T_1 = bits(_a_T, 0, 0) @[Bitwise.scala 72:15]
    node a_hi_hi_hi = mux(_a_T_1, UInt<19>("h7ffff"), UInt<19>("h0")) @[Bitwise.scala 72:12]
    node a_hi_hi_lo = bits(io_instr, 31, 31) @[IMMEDIATE.scala 22:45]
    node a_hi_lo = bits(io_instr, 7, 7) @[IMMEDIATE.scala 22:59]
    node a_lo_hi_hi = bits(io_instr, 30, 25) @[IMMEDIATE.scala 22:72]
    node a_lo_hi_lo = bits(io_instr, 11, 8) @[IMMEDIATE.scala 22:89]
    node a_lo_hi = cat(a_lo_hi_hi, a_lo_hi_lo) @[Cat.scala 30:58]
    node a_lo = cat(a_lo_hi, UInt<1>("h0")) @[Cat.scala 30:58]
    node a_hi_hi = cat(a_hi_hi_hi, a_hi_hi_lo) @[Cat.scala 30:58]
    node a_hi = cat(a_hi_hi, a_hi_lo) @[Cat.scala 30:58]
    node _a_T_2 = cat(a_hi, a_lo) @[Cat.scala 30:58]
    node a = asSInt(_a_T_2) @[IMMEDIATE.scala 22:102]
    node _io_SB_type_T = asSInt(io_pc) @[IMMEDIATE.scala 23:25]
    node _io_SB_type_T_1 = add(a, _io_SB_type_T) @[IMMEDIATE.scala 23:17]
    node _io_SB_type_T_2 = tail(_io_SB_type_T_1, 1) @[IMMEDIATE.scala 23:17]
    node _io_SB_type_T_3 = asSInt(_io_SB_type_T_2) @[IMMEDIATE.scala 23:17]
    node io_U_type_hi = bits(io_instr, 31, 12) @[IMMEDIATE.scala 25:26]
    node io_U_type_lo = mux(UInt<1>("h0"), UInt<12>("hfff"), UInt<12>("h0")) @[Bitwise.scala 72:12]
    node _io_U_type_T = cat(io_U_type_hi, io_U_type_lo) @[Cat.scala 30:58]
    node _io_U_type_T_1 = asSInt(_io_U_type_T) @[IMMEDIATE.scala 25:53]
    node _b_T = bits(io_instr, 31, 31) @[IMMEDIATE.scala 27:30]
    node _b_T_1 = bits(_b_T, 0, 0) @[Bitwise.scala 72:15]
    node b_hi_hi_hi = mux(_b_T_1, UInt<11>("h7ff"), UInt<11>("h0")) @[Bitwise.scala 72:12]
    node b_hi_hi_lo = bits(io_instr, 31, 31) @[IMMEDIATE.scala 27:45]
    node b_hi_lo = bits(io_instr, 19, 12) @[IMMEDIATE.scala 27:59]
    node b_lo_hi_hi = bits(io_instr, 20, 20) @[IMMEDIATE.scala 27:76]
    node b_lo_hi_lo = bits(io_instr, 30, 21) @[IMMEDIATE.scala 27:90]
    node b_lo_hi = cat(b_lo_hi_hi, b_lo_hi_lo) @[Cat.scala 30:58]
    node b_lo = cat(b_lo_hi, UInt<1>("h0")) @[Cat.scala 30:58]
    node b_hi_hi = cat(b_hi_hi_hi, b_hi_hi_lo) @[Cat.scala 30:58]
    node b_hi = cat(b_hi_hi, b_hi_lo) @[Cat.scala 30:58]
    node _b_T_2 = cat(b_hi, b_lo) @[Cat.scala 30:58]
    node b = asSInt(_b_T_2) @[IMMEDIATE.scala 27:104]
    node _io_UJ_type_T = asSInt(io_pc) @[IMMEDIATE.scala 28:25]
    node _io_UJ_type_T_1 = add(b, _io_UJ_type_T) @[IMMEDIATE.scala 28:17]
    node _io_UJ_type_T_2 = tail(_io_UJ_type_T_1, 1) @[IMMEDIATE.scala 28:17]
    node _io_UJ_type_T_3 = asSInt(_io_UJ_type_T_2) @[IMMEDIATE.scala 28:17]
    io_I_type <= _io_I_type_T_3 @[IMMEDIATE.scala 18:11]
    io_S_type <= _io_S_type_T_3 @[IMMEDIATE.scala 20:11]
    io_SB_type <= _io_SB_type_T_3 @[IMMEDIATE.scala 23:12]
    io_U_type <= _io_U_type_T_1 @[IMMEDIATE.scala 25:11]
    io_UJ_type <= _io_UJ_type_T_3 @[IMMEDIATE.scala 28:12]

  module RegFile :
    input clock : Clock
    input reset : UInt<1>
    input io_rs1 : UInt<5>
    input io_rs2 : UInt<5>
    input io_reg_write : UInt<1>
    input io_w_reg : UInt<5>
    input io_w_data : SInt<32>
    output io_rdata1 : SInt<32>
    output io_rdata2 : SInt<32>

    reg regs_0 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_0) @[SCALAR_REGISTER.scala 16:19]
    reg regs_1 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_1) @[SCALAR_REGISTER.scala 16:19]
    reg regs_2 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_2) @[SCALAR_REGISTER.scala 16:19]
    reg regs_3 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_3) @[SCALAR_REGISTER.scala 16:19]
    reg regs_4 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_4) @[SCALAR_REGISTER.scala 16:19]
    reg regs_5 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_5) @[SCALAR_REGISTER.scala 16:19]
    reg regs_6 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_6) @[SCALAR_REGISTER.scala 16:19]
    reg regs_7 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_7) @[SCALAR_REGISTER.scala 16:19]
    reg regs_8 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_8) @[SCALAR_REGISTER.scala 16:19]
    reg regs_9 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_9) @[SCALAR_REGISTER.scala 16:19]
    reg regs_10 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_10) @[SCALAR_REGISTER.scala 16:19]
    reg regs_11 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_11) @[SCALAR_REGISTER.scala 16:19]
    reg regs_12 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_12) @[SCALAR_REGISTER.scala 16:19]
    reg regs_13 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_13) @[SCALAR_REGISTER.scala 16:19]
    reg regs_14 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_14) @[SCALAR_REGISTER.scala 16:19]
    reg regs_15 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_15) @[SCALAR_REGISTER.scala 16:19]
    reg regs_16 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_16) @[SCALAR_REGISTER.scala 16:19]
    reg regs_17 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_17) @[SCALAR_REGISTER.scala 16:19]
    reg regs_18 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_18) @[SCALAR_REGISTER.scala 16:19]
    reg regs_19 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_19) @[SCALAR_REGISTER.scala 16:19]
    reg regs_20 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_20) @[SCALAR_REGISTER.scala 16:19]
    reg regs_21 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_21) @[SCALAR_REGISTER.scala 16:19]
    reg regs_22 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_22) @[SCALAR_REGISTER.scala 16:19]
    reg regs_23 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_23) @[SCALAR_REGISTER.scala 16:19]
    reg regs_24 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_24) @[SCALAR_REGISTER.scala 16:19]
    reg regs_25 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_25) @[SCALAR_REGISTER.scala 16:19]
    reg regs_26 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_26) @[SCALAR_REGISTER.scala 16:19]
    reg regs_27 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_27) @[SCALAR_REGISTER.scala 16:19]
    reg regs_28 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_28) @[SCALAR_REGISTER.scala 16:19]
    reg regs_29 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_29) @[SCALAR_REGISTER.scala 16:19]
    reg regs_30 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_30) @[SCALAR_REGISTER.scala 16:19]
    reg regs_31 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), regs_31) @[SCALAR_REGISTER.scala 16:19]
    node _io_rdata1_T = orr(io_rs1) @[SCALAR_REGISTER.scala 18:29]
    node _GEN_0 = validif(eq(UInt<1>("h0"), io_rs1), regs_0) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_1 = mux(eq(UInt<1>("h1"), io_rs1), regs_1, _GEN_0) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_2 = mux(eq(UInt<2>("h2"), io_rs1), regs_2, _GEN_1) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_3 = mux(eq(UInt<2>("h3"), io_rs1), regs_3, _GEN_2) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_4 = mux(eq(UInt<3>("h4"), io_rs1), regs_4, _GEN_3) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_5 = mux(eq(UInt<3>("h5"), io_rs1), regs_5, _GEN_4) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_6 = mux(eq(UInt<3>("h6"), io_rs1), regs_6, _GEN_5) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_7 = mux(eq(UInt<3>("h7"), io_rs1), regs_7, _GEN_6) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_8 = mux(eq(UInt<4>("h8"), io_rs1), regs_8, _GEN_7) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_9 = mux(eq(UInt<4>("h9"), io_rs1), regs_9, _GEN_8) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_10 = mux(eq(UInt<4>("ha"), io_rs1), regs_10, _GEN_9) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_11 = mux(eq(UInt<4>("hb"), io_rs1), regs_11, _GEN_10) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_12 = mux(eq(UInt<4>("hc"), io_rs1), regs_12, _GEN_11) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_13 = mux(eq(UInt<4>("hd"), io_rs1), regs_13, _GEN_12) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_14 = mux(eq(UInt<4>("he"), io_rs1), regs_14, _GEN_13) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_15 = mux(eq(UInt<4>("hf"), io_rs1), regs_15, _GEN_14) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_16 = mux(eq(UInt<5>("h10"), io_rs1), regs_16, _GEN_15) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_17 = mux(eq(UInt<5>("h11"), io_rs1), regs_17, _GEN_16) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_18 = mux(eq(UInt<5>("h12"), io_rs1), regs_18, _GEN_17) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_19 = mux(eq(UInt<5>("h13"), io_rs1), regs_19, _GEN_18) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_20 = mux(eq(UInt<5>("h14"), io_rs1), regs_20, _GEN_19) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_21 = mux(eq(UInt<5>("h15"), io_rs1), regs_21, _GEN_20) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_22 = mux(eq(UInt<5>("h16"), io_rs1), regs_22, _GEN_21) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_23 = mux(eq(UInt<5>("h17"), io_rs1), regs_23, _GEN_22) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_24 = mux(eq(UInt<5>("h18"), io_rs1), regs_24, _GEN_23) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_25 = mux(eq(UInt<5>("h19"), io_rs1), regs_25, _GEN_24) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_26 = mux(eq(UInt<5>("h1a"), io_rs1), regs_26, _GEN_25) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_27 = mux(eq(UInt<5>("h1b"), io_rs1), regs_27, _GEN_26) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_28 = mux(eq(UInt<5>("h1c"), io_rs1), regs_28, _GEN_27) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_29 = mux(eq(UInt<5>("h1d"), io_rs1), regs_29, _GEN_28) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_30 = mux(eq(UInt<5>("h1e"), io_rs1), regs_30, _GEN_29) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _GEN_31 = mux(eq(UInt<5>("h1f"), io_rs1), regs_31, _GEN_30) @[SCALAR_REGISTER.scala 18:18 SCALAR_REGISTER.scala 18:18]
    node _regs_io_rs1 = _GEN_31 @[SCALAR_REGISTER.scala 18:18]
    node _io_rdata1_T_1 = mux(_io_rdata1_T, _regs_io_rs1, asSInt(UInt<1>("h0"))) @[SCALAR_REGISTER.scala 18:18]
    node _io_rdata2_T = orr(io_rs2) @[SCALAR_REGISTER.scala 19:29]
    node _GEN_32 = validif(eq(UInt<1>("h0"), io_rs2), regs_0) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_33 = mux(eq(UInt<1>("h1"), io_rs2), regs_1, _GEN_32) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_34 = mux(eq(UInt<2>("h2"), io_rs2), regs_2, _GEN_33) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_35 = mux(eq(UInt<2>("h3"), io_rs2), regs_3, _GEN_34) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_36 = mux(eq(UInt<3>("h4"), io_rs2), regs_4, _GEN_35) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_37 = mux(eq(UInt<3>("h5"), io_rs2), regs_5, _GEN_36) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_38 = mux(eq(UInt<3>("h6"), io_rs2), regs_6, _GEN_37) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_39 = mux(eq(UInt<3>("h7"), io_rs2), regs_7, _GEN_38) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_40 = mux(eq(UInt<4>("h8"), io_rs2), regs_8, _GEN_39) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_41 = mux(eq(UInt<4>("h9"), io_rs2), regs_9, _GEN_40) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_42 = mux(eq(UInt<4>("ha"), io_rs2), regs_10, _GEN_41) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_43 = mux(eq(UInt<4>("hb"), io_rs2), regs_11, _GEN_42) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_44 = mux(eq(UInt<4>("hc"), io_rs2), regs_12, _GEN_43) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_45 = mux(eq(UInt<4>("hd"), io_rs2), regs_13, _GEN_44) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_46 = mux(eq(UInt<4>("he"), io_rs2), regs_14, _GEN_45) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_47 = mux(eq(UInt<4>("hf"), io_rs2), regs_15, _GEN_46) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_48 = mux(eq(UInt<5>("h10"), io_rs2), regs_16, _GEN_47) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_49 = mux(eq(UInt<5>("h11"), io_rs2), regs_17, _GEN_48) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_50 = mux(eq(UInt<5>("h12"), io_rs2), regs_18, _GEN_49) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_51 = mux(eq(UInt<5>("h13"), io_rs2), regs_19, _GEN_50) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_52 = mux(eq(UInt<5>("h14"), io_rs2), regs_20, _GEN_51) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_53 = mux(eq(UInt<5>("h15"), io_rs2), regs_21, _GEN_52) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_54 = mux(eq(UInt<5>("h16"), io_rs2), regs_22, _GEN_53) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_55 = mux(eq(UInt<5>("h17"), io_rs2), regs_23, _GEN_54) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_56 = mux(eq(UInt<5>("h18"), io_rs2), regs_24, _GEN_55) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_57 = mux(eq(UInt<5>("h19"), io_rs2), regs_25, _GEN_56) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_58 = mux(eq(UInt<5>("h1a"), io_rs2), regs_26, _GEN_57) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_59 = mux(eq(UInt<5>("h1b"), io_rs2), regs_27, _GEN_58) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_60 = mux(eq(UInt<5>("h1c"), io_rs2), regs_28, _GEN_59) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_61 = mux(eq(UInt<5>("h1d"), io_rs2), regs_29, _GEN_60) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_62 = mux(eq(UInt<5>("h1e"), io_rs2), regs_30, _GEN_61) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _GEN_63 = mux(eq(UInt<5>("h1f"), io_rs2), regs_31, _GEN_62) @[SCALAR_REGISTER.scala 19:18 SCALAR_REGISTER.scala 19:18]
    node _regs_io_rs2 = _GEN_63 @[SCALAR_REGISTER.scala 19:18]
    node _io_rdata2_T_1 = mux(_io_rdata2_T, _regs_io_rs2, asSInt(UInt<1>("h0"))) @[SCALAR_REGISTER.scala 19:18]
    node _T = orr(io_w_reg) @[SCALAR_REGISTER.scala 21:33]
    node _T_1 = and(io_reg_write, _T) @[SCALAR_REGISTER.scala 21:21]
    node _regs_io_w_reg = io_w_data @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23]
    node _GEN_64 = mux(eq(UInt<1>("h0"), io_w_reg), _regs_io_w_reg, regs_0) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_65 = mux(eq(UInt<1>("h1"), io_w_reg), _regs_io_w_reg, regs_1) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_66 = mux(eq(UInt<2>("h2"), io_w_reg), _regs_io_w_reg, regs_2) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_67 = mux(eq(UInt<2>("h3"), io_w_reg), _regs_io_w_reg, regs_3) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_68 = mux(eq(UInt<3>("h4"), io_w_reg), _regs_io_w_reg, regs_4) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_69 = mux(eq(UInt<3>("h5"), io_w_reg), _regs_io_w_reg, regs_5) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_70 = mux(eq(UInt<3>("h6"), io_w_reg), _regs_io_w_reg, regs_6) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_71 = mux(eq(UInt<3>("h7"), io_w_reg), _regs_io_w_reg, regs_7) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_72 = mux(eq(UInt<4>("h8"), io_w_reg), _regs_io_w_reg, regs_8) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_73 = mux(eq(UInt<4>("h9"), io_w_reg), _regs_io_w_reg, regs_9) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_74 = mux(eq(UInt<4>("ha"), io_w_reg), _regs_io_w_reg, regs_10) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_75 = mux(eq(UInt<4>("hb"), io_w_reg), _regs_io_w_reg, regs_11) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_76 = mux(eq(UInt<4>("hc"), io_w_reg), _regs_io_w_reg, regs_12) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_77 = mux(eq(UInt<4>("hd"), io_w_reg), _regs_io_w_reg, regs_13) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_78 = mux(eq(UInt<4>("he"), io_w_reg), _regs_io_w_reg, regs_14) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_79 = mux(eq(UInt<4>("hf"), io_w_reg), _regs_io_w_reg, regs_15) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_80 = mux(eq(UInt<5>("h10"), io_w_reg), _regs_io_w_reg, regs_16) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_81 = mux(eq(UInt<5>("h11"), io_w_reg), _regs_io_w_reg, regs_17) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_82 = mux(eq(UInt<5>("h12"), io_w_reg), _regs_io_w_reg, regs_18) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_83 = mux(eq(UInt<5>("h13"), io_w_reg), _regs_io_w_reg, regs_19) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_84 = mux(eq(UInt<5>("h14"), io_w_reg), _regs_io_w_reg, regs_20) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_85 = mux(eq(UInt<5>("h15"), io_w_reg), _regs_io_w_reg, regs_21) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_86 = mux(eq(UInt<5>("h16"), io_w_reg), _regs_io_w_reg, regs_22) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_87 = mux(eq(UInt<5>("h17"), io_w_reg), _regs_io_w_reg, regs_23) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_88 = mux(eq(UInt<5>("h18"), io_w_reg), _regs_io_w_reg, regs_24) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_89 = mux(eq(UInt<5>("h19"), io_w_reg), _regs_io_w_reg, regs_25) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_90 = mux(eq(UInt<5>("h1a"), io_w_reg), _regs_io_w_reg, regs_26) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_91 = mux(eq(UInt<5>("h1b"), io_w_reg), _regs_io_w_reg, regs_27) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_92 = mux(eq(UInt<5>("h1c"), io_w_reg), _regs_io_w_reg, regs_28) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_93 = mux(eq(UInt<5>("h1d"), io_w_reg), _regs_io_w_reg, regs_29) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_94 = mux(eq(UInt<5>("h1e"), io_w_reg), _regs_io_w_reg, regs_30) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_95 = mux(eq(UInt<5>("h1f"), io_w_reg), _regs_io_w_reg, regs_31) @[SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 22:23 SCALAR_REGISTER.scala 16:19]
    node _GEN_96 = mux(_T_1, _GEN_64, regs_0) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_97 = mux(_T_1, _GEN_65, regs_1) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_98 = mux(_T_1, _GEN_66, regs_2) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_99 = mux(_T_1, _GEN_67, regs_3) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_100 = mux(_T_1, _GEN_68, regs_4) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_101 = mux(_T_1, _GEN_69, regs_5) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_102 = mux(_T_1, _GEN_70, regs_6) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_103 = mux(_T_1, _GEN_71, regs_7) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_104 = mux(_T_1, _GEN_72, regs_8) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_105 = mux(_T_1, _GEN_73, regs_9) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_106 = mux(_T_1, _GEN_74, regs_10) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_107 = mux(_T_1, _GEN_75, regs_11) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_108 = mux(_T_1, _GEN_76, regs_12) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_109 = mux(_T_1, _GEN_77, regs_13) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_110 = mux(_T_1, _GEN_78, regs_14) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_111 = mux(_T_1, _GEN_79, regs_15) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_112 = mux(_T_1, _GEN_80, regs_16) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_113 = mux(_T_1, _GEN_81, regs_17) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_114 = mux(_T_1, _GEN_82, regs_18) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_115 = mux(_T_1, _GEN_83, regs_19) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_116 = mux(_T_1, _GEN_84, regs_20) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_117 = mux(_T_1, _GEN_85, regs_21) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_118 = mux(_T_1, _GEN_86, regs_22) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_119 = mux(_T_1, _GEN_87, regs_23) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_120 = mux(_T_1, _GEN_88, regs_24) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_121 = mux(_T_1, _GEN_89, regs_25) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_122 = mux(_T_1, _GEN_90, regs_26) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_123 = mux(_T_1, _GEN_91, regs_27) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_124 = mux(_T_1, _GEN_92, regs_28) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_125 = mux(_T_1, _GEN_93, regs_29) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_126 = mux(_T_1, _GEN_94, regs_30) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _GEN_127 = mux(_T_1, _GEN_95, regs_31) @[SCALAR_REGISTER.scala 21:39 SCALAR_REGISTER.scala 16:19]
    node _regs_WIRE_0 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_1 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_2 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_3 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_4 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_5 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_6 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_7 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_8 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_9 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_10 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_11 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_12 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_13 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_14 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_15 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_16 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_17 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_18 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_19 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_20 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_21 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_22 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_23 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_24 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_25 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_26 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_27 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_28 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_29 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_30 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    node _regs_WIRE_31 = asSInt(UInt<32>("h0")) @[SCALAR_REGISTER.scala 16:28 SCALAR_REGISTER.scala 16:28]
    io_rdata1 <= _io_rdata1_T_1 @[SCALAR_REGISTER.scala 18:11]
    io_rdata2 <= _io_rdata2_T_1 @[SCALAR_REGISTER.scala 19:11]
    regs_0 <= mux(reset, _regs_WIRE_0, _GEN_96) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_1 <= mux(reset, _regs_WIRE_1, _GEN_97) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_2 <= mux(reset, _regs_WIRE_2, _GEN_98) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_3 <= mux(reset, _regs_WIRE_3, _GEN_99) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_4 <= mux(reset, _regs_WIRE_4, _GEN_100) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_5 <= mux(reset, _regs_WIRE_5, _GEN_101) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_6 <= mux(reset, _regs_WIRE_6, _GEN_102) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_7 <= mux(reset, _regs_WIRE_7, _GEN_103) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_8 <= mux(reset, _regs_WIRE_8, _GEN_104) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_9 <= mux(reset, _regs_WIRE_9, _GEN_105) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_10 <= mux(reset, _regs_WIRE_10, _GEN_106) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_11 <= mux(reset, _regs_WIRE_11, _GEN_107) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_12 <= mux(reset, _regs_WIRE_12, _GEN_108) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_13 <= mux(reset, _regs_WIRE_13, _GEN_109) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_14 <= mux(reset, _regs_WIRE_14, _GEN_110) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_15 <= mux(reset, _regs_WIRE_15, _GEN_111) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_16 <= mux(reset, _regs_WIRE_16, _GEN_112) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_17 <= mux(reset, _regs_WIRE_17, _GEN_113) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_18 <= mux(reset, _regs_WIRE_18, _GEN_114) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_19 <= mux(reset, _regs_WIRE_19, _GEN_115) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_20 <= mux(reset, _regs_WIRE_20, _GEN_116) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_21 <= mux(reset, _regs_WIRE_21, _GEN_117) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_22 <= mux(reset, _regs_WIRE_22, _GEN_118) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_23 <= mux(reset, _regs_WIRE_23, _GEN_119) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_24 <= mux(reset, _regs_WIRE_24, _GEN_120) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_25 <= mux(reset, _regs_WIRE_25, _GEN_121) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_26 <= mux(reset, _regs_WIRE_26, _GEN_122) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_27 <= mux(reset, _regs_WIRE_27, _GEN_123) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_28 <= mux(reset, _regs_WIRE_28, _GEN_124) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_29 <= mux(reset, _regs_WIRE_29, _GEN_125) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_30 <= mux(reset, _regs_WIRE_30, _GEN_126) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]
    regs_31 <= mux(reset, _regs_WIRE_31, _GEN_127) @[SCALAR_REGISTER.scala 16:19 SCALAR_REGISTER.scala 16:19]

  module Alu_Control :
    input clock : Clock
    input reset : UInt<1>
    input io_func3 : UInt<3>
    input io_func7 : UInt<1>
    input io_aluOp : UInt<3>
    input io_I_inst : UInt<1>
    input io_V_inst : UInt<1>
    output io_out : UInt<5>
    output io_out_V : UInt<1>

    node _T = eq(io_I_inst, UInt<1>("h1")) @[ALUCONTROL.scala 18:17]
    node _T_1 = eq(io_aluOp, UInt<1>("h0")) @[ALUCONTROL.scala 20:20]
    node io_out_hi = cat(UInt<1>("h0"), io_func7) @[Cat.scala 30:58]
    node _io_out_T = cat(io_out_hi, io_func3) @[Cat.scala 30:58]
    node _T_2 = eq(io_aluOp, UInt<1>("h1")) @[ALUCONTROL.scala 25:26]
    node _io_out_T_1 = cat(UInt<1>("h0"), io_func3) @[Cat.scala 30:58]
    node _T_3 = eq(io_aluOp, UInt<2>("h2")) @[ALUCONTROL.scala 30:26]
    node io_out_hi_1 = cat(UInt<1>("h1"), UInt<1>("h0")) @[Cat.scala 30:58]
    node _io_out_T_2 = cat(io_out_hi_1, io_func3) @[Cat.scala 30:58]
    node _T_4 = eq(io_aluOp, UInt<2>("h3")) @[ALUCONTROL.scala 35:26]
    node _T_5 = eq(io_aluOp, UInt<3>("h4")) @[ALUCONTROL.scala 40:26]
    node _T_6 = eq(io_aluOp, UInt<3>("h5")) @[ALUCONTROL.scala 45:26]
    node _T_7 = eq(io_aluOp, UInt<3>("h6")) @[ALUCONTROL.scala 50:26]
    node _T_8 = eq(io_aluOp, UInt<3>("h7")) @[ALUCONTROL.scala 55:26]
    node _GEN_0 = mux(_T_8, UInt<1>("h0"), UInt<1>("h0")) @[ALUCONTROL.scala 55:35 ALUCONTROL.scala 56:16 ALUCONTROL.scala 60:16]
    node _GEN_1 = mux(_T_7, UInt<1>("h0"), _GEN_0) @[ALUCONTROL.scala 50:35 ALUCONTROL.scala 51:16]
    node _GEN_2 = mux(_T_6, UInt<1>("h0"), _GEN_1) @[ALUCONTROL.scala 45:35 ALUCONTROL.scala 46:16]
    node _GEN_3 = mux(_T_5, UInt<1>("h0"), _GEN_2) @[ALUCONTROL.scala 40:35 ALUCONTROL.scala 41:16]
    node _GEN_4 = mux(_T_4, UInt<5>("h1f"), _GEN_3) @[ALUCONTROL.scala 35:35 ALUCONTROL.scala 36:16]
    node _GEN_5 = mux(_T_4, UInt<1>("h0"), _GEN_3) @[ALUCONTROL.scala 35:35 ALUCONTROL.scala 37:18]
    node _GEN_6 = mux(_T_3, _io_out_T_2, _GEN_4) @[ALUCONTROL.scala 30:35 ALUCONTROL.scala 31:16]
    node _GEN_7 = mux(_T_3, UInt<1>("h0"), _GEN_5) @[ALUCONTROL.scala 30:35 ALUCONTROL.scala 32:18]
    node _GEN_8 = mux(_T_2, _io_out_T_1, _GEN_6) @[ALUCONTROL.scala 25:35 ALUCONTROL.scala 26:16]
    node _GEN_9 = mux(_T_2, UInt<1>("h0"), _GEN_7) @[ALUCONTROL.scala 25:35 ALUCONTROL.scala 27:18]
    node _GEN_10 = mux(_T_1, _io_out_T, _GEN_8) @[ALUCONTROL.scala 20:29 ALUCONTROL.scala 21:16]
    node _GEN_11 = mux(_T_1, UInt<1>("h0"), _GEN_9) @[ALUCONTROL.scala 20:29 ALUCONTROL.scala 22:18]
    node _T_9 = eq(io_V_inst, UInt<1>("h1")) @[ALUCONTROL.scala 64:23]
    node _T_10 = eq(io_aluOp, UInt<1>("h0")) @[ALUCONTROL.scala 66:20]
    node _io_out_T_3 = cat(UInt<1>("h0"), io_func3) @[Cat.scala 30:58]
    node _GEN_12 = mux(_T_10, _io_out_T_3, UInt<1>("h0")) @[ALUCONTROL.scala 66:29 ALUCONTROL.scala 67:16 ALUCONTROL.scala 70:16]
    node _GEN_13 = mux(_T_10, UInt<1>("h1"), UInt<1>("h0")) @[ALUCONTROL.scala 66:29 ALUCONTROL.scala 68:18 ALUCONTROL.scala 71:18]
    node _GEN_14 = mux(_T_9, _GEN_12, UInt<1>("h0")) @[ALUCONTROL.scala 64:32 ALUCONTROL.scala 75:12]
    node _GEN_15 = mux(_T_9, _GEN_13, UInt<1>("h0")) @[ALUCONTROL.scala 64:32 ALUCONTROL.scala 76:14]
    node _GEN_16 = mux(_T, _GEN_10, _GEN_14) @[ALUCONTROL.scala 18:26]
    node _GEN_17 = mux(_T, _GEN_11, _GEN_15) @[ALUCONTROL.scala 18:26]
    io_out <= _GEN_16
    io_out_V <= _GEN_17

  module ALU_1 :
    input clock : Clock
    input reset : UInt<1>
    input io_in_A : SInt<32>
    input io_in_B : SInt<32>
    input io_in_I : UInt<1>
    input io_in_V : UInt<1>
    input io_alu_Op : UInt<5>
    output io_out : SInt<32>

    node _T = eq(io_in_I, UInt<1>("h1")) @[ALU.scala 49:15]
    node _out_T = eq(io_alu_Op, UInt<5>("h0")) @[ALU.scala 51:23]
    node _out_T_1 = eq(io_alu_Op, UInt<5>("h0")) @[ALU.scala 51:48]
    node _out_T_2 = or(_out_T, _out_T_1) @[ALU.scala 51:35]
    node _out_T_3 = eq(io_alu_Op, UInt<5>("h0")) @[ALU.scala 51:74]
    node _out_T_4 = or(_out_T_2, _out_T_3) @[ALU.scala 51:61]
    node _out_T_5 = eq(io_alu_Op, UInt<5>("h0")) @[ALU.scala 51:98]
    node _out_T_6 = or(_out_T_4, _out_T_5) @[ALU.scala 51:85]
    node _out_T_7 = eq(io_alu_Op, UInt<5>("h0")) @[ALU.scala 51:122]
    node _out_T_8 = or(_out_T_6, _out_T_7) @[ALU.scala 51:109]
    node _out_T_9 = eq(io_alu_Op, UInt<5>("h0")) @[ALU.scala 51:147]
    node _out_T_10 = or(_out_T_8, _out_T_9) @[ALU.scala 51:134]
    node _out_T_11 = add(io_in_A, io_in_B) @[ALU.scala 51:171]
    node _out_T_12 = tail(_out_T_11, 1) @[ALU.scala 51:171]
    node _out_T_13 = asSInt(_out_T_12) @[ALU.scala 51:171]
    node _out_T_14 = eq(io_alu_Op, UInt<5>("h1")) @[ALU.scala 52:23]
    node _out_T_15 = eq(io_alu_Op, UInt<5>("h1")) @[ALU.scala 52:48]
    node _out_T_16 = or(_out_T_14, _out_T_15) @[ALU.scala 52:35]
    node _out_T_17 = asUInt(io_in_A) @[ALU.scala 52:71]
    node _out_T_18 = bits(io_in_B, 18, 0) @[ALU.scala 52:88]
    node _out_T_19 = dshl(_out_T_17, _out_T_18) @[ALU.scala 52:78]
    node _out_T_20 = asSInt(_out_T_19) @[ALU.scala 52:104]
    node _out_T_21 = eq(io_alu_Op, UInt<5>("h2")) @[ALU.scala 53:23]
    node _out_T_22 = eq(io_alu_Op, UInt<5>("h2")) @[ALU.scala 53:48]
    node _out_T_23 = or(_out_T_21, _out_T_22) @[ALU.scala 53:35]
    node _out_T_24 = lt(io_in_A, io_in_B) @[ALU.scala 53:74]
    node _out_T_25 = mux(_out_T_24, asSInt(UInt<2>("h1")), asSInt(UInt<1>("h0"))) @[ALU.scala 53:65]
    node _out_T_26 = eq(io_alu_Op, UInt<5>("h3")) @[ALU.scala 54:23]
    node _out_T_27 = eq(io_alu_Op, UInt<5>("h3")) @[ALU.scala 54:49]
    node _out_T_28 = or(_out_T_26, _out_T_27) @[ALU.scala 54:36]
    node _out_T_29 = lt(io_in_A, io_in_B) @[ALU.scala 54:76]
    node _out_T_30 = mux(_out_T_29, asSInt(UInt<2>("h1")), asSInt(UInt<1>("h0"))) @[ALU.scala 54:67]
    node _out_T_31 = eq(io_alu_Op, UInt<5>("h4")) @[ALU.scala 55:23]
    node _out_T_32 = eq(io_alu_Op, UInt<5>("h4")) @[ALU.scala 55:48]
    node _out_T_33 = or(_out_T_31, _out_T_32) @[ALU.scala 55:35]
    node _out_T_34 = xor(io_in_A, io_in_B) @[ALU.scala 55:71]
    node _out_T_35 = asSInt(_out_T_34) @[ALU.scala 55:71]
    node _out_T_36 = eq(io_alu_Op, UInt<5>("h5")) @[ALU.scala 56:23]
    node _out_T_37 = eq(io_alu_Op, UInt<5>("h5")) @[ALU.scala 56:48]
    node _out_T_38 = or(_out_T_36, _out_T_37) @[ALU.scala 56:35]
    node _out_T_39 = asUInt(io_in_A) @[ALU.scala 56:71]
    node _out_T_40 = bits(io_in_B, 18, 0) @[ALU.scala 56:88]
    node _out_T_41 = dshr(_out_T_39, _out_T_40) @[ALU.scala 56:78]
    node _out_T_42 = asSInt(_out_T_41) @[ALU.scala 56:104]
    node _out_T_43 = eq(io_alu_Op, UInt<5>("h6")) @[ALU.scala 57:23]
    node _out_T_44 = eq(io_alu_Op, UInt<5>("h6")) @[ALU.scala 57:47]
    node _out_T_45 = or(_out_T_43, _out_T_44) @[ALU.scala 57:34]
    node _out_T_46 = or(io_in_A, io_in_B) @[ALU.scala 57:69]
    node _out_T_47 = asSInt(_out_T_46) @[ALU.scala 57:69]
    node _out_T_48 = eq(io_alu_Op, UInt<5>("h7")) @[ALU.scala 58:23]
    node _out_T_49 = eq(io_alu_Op, UInt<5>("h7")) @[ALU.scala 58:48]
    node _out_T_50 = or(_out_T_48, _out_T_49) @[ALU.scala 58:35]
    node _out_T_51 = and(io_in_A, io_in_B) @[ALU.scala 58:71]
    node _out_T_52 = asSInt(_out_T_51) @[ALU.scala 58:71]
    node _out_T_53 = eq(io_alu_Op, UInt<5>("h8")) @[ALU.scala 59:23]
    node _out_T_54 = sub(io_in_A, io_in_B) @[ALU.scala 59:45]
    node _out_T_55 = tail(_out_T_54, 1) @[ALU.scala 59:45]
    node _out_T_56 = asSInt(_out_T_55) @[ALU.scala 59:45]
    node _out_T_57 = eq(io_alu_Op, UInt<5>("hd")) @[ALU.scala 60:23]
    node _out_T_58 = eq(io_alu_Op, UInt<5>("hd")) @[ALU.scala 60:48]
    node _out_T_59 = or(_out_T_57, _out_T_58) @[ALU.scala 60:35]
    node _out_T_60 = asUInt(io_in_A) @[ALU.scala 60:71]
    node _out_T_61 = bits(io_in_B, 18, 0) @[ALU.scala 60:88]
    node _out_T_62 = dshr(_out_T_60, _out_T_61) @[ALU.scala 60:78]
    node _out_T_63 = asSInt(_out_T_62) @[ALU.scala 60:104]
    node _out_T_64 = eq(io_alu_Op, UInt<5>("h1f")) @[ALU.scala 61:23]
    node _out_T_65 = eq(io_alu_Op, UInt<5>("h1f")) @[ALU.scala 61:48]
    node _out_T_66 = or(_out_T_64, _out_T_65) @[ALU.scala 61:35]
    node _out_T_67 = mux(_out_T_66, io_in_A, asSInt(UInt<1>("h0"))) @[ALU.scala 61:12]
    node _out_T_68 = mux(_out_T_59, _out_T_63, _out_T_67) @[ALU.scala 60:12]
    node _out_T_69 = mux(_out_T_53, _out_T_56, _out_T_68) @[ALU.scala 59:12]
    node _out_T_70 = mux(_out_T_50, _out_T_52, _out_T_69) @[ALU.scala 58:12]
    node _out_T_71 = mux(_out_T_45, _out_T_47, _out_T_70) @[ALU.scala 57:12]
    node _out_T_72 = mux(_out_T_38, _out_T_42, _out_T_71) @[ALU.scala 56:12]
    node _out_T_73 = mux(_out_T_33, _out_T_35, _out_T_72) @[ALU.scala 55:12]
    node _out_T_74 = mux(_out_T_28, _out_T_30, _out_T_73) @[ALU.scala 54:12]
    node _out_T_75 = mux(_out_T_23, _out_T_25, _out_T_74) @[ALU.scala 53:12]
    node _out_T_76 = mux(_out_T_16, _out_T_20, _out_T_75) @[ALU.scala 52:12]
    node out = mux(_out_T_10, _out_T_13, _out_T_76) @[ALU.scala 51:12]
    node _T_1 = eq(io_in_V, UInt<1>("h1")) @[ALU.scala 65:21]
    node _T_2 = eq(io_alu_Op, UInt<5>("h7")) @[ALU.scala 66:25]
    node _T_3 = leq(io_in_A, io_in_B) @[ALU.scala 67:26]
    node _T_4 = mul(io_in_B, asSInt(UInt<3>("h2"))) @[ALU.scala 69:52]
    node _T_5 = geq(io_in_A, _T_4) @[ALU.scala 69:40]
    node _GEN_0 = mux(_T_5, io_in_B, asSInt(UInt<1>("h0"))) @[ALU.scala 69:59 ALU.scala 70:32 ALU.scala 72:32]
    node _GEN_1 = mux(_T_3, io_in_A, _GEN_0) @[ALU.scala 67:37 ALU.scala 68:32]
    node _GEN_2 = mux(_T_2, _GEN_1, asSInt(UInt<1>("h0"))) @[ALU.scala 66:42 ALU.scala 76:20]
    node _GEN_3 = mux(_T_1, _GEN_2, asSInt(UInt<1>("h0"))) @[ALU.scala 65:30 ALU.scala 80:12]
    node _GEN_4 = mux(_T, out, _GEN_3) @[ALU.scala 49:24 ALU.scala 63:12]
    io_out <= asSInt(bits(_GEN_4, 31, 0))

  module BranchControl :
    input clock : Clock
    input reset : UInt<1>
    input io_fnct3 : UInt<3>
    input io_branch : UInt<1>
    input io_arg_x : SInt<32>
    input io_arg_y : SInt<32>
    output io_br_taken : UInt<1>

    node _T = eq(io_branch, UInt<1>("h1")) @[BRANCH.scala 15:16]
    node _T_1 = eq(io_fnct3, UInt<1>("h0")) @[BRANCH.scala 17:21]
    node _io_br_taken_T = eq(io_arg_x, io_arg_y) @[BRANCH.scala 18:33]
    node _T_2 = eq(io_fnct3, UInt<1>("h1")) @[BRANCH.scala 20:27]
    node _io_br_taken_T_1 = neq(io_arg_x, io_arg_y) @[BRANCH.scala 21:33]
    node _T_3 = eq(io_fnct3, UInt<3>("h4")) @[BRANCH.scala 23:27]
    node _io_br_taken_T_2 = lt(io_arg_x, io_arg_y) @[BRANCH.scala 24:33]
    node _T_4 = eq(io_fnct3, UInt<3>("h5")) @[BRANCH.scala 26:27]
    node _io_br_taken_T_3 = geq(io_arg_x, io_arg_y) @[BRANCH.scala 27:33]
    node _T_5 = eq(io_fnct3, UInt<3>("h7")) @[BRANCH.scala 29:27]
    node _io_br_taken_T_4 = geq(io_arg_x, io_arg_y) @[BRANCH.scala 30:34]
    node _T_6 = eq(io_fnct3, UInt<3>("h6")) @[BRANCH.scala 32:27]
    node _io_br_taken_T_5 = leq(io_arg_x, io_arg_y) @[BRANCH.scala 33:34]
    node _GEN_0 = mux(_T_6, _io_br_taken_T_5, UInt<1>("h0")) @[BRANCH.scala 32:37 BRANCH.scala 33:21 BRANCH.scala 35:21]
    node _GEN_1 = mux(_T_5, _io_br_taken_T_4, _GEN_0) @[BRANCH.scala 29:37 BRANCH.scala 30:21]
    node _GEN_2 = mux(_T_4, _io_br_taken_T_3, _GEN_1) @[BRANCH.scala 26:37 BRANCH.scala 27:21]
    node _GEN_3 = mux(_T_3, _io_br_taken_T_2, _GEN_2) @[BRANCH.scala 23:37 BRANCH.scala 24:21]
    node _GEN_4 = mux(_T_2, _io_br_taken_T_1, _GEN_3) @[BRANCH.scala 20:37 BRANCH.scala 21:21]
    node _GEN_5 = mux(_T_1, _io_br_taken_T, _GEN_4) @[BRANCH.scala 17:31 BRANCH.scala 18:21]
    node _GEN_6 = mux(_T, _GEN_5, UInt<1>("h0")) @[BRANCH.scala 15:24 BRANCH.scala 39:17]
    io_br_taken <= _GEN_6

  module DataMem :
    input clock : Clock
    input reset : UInt<1>
    input io_addr : UInt<32>
    input io_dataIn : SInt<32>
    input io_mem_read : UInt<1>
    input io_mem_write : UInt<1>
    output io_dataOut : SInt<32>

    mem imem1 : @[DATA_MEM.scala 14:17]
      data-type => SInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => io_dataOut_MPORT
      writer => MPORT
      read-under-write => undefined
    node _T = eq(io_mem_write, UInt<1>("h1")) @[DATA_MEM.scala 18:21]
    node _T_1 = bits(io_addr, 9, 0)
    node _GEN_0 = validif(_T, _T_1) @[DATA_MEM.scala 18:30]
    node _GEN_1 = validif(_T, clock) @[DATA_MEM.scala 18:30]
    node _GEN_2 = mux(_T, UInt<1>("h1"), UInt<1>("h0")) @[DATA_MEM.scala 18:30 DATA_MEM.scala 14:17]
    node _GEN_3 = validif(_T, UInt<1>("h1")) @[DATA_MEM.scala 18:30]
    node _GEN_4 = validif(_T, io_dataIn) @[DATA_MEM.scala 18:30]
    node _T_2 = eq(io_mem_read, UInt<1>("h1")) @[DATA_MEM.scala 22:20]
    node _io_dataOut_T = bits(io_addr, 9, 0) @[DATA_MEM.scala 23:30]
    node _GEN_5 = validif(_T_2, _io_dataOut_T) @[DATA_MEM.scala 22:30 DATA_MEM.scala 23:30]
    node _GEN_6 = validif(_T_2, clock) @[DATA_MEM.scala 22:30 DATA_MEM.scala 23:30]
    node _GEN_7 = mux(_T_2, UInt<1>("h1"), UInt<1>("h0")) @[DATA_MEM.scala 22:30 DATA_MEM.scala 23:30 DATA_MEM.scala 14:17]
    node _GEN_8 = mux(_T_2, imem1.io_dataOut_MPORT.data, asSInt(UInt<1>("h0"))) @[DATA_MEM.scala 22:30 DATA_MEM.scala 23:16 DATA_MEM.scala 16:12]
    io_dataOut <= _GEN_8
    imem1.io_dataOut_MPORT.addr <= _GEN_5
    imem1.io_dataOut_MPORT.en <= _GEN_7
    imem1.io_dataOut_MPORT.clk <= _GEN_6
    imem1.MPORT.addr <= _GEN_0
    imem1.MPORT.en <= _GEN_2
    imem1.MPORT.clk <= _GEN_1
    imem1.MPORT.data <= _GEN_4
    imem1.MPORT.mask <= _GEN_3

  module Jalr :
    input clock : Clock
    input reset : UInt<1>
    input io_imme : UInt<32>
    input io_rdata1 : UInt<32>
    output io_out : UInt<32>

    node _a_T = add(io_imme, io_rdata1) @[JALR.scala 12:17]
    node a = tail(_a_T, 1) @[JALR.scala 12:17]
    node b = and(UInt<32>("hfffffffe"), a) @[JALR.scala 13:23]
    io_out <= b @[JALR.scala 14:8]

  module V_Csr :
    input clock : Clock
    input reset : UInt<1>
    input io_Vtype_inst : UInt<11>
    input io_vl_writeback : UInt<32>
    output io_vl_out : UInt<32>

    node vtype_encod_hi = mux(UInt<1>("h0"), UInt<20>("hfffff"), UInt<20>("h0")) @[Bitwise.scala 72:12]
    node vtype_encod = cat(vtype_encod_hi, io_Vtype_inst) @[Cat.scala 30:58]
    reg vtypeReg : UInt<31>, clock with :
      reset => (UInt<1>("h0"), vtypeReg) @[V_CSR.scala 18:23]
    reg vlReg : UInt<32>, clock with :
      reset => (UInt<1>("h0"), vlReg) @[V_CSR.scala 19:20]
    io_vl_out <= vlReg @[V_CSR.scala 23:11]
    vtypeReg <= mux(reset, vtype_encod, vtypeReg) @[V_CSR.scala 18:23 V_CSR.scala 18:23 V_CSR.scala 18:23]
    vlReg <= mux(reset, io_vl_writeback, vlReg) @[V_CSR.scala 19:20 V_CSR.scala 19:20 V_CSR.scala 19:20]

  module Vlmax :
    input clock : Clock
    input reset : UInt<1>
    input io_v_lmul : UInt<3>
    input io_v_sew : UInt<3>
    output io_vlmax : UInt<32>

    node _T = eq(io_v_lmul, UInt<1>("h0")) @[VLMAX.scala 18:17]
    node _T_1 = eq(io_v_lmul, UInt<1>("h1")) @[VLMAX.scala 20:23]
    node _T_2 = eq(io_v_lmul, UInt<2>("h2")) @[VLMAX.scala 22:23]
    node _T_3 = eq(io_v_lmul, UInt<2>("h3")) @[VLMAX.scala 24:23]
    node _GEN_0 = mux(_T_3, UInt<4>("h8"), UInt<1>("h0")) @[VLMAX.scala 24:37 VLMAX.scala 25:10 VLMAX.scala 27:10]
    node _GEN_1 = mux(_T_2, UInt<3>("h4"), _GEN_0) @[VLMAX.scala 22:37 VLMAX.scala 23:10]
    node _GEN_2 = mux(_T_1, UInt<2>("h2"), _GEN_1) @[VLMAX.scala 20:37 VLMAX.scala 21:10]
    node _GEN_3 = mux(_T, UInt<1>("h1"), _GEN_2) @[VLMAX.scala 18:31 VLMAX.scala 19:10]
    node _T_4 = eq(io_v_sew, UInt<1>("h0")) @[VLMAX.scala 31:16]
    node _T_5 = eq(io_v_sew, UInt<1>("h1")) @[VLMAX.scala 33:22]
    node _T_6 = eq(io_v_sew, UInt<2>("h2")) @[VLMAX.scala 35:22]
    node _T_7 = eq(io_v_sew, UInt<2>("h3")) @[VLMAX.scala 37:22]
    node _GEN_4 = mux(_T_7, UInt<7>("h40"), UInt<1>("h0")) @[VLMAX.scala 37:36 VLMAX.scala 38:9 VLMAX.scala 40:9]
    node _GEN_5 = mux(_T_6, UInt<6>("h20"), _GEN_4) @[VLMAX.scala 35:36 VLMAX.scala 36:9]
    node _GEN_6 = mux(_T_5, UInt<5>("h10"), _GEN_5) @[VLMAX.scala 33:36 VLMAX.scala 34:9]
    node _GEN_7 = mux(_T_4, UInt<4>("h8"), _GEN_6) @[VLMAX.scala 31:30 VLMAX.scala 32:9]
    node lmul = _GEN_3 @[VLMAX.scala 14:16]
    node _T_8 = eq(lmul, UInt<1>("h1")) @[VLMAX.scala 45:12]
    node sew = _GEN_7 @[VLMAX.scala 15:15]
    node _T_9 = eq(sew, UInt<4>("h8")) @[VLMAX.scala 45:27]
    node _T_10 = and(_T_8, _T_9) @[VLMAX.scala 45:20]
    node _T_11 = eq(lmul, UInt<2>("h2")) @[VLMAX.scala 47:18]
    node _T_12 = eq(sew, UInt<4>("h8")) @[VLMAX.scala 47:33]
    node _T_13 = and(_T_11, _T_12) @[VLMAX.scala 47:26]
    node _T_14 = eq(lmul, UInt<3>("h4")) @[VLMAX.scala 49:18]
    node _T_15 = eq(sew, UInt<4>("h8")) @[VLMAX.scala 49:33]
    node _T_16 = and(_T_14, _T_15) @[VLMAX.scala 49:26]
    node _T_17 = eq(lmul, UInt<4>("h8")) @[VLMAX.scala 51:18]
    node _T_18 = eq(sew, UInt<4>("h8")) @[VLMAX.scala 51:33]
    node _T_19 = and(_T_17, _T_18) @[VLMAX.scala 51:26]
    node _T_20 = eq(lmul, UInt<1>("h1")) @[VLMAX.scala 53:18]
    node _T_21 = eq(sew, UInt<5>("h10")) @[VLMAX.scala 53:33]
    node _T_22 = and(_T_20, _T_21) @[VLMAX.scala 53:26]
    node _T_23 = eq(lmul, UInt<2>("h2")) @[VLMAX.scala 55:18]
    node _T_24 = eq(sew, UInt<5>("h10")) @[VLMAX.scala 55:33]
    node _T_25 = and(_T_23, _T_24) @[VLMAX.scala 55:26]
    node _T_26 = eq(lmul, UInt<3>("h4")) @[VLMAX.scala 57:18]
    node _T_27 = eq(sew, UInt<5>("h10")) @[VLMAX.scala 57:33]
    node _T_28 = and(_T_26, _T_27) @[VLMAX.scala 57:26]
    node _T_29 = eq(lmul, UInt<4>("h8")) @[VLMAX.scala 59:18]
    node _T_30 = eq(sew, UInt<5>("h10")) @[VLMAX.scala 59:33]
    node _T_31 = and(_T_29, _T_30) @[VLMAX.scala 59:26]
    node _T_32 = eq(lmul, UInt<1>("h1")) @[VLMAX.scala 61:18]
    node _T_33 = eq(sew, UInt<6>("h20")) @[VLMAX.scala 61:33]
    node _T_34 = and(_T_32, _T_33) @[VLMAX.scala 61:26]
    node _T_35 = eq(lmul, UInt<2>("h2")) @[VLMAX.scala 63:18]
    node _T_36 = eq(sew, UInt<6>("h20")) @[VLMAX.scala 63:33]
    node _T_37 = and(_T_35, _T_36) @[VLMAX.scala 63:26]
    node _T_38 = eq(lmul, UInt<3>("h4")) @[VLMAX.scala 65:18]
    node _T_39 = eq(sew, UInt<6>("h20")) @[VLMAX.scala 65:33]
    node _T_40 = and(_T_38, _T_39) @[VLMAX.scala 65:26]
    node _T_41 = eq(lmul, UInt<4>("h8")) @[VLMAX.scala 67:18]
    node _T_42 = eq(sew, UInt<6>("h20")) @[VLMAX.scala 67:33]
    node _T_43 = and(_T_41, _T_42) @[VLMAX.scala 67:26]
    node _T_44 = eq(lmul, UInt<1>("h1")) @[VLMAX.scala 69:18]
    node _T_45 = eq(sew, UInt<7>("h40")) @[VLMAX.scala 69:33]
    node _T_46 = and(_T_44, _T_45) @[VLMAX.scala 69:26]
    node _T_47 = eq(lmul, UInt<2>("h2")) @[VLMAX.scala 71:18]
    node _T_48 = eq(sew, UInt<7>("h40")) @[VLMAX.scala 71:33]
    node _T_49 = and(_T_47, _T_48) @[VLMAX.scala 71:26]
    node _T_50 = eq(lmul, UInt<3>("h4")) @[VLMAX.scala 73:18]
    node _T_51 = eq(sew, UInt<7>("h40")) @[VLMAX.scala 73:33]
    node _T_52 = and(_T_50, _T_51) @[VLMAX.scala 73:26]
    node _T_53 = eq(lmul, UInt<4>("h8")) @[VLMAX.scala 75:18]
    node _T_54 = eq(sew, UInt<7>("h40")) @[VLMAX.scala 75:33]
    node _T_55 = and(_T_53, _T_54) @[VLMAX.scala 75:26]
    node _GEN_8 = mux(_T_55, UInt<5>("h10"), UInt<1>("h0")) @[VLMAX.scala 75:43 VLMAX.scala 76:14 VLMAX.scala 78:14]
    node _GEN_9 = mux(_T_52, UInt<4>("h8"), _GEN_8) @[VLMAX.scala 73:43 VLMAX.scala 74:14]
    node _GEN_10 = mux(_T_49, UInt<3>("h4"), _GEN_9) @[VLMAX.scala 71:43 VLMAX.scala 72:14]
    node _GEN_11 = mux(_T_46, UInt<2>("h2"), _GEN_10) @[VLMAX.scala 69:43 VLMAX.scala 70:14]
    node _GEN_12 = mux(_T_43, UInt<6>("h20"), _GEN_11) @[VLMAX.scala 67:43 VLMAX.scala 68:14]
    node _GEN_13 = mux(_T_40, UInt<5>("h10"), _GEN_12) @[VLMAX.scala 65:43 VLMAX.scala 66:14]
    node _GEN_14 = mux(_T_37, UInt<4>("h8"), _GEN_13) @[VLMAX.scala 63:43 VLMAX.scala 64:14]
    node _GEN_15 = mux(_T_34, UInt<3>("h4"), _GEN_14) @[VLMAX.scala 61:43 VLMAX.scala 62:14]
    node _GEN_16 = mux(_T_31, UInt<7>("h40"), _GEN_15) @[VLMAX.scala 59:43 VLMAX.scala 60:14]
    node _GEN_17 = mux(_T_28, UInt<6>("h20"), _GEN_16) @[VLMAX.scala 57:43 VLMAX.scala 58:14]
    node _GEN_18 = mux(_T_25, UInt<5>("h10"), _GEN_17) @[VLMAX.scala 55:43 VLMAX.scala 56:14]
    node _GEN_19 = mux(_T_22, UInt<4>("h8"), _GEN_18) @[VLMAX.scala 53:43 VLMAX.scala 54:14]
    node _GEN_20 = mux(_T_19, UInt<8>("h80"), _GEN_19) @[VLMAX.scala 51:42 VLMAX.scala 52:14]
    node _GEN_21 = mux(_T_16, UInt<7>("h40"), _GEN_20) @[VLMAX.scala 49:42 VLMAX.scala 50:14]
    node _GEN_22 = mux(_T_13, UInt<6>("h20"), _GEN_21) @[VLMAX.scala 47:42 VLMAX.scala 48:14]
    node _GEN_23 = mux(_T_10, UInt<5>("h10"), _GEN_22) @[VLMAX.scala 45:36 VLMAX.scala 46:14]
    io_vlmax <= _GEN_23

  module Top :
    input clock : Clock
    input reset : UInt<1>
    output io_out : SInt<4>
    output io_inst : UInt<32>
    output io_w_reg_out : UInt<32>
    output io_reg_out : UInt<32>
    output io_data_mem_addr : UInt<32>
    output io_data_mem_dataIn : UInt<32>
    output io_b_out : UInt<32>
    output io_b_2x1mux : UInt<32>
    output io_b_4x1mux : SInt<32>
    output io_vlmax_value : UInt<32>
    output io_avl_value : SInt<32>

    inst PC_module of PC @[RISC5.scala 22:23]
    inst Program_Counter_module of Program_Counter @[RISC5.scala 23:36]
    inst InstMem1_module of InstMem1 @[RISC5.scala 24:30]
    inst Control_module of Control @[RISC5.scala 25:28]
    inst Immde_module of Immde @[RISC5.scala 26:27]
    inst RegFile_module of RegFile @[RISC5.scala 27:28]
    inst Alu_Control_module of Alu_Control @[RISC5.scala 28:32]
    inst ALU_1_module of ALU_1 @[RISC5.scala 29:26]
    inst Branch_module of BranchControl @[RISC5.scala 30:27]
    inst DataMem_module of DataMem @[RISC5.scala 31:28]
    inst Jalr_module of Jalr @[RISC5.scala 32:25]
    inst V_Csr_module of V_Csr @[RISC5.scala 33:26]
    inst Vlmax_module of Vlmax @[RISC5.scala 34:26]
    node _Program_Counter_module_io_pc_T = asUInt(PC_module.io_out) @[RISC5.scala 38:50]
    node _InstMem1_module_io_addr_T = bits(PC_module.io_out, 21, 2) @[RISC5.scala 39:44]
    node _Immde_module_io_pc_T = asUInt(PC_module.io_out) @[RISC5.scala 40:40]
    node _Control_module_io_opcode_T = bits(InstMem1_module.io_data, 6, 0) @[RISC5.scala 42:52]
    node _Control_module_io_rs1_no_T = bits(InstMem1_module.io_data, 19, 15) @[RISC5.scala 43:52]
    node _Control_module_io_rd_no_T = bits(InstMem1_module.io_data, 11, 7) @[RISC5.scala 44:51]
    node _RegFile_module_io_rs1_T = eq(Control_module.io_opcode, UInt<6>("h33")) @[RISC5.scala 45:55]
    node _RegFile_module_io_rs1_T_1 = eq(Control_module.io_opcode, UInt<5>("h13")) @[RISC5.scala 45:92]
    node _RegFile_module_io_rs1_T_2 = or(_RegFile_module_io_rs1_T, _RegFile_module_io_rs1_T_1) @[RISC5.scala 45:64]
    node _RegFile_module_io_rs1_T_3 = eq(Control_module.io_opcode, UInt<6>("h23")) @[RISC5.scala 45:129]
    node _RegFile_module_io_rs1_T_4 = or(_RegFile_module_io_rs1_T_2, _RegFile_module_io_rs1_T_3) @[RISC5.scala 45:101]
    node _RegFile_module_io_rs1_T_5 = eq(Control_module.io_opcode, UInt<2>("h3")) @[RISC5.scala 45:166]
    node _RegFile_module_io_rs1_T_6 = or(_RegFile_module_io_rs1_T_4, _RegFile_module_io_rs1_T_5) @[RISC5.scala 45:138]
    node _RegFile_module_io_rs1_T_7 = eq(Control_module.io_opcode, UInt<7>("h63")) @[RISC5.scala 45:202]
    node _RegFile_module_io_rs1_T_8 = or(_RegFile_module_io_rs1_T_6, _RegFile_module_io_rs1_T_7) @[RISC5.scala 45:174]
    node _RegFile_module_io_rs1_T_9 = eq(Control_module.io_opcode, UInt<7>("h67")) @[RISC5.scala 45:239]
    node _RegFile_module_io_rs1_T_10 = or(_RegFile_module_io_rs1_T_8, _RegFile_module_io_rs1_T_9) @[RISC5.scala 45:211]
    node _RegFile_module_io_rs1_T_11 = eq(Control_module.io_opcode, UInt<7>("h57")) @[RISC5.scala 45:277]
    node _RegFile_module_io_rs1_T_12 = or(_RegFile_module_io_rs1_T_10, _RegFile_module_io_rs1_T_11) @[RISC5.scala 45:249]
    node _RegFile_module_io_rs1_T_13 = bits(InstMem1_module.io_data, 19, 15) @[RISC5.scala 45:310]
    node _RegFile_module_io_rs1_T_14 = mux(_RegFile_module_io_rs1_T_12, _RegFile_module_io_rs1_T_13, UInt<1>("h0")) @[RISC5.scala 45:29]
    node _RegFile_module_io_rs2_T = eq(Control_module.io_opcode, UInt<6>("h33")) @[RISC5.scala 46:55]
    node _RegFile_module_io_rs2_T_1 = eq(Control_module.io_opcode, UInt<6>("h23")) @[RISC5.scala 46:92]
    node _RegFile_module_io_rs2_T_2 = or(_RegFile_module_io_rs2_T, _RegFile_module_io_rs2_T_1) @[RISC5.scala 46:64]
    node _RegFile_module_io_rs2_T_3 = eq(Control_module.io_opcode, UInt<7>("h63")) @[RISC5.scala 46:129]
    node _RegFile_module_io_rs2_T_4 = or(_RegFile_module_io_rs2_T_2, _RegFile_module_io_rs2_T_3) @[RISC5.scala 46:101]
    node _RegFile_module_io_rs2_T_5 = bits(InstMem1_module.io_data, 24, 20) @[RISC5.scala 46:162]
    node _RegFile_module_io_rs2_T_6 = mux(_RegFile_module_io_rs2_T_4, _RegFile_module_io_rs2_T_5, UInt<1>("h0")) @[RISC5.scala 46:29]
    node _RegFile_module_io_w_reg_T = bits(InstMem1_module.io_data, 11, 7) @[RISC5.scala 47:51]
    node _Alu_Control_module_io_func3_T = bits(InstMem1_module.io_data, 14, 12) @[RISC5.scala 49:55]
    node _Alu_Control_module_io_func7_T = bits(InstMem1_module.io_data, 30, 30) @[RISC5.scala 50:55]
    node _V_Csr_module_io_Vtype_inst_T = bits(InstMem1_module.io_data, 30, 20) @[RISC5.scala 51:54]
    node _a_T = eq(UInt<1>("h0"), Control_module.io_extend) @[Mux.scala 80:60]
    node _a_T_1 = mux(_a_T, Immde_module.io_I_type, asSInt(UInt<1>("h0"))) @[Mux.scala 80:57]
    node _a_T_2 = eq(UInt<1>("h1"), Control_module.io_extend) @[Mux.scala 80:60]
    node _a_T_3 = mux(_a_T_2, Immde_module.io_S_type, _a_T_1) @[Mux.scala 80:57]
    node _a_T_4 = eq(UInt<2>("h2"), Control_module.io_extend) @[Mux.scala 80:60]
    node a = mux(_a_T_4, Immde_module.io_U_type, _a_T_3) @[Mux.scala 80:57]
    node _Vlmax_module_io_v_lmul_T = bits(V_Csr_module.io_Vtype_inst, 2, 0) @[RISC5.scala 64:53]
    node _Vlmax_module_io_v_sew_T = bits(V_Csr_module.io_Vtype_inst, 5, 3) @[RISC5.scala 65:52]
    node _d_T = asSInt(UInt<32>("hffffffff")) @[RISC5.scala 69:52]
    node _d_T_1 = asSInt(V_Csr_module.io_vl_out) @[RISC5.scala 70:37]
    node _d_T_2 = eq(UInt<1>("h0"), Control_module.io_avl_ope) @[Mux.scala 80:60]
    node _d_T_3 = mux(_d_T_2, RegFile_module.io_rdata1, asSInt(UInt<1>("h0"))) @[Mux.scala 80:57]
    node _d_T_4 = eq(UInt<1>("h1"), Control_module.io_avl_ope) @[Mux.scala 80:60]
    node _d_T_5 = mux(_d_T_4, _d_T, _d_T_3) @[Mux.scala 80:57]
    node _d_T_6 = eq(UInt<2>("h2"), Control_module.io_avl_ope) @[Mux.scala 80:60]
    node d = mux(_d_T_6, _d_T_1, _d_T_5) @[Mux.scala 80:57]
    node _ALU_1_module_io_in_A_T = asSInt(Program_Counter_module.io_out) @[RISC5.scala 74:44]
    node _ALU_1_module_io_in_A_T_1 = eq(UInt<1>("h0"), Control_module.io_operand_A) @[Mux.scala 80:60]
    node _ALU_1_module_io_in_A_T_2 = mux(_ALU_1_module_io_in_A_T_1, RegFile_module.io_rdata1, asSInt(UInt<1>("h0"))) @[Mux.scala 80:57]
    node _ALU_1_module_io_in_A_T_3 = eq(UInt<1>("h1"), Control_module.io_operand_A) @[Mux.scala 80:60]
    node _ALU_1_module_io_in_A_T_4 = mux(_ALU_1_module_io_in_A_T_3, _ALU_1_module_io_in_A_T, _ALU_1_module_io_in_A_T_2) @[Mux.scala 80:57]
    node _ALU_1_module_io_in_A_T_5 = eq(UInt<2>("h2"), Control_module.io_operand_A) @[Mux.scala 80:60]
    node _ALU_1_module_io_in_A_T_6 = mux(_ALU_1_module_io_in_A_T_5, PC_module.io_out, _ALU_1_module_io_in_A_T_4) @[Mux.scala 80:57]
    node _ALU_1_module_io_in_A_T_7 = eq(UInt<2>("h3"), Control_module.io_operand_A) @[Mux.scala 80:60]
    node _ALU_1_module_io_in_A_T_8 = mux(_ALU_1_module_io_in_A_T_7, RegFile_module.io_rdata1, _ALU_1_module_io_in_A_T_6) @[Mux.scala 80:57]
    node _ALU_1_module_io_in_A_T_9 = eq(UInt<3>("h4"), Control_module.io_operand_A) @[Mux.scala 80:60]
    node _ALU_1_module_io_in_A_T_10 = mux(_ALU_1_module_io_in_A_T_9, d, _ALU_1_module_io_in_A_T_8) @[Mux.scala 80:57]
    node _ALU_1_module_io_in_B_T = asSInt(Vlmax_module.io_vlmax) @[RISC5.scala 82:36]
    node _ALU_1_module_io_in_B_T_1 = eq(UInt<1>("h0"), Control_module.io_operand_B) @[Mux.scala 80:60]
    node _ALU_1_module_io_in_B_T_2 = mux(_ALU_1_module_io_in_B_T_1, RegFile_module.io_rdata2, asSInt(UInt<1>("h0"))) @[Mux.scala 80:57]
    node _ALU_1_module_io_in_B_T_3 = eq(UInt<1>("h1"), Control_module.io_operand_B) @[Mux.scala 80:60]
    node _ALU_1_module_io_in_B_T_4 = mux(_ALU_1_module_io_in_B_T_3, a, _ALU_1_module_io_in_B_T_2) @[Mux.scala 80:57]
    node _ALU_1_module_io_in_B_T_5 = eq(UInt<2>("h2"), Control_module.io_operand_B) @[Mux.scala 80:60]
    node _ALU_1_module_io_in_B_T_6 = mux(_ALU_1_module_io_in_B_T_5, _ALU_1_module_io_in_B_T, _ALU_1_module_io_in_B_T_4) @[Mux.scala 80:57]
    node _DataMem_module_io_addr_T = asUInt(ALU_1_module.io_out) @[RISC5.scala 88:47]
    node c = and(Branch_module.io_br_taken, Control_module.io_branch) @[RISC5.scala 93:35]
    node _b_T = asUInt(Immde_module.io_SB_type) @[RISC5.scala 97:38]
    node _b_T_1 = eq(UInt<1>("h1"), c) @[Mux.scala 80:60]
    node b = mux(_b_T_1, _b_T, Program_Counter_module.io_out) @[Mux.scala 80:57]
    node _PC_module_io_in_T = asSInt(Program_Counter_module.io_out) @[RISC5.scala 100:44]
    node _PC_module_io_in_T_1 = asSInt(b) @[RISC5.scala 101:16]
    node _PC_module_io_in_T_2 = asSInt(Jalr_module.io_out) @[RISC5.scala 103:33]
    node _PC_module_io_in_T_3 = eq(UInt<1>("h1"), Control_module.io_next_pc_sel) @[Mux.scala 80:60]
    node _PC_module_io_in_T_4 = mux(_PC_module_io_in_T_3, _PC_module_io_in_T_1, _PC_module_io_in_T) @[Mux.scala 80:57]
    node _PC_module_io_in_T_5 = eq(UInt<2>("h2"), Control_module.io_next_pc_sel) @[Mux.scala 80:60]
    node _PC_module_io_in_T_6 = mux(_PC_module_io_in_T_5, Immde_module.io_UJ_type, _PC_module_io_in_T_4) @[Mux.scala 80:57]
    node _PC_module_io_in_T_7 = eq(UInt<2>("h3"), Control_module.io_next_pc_sel) @[Mux.scala 80:60]
    node _PC_module_io_in_T_8 = mux(_PC_module_io_in_T_7, _PC_module_io_in_T_2, _PC_module_io_in_T_6) @[Mux.scala 80:57]
    node _Jalr_module_io_imme_T = asUInt(a) @[RISC5.scala 105:26]
    node _Jalr_module_io_rdata1_T = asUInt(RegFile_module.io_rdata1) @[RISC5.scala 106:51]
    node _RegFile_module_io_w_data_T = eq(UInt<1>("h1"), Control_module.io_men_to_reg) @[Mux.scala 80:60]
    node _RegFile_module_io_w_data_T_1 = mux(_RegFile_module_io_w_data_T, DataMem_module.io_dataOut, ALU_1_module.io_out) @[Mux.scala 80:57]
    node _V_Csr_module_io_vl_writeback_T = asUInt(ALU_1_module.io_out) @[RISC5.scala 117:53]
    node _io_reg_out_T = asUInt(RegFile_module.io_w_data) @[RISC5.scala 124:40]
    node _io_data_mem_dataIn_T = asUInt(DataMem_module.io_dataIn) @[RISC5.scala 126:48]
    io_out <= asSInt(UInt<1>("h0")) @[RISC5.scala 121:8]
    io_inst <= InstMem1_module.io_data @[RISC5.scala 122:9]
    io_w_reg_out <= RegFile_module.io_w_reg @[RISC5.scala 123:14]
    io_reg_out <= _io_reg_out_T @[RISC5.scala 124:12]
    io_data_mem_addr <= DataMem_module.io_addr @[RISC5.scala 125:18]
    io_data_mem_dataIn <= _io_data_mem_dataIn_T @[RISC5.scala 126:20]
    io_b_out <= Branch_module.io_br_taken @[RISC5.scala 127:10]
    io_b_2x1mux <= b @[RISC5.scala 128:13]
    io_b_4x1mux <= PC_module.io_in @[RISC5.scala 129:13]
    io_vlmax_value <= Vlmax_module.io_vlmax @[RISC5.scala 131:16]
    io_avl_value <= d @[RISC5.scala 130:14]
    PC_module.clock <= clock
    PC_module.reset <= reset
    PC_module.io_in <= _PC_module_io_in_T_8 @[RISC5.scala 99:17]
    Program_Counter_module.clock <= clock
    Program_Counter_module.reset <= reset
    Program_Counter_module.io_pc <= _Program_Counter_module_io_pc_T @[RISC5.scala 38:30]
    InstMem1_module.clock <= clock
    InstMem1_module.reset <= reset
    InstMem1_module.io_addr <= _InstMem1_module_io_addr_T @[RISC5.scala 39:25]
    Control_module.clock <= clock
    Control_module.reset <= reset
    Control_module.io_opcode <= _Control_module_io_opcode_T @[RISC5.scala 42:26]
    Control_module.io_rs1_no <= _Control_module_io_rs1_no_T @[RISC5.scala 43:26]
    Control_module.io_rd_no <= _Control_module_io_rd_no_T @[RISC5.scala 44:25]
    Immde_module.clock <= clock
    Immde_module.reset <= reset
    Immde_module.io_instr <= InstMem1_module.io_data @[RISC5.scala 48:23]
    Immde_module.io_pc <= _Immde_module_io_pc_T @[RISC5.scala 40:20]
    RegFile_module.clock <= clock
    RegFile_module.reset <= reset
    RegFile_module.io_rs1 <= _RegFile_module_io_rs1_T_14 @[RISC5.scala 45:23]
    RegFile_module.io_rs2 <= _RegFile_module_io_rs2_T_6 @[RISC5.scala 46:23]
    RegFile_module.io_reg_write <= Control_module.io_reg_write @[RISC5.scala 58:29]
    RegFile_module.io_w_reg <= _RegFile_module_io_w_reg_T @[RISC5.scala 47:25]
    RegFile_module.io_w_data <= _RegFile_module_io_w_data_T_1 @[RISC5.scala 113:26]
    Alu_Control_module.clock <= clock
    Alu_Control_module.reset <= reset
    Alu_Control_module.io_func3 <= _Alu_Control_module_io_func3_T @[RISC5.scala 49:29]
    Alu_Control_module.io_func7 <= _Alu_Control_module_io_func7_T @[RISC5.scala 50:29]
    Alu_Control_module.io_aluOp <= bits(Control_module.io_alu_operation, 2, 0) @[RISC5.scala 62:29]
    Alu_Control_module.io_I_inst <= Control_module.io_is_I @[RISC5.scala 60:30]
    Alu_Control_module.io_V_inst <= Control_module.io_is_V @[RISC5.scala 61:30]
    ALU_1_module.clock <= clock
    ALU_1_module.reset <= reset
    ALU_1_module.io_in_A <= _ALU_1_module_io_in_A_T_10 @[RISC5.scala 72:22]
    ALU_1_module.io_in_B <= _ALU_1_module_io_in_B_T_6 @[RISC5.scala 79:22]
    ALU_1_module.io_in_I <= Control_module.io_is_I @[RISC5.scala 84:22]
    ALU_1_module.io_in_V <= Control_module.io_is_V @[RISC5.scala 85:22]
    ALU_1_module.io_alu_Op <= Alu_Control_module.io_out @[RISC5.scala 86:24]
    Branch_module.clock <= clock
    Branch_module.reset <= reset
    Branch_module.io_fnct3 <= Alu_Control_module.io_func3 @[RISC5.scala 108:24]
    Branch_module.io_branch <= Control_module.io_branch @[RISC5.scala 109:25]
    Branch_module.io_arg_x <= RegFile_module.io_rdata1 @[RISC5.scala 110:24]
    Branch_module.io_arg_y <= RegFile_module.io_rdata2 @[RISC5.scala 111:24]
    DataMem_module.clock <= clock
    DataMem_module.reset <= reset
    DataMem_module.io_addr <= _DataMem_module_io_addr_T @[RISC5.scala 88:24]
    DataMem_module.io_dataIn <= RegFile_module.io_rdata2 @[RISC5.scala 89:26]
    DataMem_module.io_mem_read <= Control_module.io_mem_read @[RISC5.scala 90:28]
    DataMem_module.io_mem_write <= Control_module.io_mem_write @[RISC5.scala 91:29]
    Jalr_module.clock <= clock
    Jalr_module.reset <= reset
    Jalr_module.io_imme <= _Jalr_module_io_imme_T @[RISC5.scala 105:21]
    Jalr_module.io_rdata1 <= _Jalr_module_io_rdata1_T @[RISC5.scala 106:23]
    V_Csr_module.clock <= clock
    V_Csr_module.reset <= reset
    V_Csr_module.io_Vtype_inst <= _V_Csr_module_io_Vtype_inst_T @[RISC5.scala 51:28]
    V_Csr_module.io_vl_writeback <= _V_Csr_module_io_vl_writeback_T @[RISC5.scala 117:30]
    Vlmax_module.clock <= clock
    Vlmax_module.reset <= reset
    Vlmax_module.io_v_lmul <= _Vlmax_module_io_v_lmul_T @[RISC5.scala 64:24]
    Vlmax_module.io_v_sew <= _Vlmax_module_io_v_sew_T @[RISC5.scala 65:23]
