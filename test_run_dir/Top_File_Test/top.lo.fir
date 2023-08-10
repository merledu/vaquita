circuit top :
  module pC :
    input clock : Clock
    input reset : UInt<1>
    input io_in : SInt<32>
    output io_out : SInt<32>
    output io_pc4 : SInt<32>

    reg pc : SInt<32>, clock with :
      reset => (UInt<1>("h0"), pc) @[PC.scala 12:21]
    node _io_pc4_T = add(pc, asSInt(UInt<4>("h4"))) @[PC.scala 15:18]
    node _io_pc4_T_1 = tail(_io_pc4_T, 1) @[PC.scala 15:18]
    node _io_pc4_T_2 = asSInt(_io_pc4_T_1) @[PC.scala 15:18]
    io_out <= pc @[PC.scala 14:12]
    io_pc4 <= _io_pc4_T_2 @[PC.scala 15:12]
    pc <= mux(reset, asSInt(UInt<32>("h0")), io_in) @[PC.scala 12:21 PC.scala 12:21 PC.scala 13:8]

  module dataMemory :
    input clock : Clock
    input reset : UInt<1>
    input io_writeData : UInt<1>
    input io_readData : UInt<1>
    input io_rdAddr : UInt<10>
    input io_dataIn : SInt<32>
    output io_dataOut : SInt<32>

    mem mem : @[DataMem.scala 15:18]
      data-type => SInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => io_dataOut_MPORT
      writer => MPORT
      read-under-write => undefined
    node _T = eq(io_writeData, UInt<1>("h1")) @[DataMem.scala 16:23]
    node _T_1 = eq(io_readData, UInt<1>("h0")) @[DataMem.scala 16:49]
    node _T_2 = and(_T, _T_1) @[DataMem.scala 16:34]
    node _GEN_0 = validif(_T_2, io_rdAddr) @[DataMem.scala 16:61]
    node _GEN_1 = validif(_T_2, clock) @[DataMem.scala 16:61]
    node _GEN_2 = mux(_T_2, UInt<1>("h1"), UInt<1>("h0")) @[DataMem.scala 16:61 DataMem.scala 15:18]
    node _GEN_3 = validif(_T_2, UInt<1>("h1")) @[DataMem.scala 16:61]
    node _GEN_4 = validif(_T_2, io_dataIn) @[DataMem.scala 16:61]
    node _GEN_5 = mux(_T_2, asSInt(UInt<1>("h0")), mem.io_dataOut_MPORT.data) @[DataMem.scala 16:61 DataMem.scala 18:20 DataMem.scala 20:20]
    node _GEN_6 = validif(eq(_T_2, UInt<1>("h0")), io_rdAddr) @[DataMem.scala 16:61 DataMem.scala 20:26]
    node _GEN_7 = validif(eq(_T_2, UInt<1>("h0")), clock) @[DataMem.scala 16:61 DataMem.scala 20:26]
    node _GEN_8 = mux(_T_2, UInt<1>("h0"), UInt<1>("h1")) @[DataMem.scala 16:61 DataMem.scala 15:18 DataMem.scala 20:26]
    io_dataOut <= _GEN_5
    mem.io_dataOut_MPORT.addr <= _GEN_6
    mem.io_dataOut_MPORT.en <= _GEN_8
    mem.io_dataOut_MPORT.clk <= _GEN_7
    mem.MPORT.addr <= _GEN_0
    mem.MPORT.en <= _GEN_2
    mem.MPORT.clk <= _GEN_1
    mem.MPORT.data <= _GEN_4
    mem.MPORT.mask <= _GEN_3

  module instrMem :
    input clock : Clock
    input reset : UInt<1>
    output io_instr : UInt<32>
    input io_addr : UInt<32>

    mem mem : @[InstrMem.scala 12:18]
      data-type => UInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => io_instr_MPORT
      read-under-write => undefined
    node _io_instr_T = bits(io_addr, 9, 0) @[InstrMem.scala 14:25]
    io_instr <= mem.io_instr_MPORT.data @[InstrMem.scala 14:14]
    mem.io_instr_MPORT.addr <= _io_instr_T @[InstrMem.scala 14:25]
    mem.io_instr_MPORT.en <= UInt<1>("h1") @[InstrMem.scala 14:25]
    mem.io_instr_MPORT.clk <= clock @[InstrMem.scala 14:25]

  module control :
    input clock : Clock
    input reset : UInt<1>
    input io_op_code : UInt<7>
    input io_func3 : UInt<3>
    output io_memWrite : UInt<1>
    output io_branch : UInt<1>
    output io_memRead : UInt<1>
    output io_regWrite : UInt<1>
    output io_memToReg : UInt<1>
    output io_alu_Operation : UInt<3>
    output io_operand_A : UInt<3>
    output io_operand_B : UInt<2>
    output io_extend_Sel : UInt<2>
    output io_nextPc_Sel : UInt<2>
    output io_is_I : UInt<1>
    output io_is_V : UInt<1>
    input io_rs1_addr : UInt<5>
    input io_rd_addr : UInt<5>
    output io_avl_sel : UInt<2>

    node _T = eq(io_op_code, UInt<6>("h33")) @[ControlUnit.scala 26:21]
    node _T_1 = eq(io_op_code, UInt<5>("h13")) @[ControlUnit.scala 40:27]
    node _T_2 = eq(io_op_code, UInt<2>("h3")) @[ControlUnit.scala 54:27]
    node _T_3 = eq(io_op_code, UInt<6>("h23")) @[ControlUnit.scala 68:27]
    node _T_4 = eq(io_op_code, UInt<7>("h63")) @[ControlUnit.scala 82:27]
    node _T_5 = eq(io_op_code, UInt<6>("h37")) @[ControlUnit.scala 96:27]
    node _T_6 = eq(io_op_code, UInt<7>("h6f")) @[ControlUnit.scala 110:27]
    node _T_7 = eq(io_op_code, UInt<5>("h17")) @[ControlUnit.scala 124:27]
    node _T_8 = eq(io_op_code, UInt<7>("h67")) @[ControlUnit.scala 138:27]
    node _T_9 = eq(io_op_code, UInt<7>("h57")) @[ControlUnit.scala 152:23]
    node _T_10 = eq(io_func3, UInt<3>("h7")) @[ControlUnit.scala 152:52]
    node _T_11 = and(_T_9, _T_10) @[ControlUnit.scala 152:40]
    node _T_12 = neq(io_rs1_addr, UInt<1>("h0")) @[ControlUnit.scala 166:27]
    node _T_13 = eq(io_rs1_addr, UInt<1>("h0")) @[ControlUnit.scala 168:32]
    node _T_14 = neq(io_rd_addr, UInt<1>("h0")) @[ControlUnit.scala 168:54]
    node _T_15 = and(_T_13, _T_14) @[ControlUnit.scala 168:40]
    node _T_16 = eq(io_rs1_addr, UInt<1>("h0")) @[ControlUnit.scala 170:32]
    node _T_17 = eq(io_rd_addr, UInt<1>("h0")) @[ControlUnit.scala 170:54]
    node _T_18 = and(_T_16, _T_17) @[ControlUnit.scala 170:40]
    node _GEN_0 = validif(_T_18, UInt<2>("h2")) @[ControlUnit.scala 170:63 ControlUnit.scala 171:24]
    node _GEN_1 = mux(_T_15, UInt<1>("h1"), _GEN_0) @[ControlUnit.scala 168:63 ControlUnit.scala 169:24]
    node _GEN_2 = mux(_T_12, UInt<1>("h0"), _GEN_1) @[ControlUnit.scala 166:36 ControlUnit.scala 167:24]
    node _T_19 = eq(io_op_code, UInt<7>("h57")) @[ControlUnit.scala 175:27]
    node _T_20 = neq(io_func3, UInt<3>("h7")) @[ControlUnit.scala 175:56]
    node _T_21 = and(_T_19, _T_20) @[ControlUnit.scala 175:44]
    node _GEN_3 = validif(_T_21, UInt<1>("h0")) @[ControlUnit.scala 175:69 ControlUnit.scala 176:21]
    node _GEN_4 = validif(_T_21, UInt<1>("h1")) @[ControlUnit.scala 175:69 ControlUnit.scala 179:21]
    node _GEN_5 = validif(_T_21, UInt<3>("h4")) @[ControlUnit.scala 175:69 ControlUnit.scala 182:22]
    node _GEN_6 = validif(_T_21, UInt<2>("h2")) @[ControlUnit.scala 175:69 ControlUnit.scala 183:22]
    node _GEN_7 = mux(_T_11, UInt<1>("h0"), _GEN_3) @[ControlUnit.scala 152:65 ControlUnit.scala 153:21]
    node _GEN_8 = mux(_T_11, UInt<1>("h1"), _GEN_4) @[ControlUnit.scala 152:65 ControlUnit.scala 156:21]
    node _GEN_9 = mux(_T_11, UInt<1>("h0"), _GEN_4) @[ControlUnit.scala 152:65 ControlUnit.scala 158:26]
    node _GEN_10 = mux(_T_11, UInt<3>("h4"), _GEN_5) @[ControlUnit.scala 152:65 ControlUnit.scala 159:22]
    node _GEN_11 = mux(_T_11, UInt<2>("h2"), _GEN_6) @[ControlUnit.scala 152:65 ControlUnit.scala 160:22]
    node _GEN_12 = mux(_T_11, _GEN_2, _GEN_3) @[ControlUnit.scala 152:65]
    node _GEN_13 = mux(_T_8, UInt<1>("h0"), _GEN_7) @[ControlUnit.scala 138:44 ControlUnit.scala 139:21]
    node _GEN_14 = mux(_T_8, UInt<1>("h1"), _GEN_8) @[ControlUnit.scala 138:44 ControlUnit.scala 142:21]
    node _GEN_15 = mux(_T_8, UInt<2>("h3"), _GEN_9) @[ControlUnit.scala 138:44 ControlUnit.scala 144:26]
    node _GEN_16 = mux(_T_8, UInt<2>("h2"), _GEN_10) @[ControlUnit.scala 138:44 ControlUnit.scala 145:22]
    node _GEN_17 = mux(_T_8, UInt<1>("h1"), _GEN_11) @[ControlUnit.scala 138:44 ControlUnit.scala 146:22]
    node _GEN_18 = mux(_T_8, UInt<2>("h3"), _GEN_7) @[ControlUnit.scala 138:44 ControlUnit.scala 148:23]
    node _GEN_19 = mux(_T_8, UInt<1>("h1"), _GEN_7) @[ControlUnit.scala 138:44 ControlUnit.scala 149:17]
    node _GEN_20 = mux(_T_8, UInt<1>("h0"), _GEN_8) @[ControlUnit.scala 138:44 ControlUnit.scala 150:17]
    node _GEN_21 = validif(eq(_T_8, UInt<1>("h0")), _GEN_12) @[ControlUnit.scala 138:44]
    node _GEN_22 = mux(_T_7, UInt<1>("h0"), _GEN_13) @[ControlUnit.scala 124:44 ControlUnit.scala 125:21]
    node _GEN_23 = mux(_T_7, UInt<1>("h1"), _GEN_14) @[ControlUnit.scala 124:44 ControlUnit.scala 128:21]
    node _GEN_24 = mux(_T_7, UInt<3>("h7"), _GEN_15) @[ControlUnit.scala 124:44 ControlUnit.scala 130:26]
    node _GEN_25 = mux(_T_7, UInt<2>("h2"), _GEN_16) @[ControlUnit.scala 124:44 ControlUnit.scala 131:22]
    node _GEN_26 = mux(_T_7, UInt<1>("h1"), _GEN_17) @[ControlUnit.scala 124:44 ControlUnit.scala 132:22]
    node _GEN_27 = mux(_T_7, UInt<2>("h2"), _GEN_13) @[ControlUnit.scala 124:44 ControlUnit.scala 133:23]
    node _GEN_28 = mux(_T_7, UInt<1>("h0"), _GEN_18) @[ControlUnit.scala 124:44 ControlUnit.scala 134:23]
    node _GEN_29 = mux(_T_7, UInt<1>("h1"), _GEN_19) @[ControlUnit.scala 124:44 ControlUnit.scala 135:17]
    node _GEN_30 = mux(_T_7, UInt<1>("h0"), _GEN_20) @[ControlUnit.scala 124:44 ControlUnit.scala 136:17]
    node _GEN_31 = validif(eq(_T_7, UInt<1>("h0")), _GEN_21) @[ControlUnit.scala 124:44]
    node _GEN_32 = mux(_T_6, UInt<1>("h0"), _GEN_22) @[ControlUnit.scala 110:44 ControlUnit.scala 111:21]
    node _GEN_33 = mux(_T_6, UInt<1>("h1"), _GEN_23) @[ControlUnit.scala 110:44 ControlUnit.scala 114:21]
    node _GEN_34 = mux(_T_6, UInt<2>("h3"), _GEN_24) @[ControlUnit.scala 110:44 ControlUnit.scala 116:26]
    node _GEN_35 = mux(_T_6, UInt<2>("h2"), _GEN_25) @[ControlUnit.scala 110:44 ControlUnit.scala 117:22]
    node _GEN_36 = mux(_T_6, UInt<1>("h0"), _GEN_26) @[ControlUnit.scala 110:44 ControlUnit.scala 118:22]
    node _GEN_37 = mux(_T_6, UInt<1>("h0"), _GEN_27) @[ControlUnit.scala 110:44 ControlUnit.scala 119:23]
    node _GEN_38 = mux(_T_6, UInt<2>("h2"), _GEN_28) @[ControlUnit.scala 110:44 ControlUnit.scala 120:23]
    node _GEN_39 = mux(_T_6, UInt<1>("h1"), _GEN_29) @[ControlUnit.scala 110:44 ControlUnit.scala 121:17]
    node _GEN_40 = mux(_T_6, UInt<1>("h0"), _GEN_30) @[ControlUnit.scala 110:44 ControlUnit.scala 122:17]
    node _GEN_41 = validif(eq(_T_6, UInt<1>("h0")), _GEN_31) @[ControlUnit.scala 110:44]
    node _GEN_42 = mux(_T_5, UInt<1>("h0"), _GEN_32) @[ControlUnit.scala 96:44 ControlUnit.scala 97:21]
    node _GEN_43 = mux(_T_5, UInt<1>("h1"), _GEN_33) @[ControlUnit.scala 96:44 ControlUnit.scala 100:21]
    node _GEN_44 = mux(_T_5, UInt<3>("h6"), _GEN_34) @[ControlUnit.scala 96:44 ControlUnit.scala 102:26]
    node _GEN_45 = mux(_T_5, UInt<2>("h3"), _GEN_35) @[ControlUnit.scala 96:44 ControlUnit.scala 103:22]
    node _GEN_46 = mux(_T_5, UInt<1>("h1"), _GEN_36) @[ControlUnit.scala 96:44 ControlUnit.scala 104:22]
    node _GEN_47 = mux(_T_5, UInt<2>("h2"), _GEN_37) @[ControlUnit.scala 96:44 ControlUnit.scala 105:23]
    node _GEN_48 = mux(_T_5, UInt<1>("h0"), _GEN_38) @[ControlUnit.scala 96:44 ControlUnit.scala 106:23]
    node _GEN_49 = mux(_T_5, UInt<1>("h1"), _GEN_39) @[ControlUnit.scala 96:44 ControlUnit.scala 107:17]
    node _GEN_50 = mux(_T_5, UInt<1>("h0"), _GEN_40) @[ControlUnit.scala 96:44 ControlUnit.scala 108:17]
    node _GEN_51 = validif(eq(_T_5, UInt<1>("h0")), _GEN_41) @[ControlUnit.scala 96:44]
    node _GEN_52 = mux(_T_4, UInt<1>("h0"), _GEN_42) @[ControlUnit.scala 82:44 ControlUnit.scala 83:21]
    node _GEN_53 = mux(_T_4, UInt<1>("h1"), _GEN_42) @[ControlUnit.scala 82:44 ControlUnit.scala 84:19]
    node _GEN_54 = mux(_T_4, UInt<1>("h0"), _GEN_43) @[ControlUnit.scala 82:44 ControlUnit.scala 86:21]
    node _GEN_55 = mux(_T_4, UInt<2>("h2"), _GEN_44) @[ControlUnit.scala 82:44 ControlUnit.scala 88:26]
    node _GEN_56 = mux(_T_4, UInt<1>("h0"), _GEN_45) @[ControlUnit.scala 82:44 ControlUnit.scala 89:22]
    node _GEN_57 = mux(_T_4, UInt<1>("h0"), _GEN_46) @[ControlUnit.scala 82:44 ControlUnit.scala 90:22]
    node _GEN_58 = mux(_T_4, UInt<1>("h0"), _GEN_47) @[ControlUnit.scala 82:44 ControlUnit.scala 91:23]
    node _GEN_59 = mux(_T_4, UInt<1>("h1"), _GEN_48) @[ControlUnit.scala 82:44 ControlUnit.scala 92:23]
    node _GEN_60 = mux(_T_4, UInt<1>("h1"), _GEN_49) @[ControlUnit.scala 82:44 ControlUnit.scala 93:17]
    node _GEN_61 = mux(_T_4, UInt<1>("h0"), _GEN_50) @[ControlUnit.scala 82:44 ControlUnit.scala 94:17]
    node _GEN_62 = validif(eq(_T_4, UInt<1>("h0")), _GEN_51) @[ControlUnit.scala 82:44]
    node _GEN_63 = mux(_T_3, UInt<1>("h1"), _GEN_52) @[ControlUnit.scala 68:44 ControlUnit.scala 69:21]
    node _GEN_64 = mux(_T_3, UInt<1>("h0"), _GEN_53) @[ControlUnit.scala 68:44 ControlUnit.scala 70:19]
    node _GEN_65 = mux(_T_3, UInt<1>("h0"), _GEN_52) @[ControlUnit.scala 68:44 ControlUnit.scala 71:20]
    node _GEN_66 = mux(_T_3, UInt<1>("h0"), _GEN_54) @[ControlUnit.scala 68:44 ControlUnit.scala 72:21]
    node _GEN_67 = mux(_T_3, UInt<3>("h5"), _GEN_55) @[ControlUnit.scala 68:44 ControlUnit.scala 74:26]
    node _GEN_68 = mux(_T_3, UInt<1>("h0"), _GEN_56) @[ControlUnit.scala 68:44 ControlUnit.scala 75:22]
    node _GEN_69 = mux(_T_3, UInt<1>("h1"), _GEN_57) @[ControlUnit.scala 68:44 ControlUnit.scala 76:22]
    node _GEN_70 = mux(_T_3, UInt<2>("h2"), _GEN_58) @[ControlUnit.scala 68:44 ControlUnit.scala 77:23]
    node _GEN_71 = mux(_T_3, UInt<1>("h0"), _GEN_59) @[ControlUnit.scala 68:44 ControlUnit.scala 78:23]
    node _GEN_72 = mux(_T_3, UInt<1>("h1"), _GEN_60) @[ControlUnit.scala 68:44 ControlUnit.scala 79:17]
    node _GEN_73 = mux(_T_3, UInt<1>("h0"), _GEN_61) @[ControlUnit.scala 68:44 ControlUnit.scala 80:17]
    node _GEN_74 = validif(eq(_T_3, UInt<1>("h0")), _GEN_62) @[ControlUnit.scala 68:44]
    node _GEN_75 = mux(_T_2, UInt<1>("h0"), _GEN_63) @[ControlUnit.scala 54:44 ControlUnit.scala 55:21]
    node _GEN_76 = mux(_T_2, UInt<1>("h0"), _GEN_64) @[ControlUnit.scala 54:44 ControlUnit.scala 56:19]
    node _GEN_77 = mux(_T_2, UInt<1>("h1"), _GEN_65) @[ControlUnit.scala 54:44 ControlUnit.scala 57:20]
    node _GEN_78 = mux(_T_2, UInt<1>("h1"), _GEN_66) @[ControlUnit.scala 54:44 ControlUnit.scala 58:21]
    node _GEN_79 = mux(_T_2, UInt<3>("h4"), _GEN_67) @[ControlUnit.scala 54:44 ControlUnit.scala 60:26]
    node _GEN_80 = mux(_T_2, UInt<1>("h0"), _GEN_68) @[ControlUnit.scala 54:44 ControlUnit.scala 61:22]
    node _GEN_81 = mux(_T_2, UInt<1>("h1"), _GEN_69) @[ControlUnit.scala 54:44 ControlUnit.scala 62:22]
    node _GEN_82 = mux(_T_2, UInt<1>("h0"), _GEN_70) @[ControlUnit.scala 54:44 ControlUnit.scala 63:23]
    node _GEN_83 = mux(_T_2, UInt<1>("h0"), _GEN_71) @[ControlUnit.scala 54:44 ControlUnit.scala 64:23]
    node _GEN_84 = mux(_T_2, UInt<1>("h1"), _GEN_72) @[ControlUnit.scala 54:44 ControlUnit.scala 65:17]
    node _GEN_85 = mux(_T_2, UInt<1>("h0"), _GEN_73) @[ControlUnit.scala 54:44 ControlUnit.scala 66:17]
    node _GEN_86 = validif(eq(_T_2, UInt<1>("h0")), _GEN_74) @[ControlUnit.scala 54:44]
    node _GEN_87 = mux(_T_1, UInt<1>("h0"), _GEN_75) @[ControlUnit.scala 40:44 ControlUnit.scala 41:21]
    node _GEN_88 = mux(_T_1, UInt<1>("h0"), _GEN_76) @[ControlUnit.scala 40:44 ControlUnit.scala 42:19]
    node _GEN_89 = mux(_T_1, UInt<1>("h0"), _GEN_77) @[ControlUnit.scala 40:44 ControlUnit.scala 43:20]
    node _GEN_90 = mux(_T_1, UInt<1>("h1"), _GEN_78) @[ControlUnit.scala 40:44 ControlUnit.scala 44:21]
    node _GEN_91 = mux(_T_1, UInt<1>("h1"), _GEN_79) @[ControlUnit.scala 40:44 ControlUnit.scala 46:26]
    node _GEN_92 = mux(_T_1, UInt<1>("h0"), _GEN_80) @[ControlUnit.scala 40:44 ControlUnit.scala 47:22]
    node _GEN_93 = mux(_T_1, UInt<1>("h1"), _GEN_81) @[ControlUnit.scala 40:44 ControlUnit.scala 48:22]
    node _GEN_94 = mux(_T_1, UInt<1>("h0"), _GEN_82) @[ControlUnit.scala 40:44 ControlUnit.scala 49:23]
    node _GEN_95 = mux(_T_1, UInt<1>("h0"), _GEN_83) @[ControlUnit.scala 40:44 ControlUnit.scala 50:23]
    node _GEN_96 = mux(_T_1, UInt<1>("h1"), _GEN_84) @[ControlUnit.scala 40:44 ControlUnit.scala 51:17]
    node _GEN_97 = mux(_T_1, UInt<1>("h0"), _GEN_85) @[ControlUnit.scala 40:44 ControlUnit.scala 52:17]
    node _GEN_98 = validif(eq(_T_1, UInt<1>("h0")), _GEN_86) @[ControlUnit.scala 40:44]
    node _GEN_99 = mux(_T, UInt<1>("h0"), _GEN_87) @[ControlUnit.scala 26:38 ControlUnit.scala 27:21]
    node _GEN_100 = mux(_T, UInt<1>("h0"), _GEN_88) @[ControlUnit.scala 26:38 ControlUnit.scala 28:19]
    node _GEN_101 = mux(_T, UInt<1>("h0"), _GEN_89) @[ControlUnit.scala 26:38 ControlUnit.scala 29:20]
    node _GEN_102 = mux(_T, UInt<1>("h1"), _GEN_90) @[ControlUnit.scala 26:38 ControlUnit.scala 30:21]
    node _GEN_103 = mux(_T, UInt<1>("h0"), _GEN_91) @[ControlUnit.scala 26:38 ControlUnit.scala 32:26]
    node _GEN_104 = mux(_T, UInt<1>("h0"), _GEN_92) @[ControlUnit.scala 26:38 ControlUnit.scala 33:22]
    node _GEN_105 = mux(_T, UInt<1>("h0"), _GEN_93) @[ControlUnit.scala 26:38 ControlUnit.scala 34:22]
    node _GEN_106 = mux(_T, UInt<1>("h0"), _GEN_94) @[ControlUnit.scala 26:38 ControlUnit.scala 35:23]
    node _GEN_107 = mux(_T, UInt<1>("h0"), _GEN_95) @[ControlUnit.scala 26:38 ControlUnit.scala 36:23]
    node _GEN_108 = mux(_T, UInt<1>("h1"), _GEN_96) @[ControlUnit.scala 26:38 ControlUnit.scala 37:17]
    node _GEN_109 = mux(_T, UInt<1>("h0"), _GEN_97) @[ControlUnit.scala 26:38 ControlUnit.scala 38:17]
    node _GEN_110 = validif(eq(_T, UInt<1>("h0")), _GEN_98) @[ControlUnit.scala 26:38]
    io_memWrite <= _GEN_99
    io_branch <= _GEN_100
    io_memRead <= _GEN_101
    io_regWrite <= _GEN_102
    io_memToReg <= _GEN_101
    io_alu_Operation <= _GEN_103
    io_operand_A <= _GEN_104
    io_operand_B <= _GEN_105
    io_extend_Sel <= _GEN_106
    io_nextPc_Sel <= _GEN_107
    io_is_I <= _GEN_108
    io_is_V <= _GEN_109
    io_avl_sel <= _GEN_110

  module immdValGen :
    input clock : Clock
    input reset : UInt<1>
    input io_instr : UInt<32>
    input io_pc : SInt<32>
    output io_s_imm : SInt<32>
    output io_sb_imm : SInt<32>
    output io_u_imm : SInt<32>
    output io_uj_imm : SInt<32>
    output io_i_imm : SInt<32>

    node s1 = bits(io_instr, 11, 7) @[ImmGen.scala 17:22]
    node s2 = bits(io_instr, 31, 25) @[ImmGen.scala 18:22]
    node s3 = cat(s2, s1) @[Cat.scala 30:58]
    node _s4_T = bits(s3, 11, 11) @[ImmGen.scala 20:29]
    node _s4_T_1 = bits(_s4_T, 0, 0) @[Bitwise.scala 72:15]
    node s4_hi = mux(_s4_T_1, UInt<20>("hfffff"), UInt<20>("h0")) @[Bitwise.scala 72:12]
    node s4 = cat(s4_hi, s3) @[Cat.scala 30:58]
    node _io_s_imm_T = asSInt(s4) @[ImmGen.scala 21:20]
    node sb1 = bits(io_instr, 11, 8) @[ImmGen.scala 23:23]
    node sb2 = bits(io_instr, 30, 25) @[ImmGen.scala 24:23]
    node sb3 = bits(io_instr, 7, 7) @[ImmGen.scala 25:23]
    node sb4 = bits(io_instr, 31, 31) @[ImmGen.scala 26:23]
    node sb5_lo_lo = asUInt(asSInt(UInt<1>("h0"))) @[Cat.scala 30:58]
    node sb5_lo = cat(sb1, sb5_lo_lo) @[Cat.scala 30:58]
    node sb5_hi_hi = cat(sb4, sb3) @[Cat.scala 30:58]
    node sb5_hi = cat(sb5_hi_hi, sb2) @[Cat.scala 30:58]
    node sb5 = cat(sb5_hi, sb5_lo) @[Cat.scala 30:58]
    node _sb6_T = bits(sb5, 12, 12) @[ImmGen.scala 28:31]
    node _sb6_T_1 = bits(_sb6_T, 0, 0) @[Bitwise.scala 72:15]
    node sb6_hi = mux(_sb6_T_1, UInt<19>("h7ffff"), UInt<19>("h0")) @[Bitwise.scala 72:12]
    node _sb6_T_2 = cat(sb6_hi, sb5) @[Cat.scala 30:58]
    node sb6 = asSInt(_sb6_T_2) @[ImmGen.scala 28:43]
    node _io_sb_imm_T = add(sb6, io_pc) @[ImmGen.scala 29:22]
    node _io_sb_imm_T_1 = tail(_io_sb_imm_T, 1) @[ImmGen.scala 29:22]
    node _io_sb_imm_T_2 = asSInt(_io_sb_imm_T_1) @[ImmGen.scala 29:22]
    node u1 = bits(io_instr, 31, 12) @[ImmGen.scala 31:22]
    node _u2_T = bits(u1, 19, 19) @[ImmGen.scala 32:29]
    node _u2_T_1 = bits(_u2_T, 0, 0) @[Bitwise.scala 72:15]
    node u2_hi = mux(_u2_T_1, UInt<12>("hfff"), UInt<12>("h0")) @[Bitwise.scala 72:12]
    node u2 = cat(u2_hi, u1) @[Cat.scala 30:58]
    node u3 = dshl(u2, UInt<4>("hc")) @[ImmGen.scala 33:17]
    node _io_u_imm_T = asSInt(u3) @[ImmGen.scala 34:20]
    node uj1 = bits(io_instr, 30, 21) @[ImmGen.scala 36:23]
    node uj2 = bits(io_instr, 20, 20) @[ImmGen.scala 37:23]
    node uj3 = bits(io_instr, 19, 12) @[ImmGen.scala 38:23]
    node uj4 = bits(io_instr, 31, 31) @[ImmGen.scala 39:23]
    node uj5_lo_lo = asUInt(asSInt(UInt<1>("h0"))) @[Cat.scala 30:58]
    node uj5_lo = cat(uj1, uj5_lo_lo) @[Cat.scala 30:58]
    node uj5_hi_hi = cat(uj4, uj3) @[Cat.scala 30:58]
    node uj5_hi = cat(uj5_hi_hi, uj2) @[Cat.scala 30:58]
    node uj5 = cat(uj5_hi, uj5_lo) @[Cat.scala 30:58]
    node _uj6_T = bits(uj5, 20, 20) @[ImmGen.scala 41:31]
    node _uj6_T_1 = bits(_uj6_T, 0, 0) @[Bitwise.scala 72:15]
    node uj6_hi = mux(_uj6_T_1, UInt<11>("h7ff"), UInt<11>("h0")) @[Bitwise.scala 72:12]
    node _uj6_T_2 = cat(uj6_hi, uj5) @[Cat.scala 30:58]
    node uj6 = asSInt(_uj6_T_2) @[ImmGen.scala 41:43]
    node _io_uj_imm_T = add(uj6, io_pc) @[ImmGen.scala 42:22]
    node _io_uj_imm_T_1 = tail(_io_uj_imm_T, 1) @[ImmGen.scala 42:22]
    node _io_uj_imm_T_2 = asSInt(_io_uj_imm_T_1) @[ImmGen.scala 42:22]
    node i1 = bits(io_instr, 31, 20) @[ImmGen.scala 44:22]
    node _i2_T = bits(i1, 11, 11) @[ImmGen.scala 45:29]
    node _i2_T_1 = bits(_i2_T, 0, 0) @[Bitwise.scala 72:15]
    node i2_hi = mux(_i2_T_1, UInt<20>("hfffff"), UInt<20>("h0")) @[Bitwise.scala 72:12]
    node i2 = cat(i2_hi, i1) @[Cat.scala 30:58]
    node _io_i_imm_T = asSInt(i2) @[ImmGen.scala 46:20]
    io_s_imm <= _io_s_imm_T @[ImmGen.scala 21:14]
    io_sb_imm <= _io_sb_imm_T_2 @[ImmGen.scala 29:15]
    io_u_imm <= asSInt(bits(_io_u_imm_T, 31, 0)) @[ImmGen.scala 34:14]
    io_uj_imm <= _io_uj_imm_T_2 @[ImmGen.scala 42:15]
    io_i_imm <= _io_i_imm_T @[ImmGen.scala 46:14]

  module aluControl :
    input clock : Clock
    input reset : UInt<1>
    input io_alu_Operation : UInt<3>
    input io_func3 : UInt<3>
    input io_func7 : UInt<7>
    input io_is_I : UInt<1>
    input io_is_V : UInt<1>
    output io_out_V : UInt<1>
    output io_out_I : UInt<1>
    output io_out : UInt<11>

    node _T = eq(io_is_I, UInt<1>("h1")) @[ALU_Control.scala 17:18]
    node _T_1 = eq(io_is_V, UInt<1>("h0")) @[ALU_Control.scala 17:36]
    node _T_2 = and(_T, _T_1) @[ALU_Control.scala 17:26]
    node _T_3 = eq(io_alu_Operation, UInt<1>("h0")) @[ALU_Control.scala 18:31]
    node io_out_hi = cat(UInt<1>("h0"), io_func7) @[Cat.scala 30:58]
    node _io_out_T = cat(io_out_hi, io_func3) @[Cat.scala 30:58]
    node _T_4 = eq(io_alu_Operation, UInt<1>("h1")) @[ALU_Control.scala 22:37]
    node io_out_hi_1 = cat(UInt<1>("h0"), UInt<1>("h0")) @[Cat.scala 30:58]
    node _io_out_T_1 = cat(io_out_hi_1, io_func3) @[Cat.scala 30:58]
    node _T_5 = eq(io_alu_Operation, UInt<3>("h5")) @[ALU_Control.scala 26:37]
    node _T_6 = eq(io_alu_Operation, UInt<2>("h2")) @[ALU_Control.scala 30:37]
    node _io_out_T_2 = cat(UInt<8>("h80"), io_func3) @[Cat.scala 30:58]
    node _T_7 = eq(io_alu_Operation, UInt<3>("h6")) @[ALU_Control.scala 34:37]
    node _T_8 = eq(io_alu_Operation, UInt<2>("h3")) @[ALU_Control.scala 38:37]
    node _T_9 = eq(io_alu_Operation, UInt<3>("h4")) @[ALU_Control.scala 42:37]
    node _T_10 = eq(io_alu_Operation, UInt<3>("h7")) @[ALU_Control.scala 46:37]
    node _GEN_0 = validif(_T_10, UInt<1>("h0")) @[ALU_Control.scala 46:50 ALU_Control.scala 47:20]
    node _GEN_1 = validif(_T_10, UInt<1>("h1")) @[ALU_Control.scala 46:50 ALU_Control.scala 48:22]
    node _GEN_2 = mux(_T_9, UInt<1>("h0"), _GEN_0) @[ALU_Control.scala 42:50 ALU_Control.scala 43:20]
    node _GEN_3 = mux(_T_9, UInt<1>("h1"), _GEN_1) @[ALU_Control.scala 42:50 ALU_Control.scala 44:22]
    node _GEN_4 = mux(_T_8, UInt<11>("h7ff"), _GEN_2) @[ALU_Control.scala 38:50 ALU_Control.scala 39:20]
    node _GEN_5 = mux(_T_8, UInt<1>("h1"), _GEN_3) @[ALU_Control.scala 38:50 ALU_Control.scala 40:22]
    node _GEN_6 = mux(_T_8, UInt<1>("h0"), _GEN_2) @[ALU_Control.scala 38:50 ALU_Control.scala 41:22]
    node _GEN_7 = mux(_T_7, UInt<1>("h0"), _GEN_4) @[ALU_Control.scala 34:50 ALU_Control.scala 35:20]
    node _GEN_8 = mux(_T_7, UInt<1>("h1"), _GEN_5) @[ALU_Control.scala 34:50 ALU_Control.scala 36:22]
    node _GEN_9 = mux(_T_7, UInt<1>("h0"), _GEN_6) @[ALU_Control.scala 34:50 ALU_Control.scala 37:22]
    node _GEN_10 = mux(_T_6, _io_out_T_2, _GEN_7) @[ALU_Control.scala 30:50 ALU_Control.scala 31:20]
    node _GEN_11 = mux(_T_6, UInt<1>("h1"), _GEN_8) @[ALU_Control.scala 30:50 ALU_Control.scala 32:22]
    node _GEN_12 = mux(_T_6, UInt<1>("h0"), _GEN_9) @[ALU_Control.scala 30:50 ALU_Control.scala 33:22]
    node _GEN_13 = mux(_T_5, UInt<1>("h0"), _GEN_10) @[ALU_Control.scala 26:50 ALU_Control.scala 27:20]
    node _GEN_14 = mux(_T_5, UInt<1>("h1"), _GEN_11) @[ALU_Control.scala 26:50 ALU_Control.scala 28:22]
    node _GEN_15 = mux(_T_5, UInt<1>("h0"), _GEN_12) @[ALU_Control.scala 26:50 ALU_Control.scala 29:22]
    node _GEN_16 = mux(_T_4, _io_out_T_1, _GEN_13) @[ALU_Control.scala 22:50 ALU_Control.scala 23:20]
    node _GEN_17 = mux(_T_4, UInt<1>("h1"), _GEN_14) @[ALU_Control.scala 22:50 ALU_Control.scala 24:22]
    node _GEN_18 = mux(_T_4, UInt<1>("h0"), _GEN_15) @[ALU_Control.scala 22:50 ALU_Control.scala 25:22]
    node _GEN_19 = mux(_T_3, _io_out_T, _GEN_16) @[ALU_Control.scala 18:44 ALU_Control.scala 19:20]
    node _GEN_20 = mux(_T_3, UInt<1>("h1"), _GEN_17) @[ALU_Control.scala 18:44 ALU_Control.scala 20:22]
    node _GEN_21 = mux(_T_3, UInt<1>("h0"), _GEN_18) @[ALU_Control.scala 18:44 ALU_Control.scala 21:22]
    node _T_11 = eq(io_is_I, UInt<1>("h0")) @[ALU_Control.scala 55:24]
    node _T_12 = eq(io_is_V, UInt<1>("h1")) @[ALU_Control.scala 55:42]
    node _T_13 = and(_T_11, _T_12) @[ALU_Control.scala 55:32]
    node _T_14 = eq(io_alu_Operation, UInt<1>("h0")) @[ALU_Control.scala 56:31]
    node io_out_hi_2 = cat(UInt<1>("h0"), UInt<1>("h0")) @[Cat.scala 30:58]
    node _io_out_T_3 = cat(io_out_hi_2, io_func3) @[Cat.scala 30:58]
    node _GEN_22 = validif(_T_14, _io_out_T_3) @[ALU_Control.scala 56:44 ALU_Control.scala 57:20]
    node _GEN_23 = validif(_T_14, UInt<1>("h1")) @[ALU_Control.scala 56:44 ALU_Control.scala 58:22]
    node _GEN_24 = validif(_T_14, UInt<1>("h0")) @[ALU_Control.scala 56:44 ALU_Control.scala 59:22]
    node _GEN_25 = validif(_T_13, _GEN_22) @[ALU_Control.scala 55:50]
    node _GEN_26 = validif(_T_13, _GEN_23) @[ALU_Control.scala 55:50]
    node _GEN_27 = validif(_T_13, _GEN_24) @[ALU_Control.scala 55:50]
    node _GEN_28 = mux(_T_2, _GEN_19, _GEN_25) @[ALU_Control.scala 17:44]
    node _GEN_29 = mux(_T_2, _GEN_20, _GEN_27) @[ALU_Control.scala 17:44]
    node _GEN_30 = mux(_T_2, _GEN_21, _GEN_26) @[ALU_Control.scala 17:44]
    io_out_V <= _GEN_30
    io_out_I <= _GEN_29
    io_out <= _GEN_28

  module ALU :
    input clock : Clock
    input reset : UInt<1>
    input io_in_A : SInt<32>
    input io_in_B : SInt<32>
    input io_alu_Op : UInt<11>
    input io_in_V : UInt<1>
    input io_in_I : UInt<1>
    output io_out : SInt<32>

    node _T = eq(UInt<1>("h1"), io_in_I) @[Conditional.scala 37:30]
    node _T_1 = eq(UInt<5>("h0"), io_alu_Op) @[Conditional.scala 37:30]
    node _io_out_T = add(io_in_A, io_in_B) @[ALU.scala 41:39]
    node _io_out_T_1 = tail(_io_out_T, 1) @[ALU.scala 41:39]
    node _io_out_T_2 = asSInt(_io_out_T_1) @[ALU.scala 41:39]
    node _T_2 = eq(UInt<5>("h8"), io_alu_Op) @[Conditional.scala 37:30]
    node _io_out_T_3 = sub(io_in_A, io_in_B) @[ALU.scala 44:39]
    node _io_out_T_4 = tail(_io_out_T_3, 1) @[ALU.scala 44:39]
    node _io_out_T_5 = asSInt(_io_out_T_4) @[ALU.scala 44:39]
    node _T_3 = eq(UInt<5>("h2"), io_alu_Op) @[Conditional.scala 37:30]
    node _T_4 = lt(io_in_A, io_in_B) @[ALU.scala 47:34]
    node _GEN_0 = mux(_T_4, asSInt(UInt<2>("h1")), asSInt(UInt<1>("h0"))) @[ALU.scala 47:45 ALU.scala 48:32 ALU.scala 50:32]
    node _T_5 = eq(UInt<5>("h3"), io_alu_Op) @[Conditional.scala 37:30]
    node _T_6 = asUInt(io_in_A) @[ALU.scala 54:34]
    node _T_7 = asUInt(io_in_B) @[ALU.scala 54:51]
    node _T_8 = lt(_T_6, _T_7) @[ALU.scala 54:41]
    node _GEN_1 = mux(_T_8, asSInt(UInt<2>("h1")), asSInt(UInt<1>("h0"))) @[ALU.scala 54:59 ALU.scala 55:32 ALU.scala 57:32]
    node _T_9 = eq(UInt<5>("h1d"), io_alu_Op) @[Conditional.scala 37:30]
    node _io_out_T_6 = bits(io_in_B, 4, 0) @[ALU.scala 61:49]
    node _io_out_T_7 = dshr(io_in_A, _io_out_T_6) @[ALU.scala 61:39]
    node _T_10 = eq(UInt<5>("h5"), io_alu_Op) @[Conditional.scala 37:30]
    node _io_out_T_8 = bits(io_in_B, 4, 0) @[ALU.scala 64:49]
    node _io_out_T_9 = dshr(io_in_A, _io_out_T_8) @[ALU.scala 64:39]
    node _T_11 = eq(UInt<5>("h1"), io_alu_Op) @[Conditional.scala 37:30]
    node sr = bits(io_in_B, 4, 0) @[ALU.scala 67:37]
    node _io_out_T_10 = dshl(io_in_A, sr) @[ALU.scala 68:39]
    node _T_12 = eq(UInt<5>("h7"), io_alu_Op) @[Conditional.scala 37:30]
    node _io_out_T_11 = and(io_in_A, io_in_B) @[ALU.scala 71:39]
    node _io_out_T_12 = asSInt(_io_out_T_11) @[ALU.scala 71:39]
    node _T_13 = eq(UInt<5>("h6"), io_alu_Op) @[Conditional.scala 37:30]
    node _io_out_T_13 = or(io_in_A, io_in_B) @[ALU.scala 74:37]
    node _io_out_T_14 = asSInt(_io_out_T_13) @[ALU.scala 74:37]
    node _T_14 = eq(UInt<5>("h4"), io_alu_Op) @[Conditional.scala 37:30]
    node _io_out_T_15 = xor(io_in_A, io_in_B) @[ALU.scala 77:36]
    node _io_out_T_16 = asSInt(_io_out_T_15) @[ALU.scala 77:36]
    node _T_15 = eq(UInt<5>("h1f"), io_alu_Op) @[Conditional.scala 37:30]
    node _GEN_2 = mux(_T_15, io_in_A, asSInt(UInt<1>("h0"))) @[Conditional.scala 39:67 ALU.scala 80:28 ALU.scala 36:12]
    node _GEN_3 = mux(_T_14, _io_out_T_16, _GEN_2) @[Conditional.scala 39:67 ALU.scala 77:24]
    node _GEN_4 = mux(_T_13, _io_out_T_14, _GEN_3) @[Conditional.scala 39:67 ALU.scala 74:27]
    node _GEN_5 = mux(_T_12, _io_out_T_12, _GEN_4) @[Conditional.scala 39:67 ALU.scala 71:28]
    node _GEN_6 = mux(_T_11, _io_out_T_10, _GEN_5) @[Conditional.scala 39:67 ALU.scala 68:28]
    node _GEN_7 = mux(_T_10, _io_out_T_9, _GEN_6) @[Conditional.scala 39:67 ALU.scala 64:28]
    node _GEN_8 = mux(_T_9, _io_out_T_7, _GEN_7) @[Conditional.scala 39:67 ALU.scala 61:28]
    node _GEN_9 = mux(_T_5, _GEN_1, _GEN_8) @[Conditional.scala 39:67]
    node _GEN_10 = mux(_T_3, _GEN_0, _GEN_9) @[Conditional.scala 39:67]
    node _GEN_11 = mux(_T_2, _io_out_T_5, _GEN_10) @[Conditional.scala 39:67 ALU.scala 44:28]
    node _GEN_12 = mux(_T_1, _io_out_T_2, _GEN_11) @[Conditional.scala 40:58 ALU.scala 41:28]
    node _GEN_13 = mux(_T, _GEN_12, asSInt(UInt<1>("h0"))) @[Conditional.scala 40:58 ALU.scala 36:12]
    node _T_16 = eq(UInt<1>("h1"), io_in_V) @[Conditional.scala 37:30]
    node _T_17 = eq(UInt<5>("h7"), io_alu_Op) @[Conditional.scala 37:30]
    node _T_18 = leq(io_in_A, io_in_B) @[ALU.scala 89:34]
    node _T_19 = mul(io_in_B, asSInt(UInt<3>("h2"))) @[ALU.scala 91:52]
    node _T_20 = geq(io_in_A, _T_19) @[ALU.scala 91:40]
    node _GEN_14 = mux(_T_20, io_in_B, asSInt(UInt<1>("h0"))) @[ALU.scala 91:59 ALU.scala 92:32 ALU.scala 94:32]
    node _GEN_15 = mux(_T_18, io_in_A, _GEN_14) @[ALU.scala 89:45 ALU.scala 90:32]
    node _GEN_16 = mux(_T_17, _GEN_15, _GEN_13) @[Conditional.scala 40:58]
    node _GEN_17 = mux(_T_16, _GEN_16, _GEN_13) @[Conditional.scala 40:58]
    io_out <= asSInt(bits(_GEN_17, 31, 0))

  module regFile :
    input clock : Clock
    input reset : UInt<1>
    input io_writeData : SInt<32>
    input io_rs1_addr : UInt<5>
    input io_rs2_addr : UInt<5>
    input io_rd_addr : UInt<5>
    output io_rs1 : SInt<32>
    output io_rs2 : SInt<32>

    reg register_0 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_0) @[Reg_Unit.scala 15:27]
    reg register_1 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_1) @[Reg_Unit.scala 15:27]
    reg register_2 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_2) @[Reg_Unit.scala 15:27]
    reg register_3 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_3) @[Reg_Unit.scala 15:27]
    reg register_4 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_4) @[Reg_Unit.scala 15:27]
    reg register_5 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_5) @[Reg_Unit.scala 15:27]
    reg register_6 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_6) @[Reg_Unit.scala 15:27]
    reg register_7 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_7) @[Reg_Unit.scala 15:27]
    reg register_8 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_8) @[Reg_Unit.scala 15:27]
    reg register_9 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_9) @[Reg_Unit.scala 15:27]
    reg register_10 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_10) @[Reg_Unit.scala 15:27]
    reg register_11 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_11) @[Reg_Unit.scala 15:27]
    reg register_12 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_12) @[Reg_Unit.scala 15:27]
    reg register_13 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_13) @[Reg_Unit.scala 15:27]
    reg register_14 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_14) @[Reg_Unit.scala 15:27]
    reg register_15 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_15) @[Reg_Unit.scala 15:27]
    reg register_16 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_16) @[Reg_Unit.scala 15:27]
    reg register_17 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_17) @[Reg_Unit.scala 15:27]
    reg register_18 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_18) @[Reg_Unit.scala 15:27]
    reg register_19 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_19) @[Reg_Unit.scala 15:27]
    reg register_20 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_20) @[Reg_Unit.scala 15:27]
    reg register_21 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_21) @[Reg_Unit.scala 15:27]
    reg register_22 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_22) @[Reg_Unit.scala 15:27]
    reg register_23 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_23) @[Reg_Unit.scala 15:27]
    reg register_24 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_24) @[Reg_Unit.scala 15:27]
    reg register_25 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_25) @[Reg_Unit.scala 15:27]
    reg register_26 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_26) @[Reg_Unit.scala 15:27]
    reg register_27 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_27) @[Reg_Unit.scala 15:27]
    reg register_28 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_28) @[Reg_Unit.scala 15:27]
    reg register_29 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_29) @[Reg_Unit.scala 15:27]
    reg register_30 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_30) @[Reg_Unit.scala 15:27]
    reg register_31 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_31) @[Reg_Unit.scala 15:27]
    node _GEN_0 = validif(eq(UInt<1>("h0"), io_rs1_addr), register_0) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_1 = mux(eq(UInt<1>("h1"), io_rs1_addr), register_1, _GEN_0) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_2 = mux(eq(UInt<2>("h2"), io_rs1_addr), register_2, _GEN_1) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_3 = mux(eq(UInt<2>("h3"), io_rs1_addr), register_3, _GEN_2) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_4 = mux(eq(UInt<3>("h4"), io_rs1_addr), register_4, _GEN_3) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_5 = mux(eq(UInt<3>("h5"), io_rs1_addr), register_5, _GEN_4) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_6 = mux(eq(UInt<3>("h6"), io_rs1_addr), register_6, _GEN_5) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_7 = mux(eq(UInt<3>("h7"), io_rs1_addr), register_7, _GEN_6) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_8 = mux(eq(UInt<4>("h8"), io_rs1_addr), register_8, _GEN_7) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_9 = mux(eq(UInt<4>("h9"), io_rs1_addr), register_9, _GEN_8) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_10 = mux(eq(UInt<4>("ha"), io_rs1_addr), register_10, _GEN_9) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_11 = mux(eq(UInt<4>("hb"), io_rs1_addr), register_11, _GEN_10) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_12 = mux(eq(UInt<4>("hc"), io_rs1_addr), register_12, _GEN_11) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_13 = mux(eq(UInt<4>("hd"), io_rs1_addr), register_13, _GEN_12) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_14 = mux(eq(UInt<4>("he"), io_rs1_addr), register_14, _GEN_13) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_15 = mux(eq(UInt<4>("hf"), io_rs1_addr), register_15, _GEN_14) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_16 = mux(eq(UInt<5>("h10"), io_rs1_addr), register_16, _GEN_15) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_17 = mux(eq(UInt<5>("h11"), io_rs1_addr), register_17, _GEN_16) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_18 = mux(eq(UInt<5>("h12"), io_rs1_addr), register_18, _GEN_17) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_19 = mux(eq(UInt<5>("h13"), io_rs1_addr), register_19, _GEN_18) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_20 = mux(eq(UInt<5>("h14"), io_rs1_addr), register_20, _GEN_19) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_21 = mux(eq(UInt<5>("h15"), io_rs1_addr), register_21, _GEN_20) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_22 = mux(eq(UInt<5>("h16"), io_rs1_addr), register_22, _GEN_21) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_23 = mux(eq(UInt<5>("h17"), io_rs1_addr), register_23, _GEN_22) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_24 = mux(eq(UInt<5>("h18"), io_rs1_addr), register_24, _GEN_23) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_25 = mux(eq(UInt<5>("h19"), io_rs1_addr), register_25, _GEN_24) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_26 = mux(eq(UInt<5>("h1a"), io_rs1_addr), register_26, _GEN_25) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_27 = mux(eq(UInt<5>("h1b"), io_rs1_addr), register_27, _GEN_26) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_28 = mux(eq(UInt<5>("h1c"), io_rs1_addr), register_28, _GEN_27) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_29 = mux(eq(UInt<5>("h1d"), io_rs1_addr), register_29, _GEN_28) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_30 = mux(eq(UInt<5>("h1e"), io_rs1_addr), register_30, _GEN_29) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_31 = mux(eq(UInt<5>("h1f"), io_rs1_addr), register_31, _GEN_30) @[Reg_Unit.scala 17:12 Reg_Unit.scala 17:12]
    node _GEN_32 = validif(eq(UInt<1>("h0"), io_rs2_addr), register_0) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_33 = mux(eq(UInt<1>("h1"), io_rs2_addr), register_1, _GEN_32) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_34 = mux(eq(UInt<2>("h2"), io_rs2_addr), register_2, _GEN_33) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_35 = mux(eq(UInt<2>("h3"), io_rs2_addr), register_3, _GEN_34) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_36 = mux(eq(UInt<3>("h4"), io_rs2_addr), register_4, _GEN_35) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_37 = mux(eq(UInt<3>("h5"), io_rs2_addr), register_5, _GEN_36) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_38 = mux(eq(UInt<3>("h6"), io_rs2_addr), register_6, _GEN_37) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_39 = mux(eq(UInt<3>("h7"), io_rs2_addr), register_7, _GEN_38) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_40 = mux(eq(UInt<4>("h8"), io_rs2_addr), register_8, _GEN_39) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_41 = mux(eq(UInt<4>("h9"), io_rs2_addr), register_9, _GEN_40) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_42 = mux(eq(UInt<4>("ha"), io_rs2_addr), register_10, _GEN_41) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_43 = mux(eq(UInt<4>("hb"), io_rs2_addr), register_11, _GEN_42) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_44 = mux(eq(UInt<4>("hc"), io_rs2_addr), register_12, _GEN_43) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_45 = mux(eq(UInt<4>("hd"), io_rs2_addr), register_13, _GEN_44) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_46 = mux(eq(UInt<4>("he"), io_rs2_addr), register_14, _GEN_45) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_47 = mux(eq(UInt<4>("hf"), io_rs2_addr), register_15, _GEN_46) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_48 = mux(eq(UInt<5>("h10"), io_rs2_addr), register_16, _GEN_47) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_49 = mux(eq(UInt<5>("h11"), io_rs2_addr), register_17, _GEN_48) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_50 = mux(eq(UInt<5>("h12"), io_rs2_addr), register_18, _GEN_49) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_51 = mux(eq(UInt<5>("h13"), io_rs2_addr), register_19, _GEN_50) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_52 = mux(eq(UInt<5>("h14"), io_rs2_addr), register_20, _GEN_51) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_53 = mux(eq(UInt<5>("h15"), io_rs2_addr), register_21, _GEN_52) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_54 = mux(eq(UInt<5>("h16"), io_rs2_addr), register_22, _GEN_53) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_55 = mux(eq(UInt<5>("h17"), io_rs2_addr), register_23, _GEN_54) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_56 = mux(eq(UInt<5>("h18"), io_rs2_addr), register_24, _GEN_55) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_57 = mux(eq(UInt<5>("h19"), io_rs2_addr), register_25, _GEN_56) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_58 = mux(eq(UInt<5>("h1a"), io_rs2_addr), register_26, _GEN_57) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_59 = mux(eq(UInt<5>("h1b"), io_rs2_addr), register_27, _GEN_58) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_60 = mux(eq(UInt<5>("h1c"), io_rs2_addr), register_28, _GEN_59) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_61 = mux(eq(UInt<5>("h1d"), io_rs2_addr), register_29, _GEN_60) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_62 = mux(eq(UInt<5>("h1e"), io_rs2_addr), register_30, _GEN_61) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _GEN_63 = mux(eq(UInt<5>("h1f"), io_rs2_addr), register_31, _GEN_62) @[Reg_Unit.scala 18:12 Reg_Unit.scala 18:12]
    node _T = eq(io_rd_addr, UInt<1>("h0")) @[Reg_Unit.scala 19:21]
    node _register_io_rd_addr = pad(asSInt(UInt<1>("h0")), 32) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30]
    node _GEN_64 = mux(eq(UInt<1>("h0"), io_rd_addr), _register_io_rd_addr, asSInt(UInt<1>("h0"))) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 16:17]
    node _GEN_65 = mux(eq(UInt<1>("h1"), io_rd_addr), _register_io_rd_addr, register_1) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_66 = mux(eq(UInt<2>("h2"), io_rd_addr), _register_io_rd_addr, register_2) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_67 = mux(eq(UInt<2>("h3"), io_rd_addr), _register_io_rd_addr, register_3) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_68 = mux(eq(UInt<3>("h4"), io_rd_addr), _register_io_rd_addr, register_4) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_69 = mux(eq(UInt<3>("h5"), io_rd_addr), _register_io_rd_addr, register_5) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_70 = mux(eq(UInt<3>("h6"), io_rd_addr), _register_io_rd_addr, register_6) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_71 = mux(eq(UInt<3>("h7"), io_rd_addr), _register_io_rd_addr, register_7) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_72 = mux(eq(UInt<4>("h8"), io_rd_addr), _register_io_rd_addr, register_8) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_73 = mux(eq(UInt<4>("h9"), io_rd_addr), _register_io_rd_addr, register_9) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_74 = mux(eq(UInt<4>("ha"), io_rd_addr), _register_io_rd_addr, register_10) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_75 = mux(eq(UInt<4>("hb"), io_rd_addr), _register_io_rd_addr, register_11) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_76 = mux(eq(UInt<4>("hc"), io_rd_addr), _register_io_rd_addr, register_12) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_77 = mux(eq(UInt<4>("hd"), io_rd_addr), _register_io_rd_addr, register_13) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_78 = mux(eq(UInt<4>("he"), io_rd_addr), _register_io_rd_addr, register_14) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_79 = mux(eq(UInt<4>("hf"), io_rd_addr), _register_io_rd_addr, register_15) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_80 = mux(eq(UInt<5>("h10"), io_rd_addr), _register_io_rd_addr, register_16) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_81 = mux(eq(UInt<5>("h11"), io_rd_addr), _register_io_rd_addr, register_17) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_82 = mux(eq(UInt<5>("h12"), io_rd_addr), _register_io_rd_addr, register_18) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_83 = mux(eq(UInt<5>("h13"), io_rd_addr), _register_io_rd_addr, register_19) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_84 = mux(eq(UInt<5>("h14"), io_rd_addr), _register_io_rd_addr, register_20) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_85 = mux(eq(UInt<5>("h15"), io_rd_addr), _register_io_rd_addr, register_21) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_86 = mux(eq(UInt<5>("h16"), io_rd_addr), _register_io_rd_addr, register_22) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_87 = mux(eq(UInt<5>("h17"), io_rd_addr), _register_io_rd_addr, register_23) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_88 = mux(eq(UInt<5>("h18"), io_rd_addr), _register_io_rd_addr, register_24) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_89 = mux(eq(UInt<5>("h19"), io_rd_addr), _register_io_rd_addr, register_25) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_90 = mux(eq(UInt<5>("h1a"), io_rd_addr), _register_io_rd_addr, register_26) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_91 = mux(eq(UInt<5>("h1b"), io_rd_addr), _register_io_rd_addr, register_27) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_92 = mux(eq(UInt<5>("h1c"), io_rd_addr), _register_io_rd_addr, register_28) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_93 = mux(eq(UInt<5>("h1d"), io_rd_addr), _register_io_rd_addr, register_29) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_94 = mux(eq(UInt<5>("h1e"), io_rd_addr), _register_io_rd_addr, register_30) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _GEN_95 = mux(eq(UInt<5>("h1f"), io_rd_addr), _register_io_rd_addr, register_31) @[Reg_Unit.scala 20:30 Reg_Unit.scala 20:30 Reg_Unit.scala 15:27]
    node _register_io_rd_addr_0 = io_writeData @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30]
    node _GEN_96 = mux(eq(UInt<1>("h0"), io_rd_addr), _register_io_rd_addr_0, asSInt(UInt<1>("h0"))) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 16:17]
    node _GEN_97 = mux(eq(UInt<1>("h1"), io_rd_addr), _register_io_rd_addr_0, register_1) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_98 = mux(eq(UInt<2>("h2"), io_rd_addr), _register_io_rd_addr_0, register_2) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_99 = mux(eq(UInt<2>("h3"), io_rd_addr), _register_io_rd_addr_0, register_3) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_100 = mux(eq(UInt<3>("h4"), io_rd_addr), _register_io_rd_addr_0, register_4) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_101 = mux(eq(UInt<3>("h5"), io_rd_addr), _register_io_rd_addr_0, register_5) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_102 = mux(eq(UInt<3>("h6"), io_rd_addr), _register_io_rd_addr_0, register_6) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_103 = mux(eq(UInt<3>("h7"), io_rd_addr), _register_io_rd_addr_0, register_7) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_104 = mux(eq(UInt<4>("h8"), io_rd_addr), _register_io_rd_addr_0, register_8) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_105 = mux(eq(UInt<4>("h9"), io_rd_addr), _register_io_rd_addr_0, register_9) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_106 = mux(eq(UInt<4>("ha"), io_rd_addr), _register_io_rd_addr_0, register_10) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_107 = mux(eq(UInt<4>("hb"), io_rd_addr), _register_io_rd_addr_0, register_11) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_108 = mux(eq(UInt<4>("hc"), io_rd_addr), _register_io_rd_addr_0, register_12) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_109 = mux(eq(UInt<4>("hd"), io_rd_addr), _register_io_rd_addr_0, register_13) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_110 = mux(eq(UInt<4>("he"), io_rd_addr), _register_io_rd_addr_0, register_14) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_111 = mux(eq(UInt<4>("hf"), io_rd_addr), _register_io_rd_addr_0, register_15) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_112 = mux(eq(UInt<5>("h10"), io_rd_addr), _register_io_rd_addr_0, register_16) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_113 = mux(eq(UInt<5>("h11"), io_rd_addr), _register_io_rd_addr_0, register_17) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_114 = mux(eq(UInt<5>("h12"), io_rd_addr), _register_io_rd_addr_0, register_18) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_115 = mux(eq(UInt<5>("h13"), io_rd_addr), _register_io_rd_addr_0, register_19) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_116 = mux(eq(UInt<5>("h14"), io_rd_addr), _register_io_rd_addr_0, register_20) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_117 = mux(eq(UInt<5>("h15"), io_rd_addr), _register_io_rd_addr_0, register_21) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_118 = mux(eq(UInt<5>("h16"), io_rd_addr), _register_io_rd_addr_0, register_22) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_119 = mux(eq(UInt<5>("h17"), io_rd_addr), _register_io_rd_addr_0, register_23) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_120 = mux(eq(UInt<5>("h18"), io_rd_addr), _register_io_rd_addr_0, register_24) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_121 = mux(eq(UInt<5>("h19"), io_rd_addr), _register_io_rd_addr_0, register_25) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_122 = mux(eq(UInt<5>("h1a"), io_rd_addr), _register_io_rd_addr_0, register_26) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_123 = mux(eq(UInt<5>("h1b"), io_rd_addr), _register_io_rd_addr_0, register_27) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_124 = mux(eq(UInt<5>("h1c"), io_rd_addr), _register_io_rd_addr_0, register_28) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_125 = mux(eq(UInt<5>("h1d"), io_rd_addr), _register_io_rd_addr_0, register_29) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_126 = mux(eq(UInt<5>("h1e"), io_rd_addr), _register_io_rd_addr_0, register_30) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_127 = mux(eq(UInt<5>("h1f"), io_rd_addr), _register_io_rd_addr_0, register_31) @[Reg_Unit.scala 22:30 Reg_Unit.scala 22:30 Reg_Unit.scala 15:27]
    node _GEN_128 = mux(_T, _GEN_64, _GEN_96) @[Reg_Unit.scala 19:37]
    node _GEN_129 = mux(_T, _GEN_65, _GEN_97) @[Reg_Unit.scala 19:37]
    node _GEN_130 = mux(_T, _GEN_66, _GEN_98) @[Reg_Unit.scala 19:37]
    node _GEN_131 = mux(_T, _GEN_67, _GEN_99) @[Reg_Unit.scala 19:37]
    node _GEN_132 = mux(_T, _GEN_68, _GEN_100) @[Reg_Unit.scala 19:37]
    node _GEN_133 = mux(_T, _GEN_69, _GEN_101) @[Reg_Unit.scala 19:37]
    node _GEN_134 = mux(_T, _GEN_70, _GEN_102) @[Reg_Unit.scala 19:37]
    node _GEN_135 = mux(_T, _GEN_71, _GEN_103) @[Reg_Unit.scala 19:37]
    node _GEN_136 = mux(_T, _GEN_72, _GEN_104) @[Reg_Unit.scala 19:37]
    node _GEN_137 = mux(_T, _GEN_73, _GEN_105) @[Reg_Unit.scala 19:37]
    node _GEN_138 = mux(_T, _GEN_74, _GEN_106) @[Reg_Unit.scala 19:37]
    node _GEN_139 = mux(_T, _GEN_75, _GEN_107) @[Reg_Unit.scala 19:37]
    node _GEN_140 = mux(_T, _GEN_76, _GEN_108) @[Reg_Unit.scala 19:37]
    node _GEN_141 = mux(_T, _GEN_77, _GEN_109) @[Reg_Unit.scala 19:37]
    node _GEN_142 = mux(_T, _GEN_78, _GEN_110) @[Reg_Unit.scala 19:37]
    node _GEN_143 = mux(_T, _GEN_79, _GEN_111) @[Reg_Unit.scala 19:37]
    node _GEN_144 = mux(_T, _GEN_80, _GEN_112) @[Reg_Unit.scala 19:37]
    node _GEN_145 = mux(_T, _GEN_81, _GEN_113) @[Reg_Unit.scala 19:37]
    node _GEN_146 = mux(_T, _GEN_82, _GEN_114) @[Reg_Unit.scala 19:37]
    node _GEN_147 = mux(_T, _GEN_83, _GEN_115) @[Reg_Unit.scala 19:37]
    node _GEN_148 = mux(_T, _GEN_84, _GEN_116) @[Reg_Unit.scala 19:37]
    node _GEN_149 = mux(_T, _GEN_85, _GEN_117) @[Reg_Unit.scala 19:37]
    node _GEN_150 = mux(_T, _GEN_86, _GEN_118) @[Reg_Unit.scala 19:37]
    node _GEN_151 = mux(_T, _GEN_87, _GEN_119) @[Reg_Unit.scala 19:37]
    node _GEN_152 = mux(_T, _GEN_88, _GEN_120) @[Reg_Unit.scala 19:37]
    node _GEN_153 = mux(_T, _GEN_89, _GEN_121) @[Reg_Unit.scala 19:37]
    node _GEN_154 = mux(_T, _GEN_90, _GEN_122) @[Reg_Unit.scala 19:37]
    node _GEN_155 = mux(_T, _GEN_91, _GEN_123) @[Reg_Unit.scala 19:37]
    node _GEN_156 = mux(_T, _GEN_92, _GEN_124) @[Reg_Unit.scala 19:37]
    node _GEN_157 = mux(_T, _GEN_93, _GEN_125) @[Reg_Unit.scala 19:37]
    node _GEN_158 = mux(_T, _GEN_94, _GEN_126) @[Reg_Unit.scala 19:37]
    node _GEN_159 = mux(_T, _GEN_95, _GEN_127) @[Reg_Unit.scala 19:37]
    node _register_WIRE_0 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_1 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_2 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_3 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_4 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_5 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_6 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_7 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_8 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_9 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_10 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_11 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_12 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_13 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_14 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_15 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_16 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_17 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_18 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_19 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_20 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_21 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_22 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_23 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_24 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_25 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_26 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_27 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_28 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_29 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_30 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_WIRE_31 = asSInt(UInt<32>("h0")) @[Reg_Unit.scala 15:35 Reg_Unit.scala 15:35]
    node _register_io_rs1_addr = _GEN_31 @[Reg_Unit.scala 17:12]
    node _register_io_rs2_addr = _GEN_63 @[Reg_Unit.scala 18:12]
    io_rs1 <= _register_io_rs1_addr @[Reg_Unit.scala 17:12]
    io_rs2 <= _register_io_rs2_addr @[Reg_Unit.scala 18:12]
    register_0 <= mux(reset, _register_WIRE_0, _GEN_128) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_1 <= mux(reset, _register_WIRE_1, _GEN_129) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_2 <= mux(reset, _register_WIRE_2, _GEN_130) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_3 <= mux(reset, _register_WIRE_3, _GEN_131) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_4 <= mux(reset, _register_WIRE_4, _GEN_132) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_5 <= mux(reset, _register_WIRE_5, _GEN_133) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_6 <= mux(reset, _register_WIRE_6, _GEN_134) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_7 <= mux(reset, _register_WIRE_7, _GEN_135) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_8 <= mux(reset, _register_WIRE_8, _GEN_136) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_9 <= mux(reset, _register_WIRE_9, _GEN_137) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_10 <= mux(reset, _register_WIRE_10, _GEN_138) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_11 <= mux(reset, _register_WIRE_11, _GEN_139) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_12 <= mux(reset, _register_WIRE_12, _GEN_140) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_13 <= mux(reset, _register_WIRE_13, _GEN_141) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_14 <= mux(reset, _register_WIRE_14, _GEN_142) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_15 <= mux(reset, _register_WIRE_15, _GEN_143) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_16 <= mux(reset, _register_WIRE_16, _GEN_144) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_17 <= mux(reset, _register_WIRE_17, _GEN_145) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_18 <= mux(reset, _register_WIRE_18, _GEN_146) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_19 <= mux(reset, _register_WIRE_19, _GEN_147) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_20 <= mux(reset, _register_WIRE_20, _GEN_148) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_21 <= mux(reset, _register_WIRE_21, _GEN_149) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_22 <= mux(reset, _register_WIRE_22, _GEN_150) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_23 <= mux(reset, _register_WIRE_23, _GEN_151) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_24 <= mux(reset, _register_WIRE_24, _GEN_152) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_25 <= mux(reset, _register_WIRE_25, _GEN_153) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_26 <= mux(reset, _register_WIRE_26, _GEN_154) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_27 <= mux(reset, _register_WIRE_27, _GEN_155) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_28 <= mux(reset, _register_WIRE_28, _GEN_156) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_29 <= mux(reset, _register_WIRE_29, _GEN_157) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_30 <= mux(reset, _register_WIRE_30, _GEN_158) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]
    register_31 <= mux(reset, _register_WIRE_31, _GEN_159) @[Reg_Unit.scala 15:27 Reg_Unit.scala 15:27]

  module branchControl :
    input clock : Clock
    input reset : UInt<1>
    input io_in_A : SInt<32>
    input io_in_B : SInt<32>
    input io_br_Op : UInt<5>
    output io_branch_out : UInt<1>

    node _T = eq(UInt<5>("h10"), io_br_Op) @[Conditional.scala 37:30]
    node _T_1 = eq(io_in_A, io_in_B) @[branchControl.scala 23:27]
    node _GEN_0 = mux(_T_1, UInt<1>("h1"), UInt<1>("h0")) @[branchControl.scala 23:39 branchControl.scala 24:31 branchControl.scala 26:31]
    node _T_2 = eq(UInt<5>("h11"), io_br_Op) @[Conditional.scala 37:30]
    node _T_3 = neq(io_in_A, io_in_B) @[branchControl.scala 30:27]
    node _GEN_1 = mux(_T_3, UInt<1>("h1"), UInt<1>("h0")) @[branchControl.scala 30:39 branchControl.scala 31:31 branchControl.scala 33:31]
    node _T_4 = eq(UInt<5>("h14"), io_br_Op) @[Conditional.scala 37:30]
    node _T_5 = lt(io_in_A, io_in_B) @[branchControl.scala 37:27]
    node _GEN_2 = mux(_T_5, UInt<1>("h1"), UInt<1>("h0")) @[branchControl.scala 37:37 branchControl.scala 38:31 branchControl.scala 40:31]
    node _T_6 = eq(UInt<5>("h15"), io_br_Op) @[Conditional.scala 37:30]
    node _T_7 = gt(io_in_A, io_in_B) @[branchControl.scala 44:26]
    node _GEN_3 = mux(_T_7, UInt<1>("h1"), UInt<1>("h0")) @[branchControl.scala 44:36 branchControl.scala 45:31 branchControl.scala 47:31]
    node _GEN_4 = mux(_T_6, _GEN_3, UInt<1>("h0")) @[Conditional.scala 39:67 branchControl.scala 20:19]
    node _GEN_5 = mux(_T_4, _GEN_2, _GEN_4) @[Conditional.scala 39:67]
    node _GEN_6 = mux(_T_2, _GEN_1, _GEN_5) @[Conditional.scala 39:67]
    node _GEN_7 = mux(_T, _GEN_0, _GEN_6) @[Conditional.scala 40:58]
    io_branch_out <= _GEN_7

  module jalr :
    input clock : Clock
    input reset : UInt<1>
    input io_rs1 : UInt<32>
    input io_imm : UInt<32>
    output io_pcVal : UInt<32>

    node _sum_T = add(io_rs1, io_imm) @[jalr.scala 12:31]
    node _sum_T_1 = tail(_sum_T, 1) @[jalr.scala 12:31]
    node sum = _sum_T_1
    node _io_pcVal_T = and(sum, UInt<32>("hfffffffe")) @[jalr.scala 13:21]
    io_pcVal <= _io_pcVal_T @[jalr.scala 13:14]

  module Vlmax :
    input clock : Clock
    input reset : UInt<1>
    input io_v_lmul : UInt<3>
    input io_v_sew : UInt<3>
    output io_vlmax : SInt<32>

    node _T = eq(io_v_lmul, UInt<1>("h0")) @[vlmax_cal.scala 18:21]
    node _T_1 = eq(io_v_sew, UInt<1>("h0")) @[vlmax_cal.scala 18:46]
    node _T_2 = and(_T, _T_1) @[vlmax_cal.scala 18:34]
    node _T_3 = eq(io_v_lmul, UInt<1>("h1")) @[vlmax_cal.scala 21:27]
    node _T_4 = eq(io_v_sew, UInt<1>("h1")) @[vlmax_cal.scala 21:52]
    node _T_5 = and(_T_3, _T_4) @[vlmax_cal.scala 21:40]
    node _T_6 = eq(io_v_lmul, UInt<2>("h2")) @[vlmax_cal.scala 24:27]
    node _T_7 = eq(io_v_sew, UInt<2>("h2")) @[vlmax_cal.scala 24:52]
    node _T_8 = and(_T_6, _T_7) @[vlmax_cal.scala 24:40]
    node _T_9 = eq(io_v_lmul, UInt<2>("h3")) @[vlmax_cal.scala 27:27]
    node _T_10 = eq(io_v_sew, UInt<2>("h3")) @[vlmax_cal.scala 27:52]
    node _T_11 = and(_T_9, _T_10) @[vlmax_cal.scala 27:40]
    node _GEN_0 = validif(_T_11, asSInt(UInt<5>("h8"))) @[vlmax_cal.scala 27:66 vlmax_cal.scala 28:14]
    node _GEN_1 = validif(_T_11, asSInt(UInt<8>("h40"))) @[vlmax_cal.scala 27:66 vlmax_cal.scala 29:13]
    node _GEN_2 = mux(_T_8, asSInt(UInt<4>("h4")), _GEN_0) @[vlmax_cal.scala 24:66 vlmax_cal.scala 25:14]
    node _GEN_3 = mux(_T_8, asSInt(UInt<7>("h20")), _GEN_1) @[vlmax_cal.scala 24:66 vlmax_cal.scala 26:13]
    node _GEN_4 = mux(_T_5, asSInt(UInt<3>("h2")), _GEN_2) @[vlmax_cal.scala 21:66 vlmax_cal.scala 22:14]
    node _GEN_5 = mux(_T_5, asSInt(UInt<6>("h10")), _GEN_3) @[vlmax_cal.scala 21:66 vlmax_cal.scala 23:13]
    node _GEN_6 = mux(_T_2, asSInt(UInt<2>("h1")), _GEN_4) @[vlmax_cal.scala 18:60 vlmax_cal.scala 19:14]
    node _GEN_7 = mux(_T_2, asSInt(UInt<5>("h8")), _GEN_5) @[vlmax_cal.scala 18:60 vlmax_cal.scala 20:13]
    node lmul = asSInt(bits(_GEN_6, 3, 0)) @[vlmax_cal.scala 14:16]
    node _T_12 = eq(lmul, asSInt(UInt<2>("h1"))) @[vlmax_cal.scala 38:16]
    node sew = asSInt(bits(_GEN_7, 6, 0)) @[vlmax_cal.scala 15:15]
    node _T_13 = eq(sew, asSInt(UInt<5>("h8"))) @[vlmax_cal.scala 38:31]
    node _T_14 = and(_T_12, _T_13) @[vlmax_cal.scala 38:24]
    node _T_15 = eq(lmul, asSInt(UInt<3>("h2"))) @[vlmax_cal.scala 40:22]
    node _T_16 = eq(sew, asSInt(UInt<5>("h8"))) @[vlmax_cal.scala 40:37]
    node _T_17 = and(_T_15, _T_16) @[vlmax_cal.scala 40:30]
    node _T_18 = eq(lmul, asSInt(UInt<4>("h4"))) @[vlmax_cal.scala 42:22]
    node _T_19 = eq(sew, asSInt(UInt<5>("h8"))) @[vlmax_cal.scala 42:37]
    node _T_20 = and(_T_18, _T_19) @[vlmax_cal.scala 42:30]
    node _T_21 = eq(lmul, asSInt(UInt<5>("h8"))) @[vlmax_cal.scala 44:22]
    node _T_22 = eq(sew, asSInt(UInt<5>("h8"))) @[vlmax_cal.scala 44:37]
    node _T_23 = and(_T_21, _T_22) @[vlmax_cal.scala 44:30]
    node _T_24 = eq(lmul, asSInt(UInt<2>("h1"))) @[vlmax_cal.scala 46:22]
    node _T_25 = eq(sew, asSInt(UInt<6>("h10"))) @[vlmax_cal.scala 46:37]
    node _T_26 = and(_T_24, _T_25) @[vlmax_cal.scala 46:30]
    node _T_27 = eq(lmul, asSInt(UInt<3>("h2"))) @[vlmax_cal.scala 48:22]
    node _T_28 = eq(sew, asSInt(UInt<6>("h10"))) @[vlmax_cal.scala 48:37]
    node _T_29 = and(_T_27, _T_28) @[vlmax_cal.scala 48:30]
    node _T_30 = eq(lmul, asSInt(UInt<4>("h4"))) @[vlmax_cal.scala 50:22]
    node _T_31 = eq(sew, asSInt(UInt<6>("h10"))) @[vlmax_cal.scala 50:37]
    node _T_32 = and(_T_30, _T_31) @[vlmax_cal.scala 50:30]
    node _T_33 = eq(lmul, asSInt(UInt<5>("h8"))) @[vlmax_cal.scala 52:22]
    node _T_34 = eq(sew, asSInt(UInt<6>("h10"))) @[vlmax_cal.scala 52:37]
    node _T_35 = and(_T_33, _T_34) @[vlmax_cal.scala 52:30]
    node _T_36 = eq(lmul, asSInt(UInt<2>("h1"))) @[vlmax_cal.scala 54:22]
    node _T_37 = eq(sew, asSInt(UInt<7>("h20"))) @[vlmax_cal.scala 54:37]
    node _T_38 = and(_T_36, _T_37) @[vlmax_cal.scala 54:30]
    node _T_39 = eq(lmul, asSInt(UInt<3>("h2"))) @[vlmax_cal.scala 56:22]
    node _T_40 = eq(sew, asSInt(UInt<7>("h20"))) @[vlmax_cal.scala 56:37]
    node _T_41 = and(_T_39, _T_40) @[vlmax_cal.scala 56:30]
    node _T_42 = eq(lmul, asSInt(UInt<4>("h4"))) @[vlmax_cal.scala 58:22]
    node _T_43 = eq(sew, asSInt(UInt<7>("h20"))) @[vlmax_cal.scala 58:37]
    node _T_44 = and(_T_42, _T_43) @[vlmax_cal.scala 58:30]
    node _T_45 = eq(lmul, asSInt(UInt<5>("h8"))) @[vlmax_cal.scala 60:22]
    node _T_46 = eq(sew, asSInt(UInt<7>("h20"))) @[vlmax_cal.scala 60:37]
    node _T_47 = and(_T_45, _T_46) @[vlmax_cal.scala 60:30]
    node _T_48 = eq(lmul, asSInt(UInt<2>("h1"))) @[vlmax_cal.scala 62:22]
    node _T_49 = eq(sew, asSInt(UInt<8>("h40"))) @[vlmax_cal.scala 62:37]
    node _T_50 = and(_T_48, _T_49) @[vlmax_cal.scala 62:30]
    node _T_51 = eq(lmul, asSInt(UInt<3>("h2"))) @[vlmax_cal.scala 64:22]
    node _T_52 = eq(sew, asSInt(UInt<8>("h40"))) @[vlmax_cal.scala 64:37]
    node _T_53 = and(_T_51, _T_52) @[vlmax_cal.scala 64:30]
    node _T_54 = eq(lmul, asSInt(UInt<4>("h4"))) @[vlmax_cal.scala 66:22]
    node _T_55 = eq(sew, asSInt(UInt<8>("h40"))) @[vlmax_cal.scala 66:37]
    node _T_56 = and(_T_54, _T_55) @[vlmax_cal.scala 66:30]
    node _T_57 = eq(lmul, asSInt(UInt<5>("h8"))) @[vlmax_cal.scala 68:22]
    node _T_58 = eq(sew, asSInt(UInt<8>("h40"))) @[vlmax_cal.scala 68:37]
    node _T_59 = and(_T_57, _T_58) @[vlmax_cal.scala 68:30]
    node _GEN_8 = mux(_T_59, asSInt(UInt<6>("h10")), asSInt(UInt<1>("h0"))) @[vlmax_cal.scala 68:47 vlmax_cal.scala 69:18 vlmax_cal.scala 71:18]
    node _GEN_9 = mux(_T_56, asSInt(UInt<5>("h8")), _GEN_8) @[vlmax_cal.scala 66:47 vlmax_cal.scala 67:18]
    node _GEN_10 = mux(_T_53, asSInt(UInt<4>("h4")), _GEN_9) @[vlmax_cal.scala 64:47 vlmax_cal.scala 65:18]
    node _GEN_11 = mux(_T_50, asSInt(UInt<3>("h2")), _GEN_10) @[vlmax_cal.scala 62:47 vlmax_cal.scala 63:18]
    node _GEN_12 = mux(_T_47, asSInt(UInt<7>("h20")), _GEN_11) @[vlmax_cal.scala 60:47 vlmax_cal.scala 61:18]
    node _GEN_13 = mux(_T_44, asSInt(UInt<6>("h10")), _GEN_12) @[vlmax_cal.scala 58:47 vlmax_cal.scala 59:18]
    node _GEN_14 = mux(_T_41, asSInt(UInt<5>("h8")), _GEN_13) @[vlmax_cal.scala 56:47 vlmax_cal.scala 57:18]
    node _GEN_15 = mux(_T_38, asSInt(UInt<4>("h4")), _GEN_14) @[vlmax_cal.scala 54:47 vlmax_cal.scala 55:18]
    node _GEN_16 = mux(_T_35, asSInt(UInt<8>("h40")), _GEN_15) @[vlmax_cal.scala 52:47 vlmax_cal.scala 53:18]
    node _GEN_17 = mux(_T_32, asSInt(UInt<7>("h20")), _GEN_16) @[vlmax_cal.scala 50:47 vlmax_cal.scala 51:18]
    node _GEN_18 = mux(_T_29, asSInt(UInt<6>("h10")), _GEN_17) @[vlmax_cal.scala 48:47 vlmax_cal.scala 49:18]
    node _GEN_19 = mux(_T_26, asSInt(UInt<5>("h8")), _GEN_18) @[vlmax_cal.scala 46:47 vlmax_cal.scala 47:18]
    node _GEN_20 = mux(_T_23, asSInt(UInt<9>("h80")), _GEN_19) @[vlmax_cal.scala 44:46 vlmax_cal.scala 45:18]
    node _GEN_21 = mux(_T_20, asSInt(UInt<8>("h40")), _GEN_20) @[vlmax_cal.scala 42:46 vlmax_cal.scala 43:18]
    node _GEN_22 = mux(_T_17, asSInt(UInt<7>("h20")), _GEN_21) @[vlmax_cal.scala 40:46 vlmax_cal.scala 41:18]
    node _GEN_23 = mux(_T_14, asSInt(UInt<6>("h10")), _GEN_22) @[vlmax_cal.scala 38:40 vlmax_cal.scala 39:18]
    io_vlmax <= _GEN_23

  module v_csr :
    input clock : Clock
    input reset : UInt<1>
    input io_zimm : UInt<11>
    output io_vl_out : UInt<32>

    node vtype_encod_hi = mux(UInt<1>("h0"), UInt<20>("hfffff"), UInt<20>("h0")) @[Bitwise.scala 72:12]
    node vtype_encod = cat(vtype_encod_hi, io_zimm) @[Cat.scala 30:58]
    reg vtypeReg : UInt<31>, clock with :
      reset => (UInt<1>("h0"), vtypeReg) @[csr.scala 15:27]
    reg vlReg : UInt<32>, clock with :
      reset => (UInt<1>("h0"), vlReg) @[csr.scala 16:24]
    io_vl_out <= vlReg @[csr.scala 20:15]
    vtypeReg <= mux(reset, vtype_encod, vtypeReg) @[csr.scala 15:27 csr.scala 15:27 csr.scala 15:27]
    vlReg <= mux(reset, UInt<32>("h1"), vlReg) @[csr.scala 16:24 csr.scala 16:24 csr.scala 16:24]

  module top :
    input clock : Clock
    input reset : UInt<1>
    output io_instruction : UInt<32>
    output io_out : SInt<32>

    inst pC_mod of pC @[Top_File.scala 12:24]
    inst dataMem_mod of dataMemory @[Top_File.scala 14:29]
    inst instrMem_mod of instrMem @[Top_File.scala 16:30]
    inst control_mod of control @[Top_File.scala 18:29]
    inst immdGen_mod of immdValGen @[Top_File.scala 20:29]
    inst aluControl_mod of aluControl @[Top_File.scala 22:32]
    inst alu_mod of ALU @[Top_File.scala 24:25]
    inst regFile_mod of regFile @[Top_File.scala 26:29]
    inst brControl_mod of branchControl @[Top_File.scala 28:31]
    inst jalr_mod of jalr @[Top_File.scala 30:26]
    inst vlmax_mod of Vlmax @[Top_File.scala 32:27]
    inst csr_mod of v_csr @[Top_File.scala 34:25]
    node _instrMem_mod_io_addr_T = bits(pC_mod.io_out, 21, 2) @[Top_File.scala 38:42]
    node _control_mod_io_op_code_T = bits(io_instruction, 6, 0) @[Top_File.scala 40:45]
    node _control_mod_io_rs1_addr_T = bits(io_instruction, 19, 15) @[Top_File.scala 41:46]
    node _control_mod_io_rd_addr_T = bits(io_instruction, 11, 7) @[Top_File.scala 42:45]
    node _control_mod_io_func3_T = bits(io_instruction, 14, 12) @[Top_File.scala 43:44]
    node _imm_mux_T = eq(UInt<1>("h1"), control_mod.io_extend_Sel) @[Mux.scala 80:60]
    node _imm_mux_T_1 = mux(_imm_mux_T, immdGen_mod.io_s_imm, immdGen_mod.io_i_imm) @[Mux.scala 80:57]
    node _imm_mux_T_2 = eq(UInt<2>("h2"), control_mod.io_extend_Sel) @[Mux.scala 80:60]
    node _imm_mux_T_3 = mux(_imm_mux_T_2, immdGen_mod.io_u_imm, _imm_mux_T_1) @[Mux.scala 80:57]
    node _imm_mux_T_4 = eq(UInt<2>("h3"), control_mod.io_extend_Sel) @[Mux.scala 80:60]
    node imm_mux = mux(_imm_mux_T_4, asSInt(UInt<1>("h0")), _imm_mux_T_3) @[Mux.scala 80:57]
    node _csr_mod_io_zimm_T = bits(io_instruction, 30, 20) @[Top_File.scala 56:38]
    node lmul = bits(instrMem_mod.io_instr, 22, 20) @[Top_File.scala 59:37]
    node sew = bits(instrMem_mod.io_instr, 25, 23) @[Top_File.scala 60:36]
    node func3 = bits(io_instruction, 14, 12) @[Top_File.scala 66:31]
    node func7 = bits(io_instruction, 31, 25) @[Top_File.scala 67:31]
    node _aluControl_mod_io_func7_T = bits(func7, 5, 5) @[Top_File.scala 69:37]
    node _regFile_mod_io_rs1_addr_T = bits(io_instruction, 19, 15) @[Top_File.scala 74:46]
    node _regFile_mod_io_rs2_addr_T = bits(io_instruction, 24, 20) @[Top_File.scala 75:46]
    node _regFile_mod_io_rd_addr_T = bits(io_instruction, 11, 7) @[Top_File.scala 76:45]
    node _avl_mux_T = asUInt(regFile_mod.io_rs1) @[Top_File.scala 80:43]
    node _avl_mux_T_1 = eq(UInt<1>("h0"), control_mod.io_avl_sel) @[Mux.scala 80:60]
    node _avl_mux_T_2 = mux(_avl_mux_T_1, _avl_mux_T, UInt<1>("h0")) @[Mux.scala 80:57]
    node _avl_mux_T_3 = eq(UInt<1>("h1"), control_mod.io_avl_sel) @[Mux.scala 80:60]
    node _avl_mux_T_4 = mux(_avl_mux_T_3, UInt<32>("hffffffff"), _avl_mux_T_2) @[Mux.scala 80:57]
    node _avl_mux_T_5 = eq(UInt<2>("h2"), control_mod.io_avl_sel) @[Mux.scala 80:60]
    node avl_mux = mux(_avl_mux_T_5, csr_mod.io_vl_out, _avl_mux_T_4) @[Mux.scala 80:57]
    node _readData1Mux_T = asSInt(avl_mux) @[Top_File.scala 91:33]
    node _readData1Mux_T_1 = eq(UInt<1>("h0"), control_mod.io_operand_A) @[Mux.scala 80:60]
    node _readData1Mux_T_2 = mux(_readData1Mux_T_1, regFile_mod.io_rs1, asSInt(UInt<1>("h0"))) @[Mux.scala 80:57]
    node _readData1Mux_T_3 = eq(UInt<1>("h1"), control_mod.io_operand_A) @[Mux.scala 80:60]
    node _readData1Mux_T_4 = mux(_readData1Mux_T_3, pC_mod.io_pc4, _readData1Mux_T_2) @[Mux.scala 80:57]
    node _readData1Mux_T_5 = eq(UInt<2>("h2"), control_mod.io_operand_A) @[Mux.scala 80:60]
    node _readData1Mux_T_6 = mux(_readData1Mux_T_5, pC_mod.io_out, _readData1Mux_T_4) @[Mux.scala 80:57]
    node _readData1Mux_T_7 = eq(UInt<2>("h3"), control_mod.io_operand_A) @[Mux.scala 80:60]
    node _readData1Mux_T_8 = mux(_readData1Mux_T_7, regFile_mod.io_rs1, _readData1Mux_T_6) @[Mux.scala 80:57]
    node _readData1Mux_T_9 = eq(UInt<3>("h4"), control_mod.io_operand_A) @[Mux.scala 80:60]
    node readData1Mux = mux(_readData1Mux_T_9, _readData1Mux_T, _readData1Mux_T_8) @[Mux.scala 80:57]
    node _readData2Mux_T = eq(UInt<1>("h0"), control_mod.io_operand_B) @[Mux.scala 80:60]
    node _readData2Mux_WIRE = validif(UInt<1>("h0"), SInt<32>("h0"))
    node _readData2Mux_T_1 = mux(_readData2Mux_T, regFile_mod.io_rs2, _readData2Mux_WIRE) @[Mux.scala 80:57]
    node _readData2Mux_T_2 = eq(UInt<1>("h1"), control_mod.io_operand_B) @[Mux.scala 80:60]
    node _readData2Mux_T_3 = mux(_readData2Mux_T_2, imm_mux, _readData2Mux_T_1) @[Mux.scala 80:57]
    node _readData2Mux_T_4 = eq(UInt<2>("h2"), control_mod.io_operand_B) @[Mux.scala 80:60]
    node readData2Mux = mux(_readData2Mux_T_4, vlmax_mod.io_vlmax, _readData2Mux_T_3) @[Mux.scala 80:57]
    node _dataMem_mod_io_rdAddr_T = bits(alu_mod.io_out, 11, 2) @[Top_File.scala 110:44]
    node _dataMem_mux_T = bits(control_mod.io_memToReg, 0, 0) @[Top_File.scala 115:57]
    node dataMem_mux = mux(_dataMem_mux_T, dataMem_mod.io_dataOut, alu_mod.io_out) @[Top_File.scala 115:26]
    node _branch_and_T = bits(brControl_mod.io_branch_out, 0, 0) @[Top_File.scala 118:80]
    node branch_and = and(control_mod.io_branch, _branch_and_T) @[Top_File.scala 118:44]
    node _jalr_mod_io_rs1_T = asUInt(regFile_mod.io_rs1) @[Top_File.scala 119:49]
    node _jalr_mod_io_imm_T = asUInt(imm_mux) @[Top_File.scala 120:38]
    node _branchMux_T = bits(branch_and, 0, 0) @[Top_File.scala 121:42]
    node branchMux = mux(_branchMux_T, immdGen_mod.io_sb_imm, pC_mod.io_pc4) @[Top_File.scala 121:24]
    node _pc_mux_T = asSInt(jalr_mod.io_pcVal) @[Top_File.scala 126:42]
    node _pc_mux_T_1 = eq(UInt<1>("h1"), control_mod.io_nextPc_Sel) @[Mux.scala 80:60]
    node _pc_mux_T_2 = mux(_pc_mux_T_1, branchMux, pC_mod.io_pc4) @[Mux.scala 80:57]
    node _pc_mux_T_3 = eq(UInt<2>("h2"), control_mod.io_nextPc_Sel) @[Mux.scala 80:60]
    node _pc_mux_T_4 = mux(_pc_mux_T_3, immdGen_mod.io_uj_imm, _pc_mux_T_2) @[Mux.scala 80:57]
    node _pc_mux_T_5 = eq(UInt<2>("h3"), control_mod.io_nextPc_Sel) @[Mux.scala 80:60]
    node pc_mux = mux(_pc_mux_T_5, _pc_mux_T, _pc_mux_T_4) @[Mux.scala 80:57]
    io_instruction <= instrMem_mod.io_instr @[Top_File.scala 39:20]
    io_out <= regFile_mod.io_rs1 @[Top_File.scala 129:12]
    pC_mod.clock <= clock
    pC_mod.reset <= reset
    pC_mod.io_in <= pc_mux @[Top_File.scala 128:18]
    dataMem_mod.clock <= clock
    dataMem_mod.reset <= reset
    dataMem_mod.io_writeData <= control_mod.io_memWrite @[Top_File.scala 112:30]
    dataMem_mod.io_readData <= control_mod.io_memRead @[Top_File.scala 113:29]
    dataMem_mod.io_rdAddr <= _dataMem_mod_io_rdAddr_T @[Top_File.scala 110:27]
    dataMem_mod.io_dataIn <= regFile_mod.io_rs2 @[Top_File.scala 111:27]
    instrMem_mod.clock <= clock
    instrMem_mod.reset <= reset
    instrMem_mod.io_addr <= _instrMem_mod_io_addr_T @[Top_File.scala 38:26]
    control_mod.clock <= clock
    control_mod.reset <= reset
    control_mod.io_op_code <= _control_mod_io_op_code_T @[Top_File.scala 40:28]
    control_mod.io_func3 <= _control_mod_io_func3_T @[Top_File.scala 43:26]
    control_mod.io_rs1_addr <= _control_mod_io_rs1_addr_T @[Top_File.scala 41:29]
    control_mod.io_rd_addr <= _control_mod_io_rd_addr_T @[Top_File.scala 42:28]
    immdGen_mod.clock <= clock
    immdGen_mod.reset <= reset
    immdGen_mod.io_instr <= io_instruction @[Top_File.scala 46:26]
    immdGen_mod.io_pc <= pC_mod.io_out @[Top_File.scala 47:23]
    aluControl_mod.clock <= clock
    aluControl_mod.reset <= reset
    aluControl_mod.io_alu_Operation <= control_mod.io_alu_Operation @[Top_File.scala 65:37]
    aluControl_mod.io_func3 <= func3 @[Top_File.scala 68:29]
    aluControl_mod.io_func7 <= _aluControl_mod_io_func7_T @[Top_File.scala 69:29]
    aluControl_mod.io_is_I <= control_mod.io_is_I @[Top_File.scala 71:28]
    aluControl_mod.io_is_V <= control_mod.io_is_V @[Top_File.scala 70:28]
    alu_mod.clock <= clock
    alu_mod.reset <= reset
    alu_mod.io_in_A <= readData1Mux @[Top_File.scala 100:21]
    alu_mod.io_in_B <= readData2Mux @[Top_File.scala 101:21]
    alu_mod.io_alu_Op <= aluControl_mod.io_out @[Top_File.scala 102:23]
    alu_mod.io_in_V <= aluControl_mod.io_out_V @[Top_File.scala 106:21]
    alu_mod.io_in_I <= aluControl_mod.io_out_I @[Top_File.scala 107:21]
    regFile_mod.clock <= clock
    regFile_mod.reset <= reset
    regFile_mod.io_writeData <= dataMem_mux @[Top_File.scala 116:30]
    regFile_mod.io_rs1_addr <= _regFile_mod_io_rs1_addr_T @[Top_File.scala 74:29]
    regFile_mod.io_rs2_addr <= _regFile_mod_io_rs2_addr_T @[Top_File.scala 75:29]
    regFile_mod.io_rd_addr <= _regFile_mod_io_rd_addr_T @[Top_File.scala 76:28]
    brControl_mod.clock <= clock
    brControl_mod.reset <= reset
    brControl_mod.io_in_A <= readData1Mux @[Top_File.scala 103:27]
    brControl_mod.io_in_B <= readData2Mux @[Top_File.scala 104:27]
    brControl_mod.io_br_Op <= bits(aluControl_mod.io_out, 4, 0) @[Top_File.scala 105:28]
    jalr_mod.clock <= clock
    jalr_mod.reset <= reset
    jalr_mod.io_rs1 <= _jalr_mod_io_rs1_T @[Top_File.scala 119:21]
    jalr_mod.io_imm <= _jalr_mod_io_imm_T @[Top_File.scala 120:21]
    vlmax_mod.clock <= clock
    vlmax_mod.reset <= reset
    vlmax_mod.io_v_lmul <= lmul @[Top_File.scala 61:25]
    vlmax_mod.io_v_sew <= sew @[Top_File.scala 62:24]
    csr_mod.clock <= clock
    csr_mod.reset <= reset
    csr_mod.io_zimm <= _csr_mod_io_zimm_T @[Top_File.scala 56:21]
