circuit Top :
  module pc :
    input clock : Clock
    input reset : UInt<1>
    input io_input : UInt<32>
    output io_pc4 : UInt<32>
    output io_pc : UInt<32>

    reg reg : UInt<32>, clock with :
      reset => (UInt<1>("h0"), reg) @[pc.scala 10:26]
    node _io_pc4_T = add(reg, UInt<3>("h4")) @[pc.scala 12:23]
    node _io_pc4_T_1 = tail(_io_pc4_T, 1) @[pc.scala 12:23]
    io_pc4 <= _io_pc4_T_1 @[pc.scala 12:16]
    io_pc <= reg @[pc.scala 13:15]
    reg <= mux(reset, UInt<32>("h0"), io_input) @[pc.scala 10:26 pc.scala 10:26 pc.scala 11:9]

  module ALU_ :
    input clock : Clock
    input reset : UInt<1>
    input io_in_A : SInt<32>
    input io_in_B : SInt<32>
    input io_aluc : UInt<5>
    output io_output : SInt<32>

    node _T = eq(io_aluc, UInt<1>("h0")) @[alu.scala 50:22]
    node _T_1 = eq(io_aluc, UInt<1>("h0")) @[alu.scala 50:44]
    node _T_2 = or(_T, _T_1) @[alu.scala 50:34]
    node _io_output_T = add(io_in_A, io_in_B) @[alu.scala 51:38]
    node _io_output_T_1 = tail(_io_output_T, 1) @[alu.scala 51:38]
    node _io_output_T_2 = asSInt(_io_output_T_1) @[alu.scala 51:38]
    node _T_3 = eq(io_aluc, UInt<1>("h1")) @[alu.scala 52:28]
    node _T_4 = eq(io_aluc, UInt<1>("h1")) @[alu.scala 52:50]
    node _T_5 = or(_T_3, _T_4) @[alu.scala 52:40]
    node _io_output_T_3 = bits(io_in_B, 4, 0) @[alu.scala 53:48]
    node _io_output_T_4 = dshl(io_in_A, _io_output_T_3) @[alu.scala 53:38]
    node _T_6 = eq(io_aluc, UInt<2>("h2")) @[alu.scala 54:28]
    node _T_7 = eq(io_aluc, UInt<2>("h2")) @[alu.scala 54:51]
    node _T_8 = or(_T_6, _T_7) @[alu.scala 54:40]
    node _T_9 = lt(io_in_A, io_in_B) @[alu.scala 55:30]
    node _GEN_0 = mux(_T_9, asSInt(UInt<2>("h1")), asSInt(UInt<1>("h0"))) @[alu.scala 55:40 alu.scala 56:35 alu.scala 58:35]
    node _T_10 = eq(io_aluc, UInt<2>("h3")) @[alu.scala 60:28]
    node _T_11 = eq(io_aluc, UInt<2>("h3")) @[alu.scala 60:51]
    node _T_12 = or(_T_10, _T_11) @[alu.scala 60:41]
    node Ua = asUInt(io_in_A) @[alu.scala 61:34]
    node Ub = asUInt(io_in_B) @[alu.scala 62:34]
    node _T_13 = lt(Ua, Ub) @[alu.scala 63:25]
    node _GEN_1 = mux(_T_13, asSInt(UInt<2>("h1")), asSInt(UInt<1>("h0"))) @[alu.scala 63:30 alu.scala 64:35 alu.scala 66:35]
    node _T_14 = eq(io_aluc, UInt<3>("h4")) @[alu.scala 68:28]
    node _T_15 = eq(io_aluc, UInt<3>("h4")) @[alu.scala 68:50]
    node _T_16 = or(_T_14, _T_15) @[alu.scala 68:40]
    node _io_output_T_5 = xor(io_in_A, io_in_B) @[alu.scala 69:38]
    node _io_output_T_6 = asSInt(_io_output_T_5) @[alu.scala 69:38]
    node _T_17 = eq(io_aluc, UInt<3>("h5")) @[alu.scala 70:28]
    node _T_18 = eq(io_aluc, UInt<3>("h5")) @[alu.scala 70:51]
    node _T_19 = or(_T_17, _T_18) @[alu.scala 70:40]
    node _shift_T = asUInt(io_in_A) @[alu.scala 72:37]
    node _shift_T_1 = bits(io_in_B, 4, 0) @[alu.scala 72:55]
    node shift = dshr(_shift_T, _shift_T_1) @[alu.scala 72:44]
    node _io_output_T_7 = asSInt(shift) @[alu.scala 73:36]
    node _T_20 = eq(io_aluc, UInt<3>("h6")) @[alu.scala 74:28]
    node _T_21 = eq(io_aluc, UInt<3>("h6")) @[alu.scala 74:50]
    node _T_22 = or(_T_20, _T_21) @[alu.scala 74:39]
    node _io_output_T_8 = or(io_in_A, io_in_B) @[alu.scala 75:38]
    node _io_output_T_9 = asSInt(_io_output_T_8) @[alu.scala 75:38]
    node _T_23 = eq(io_aluc, UInt<3>("h7")) @[alu.scala 76:28]
    node _T_24 = eq(io_aluc, UInt<3>("h7")) @[alu.scala 76:51]
    node _T_25 = or(_T_23, _T_24) @[alu.scala 76:40]
    node _io_output_T_10 = and(io_in_A, io_in_B) @[alu.scala 77:38]
    node _io_output_T_11 = asSInt(_io_output_T_10) @[alu.scala 77:38]
    node _T_26 = eq(io_aluc, UInt<4>("h8")) @[alu.scala 78:28]
    node _io_output_T_12 = sub(io_in_A, io_in_B) @[alu.scala 79:38]
    node _io_output_T_13 = tail(_io_output_T_12, 1) @[alu.scala 79:38]
    node _io_output_T_14 = asSInt(_io_output_T_13) @[alu.scala 79:38]
    node _T_27 = eq(io_aluc, UInt<4>("hd")) @[alu.scala 80:28]
    node _T_28 = eq(io_aluc, UInt<3>("h5")) @[alu.scala 80:51]
    node _T_29 = or(_T_27, _T_28) @[alu.scala 80:40]
    node _io_output_T_15 = bits(io_in_B, 4, 0) @[alu.scala 81:49]
    node _io_output_T_16 = dshr(io_in_A, _io_output_T_15) @[alu.scala 81:39]
    node _T_30 = eq(io_aluc, UInt<5>("h1f")) @[alu.scala 82:28]
    node _GEN_2 = mux(_T_30, io_in_A, asSInt(UInt<1>("h0"))) @[alu.scala 82:43 alu.scala 83:27 alu.scala 48:14]
    node _GEN_3 = mux(_T_29, _io_output_T_16, _GEN_2) @[alu.scala 80:64 alu.scala 81:27]
    node _GEN_4 = mux(_T_26, _io_output_T_14, _GEN_3) @[alu.scala 78:40 alu.scala 79:27]
    node _GEN_5 = mux(_T_25, _io_output_T_11, _GEN_4) @[alu.scala 76:65 alu.scala 77:27]
    node _GEN_6 = mux(_T_22, _io_output_T_9, _GEN_5) @[alu.scala 74:63 alu.scala 75:27]
    node _GEN_7 = mux(_T_19, _io_output_T_7, _GEN_6) @[alu.scala 70:65 alu.scala 73:27]
    node _GEN_8 = mux(_T_16, _io_output_T_6, _GEN_7) @[alu.scala 68:64 alu.scala 69:27]
    node _GEN_9 = mux(_T_12, _GEN_1, _GEN_8) @[alu.scala 60:65]
    node _GEN_10 = mux(_T_8, _GEN_0, _GEN_9) @[alu.scala 54:65]
    node _GEN_11 = mux(_T_5, _io_output_T_4, _GEN_10) @[alu.scala 52:64 alu.scala 53:26]
    node _GEN_12 = mux(_T_2, _io_output_T_2, _GEN_11) @[alu.scala 50:58 alu.scala 51:27]
    io_output <= asSInt(bits(_GEN_12, 31, 0))

  module alucontrol :
    input clock : Clock
    input reset : UInt<1>
    input io_aluOp : UInt<3>
    input io_func3 : UInt<3>
    input io_func7 : UInt<1>
    output io_aluc : UInt<5>

    node _T = eq(io_aluOp, UInt<1>("h0")) @[alucontrol.scala 17:24]
    node io_aluc_hi = cat(UInt<1>("h0"), io_func7) @[Cat.scala 30:58]
    node _io_aluc_T = cat(io_aluc_hi, io_func3) @[Cat.scala 30:58]
    node _T_1 = eq(io_aluOp, UInt<1>("h1")) @[alucontrol.scala 18:27]
    node _io_aluc_T_1 = cat(UInt<1>("h0"), io_func3) @[Cat.scala 30:58]
    node _T_2 = eq(io_aluOp, UInt<3>("h5")) @[alucontrol.scala 19:26]
    node _T_3 = eq(io_aluOp, UInt<3>("h4")) @[alucontrol.scala 19:51]
    node _T_4 = or(_T_2, _T_3) @[alucontrol.scala 19:39]
    node _T_5 = eq(io_aluOp, UInt<2>("h3")) @[alucontrol.scala 20:27]
    node _T_6 = eq(io_aluOp, UInt<2>("h2")) @[alucontrol.scala 21:27]
    node _io_aluc_T_2 = cat(UInt<2>("h2"), io_func3) @[Cat.scala 30:58]
    node _T_7 = eq(io_aluOp, UInt<3>("h6")) @[alucontrol.scala 22:26]
    node _GEN_0 = mux(_T_7, UInt<1>("h0"), UInt<1>("h0")) @[alucontrol.scala 22:39 alucontrol.scala 22:48 alucontrol.scala 15:17]
    node _GEN_1 = mux(_T_6, _io_aluc_T_2, _GEN_0) @[alucontrol.scala 21:40 alucontrol.scala 21:49]
    node _GEN_2 = mux(_T_5, UInt<5>("h1f"), _GEN_1) @[alucontrol.scala 20:40 alucontrol.scala 20:49]
    node _GEN_3 = mux(_T_4, UInt<1>("h0"), _GEN_2) @[alucontrol.scala 19:64 alucontrol.scala 19:73]
    node _GEN_4 = mux(_T_1, _io_aluc_T_1, _GEN_3) @[alucontrol.scala 18:41 alucontrol.scala 18:50]
    node _GEN_5 = mux(_T, _io_aluc_T, _GEN_4) @[alucontrol.scala 17:37 alucontrol.scala 17:46]
    io_aluc <= _GEN_5

  module BranchControl_ :
    input clock : Clock
    input reset : UInt<1>
    input io_aluc : UInt<5>
    input io_branch : UInt<1>
    input io_arg_x : SInt<32>
    input io_arg_y : SInt<32>
    output io_br_taken : UInt<1>

    node _T = eq(UInt<5>("h10"), io_aluc) @[Conditional.scala 37:30]
    node _T_1 = eq(io_arg_x, io_arg_y) @[branchcontrol.scala 29:16]
    node _io_br_taken_T = and(UInt<1>("h1"), io_branch) @[branchcontrol.scala 30:24]
    node _io_br_taken_T_1 = and(UInt<1>("h0"), io_branch) @[branchcontrol.scala 32:20]
    node _GEN_0 = mux(_T_1, _io_br_taken_T, _io_br_taken_T_1) @[branchcontrol.scala 29:29 branchcontrol.scala 30:17 branchcontrol.scala 32:13]
    node _T_2 = eq(UInt<5>("h13"), io_aluc) @[Conditional.scala 37:30]
    node _T_3 = neq(io_arg_x, io_arg_y) @[branchcontrol.scala 35:16]
    node _io_br_taken_T_2 = and(UInt<1>("h1"), io_branch) @[branchcontrol.scala 36:24]
    node _io_br_taken_T_3 = and(UInt<1>("h0"), io_branch) @[branchcontrol.scala 38:20]
    node _GEN_1 = mux(_T_3, _io_br_taken_T_2, _io_br_taken_T_3) @[branchcontrol.scala 35:29 branchcontrol.scala 36:17 branchcontrol.scala 38:13]
    node _T_4 = eq(UInt<5>("h14"), io_aluc) @[Conditional.scala 37:30]
    node _T_5 = lt(io_arg_x, io_arg_y) @[branchcontrol.scala 41:16]
    node _io_br_taken_T_4 = and(UInt<1>("h1"), io_branch) @[branchcontrol.scala 42:24]
    node _io_br_taken_T_5 = and(UInt<1>("h0"), io_branch) @[branchcontrol.scala 44:20]
    node _GEN_2 = mux(_T_5, _io_br_taken_T_4, _io_br_taken_T_5) @[branchcontrol.scala 41:27 branchcontrol.scala 42:17 branchcontrol.scala 44:13]
    node _T_6 = eq(UInt<5>("h15"), io_aluc) @[Conditional.scala 37:30]
    node _T_7 = geq(io_arg_x, io_arg_y) @[branchcontrol.scala 47:16]
    node _io_br_taken_T_6 = and(UInt<1>("h1"), io_branch) @[branchcontrol.scala 48:24]
    node _io_br_taken_T_7 = and(UInt<1>("h0"), io_branch) @[branchcontrol.scala 50:19]
    node _GEN_3 = mux(_T_7, _io_br_taken_T_6, _io_br_taken_T_7) @[branchcontrol.scala 47:28 branchcontrol.scala 48:17 branchcontrol.scala 50:13]
    node _T_8 = eq(UInt<5>("h16"), io_aluc) @[Conditional.scala 37:30]
    node _T_9 = leq(io_arg_x, io_arg_y) @[branchcontrol.scala 53:16]
    node _io_br_taken_T_8 = and(UInt<1>("h1"), io_branch) @[branchcontrol.scala 54:24]
    node _io_br_taken_T_9 = and(UInt<1>("h0"), io_branch) @[branchcontrol.scala 56:20]
    node _GEN_4 = mux(_T_9, _io_br_taken_T_8, _io_br_taken_T_9) @[branchcontrol.scala 53:28 branchcontrol.scala 54:17 branchcontrol.scala 56:13]
    node _T_10 = eq(UInt<5>("h17"), io_aluc) @[Conditional.scala 37:30]
    node _T_11 = geq(io_arg_x, io_arg_y) @[branchcontrol.scala 59:16]
    node _io_br_taken_T_10 = and(UInt<1>("h1"), io_branch) @[branchcontrol.scala 60:24]
    node _io_br_taken_T_11 = and(UInt<1>("h0"), io_branch) @[branchcontrol.scala 62:20]
    node _GEN_5 = mux(_T_11, _io_br_taken_T_10, _io_br_taken_T_11) @[branchcontrol.scala 59:28 branchcontrol.scala 60:17 branchcontrol.scala 62:13]
    node _GEN_6 = mux(_T_10, _GEN_5, UInt<1>("h0")) @[Conditional.scala 39:67 branchcontrol.scala 26:13]
    node _GEN_7 = mux(_T_8, _GEN_4, _GEN_6) @[Conditional.scala 39:67]
    node _GEN_8 = mux(_T_6, _GEN_3, _GEN_7) @[Conditional.scala 39:67]
    node _GEN_9 = mux(_T_4, _GEN_2, _GEN_8) @[Conditional.scala 39:67]
    node _GEN_10 = mux(_T_2, _GEN_1, _GEN_9) @[Conditional.scala 39:67]
    node _GEN_11 = mux(_T, _GEN_0, _GEN_10) @[Conditional.scala 40:58]
    io_br_taken <= _GEN_11

  module controldec :
    input clock : Clock
    input reset : UInt<1>
    input io_Instruction : UInt<32>
    output io_MemWrite : UInt<1>
    output io_Branch : UInt<1>
    output io_MemRead : UInt<1>
    output io_RegWrite : UInt<1>
    output io_Mem2Reg : UInt<1>
    output io_opAsel : UInt<2>
    output io_opBsel : UInt<1>
    output io_Ex_sel : UInt<2>
    output io_nextPCsel : UInt<2>
    output io_aluop : UInt<3>
    output io_vset : UInt<1>

    node configtype = bits(io_Instruction, 31, 30) @[controldecoder.scala 33:44]
    node opcode = bits(io_Instruction, 6, 0) @[controldecoder.scala 34:40]
    node _T = eq(UInt<6>("h33"), opcode) @[Conditional.scala 37:30]
    node _T_1 = eq(UInt<5>("h13"), opcode) @[Conditional.scala 37:30]
    node _T_2 = eq(UInt<6>("h23"), opcode) @[Conditional.scala 37:30]
    node _T_3 = eq(UInt<2>("h3"), opcode) @[Conditional.scala 37:30]
    node _T_4 = eq(UInt<7>("h63"), opcode) @[Conditional.scala 37:30]
    node _T_5 = eq(UInt<7>("h6f"), opcode) @[Conditional.scala 37:30]
    node _T_6 = eq(UInt<7>("h67"), opcode) @[Conditional.scala 37:30]
    node _T_7 = eq(UInt<6>("h37"), opcode) @[Conditional.scala 37:30]
    node _T_8 = eq(UInt<7>("h57"), opcode) @[Conditional.scala 37:30]
    node _T_9 = eq(configtype, UInt<1>("h0")) @[controldecoder.scala 141:30]
    node _T_10 = eq(configtype, UInt<1>("h1")) @[controldecoder.scala 141:55]
    node _T_11 = or(_T_9, _T_10) @[controldecoder.scala 141:41]
    node _T_12 = eq(configtype, UInt<2>("h2")) @[controldecoder.scala 155:34]
    node _GEN_0 = mux(_T_12, UInt<1>("h1"), UInt<1>("h1")) @[controldecoder.scala 155:45 controldecoder.scala 156:28 controldecoder.scala 168:28]
    node _GEN_1 = mux(_T_12, UInt<1>("h1"), UInt<1>("h0")) @[controldecoder.scala 155:45 controldecoder.scala 157:25 controldecoder.scala 173:25]
    node _GEN_2 = mux(_T_12, UInt<1>("h0"), UInt<1>("h0")) @[controldecoder.scala 155:45 controldecoder.scala 159:28 controldecoder.scala 169:28]
    node _GEN_3 = mux(_T_12, UInt<2>("h3"), UInt<2>("h3")) @[controldecoder.scala 155:45 controldecoder.scala 164:26 controldecoder.scala 176:26]
    node _GEN_4 = mux(_T_11, UInt<1>("h1"), _GEN_0) @[controldecoder.scala 141:67 controldecoder.scala 142:28]
    node _GEN_5 = mux(_T_11, UInt<1>("h1"), _GEN_1) @[controldecoder.scala 141:67 controldecoder.scala 143:25]
    node _GEN_6 = mux(_T_11, UInt<1>("h0"), _GEN_2) @[controldecoder.scala 141:67 controldecoder.scala 145:28]
    node _GEN_7 = mux(_T_11, UInt<2>("h3"), _GEN_3) @[controldecoder.scala 141:67 controldecoder.scala 150:26]
    node _GEN_8 = mux(_T_8, UInt<1>("h1"), UInt<1>("h1")) @[Conditional.scala 39:67 controldecoder.scala 140:21 controldecoder.scala 31:13]
    node _GEN_9 = mux(_T_8, _GEN_4, UInt<1>("h0")) @[Conditional.scala 39:67 controldecoder.scala 24:17]
    node _GEN_10 = mux(_T_8, _GEN_5, UInt<3>("h7")) @[Conditional.scala 39:67 controldecoder.scala 30:14]
    node _GEN_11 = mux(_T_8, _GEN_5, UInt<1>("h0")) @[Conditional.scala 39:67 controldecoder.scala 27:15]
    node _GEN_12 = mux(_T_8, _GEN_6, UInt<1>("h0")) @[Conditional.scala 39:67 controldecoder.scala 21:17]
    node _GEN_13 = mux(_T_8, _GEN_7, UInt<1>("h0")) @[Conditional.scala 39:67 controldecoder.scala 28:15]
    node _GEN_14 = mux(_T_7, UInt<1>("h0"), _GEN_12) @[Conditional.scala 39:67 controldecoder.scala 127:26]
    node _GEN_15 = mux(_T_7, UInt<1>("h1"), _GEN_9) @[Conditional.scala 39:67 controldecoder.scala 130:26]
    node _GEN_16 = mux(_T_7, UInt<2>("h2"), _GEN_12) @[Conditional.scala 39:67 controldecoder.scala 132:24]
    node _GEN_17 = mux(_T_7, UInt<1>("h1"), _GEN_11) @[Conditional.scala 39:67 controldecoder.scala 133:24]
    node _GEN_18 = mux(_T_7, UInt<2>("h2"), _GEN_13) @[Conditional.scala 39:67 controldecoder.scala 134:24]
    node _GEN_19 = mux(_T_7, UInt<3>("h6"), _GEN_10) @[Conditional.scala 39:67 controldecoder.scala 136:22]
    node _GEN_20 = mux(_T_7, UInt<1>("h0"), _GEN_8) @[Conditional.scala 39:67 controldecoder.scala 137:21]
    node _GEN_21 = mux(_T_6, UInt<1>("h0"), _GEN_14) @[Conditional.scala 39:67 controldecoder.scala 114:26]
    node _GEN_22 = mux(_T_6, UInt<1>("h1"), _GEN_15) @[Conditional.scala 39:67 controldecoder.scala 117:26]
    node _GEN_23 = mux(_T_6, UInt<1>("h1"), _GEN_16) @[Conditional.scala 39:67 controldecoder.scala 119:24]
    node _GEN_24 = mux(_T_6, UInt<1>("h1"), _GEN_17) @[Conditional.scala 39:67 controldecoder.scala 120:24]
    node _GEN_25 = mux(_T_6, UInt<1>("h0"), _GEN_18) @[Conditional.scala 39:67 controldecoder.scala 121:24]
    node _GEN_26 = mux(_T_6, UInt<2>("h3"), _GEN_14) @[Conditional.scala 39:67 controldecoder.scala 122:26]
    node _GEN_27 = mux(_T_6, UInt<2>("h3"), _GEN_19) @[Conditional.scala 39:67 controldecoder.scala 123:22]
    node _GEN_28 = mux(_T_6, UInt<1>("h0"), _GEN_20) @[Conditional.scala 39:67 controldecoder.scala 124:21]
    node _GEN_29 = mux(_T_5, UInt<1>("h0"), _GEN_21) @[Conditional.scala 39:67 controldecoder.scala 101:26]
    node _GEN_30 = mux(_T_5, UInt<1>("h1"), _GEN_22) @[Conditional.scala 39:67 controldecoder.scala 104:26]
    node _GEN_31 = mux(_T_5, UInt<1>("h1"), _GEN_23) @[Conditional.scala 39:67 controldecoder.scala 106:24]
    node _GEN_32 = mux(_T_5, UInt<1>("h0"), _GEN_24) @[Conditional.scala 39:67 controldecoder.scala 107:24]
    node _GEN_33 = mux(_T_5, UInt<1>("h0"), _GEN_25) @[Conditional.scala 39:67 controldecoder.scala 108:24]
    node _GEN_34 = mux(_T_5, UInt<2>("h2"), _GEN_26) @[Conditional.scala 39:67 controldecoder.scala 109:26]
    node _GEN_35 = mux(_T_5, UInt<2>("h3"), _GEN_27) @[Conditional.scala 39:67 controldecoder.scala 110:22]
    node _GEN_36 = mux(_T_5, UInt<1>("h0"), _GEN_28) @[Conditional.scala 39:67 controldecoder.scala 111:21]
    node _GEN_37 = mux(_T_4, UInt<1>("h0"), _GEN_29) @[Conditional.scala 39:67 controldecoder.scala 88:26]
    node _GEN_38 = mux(_T_4, UInt<1>("h1"), _GEN_29) @[Conditional.scala 39:67 controldecoder.scala 89:24]
    node _GEN_39 = mux(_T_4, UInt<1>("h0"), _GEN_30) @[Conditional.scala 39:67 controldecoder.scala 91:26]
    node _GEN_40 = mux(_T_4, UInt<1>("h0"), _GEN_31) @[Conditional.scala 39:67 controldecoder.scala 93:24]
    node _GEN_41 = mux(_T_4, UInt<1>("h0"), _GEN_32) @[Conditional.scala 39:67 controldecoder.scala 94:24]
    node _GEN_42 = mux(_T_4, UInt<1>("h0"), _GEN_33) @[Conditional.scala 39:67 controldecoder.scala 95:24]
    node _GEN_43 = mux(_T_4, UInt<1>("h1"), _GEN_34) @[Conditional.scala 39:67 controldecoder.scala 96:26]
    node _GEN_44 = mux(_T_4, UInt<2>("h2"), _GEN_35) @[Conditional.scala 39:67 controldecoder.scala 97:22]
    node _GEN_45 = mux(_T_4, UInt<1>("h0"), _GEN_36) @[Conditional.scala 39:67 controldecoder.scala 98:21]
    node _GEN_46 = mux(_T_3, UInt<1>("h0"), _GEN_37) @[Conditional.scala 39:67 controldecoder.scala 75:26]
    node _GEN_47 = mux(_T_3, UInt<1>("h0"), _GEN_38) @[Conditional.scala 39:67 controldecoder.scala 76:24]
    node _GEN_48 = mux(_T_3, UInt<1>("h1"), _GEN_37) @[Conditional.scala 39:67 controldecoder.scala 77:25]
    node _GEN_49 = mux(_T_3, UInt<1>("h1"), _GEN_39) @[Conditional.scala 39:67 controldecoder.scala 78:26]
    node _GEN_50 = mux(_T_3, UInt<1>("h0"), _GEN_40) @[Conditional.scala 39:67 controldecoder.scala 80:24]
    node _GEN_51 = mux(_T_3, UInt<1>("h1"), _GEN_41) @[Conditional.scala 39:67 controldecoder.scala 81:24]
    node _GEN_52 = mux(_T_3, UInt<1>("h0"), _GEN_42) @[Conditional.scala 39:67 controldecoder.scala 82:24]
    node _GEN_53 = mux(_T_3, UInt<3>("h4"), _GEN_44) @[Conditional.scala 39:67 controldecoder.scala 83:22]
    node _GEN_54 = mux(_T_3, UInt<1>("h0"), _GEN_45) @[Conditional.scala 39:67 controldecoder.scala 84:21]
    node _GEN_55 = mux(_T_3, UInt<1>("h0"), _GEN_43) @[Conditional.scala 39:67 controldecoder.scala 29:18]
    node _GEN_56 = mux(_T_2, UInt<1>("h1"), _GEN_46) @[Conditional.scala 39:67 controldecoder.scala 63:26]
    node _GEN_57 = mux(_T_2, UInt<1>("h0"), _GEN_47) @[Conditional.scala 39:67 controldecoder.scala 64:24]
    node _GEN_58 = mux(_T_2, UInt<1>("h0"), _GEN_48) @[Conditional.scala 39:67 controldecoder.scala 65:25]
    node _GEN_59 = mux(_T_2, UInt<1>("h1"), _GEN_49) @[Conditional.scala 39:67 controldecoder.scala 66:26]
    node _GEN_60 = mux(_T_2, UInt<1>("h0"), _GEN_50) @[Conditional.scala 39:67 controldecoder.scala 68:24]
    node _GEN_61 = mux(_T_2, UInt<1>("h1"), _GEN_51) @[Conditional.scala 39:67 controldecoder.scala 69:24]
    node _GEN_62 = mux(_T_2, UInt<1>("h1"), _GEN_52) @[Conditional.scala 39:67 controldecoder.scala 70:24]
    node _GEN_63 = mux(_T_2, UInt<3>("h5"), _GEN_53) @[Conditional.scala 39:67 controldecoder.scala 71:22]
    node _GEN_64 = mux(_T_2, UInt<1>("h0"), _GEN_54) @[Conditional.scala 39:67 controldecoder.scala 72:21]
    node _GEN_65 = mux(_T_2, UInt<1>("h0"), _GEN_55) @[Conditional.scala 39:67 controldecoder.scala 29:18]
    node _GEN_66 = mux(_T_1, UInt<1>("h0"), _GEN_56) @[Conditional.scala 39:67 controldecoder.scala 51:26]
    node _GEN_67 = mux(_T_1, UInt<1>("h0"), _GEN_57) @[Conditional.scala 39:67 controldecoder.scala 52:24]
    node _GEN_68 = mux(_T_1, UInt<1>("h0"), _GEN_58) @[Conditional.scala 39:67 controldecoder.scala 53:25]
    node _GEN_69 = mux(_T_1, UInt<1>("h1"), _GEN_59) @[Conditional.scala 39:67 controldecoder.scala 54:26]
    node _GEN_70 = mux(_T_1, UInt<1>("h0"), _GEN_60) @[Conditional.scala 39:67 controldecoder.scala 56:24]
    node _GEN_71 = mux(_T_1, UInt<1>("h1"), _GEN_61) @[Conditional.scala 39:67 controldecoder.scala 57:24]
    node _GEN_72 = mux(_T_1, UInt<1>("h0"), _GEN_62) @[Conditional.scala 39:67 controldecoder.scala 58:24]
    node _GEN_73 = mux(_T_1, UInt<1>("h1"), _GEN_63) @[Conditional.scala 39:67 controldecoder.scala 59:22]
    node _GEN_74 = mux(_T_1, UInt<1>("h0"), _GEN_64) @[Conditional.scala 39:67 controldecoder.scala 60:21]
    node _GEN_75 = mux(_T_1, UInt<1>("h0"), _GEN_65) @[Conditional.scala 39:67 controldecoder.scala 29:18]
    node _GEN_76 = mux(_T, UInt<1>("h0"), _GEN_66) @[Conditional.scala 40:58 controldecoder.scala 38:25]
    node _GEN_77 = mux(_T, UInt<1>("h0"), _GEN_67) @[Conditional.scala 40:58 controldecoder.scala 39:24]
    node _GEN_78 = mux(_T, UInt<1>("h0"), _GEN_68) @[Conditional.scala 40:58 controldecoder.scala 40:25]
    node _GEN_79 = mux(_T, UInt<1>("h1"), _GEN_69) @[Conditional.scala 40:58 controldecoder.scala 41:26]
    node _GEN_80 = mux(_T, UInt<1>("h0"), _GEN_70) @[Conditional.scala 40:58 controldecoder.scala 43:24]
    node _GEN_81 = mux(_T, UInt<1>("h0"), _GEN_71) @[Conditional.scala 40:58 controldecoder.scala 44:24]
    node _GEN_82 = mux(_T, UInt<1>("h0"), _GEN_72) @[Conditional.scala 40:58 controldecoder.scala 45:24]
    node _GEN_83 = mux(_T, UInt<1>("h0"), _GEN_73) @[Conditional.scala 40:58 controldecoder.scala 46:22]
    node _GEN_84 = mux(_T, UInt<1>("h0"), _GEN_74) @[Conditional.scala 40:58 controldecoder.scala 47:21]
    node _GEN_85 = mux(_T, UInt<1>("h0"), _GEN_75) @[Conditional.scala 40:58 controldecoder.scala 29:18]
    io_MemWrite <= _GEN_76
    io_Branch <= _GEN_77
    io_MemRead <= _GEN_78
    io_RegWrite <= _GEN_79
    io_Mem2Reg <= _GEN_78
    io_opAsel <= _GEN_80
    io_opBsel <= _GEN_81
    io_Ex_sel <= _GEN_82
    io_nextPCsel <= _GEN_85
    io_aluop <= _GEN_83
    io_vset <= _GEN_84

  module datamem :
    input clock : Clock
    input reset : UInt<1>
    input io_Addr : UInt<8>
    input io_Data : SInt<32>
    input io_MemWrite : UInt<1>
    input io_MemRead : UInt<1>
    output io_out : SInt<32>

    mem mem : @[datamemory.scala 14:22]
      data-type => SInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => io_out_MPORT
      writer => MPORT
      read-under-write => undefined
    node _T = eq(io_MemWrite, UInt<1>("h1")) @[datamemory.scala 15:27]
    node _GEN_0 = validif(_T, io_Addr) @[datamemory.scala 15:35]
    node _GEN_1 = validif(_T, clock) @[datamemory.scala 15:35]
    node _GEN_2 = mux(_T, UInt<1>("h1"), UInt<1>("h0")) @[datamemory.scala 15:35 datamemory.scala 14:22]
    node _GEN_3 = validif(_T, UInt<1>("h1")) @[datamemory.scala 15:35]
    node _GEN_4 = validif(_T, io_Data) @[datamemory.scala 15:35]
    node _T_1 = eq(io_MemRead, UInt<1>("h1")) @[datamemory.scala 18:25]
    node _GEN_5 = validif(_T_1, io_Addr) @[datamemory.scala 18:33 datamemory.scala 19:35]
    node _GEN_6 = validif(_T_1, clock) @[datamemory.scala 18:33 datamemory.scala 19:35]
    node _GEN_7 = mux(_T_1, UInt<1>("h1"), UInt<1>("h0")) @[datamemory.scala 18:33 datamemory.scala 19:35 datamemory.scala 14:22]
    node _GEN_8 = mux(_T_1, mem.io_out_MPORT.data, asSInt(UInt<1>("h0"))) @[datamemory.scala 18:33 datamemory.scala 19:24 datamemory.scala 21:28]
    io_out <= _GEN_8
    mem.io_out_MPORT.addr <= _GEN_5
    mem.io_out_MPORT.en <= _GEN_7
    mem.io_out_MPORT.clk <= _GEN_6
    mem.MPORT.addr <= _GEN_0
    mem.MPORT.en <= _GEN_2
    mem.MPORT.clk <= _GEN_1
    mem.MPORT.data <= _GEN_4
    mem.MPORT.mask <= _GEN_3

  module ImmdValGen1 :
    input clock : Clock
    input reset : UInt<1>
    input io_instruction : UInt<32>
    input io_pc : UInt<32>
    output io_s_imm : SInt<32>
    output io_sb_imm : SInt<32>
    output io_uj_imm : SInt<32>
    output io_u_imm : SInt<32>
    output io_i_imm : SInt<32>
    output io_z_imm : SInt<32>

    node s_imm__hi = bits(io_instruction, 31, 25) @[immgen.scala 21:41]
    node s_imm__lo = bits(io_instruction, 11, 7) @[immgen.scala 21:63]
    node s_imm_ = cat(s_imm__hi, s_imm__lo) @[Cat.scala 30:58]
    node _io_s_imm_T = bits(s_imm_, 11, 11) @[immgen.scala 22:40]
    node _io_s_imm_T_1 = bits(_io_s_imm_T, 0, 0) @[Bitwise.scala 72:15]
    node io_s_imm_hi = mux(_io_s_imm_T_1, UInt<20>("hfffff"), UInt<20>("h0")) @[Bitwise.scala 72:12]
    node _io_s_imm_T_2 = cat(io_s_imm_hi, s_imm_) @[Cat.scala 30:58]
    node _io_s_imm_T_3 = asSInt(_io_s_imm_T_2) @[immgen.scala 22:55]
    node sb_imm__hi_hi_hi = bits(io_instruction, 31, 31) @[immgen.scala 24:42]
    node sb_imm__hi_hi_lo = bits(io_instruction, 7, 7) @[immgen.scala 24:61]
    node sb_imm__hi_lo = bits(io_instruction, 30, 25) @[immgen.scala 24:79]
    node sb_imm__lo_hi = bits(io_instruction, 11, 8) @[immgen.scala 24:101]
    node sb_imm__lo = cat(sb_imm__lo_hi, UInt<1>("h0")) @[Cat.scala 30:58]
    node sb_imm__hi_hi = cat(sb_imm__hi_hi_hi, sb_imm__hi_hi_lo) @[Cat.scala 30:58]
    node sb_imm__hi = cat(sb_imm__hi_hi, sb_imm__hi_lo) @[Cat.scala 30:58]
    node sb_imm_ = cat(sb_imm__hi, sb_imm__lo) @[Cat.scala 30:58]
    node _io_sb_imm_T = bits(sb_imm_, 12, 12) @[immgen.scala 25:43]
    node _io_sb_imm_T_1 = bits(_io_sb_imm_T, 0, 0) @[Bitwise.scala 72:15]
    node io_sb_imm_hi = mux(_io_sb_imm_T_1, UInt<19>("h7ffff"), UInt<19>("h0")) @[Bitwise.scala 72:12]
    node _io_sb_imm_T_2 = cat(io_sb_imm_hi, sb_imm_) @[Cat.scala 30:58]
    node _io_sb_imm_T_3 = add(_io_sb_imm_T_2, io_pc) @[immgen.scala 25:59]
    node _io_sb_imm_T_4 = tail(_io_sb_imm_T_3, 1) @[immgen.scala 25:59]
    node _io_sb_imm_T_5 = asSInt(_io_sb_imm_T_4) @[immgen.scala 25:68]
    node uj_imm__hi_hi_hi = bits(io_instruction, 31, 31) @[immgen.scala 27:42]
    node uj_imm__hi_hi_lo = bits(io_instruction, 19, 12) @[immgen.scala 27:61]
    node uj_imm__hi_lo = bits(io_instruction, 20, 20) @[immgen.scala 27:83]
    node uj_imm__lo_hi = bits(io_instruction, 30, 21) @[immgen.scala 27:102]
    node uj_imm__lo = cat(uj_imm__lo_hi, UInt<1>("h0")) @[Cat.scala 30:58]
    node uj_imm__hi_hi = cat(uj_imm__hi_hi_hi, uj_imm__hi_hi_lo) @[Cat.scala 30:58]
    node uj_imm__hi = cat(uj_imm__hi_hi, uj_imm__hi_lo) @[Cat.scala 30:58]
    node uj_imm_ = cat(uj_imm__hi, uj_imm__lo) @[Cat.scala 30:58]
    node _io_uj_imm_T = bits(uj_imm_, 20, 20) @[immgen.scala 28:43]
    node _io_uj_imm_T_1 = bits(_io_uj_imm_T, 0, 0) @[Bitwise.scala 72:15]
    node io_uj_imm_hi = mux(_io_uj_imm_T_1, UInt<12>("hfff"), UInt<12>("h0")) @[Bitwise.scala 72:12]
    node _io_uj_imm_T_2 = cat(io_uj_imm_hi, uj_imm_) @[Cat.scala 30:58]
    node _io_uj_imm_T_3 = add(_io_uj_imm_T_2, io_pc) @[immgen.scala 28:59]
    node _io_uj_imm_T_4 = tail(_io_uj_imm_T_3, 1) @[immgen.scala 28:59]
    node _io_uj_imm_T_5 = asSInt(_io_uj_imm_T_4) @[immgen.scala 28:68]
    node _io_u_imm_T = bits(io_instruction, 31, 31) @[immgen.scala 30:50]
    node _io_u_imm_T_1 = bits(_io_u_imm_T, 0, 0) @[Bitwise.scala 72:15]
    node io_u_imm_hi = mux(_io_u_imm_T_1, UInt<12>("hfff"), UInt<12>("h0")) @[Bitwise.scala 72:12]
    node io_u_imm_lo = bits(io_instruction, 31, 12) @[immgen.scala 30:70]
    node _io_u_imm_T_2 = cat(io_u_imm_hi, io_u_imm_lo) @[Cat.scala 30:58]
    node _io_u_imm_T_3 = shl(_io_u_imm_T_2, 12) @[immgen.scala 30:80]
    node _io_u_imm_T_4 = add(_io_u_imm_T_3, io_pc) @[immgen.scala 30:86]
    node _io_u_imm_T_5 = tail(_io_u_imm_T_4, 1) @[immgen.scala 30:86]
    node _io_u_imm_T_6 = asSInt(_io_u_imm_T_5) @[immgen.scala 30:94]
    node _io_i_imm_T = bits(io_instruction, 31, 31) @[immgen.scala 32:48]
    node _io_i_imm_T_1 = bits(_io_i_imm_T, 0, 0) @[Bitwise.scala 72:15]
    node io_i_imm_hi = mux(_io_i_imm_T_1, UInt<20>("hfffff"), UInt<20>("h0")) @[Bitwise.scala 72:12]
    node io_i_imm_lo = bits(io_instruction, 31, 20) @[immgen.scala 32:68]
    node _io_i_imm_T_2 = cat(io_i_imm_hi, io_i_imm_lo) @[Cat.scala 30:58]
    node _io_i_imm_T_3 = asSInt(_io_i_imm_T_2) @[immgen.scala 32:78]
    node _io_z_imm_T = bits(io_instruction, 30, 30) @[immgen.scala 34:47]
    node _io_z_imm_T_1 = bits(_io_z_imm_T, 0, 0) @[Bitwise.scala 72:15]
    node io_z_imm_hi = mux(_io_z_imm_T_1, UInt<21>("h1fffff"), UInt<21>("h0")) @[Bitwise.scala 72:12]
    node io_z_imm_lo = bits(io_instruction, 30, 20) @[immgen.scala 34:67]
    node _io_z_imm_T_2 = cat(io_z_imm_hi, io_z_imm_lo) @[Cat.scala 30:58]
    node _io_z_imm_T_3 = asSInt(_io_z_imm_T_2) @[immgen.scala 34:77]
    io_s_imm <= _io_s_imm_T_3 @[immgen.scala 22:18]
    io_sb_imm <= _io_sb_imm_T_5 @[immgen.scala 25:19]
    io_uj_imm <= asSInt(bits(_io_uj_imm_T_5, 31, 0)) @[immgen.scala 28:19]
    io_u_imm <= asSInt(bits(_io_u_imm_T_6, 31, 0)) @[immgen.scala 30:18]
    io_i_imm <= _io_i_imm_T_3 @[immgen.scala 32:18]
    io_z_imm <= _io_z_imm_T_3 @[immgen.scala 34:17]

  module InstMem :
    input clock : Clock
    input reset : UInt<1>
    input io_addr : UInt<10>
    output io_inst : UInt<32>

    mem imemm : @[instmemory.scala 13:17]
      data-type => UInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => io_inst_MPORT
      read-under-write => undefined
    io_inst <= imemm.io_inst_MPORT.data @[instmemory.scala 16:9]
    imemm.io_inst_MPORT.addr <= io_addr @[instmemory.scala 16:22]
    imemm.io_inst_MPORT.en <= UInt<1>("h1") @[instmemory.scala 16:22]
    imemm.io_inst_MPORT.clk <= clock @[instmemory.scala 16:22]

  module jalr :
    input clock : Clock
    input reset : UInt<1>
    input io_rs1 : SInt<32>
    input io_imm : SInt<32>
    output io_out : SInt<32>

    node _a_T = add(io_rs1, io_imm) @[jalr.scala 11:24]
    node _a_T_1 = tail(_a_T, 1) @[jalr.scala 11:24]
    node a = asSInt(_a_T_1) @[jalr.scala 11:24]
    node _io_out_T = and(a, asSInt(UInt<33>("hfffffffe"))) @[jalr.scala 12:21]
    node _io_out_T_1 = asSInt(_io_out_T) @[jalr.scala 12:21]
    io_out <= asSInt(bits(_io_out_T_1, 31, 0)) @[jalr.scala 12:16]

  module regfile :
    input clock : Clock
    input reset : UInt<1>
    input io_RegWrite : UInt<1>
    input io_rs1 : UInt<5>
    input io_rs2 : UInt<5>
    input io_rd : UInt<5>
    input io_WriteData : SInt<32>
    output io_rdata1 : SInt<32>
    output io_rdata2 : SInt<32>

    reg register_0 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_0) @[registerfile.scala 16:31]
    reg register_1 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_1) @[registerfile.scala 16:31]
    reg register_2 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_2) @[registerfile.scala 16:31]
    reg register_3 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_3) @[registerfile.scala 16:31]
    reg register_4 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_4) @[registerfile.scala 16:31]
    reg register_5 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_5) @[registerfile.scala 16:31]
    reg register_6 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_6) @[registerfile.scala 16:31]
    reg register_7 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_7) @[registerfile.scala 16:31]
    reg register_8 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_8) @[registerfile.scala 16:31]
    reg register_9 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_9) @[registerfile.scala 16:31]
    reg register_10 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_10) @[registerfile.scala 16:31]
    reg register_11 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_11) @[registerfile.scala 16:31]
    reg register_12 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_12) @[registerfile.scala 16:31]
    reg register_13 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_13) @[registerfile.scala 16:31]
    reg register_14 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_14) @[registerfile.scala 16:31]
    reg register_15 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_15) @[registerfile.scala 16:31]
    reg register_16 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_16) @[registerfile.scala 16:31]
    reg register_17 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_17) @[registerfile.scala 16:31]
    reg register_18 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_18) @[registerfile.scala 16:31]
    reg register_19 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_19) @[registerfile.scala 16:31]
    reg register_20 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_20) @[registerfile.scala 16:31]
    reg register_21 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_21) @[registerfile.scala 16:31]
    reg register_22 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_22) @[registerfile.scala 16:31]
    reg register_23 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_23) @[registerfile.scala 16:31]
    reg register_24 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_24) @[registerfile.scala 16:31]
    reg register_25 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_25) @[registerfile.scala 16:31]
    reg register_26 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_26) @[registerfile.scala 16:31]
    reg register_27 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_27) @[registerfile.scala 16:31]
    reg register_28 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_28) @[registerfile.scala 16:31]
    reg register_29 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_29) @[registerfile.scala 16:31]
    reg register_30 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_30) @[registerfile.scala 16:31]
    reg register_31 : SInt<32>, clock with :
      reset => (UInt<1>("h0"), register_31) @[registerfile.scala 16:31]
    node _GEN_0 = validif(eq(UInt<1>("h0"), io_rs1), register_0) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_1 = mux(eq(UInt<1>("h1"), io_rs1), register_1, _GEN_0) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_2 = mux(eq(UInt<2>("h2"), io_rs1), register_2, _GEN_1) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_3 = mux(eq(UInt<2>("h3"), io_rs1), register_3, _GEN_2) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_4 = mux(eq(UInt<3>("h4"), io_rs1), register_4, _GEN_3) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_5 = mux(eq(UInt<3>("h5"), io_rs1), register_5, _GEN_4) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_6 = mux(eq(UInt<3>("h6"), io_rs1), register_6, _GEN_5) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_7 = mux(eq(UInt<3>("h7"), io_rs1), register_7, _GEN_6) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_8 = mux(eq(UInt<4>("h8"), io_rs1), register_8, _GEN_7) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_9 = mux(eq(UInt<4>("h9"), io_rs1), register_9, _GEN_8) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_10 = mux(eq(UInt<4>("ha"), io_rs1), register_10, _GEN_9) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_11 = mux(eq(UInt<4>("hb"), io_rs1), register_11, _GEN_10) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_12 = mux(eq(UInt<4>("hc"), io_rs1), register_12, _GEN_11) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_13 = mux(eq(UInt<4>("hd"), io_rs1), register_13, _GEN_12) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_14 = mux(eq(UInt<4>("he"), io_rs1), register_14, _GEN_13) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_15 = mux(eq(UInt<4>("hf"), io_rs1), register_15, _GEN_14) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_16 = mux(eq(UInt<5>("h10"), io_rs1), register_16, _GEN_15) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_17 = mux(eq(UInt<5>("h11"), io_rs1), register_17, _GEN_16) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_18 = mux(eq(UInt<5>("h12"), io_rs1), register_18, _GEN_17) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_19 = mux(eq(UInt<5>("h13"), io_rs1), register_19, _GEN_18) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_20 = mux(eq(UInt<5>("h14"), io_rs1), register_20, _GEN_19) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_21 = mux(eq(UInt<5>("h15"), io_rs1), register_21, _GEN_20) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_22 = mux(eq(UInt<5>("h16"), io_rs1), register_22, _GEN_21) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_23 = mux(eq(UInt<5>("h17"), io_rs1), register_23, _GEN_22) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_24 = mux(eq(UInt<5>("h18"), io_rs1), register_24, _GEN_23) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_25 = mux(eq(UInt<5>("h19"), io_rs1), register_25, _GEN_24) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_26 = mux(eq(UInt<5>("h1a"), io_rs1), register_26, _GEN_25) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_27 = mux(eq(UInt<5>("h1b"), io_rs1), register_27, _GEN_26) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_28 = mux(eq(UInt<5>("h1c"), io_rs1), register_28, _GEN_27) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_29 = mux(eq(UInt<5>("h1d"), io_rs1), register_29, _GEN_28) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_30 = mux(eq(UInt<5>("h1e"), io_rs1), register_30, _GEN_29) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_31 = mux(eq(UInt<5>("h1f"), io_rs1), register_31, _GEN_30) @[registerfile.scala 18:19 registerfile.scala 18:19]
    node _GEN_32 = validif(eq(UInt<1>("h0"), io_rs2), register_0) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_33 = mux(eq(UInt<1>("h1"), io_rs2), register_1, _GEN_32) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_34 = mux(eq(UInt<2>("h2"), io_rs2), register_2, _GEN_33) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_35 = mux(eq(UInt<2>("h3"), io_rs2), register_3, _GEN_34) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_36 = mux(eq(UInt<3>("h4"), io_rs2), register_4, _GEN_35) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_37 = mux(eq(UInt<3>("h5"), io_rs2), register_5, _GEN_36) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_38 = mux(eq(UInt<3>("h6"), io_rs2), register_6, _GEN_37) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_39 = mux(eq(UInt<3>("h7"), io_rs2), register_7, _GEN_38) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_40 = mux(eq(UInt<4>("h8"), io_rs2), register_8, _GEN_39) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_41 = mux(eq(UInt<4>("h9"), io_rs2), register_9, _GEN_40) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_42 = mux(eq(UInt<4>("ha"), io_rs2), register_10, _GEN_41) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_43 = mux(eq(UInt<4>("hb"), io_rs2), register_11, _GEN_42) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_44 = mux(eq(UInt<4>("hc"), io_rs2), register_12, _GEN_43) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_45 = mux(eq(UInt<4>("hd"), io_rs2), register_13, _GEN_44) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_46 = mux(eq(UInt<4>("he"), io_rs2), register_14, _GEN_45) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_47 = mux(eq(UInt<4>("hf"), io_rs2), register_15, _GEN_46) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_48 = mux(eq(UInt<5>("h10"), io_rs2), register_16, _GEN_47) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_49 = mux(eq(UInt<5>("h11"), io_rs2), register_17, _GEN_48) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_50 = mux(eq(UInt<5>("h12"), io_rs2), register_18, _GEN_49) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_51 = mux(eq(UInt<5>("h13"), io_rs2), register_19, _GEN_50) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_52 = mux(eq(UInt<5>("h14"), io_rs2), register_20, _GEN_51) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_53 = mux(eq(UInt<5>("h15"), io_rs2), register_21, _GEN_52) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_54 = mux(eq(UInt<5>("h16"), io_rs2), register_22, _GEN_53) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_55 = mux(eq(UInt<5>("h17"), io_rs2), register_23, _GEN_54) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_56 = mux(eq(UInt<5>("h18"), io_rs2), register_24, _GEN_55) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_57 = mux(eq(UInt<5>("h19"), io_rs2), register_25, _GEN_56) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_58 = mux(eq(UInt<5>("h1a"), io_rs2), register_26, _GEN_57) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_59 = mux(eq(UInt<5>("h1b"), io_rs2), register_27, _GEN_58) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_60 = mux(eq(UInt<5>("h1c"), io_rs2), register_28, _GEN_59) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_61 = mux(eq(UInt<5>("h1d"), io_rs2), register_29, _GEN_60) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_62 = mux(eq(UInt<5>("h1e"), io_rs2), register_30, _GEN_61) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _GEN_63 = mux(eq(UInt<5>("h1f"), io_rs2), register_31, _GEN_62) @[registerfile.scala 19:19 registerfile.scala 19:19]
    node _T = eq(io_RegWrite, UInt<1>("h1")) @[registerfile.scala 20:26]
    node _T_1 = neq(io_rd, UInt<1>("h0")) @[registerfile.scala 21:28]
    node _register_io_rd = io_WriteData @[registerfile.scala 21:60 registerfile.scala 21:60]
    node _GEN_64 = mux(eq(UInt<1>("h0"), io_rd), _register_io_rd, asSInt(UInt<1>("h0"))) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 17:21]
    node _GEN_65 = mux(eq(UInt<1>("h1"), io_rd), _register_io_rd, register_1) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_66 = mux(eq(UInt<2>("h2"), io_rd), _register_io_rd, register_2) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_67 = mux(eq(UInt<2>("h3"), io_rd), _register_io_rd, register_3) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_68 = mux(eq(UInt<3>("h4"), io_rd), _register_io_rd, register_4) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_69 = mux(eq(UInt<3>("h5"), io_rd), _register_io_rd, register_5) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_70 = mux(eq(UInt<3>("h6"), io_rd), _register_io_rd, register_6) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_71 = mux(eq(UInt<3>("h7"), io_rd), _register_io_rd, register_7) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_72 = mux(eq(UInt<4>("h8"), io_rd), _register_io_rd, register_8) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_73 = mux(eq(UInt<4>("h9"), io_rd), _register_io_rd, register_9) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_74 = mux(eq(UInt<4>("ha"), io_rd), _register_io_rd, register_10) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_75 = mux(eq(UInt<4>("hb"), io_rd), _register_io_rd, register_11) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_76 = mux(eq(UInt<4>("hc"), io_rd), _register_io_rd, register_12) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_77 = mux(eq(UInt<4>("hd"), io_rd), _register_io_rd, register_13) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_78 = mux(eq(UInt<4>("he"), io_rd), _register_io_rd, register_14) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_79 = mux(eq(UInt<4>("hf"), io_rd), _register_io_rd, register_15) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_80 = mux(eq(UInt<5>("h10"), io_rd), _register_io_rd, register_16) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_81 = mux(eq(UInt<5>("h11"), io_rd), _register_io_rd, register_17) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_82 = mux(eq(UInt<5>("h12"), io_rd), _register_io_rd, register_18) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_83 = mux(eq(UInt<5>("h13"), io_rd), _register_io_rd, register_19) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_84 = mux(eq(UInt<5>("h14"), io_rd), _register_io_rd, register_20) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_85 = mux(eq(UInt<5>("h15"), io_rd), _register_io_rd, register_21) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_86 = mux(eq(UInt<5>("h16"), io_rd), _register_io_rd, register_22) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_87 = mux(eq(UInt<5>("h17"), io_rd), _register_io_rd, register_23) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_88 = mux(eq(UInt<5>("h18"), io_rd), _register_io_rd, register_24) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_89 = mux(eq(UInt<5>("h19"), io_rd), _register_io_rd, register_25) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_90 = mux(eq(UInt<5>("h1a"), io_rd), _register_io_rd, register_26) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_91 = mux(eq(UInt<5>("h1b"), io_rd), _register_io_rd, register_27) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_92 = mux(eq(UInt<5>("h1c"), io_rd), _register_io_rd, register_28) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_93 = mux(eq(UInt<5>("h1d"), io_rd), _register_io_rd, register_29) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_94 = mux(eq(UInt<5>("h1e"), io_rd), _register_io_rd, register_30) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _GEN_95 = mux(eq(UInt<5>("h1f"), io_rd), _register_io_rd, register_31) @[registerfile.scala 21:60 registerfile.scala 21:60 registerfile.scala 16:31]
    node _register_io_rd_0 = pad(asSInt(UInt<1>("h0")), 32) @[registerfile.scala 22:45 registerfile.scala 22:45]
    node _GEN_96 = mux(eq(UInt<1>("h0"), io_rd), _register_io_rd_0, asSInt(UInt<1>("h0"))) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 17:21]
    node _GEN_97 = mux(eq(UInt<1>("h1"), io_rd), _register_io_rd_0, register_1) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_98 = mux(eq(UInt<2>("h2"), io_rd), _register_io_rd_0, register_2) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_99 = mux(eq(UInt<2>("h3"), io_rd), _register_io_rd_0, register_3) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_100 = mux(eq(UInt<3>("h4"), io_rd), _register_io_rd_0, register_4) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_101 = mux(eq(UInt<3>("h5"), io_rd), _register_io_rd_0, register_5) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_102 = mux(eq(UInt<3>("h6"), io_rd), _register_io_rd_0, register_6) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_103 = mux(eq(UInt<3>("h7"), io_rd), _register_io_rd_0, register_7) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_104 = mux(eq(UInt<4>("h8"), io_rd), _register_io_rd_0, register_8) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_105 = mux(eq(UInt<4>("h9"), io_rd), _register_io_rd_0, register_9) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_106 = mux(eq(UInt<4>("ha"), io_rd), _register_io_rd_0, register_10) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_107 = mux(eq(UInt<4>("hb"), io_rd), _register_io_rd_0, register_11) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_108 = mux(eq(UInt<4>("hc"), io_rd), _register_io_rd_0, register_12) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_109 = mux(eq(UInt<4>("hd"), io_rd), _register_io_rd_0, register_13) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_110 = mux(eq(UInt<4>("he"), io_rd), _register_io_rd_0, register_14) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_111 = mux(eq(UInt<4>("hf"), io_rd), _register_io_rd_0, register_15) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_112 = mux(eq(UInt<5>("h10"), io_rd), _register_io_rd_0, register_16) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_113 = mux(eq(UInt<5>("h11"), io_rd), _register_io_rd_0, register_17) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_114 = mux(eq(UInt<5>("h12"), io_rd), _register_io_rd_0, register_18) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_115 = mux(eq(UInt<5>("h13"), io_rd), _register_io_rd_0, register_19) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_116 = mux(eq(UInt<5>("h14"), io_rd), _register_io_rd_0, register_20) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_117 = mux(eq(UInt<5>("h15"), io_rd), _register_io_rd_0, register_21) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_118 = mux(eq(UInt<5>("h16"), io_rd), _register_io_rd_0, register_22) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_119 = mux(eq(UInt<5>("h17"), io_rd), _register_io_rd_0, register_23) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_120 = mux(eq(UInt<5>("h18"), io_rd), _register_io_rd_0, register_24) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_121 = mux(eq(UInt<5>("h19"), io_rd), _register_io_rd_0, register_25) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_122 = mux(eq(UInt<5>("h1a"), io_rd), _register_io_rd_0, register_26) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_123 = mux(eq(UInt<5>("h1b"), io_rd), _register_io_rd_0, register_27) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_124 = mux(eq(UInt<5>("h1c"), io_rd), _register_io_rd_0, register_28) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_125 = mux(eq(UInt<5>("h1d"), io_rd), _register_io_rd_0, register_29) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_126 = mux(eq(UInt<5>("h1e"), io_rd), _register_io_rd_0, register_30) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_127 = mux(eq(UInt<5>("h1f"), io_rd), _register_io_rd_0, register_31) @[registerfile.scala 22:45 registerfile.scala 22:45 registerfile.scala 16:31]
    node _GEN_128 = mux(_T_1, _GEN_64, _GEN_96) @[registerfile.scala 21:43]
    node _GEN_129 = mux(_T_1, _GEN_65, _GEN_97) @[registerfile.scala 21:43]
    node _GEN_130 = mux(_T_1, _GEN_66, _GEN_98) @[registerfile.scala 21:43]
    node _GEN_131 = mux(_T_1, _GEN_67, _GEN_99) @[registerfile.scala 21:43]
    node _GEN_132 = mux(_T_1, _GEN_68, _GEN_100) @[registerfile.scala 21:43]
    node _GEN_133 = mux(_T_1, _GEN_69, _GEN_101) @[registerfile.scala 21:43]
    node _GEN_134 = mux(_T_1, _GEN_70, _GEN_102) @[registerfile.scala 21:43]
    node _GEN_135 = mux(_T_1, _GEN_71, _GEN_103) @[registerfile.scala 21:43]
    node _GEN_136 = mux(_T_1, _GEN_72, _GEN_104) @[registerfile.scala 21:43]
    node _GEN_137 = mux(_T_1, _GEN_73, _GEN_105) @[registerfile.scala 21:43]
    node _GEN_138 = mux(_T_1, _GEN_74, _GEN_106) @[registerfile.scala 21:43]
    node _GEN_139 = mux(_T_1, _GEN_75, _GEN_107) @[registerfile.scala 21:43]
    node _GEN_140 = mux(_T_1, _GEN_76, _GEN_108) @[registerfile.scala 21:43]
    node _GEN_141 = mux(_T_1, _GEN_77, _GEN_109) @[registerfile.scala 21:43]
    node _GEN_142 = mux(_T_1, _GEN_78, _GEN_110) @[registerfile.scala 21:43]
    node _GEN_143 = mux(_T_1, _GEN_79, _GEN_111) @[registerfile.scala 21:43]
    node _GEN_144 = mux(_T_1, _GEN_80, _GEN_112) @[registerfile.scala 21:43]
    node _GEN_145 = mux(_T_1, _GEN_81, _GEN_113) @[registerfile.scala 21:43]
    node _GEN_146 = mux(_T_1, _GEN_82, _GEN_114) @[registerfile.scala 21:43]
    node _GEN_147 = mux(_T_1, _GEN_83, _GEN_115) @[registerfile.scala 21:43]
    node _GEN_148 = mux(_T_1, _GEN_84, _GEN_116) @[registerfile.scala 21:43]
    node _GEN_149 = mux(_T_1, _GEN_85, _GEN_117) @[registerfile.scala 21:43]
    node _GEN_150 = mux(_T_1, _GEN_86, _GEN_118) @[registerfile.scala 21:43]
    node _GEN_151 = mux(_T_1, _GEN_87, _GEN_119) @[registerfile.scala 21:43]
    node _GEN_152 = mux(_T_1, _GEN_88, _GEN_120) @[registerfile.scala 21:43]
    node _GEN_153 = mux(_T_1, _GEN_89, _GEN_121) @[registerfile.scala 21:43]
    node _GEN_154 = mux(_T_1, _GEN_90, _GEN_122) @[registerfile.scala 21:43]
    node _GEN_155 = mux(_T_1, _GEN_91, _GEN_123) @[registerfile.scala 21:43]
    node _GEN_156 = mux(_T_1, _GEN_92, _GEN_124) @[registerfile.scala 21:43]
    node _GEN_157 = mux(_T_1, _GEN_93, _GEN_125) @[registerfile.scala 21:43]
    node _GEN_158 = mux(_T_1, _GEN_94, _GEN_126) @[registerfile.scala 21:43]
    node _GEN_159 = mux(_T_1, _GEN_95, _GEN_127) @[registerfile.scala 21:43]
    node _GEN_160 = mux(_T, _GEN_128, asSInt(UInt<1>("h0"))) @[registerfile.scala 20:34 registerfile.scala 17:21]
    node _GEN_161 = mux(_T, _GEN_129, register_1) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_162 = mux(_T, _GEN_130, register_2) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_163 = mux(_T, _GEN_131, register_3) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_164 = mux(_T, _GEN_132, register_4) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_165 = mux(_T, _GEN_133, register_5) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_166 = mux(_T, _GEN_134, register_6) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_167 = mux(_T, _GEN_135, register_7) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_168 = mux(_T, _GEN_136, register_8) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_169 = mux(_T, _GEN_137, register_9) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_170 = mux(_T, _GEN_138, register_10) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_171 = mux(_T, _GEN_139, register_11) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_172 = mux(_T, _GEN_140, register_12) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_173 = mux(_T, _GEN_141, register_13) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_174 = mux(_T, _GEN_142, register_14) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_175 = mux(_T, _GEN_143, register_15) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_176 = mux(_T, _GEN_144, register_16) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_177 = mux(_T, _GEN_145, register_17) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_178 = mux(_T, _GEN_146, register_18) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_179 = mux(_T, _GEN_147, register_19) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_180 = mux(_T, _GEN_148, register_20) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_181 = mux(_T, _GEN_149, register_21) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_182 = mux(_T, _GEN_150, register_22) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_183 = mux(_T, _GEN_151, register_23) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_184 = mux(_T, _GEN_152, register_24) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_185 = mux(_T, _GEN_153, register_25) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_186 = mux(_T, _GEN_154, register_26) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_187 = mux(_T, _GEN_155, register_27) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_188 = mux(_T, _GEN_156, register_28) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_189 = mux(_T, _GEN_157, register_29) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_190 = mux(_T, _GEN_158, register_30) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _GEN_191 = mux(_T, _GEN_159, register_31) @[registerfile.scala 20:34 registerfile.scala 16:31]
    node _register_WIRE_0 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_1 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_2 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_3 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_4 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_5 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_6 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_7 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_8 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_9 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_10 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_11 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_12 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_13 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_14 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_15 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_16 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_17 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_18 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_19 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_20 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_21 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_22 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_23 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_24 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_25 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_26 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_27 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_28 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_29 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_30 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_WIRE_31 = asSInt(UInt<32>("h0")) @[registerfile.scala 16:39 registerfile.scala 16:39]
    node _register_io_rs1 = _GEN_31 @[registerfile.scala 18:19]
    node _register_io_rs2 = _GEN_63 @[registerfile.scala 19:19]
    io_rdata1 <= _register_io_rs1 @[registerfile.scala 18:19]
    io_rdata2 <= _register_io_rs2 @[registerfile.scala 19:19]
    register_0 <= mux(reset, _register_WIRE_0, _GEN_160) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_1 <= mux(reset, _register_WIRE_1, _GEN_161) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_2 <= mux(reset, _register_WIRE_2, _GEN_162) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_3 <= mux(reset, _register_WIRE_3, _GEN_163) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_4 <= mux(reset, _register_WIRE_4, _GEN_164) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_5 <= mux(reset, _register_WIRE_5, _GEN_165) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_6 <= mux(reset, _register_WIRE_6, _GEN_166) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_7 <= mux(reset, _register_WIRE_7, _GEN_167) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_8 <= mux(reset, _register_WIRE_8, _GEN_168) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_9 <= mux(reset, _register_WIRE_9, _GEN_169) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_10 <= mux(reset, _register_WIRE_10, _GEN_170) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_11 <= mux(reset, _register_WIRE_11, _GEN_171) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_12 <= mux(reset, _register_WIRE_12, _GEN_172) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_13 <= mux(reset, _register_WIRE_13, _GEN_173) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_14 <= mux(reset, _register_WIRE_14, _GEN_174) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_15 <= mux(reset, _register_WIRE_15, _GEN_175) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_16 <= mux(reset, _register_WIRE_16, _GEN_176) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_17 <= mux(reset, _register_WIRE_17, _GEN_177) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_18 <= mux(reset, _register_WIRE_18, _GEN_178) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_19 <= mux(reset, _register_WIRE_19, _GEN_179) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_20 <= mux(reset, _register_WIRE_20, _GEN_180) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_21 <= mux(reset, _register_WIRE_21, _GEN_181) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_22 <= mux(reset, _register_WIRE_22, _GEN_182) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_23 <= mux(reset, _register_WIRE_23, _GEN_183) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_24 <= mux(reset, _register_WIRE_24, _GEN_184) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_25 <= mux(reset, _register_WIRE_25, _GEN_185) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_26 <= mux(reset, _register_WIRE_26, _GEN_186) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_27 <= mux(reset, _register_WIRE_27, _GEN_187) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_28 <= mux(reset, _register_WIRE_28, _GEN_188) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_29 <= mux(reset, _register_WIRE_29, _GEN_189) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_30 <= mux(reset, _register_WIRE_30, _GEN_190) @[registerfile.scala 16:31 registerfile.scala 16:31]
    register_31 <= mux(reset, _register_WIRE_31, _GEN_191) @[registerfile.scala 16:31 registerfile.scala 16:31]

  module configure :
    input clock : Clock
    input reset : UInt<1>
    input io_zimm : SInt<32>
    input io_rs1 : UInt<5>
    input io_rd : UInt<5>
    input io_rs1_readdata : SInt<32>
    input io_current_vl : SInt<32>
    output io_vl : SInt<32>
    output io_rd_out : UInt<5>
    output io_avl_o : SInt<32>
    output io_valmax_o : SInt<32>

    node vlmul = bits(io_zimm, 2, 0) @[configure.scala 21:24]
    node vsew = bits(io_zimm, 5, 3) @[configure.scala 22:22]
    node _T = eq(vlmul, UInt<3>("h5")) @[configure.scala 28:17]
    node _T_1 = eq(vsew, UInt<1>("h0")) @[configure.scala 30:20]
    node _T_2 = eq(vsew, UInt<1>("h1")) @[configure.scala 32:25]
    node _T_3 = eq(vsew, UInt<2>("h2")) @[configure.scala 34:25]
    node _T_4 = asSInt(bits(asSInt(UInt<2>("h1")), 1, 1)) @[configure.scala 35:26]
    node _T_5 = eq(vlmul, UInt<3>("h6")) @[configure.scala 41:22]
    node _T_6 = eq(vsew, UInt<1>("h0")) @[configure.scala 43:20]
    node _T_7 = eq(vsew, UInt<1>("h1")) @[configure.scala 45:25]
    node _T_8 = eq(vsew, UInt<2>("h2")) @[configure.scala 47:25]
    node _T_9 = eq(vlmul, UInt<3>("h7")) @[configure.scala 53:22]
    node _T_10 = eq(vsew, UInt<1>("h0")) @[configure.scala 55:20]
    node _T_11 = eq(vsew, UInt<1>("h1")) @[configure.scala 57:25]
    node _T_12 = eq(vsew, UInt<2>("h2")) @[configure.scala 59:25]
    node _T_13 = eq(vsew, UInt<2>("h3")) @[configure.scala 61:25]
    node _T_14 = eq(vlmul, UInt<1>("h0")) @[configure.scala 65:22]
    node _T_15 = eq(vsew, UInt<1>("h0")) @[configure.scala 66:20]
    node _T_16 = eq(vsew, UInt<1>("h1")) @[configure.scala 68:25]
    node _T_17 = eq(vsew, UInt<2>("h2")) @[configure.scala 70:25]
    node _T_18 = eq(vsew, UInt<2>("h3")) @[configure.scala 72:25]
    node _T_19 = eq(vlmul, UInt<1>("h1")) @[configure.scala 75:22]
    node _T_20 = eq(vsew, UInt<1>("h0")) @[configure.scala 76:20]
    node _T_21 = eq(vsew, UInt<1>("h1")) @[configure.scala 78:25]
    node _T_22 = eq(vsew, UInt<2>("h2")) @[configure.scala 80:25]
    node _T_23 = eq(vsew, UInt<2>("h3")) @[configure.scala 82:25]
    node _T_24 = eq(vlmul, UInt<2>("h2")) @[configure.scala 85:22]
    node _T_25 = eq(vsew, UInt<1>("h0")) @[configure.scala 86:20]
    node _T_26 = eq(vsew, UInt<1>("h1")) @[configure.scala 88:25]
    node _T_27 = eq(vsew, UInt<2>("h2")) @[configure.scala 90:25]
    node _T_28 = eq(vsew, UInt<2>("h3")) @[configure.scala 92:25]
    node _T_29 = eq(vlmul, UInt<2>("h3")) @[configure.scala 95:22]
    node _T_30 = eq(vsew, UInt<1>("h0")) @[configure.scala 96:20]
    node _T_31 = eq(vsew, UInt<1>("h1")) @[configure.scala 98:25]
    node _T_32 = eq(vsew, UInt<2>("h2")) @[configure.scala 100:25]
    node _T_33 = eq(vsew, UInt<2>("h3")) @[configure.scala 102:25]
    node _T_34 = neq(io_rs1, UInt<1>("h0")) @[configure.scala 108:18]
    node _T_35 = neq(io_rd, UInt<1>("h0")) @[configure.scala 109:15]
    node _T_36 = eq(io_rs1, UInt<1>("h0")) @[configure.scala 109:40]
    node _T_37 = and(_T_35, _T_36) @[configure.scala 109:30]
    node _T_38 = eq(io_rs1, UInt<1>("h0")) @[configure.scala 110:16]
    node _T_39 = eq(io_rd, UInt<1>("h0")) @[configure.scala 110:33]
    node _T_40 = and(_T_38, _T_39) @[configure.scala 110:24]
    node _T_41 = mux(_T_40, io_current_vl, asSInt(UInt<1>("h0"))) @[configure.scala 110:8]
    node _T_42 = mux(_T_37, asSInt(UInt<6>("h10")), _T_41) @[configure.scala 109:8]
    node avl = mux(_T_34, io_rs1_readdata, _T_42) @[configure.scala 108:10]
    node _T_43 = leq(avl, asSInt(UInt<6>("h10"))) @[configure.scala 113:15]
    node _GEN_0 = mux(_T_43, avl, asSInt(UInt<6>("h10"))) @[configure.scala 113:25 configure.scala 114:14 configure.scala 116:14]
    io_vl <= _GEN_0
    io_rd_out <= io_rd @[configure.scala 119:10]
    io_avl_o <= avl @[configure.scala 121:10]
    io_valmax_o <= asSInt(UInt<6>("h10")) @[configure.scala 120:13]

  module Top :
    input clock : Clock
    input reset : UInt<1>
    output io_out : UInt<32>
    output io_addr : UInt<10>

    inst PCMod of pc @[top.scala 12:19]
    inst ALUMod of ALU_ @[top.scala 13:20]
    inst ALUcMod of alucontrol @[top.scala 14:22]
    inst BrcntrlMod of BranchControl_ @[top.scala 15:25]
    inst CntrlDecMod of controldec @[top.scala 16:26]
    inst datamemMod of datamem @[top.scala 17:25]
    inst ImmgenMod of ImmdValGen1 @[top.scala 18:23]
    inst instmemMod of InstMem @[top.scala 19:25]
    inst jalrCompMod of jalr @[top.scala 20:26]
    inst regfileMod of regfile @[top.scala 21:25]
    inst config of configure @[top.scala 22:19]
    node _instmemMod_io_addr_T = bits(PCMod.io_pc, 11, 2) @[top.scala 26:34]
    node _regfileMod_io_rs1_T = bits(instmemMod.io_inst, 19, 15) @[top.scala 32:39]
    node _regfileMod_io_rs2_T = bits(instmemMod.io_inst, 24, 20) @[top.scala 33:40]
    node _regfileMod_io_rd_T = bits(instmemMod.io_inst, 11, 7) @[top.scala 34:37]
    node _ALUcMod_io_func3_T = bits(instmemMod.io_inst, 14, 12) @[top.scala 43:39]
    node _ALUcMod_io_func7_T = bits(instmemMod.io_inst, 30, 30) @[top.scala 44:39]
    node _ALUMod_io_in_A_T = eq(CntrlDecMod.io_opAsel, UInt<1>("h0")) @[top.scala 50:24]
    node _ALUMod_io_in_A_T_1 = eq(CntrlDecMod.io_opAsel, UInt<2>("h3")) @[top.scala 50:60]
    node _ALUMod_io_in_A_T_2 = or(_ALUMod_io_in_A_T, _ALUMod_io_in_A_T_1) @[top.scala 50:35]
    node _ALUMod_io_in_A_T_3 = eq(CntrlDecMod.io_opAsel, UInt<1>("h1")) @[top.scala 51:24]
    node _ALUMod_io_in_A_T_4 = asSInt(PCMod.io_pc4) @[top.scala 51:52]
    node _ALUMod_io_in_A_T_5 = eq(CntrlDecMod.io_opAsel, UInt<2>("h2")) @[top.scala 52:24]
    node _ALUMod_io_in_A_T_6 = asSInt(PCMod.io_pc) @[top.scala 52:51]
    node _ALUMod_io_in_A_T_7 = mux(_ALUMod_io_in_A_T_5, _ALUMod_io_in_A_T_6, asSInt(UInt<1>("h0"))) @[Mux.scala 98:16]
    node _ALUMod_io_in_A_T_8 = mux(_ALUMod_io_in_A_T_3, _ALUMod_io_in_A_T_4, _ALUMod_io_in_A_T_7) @[Mux.scala 98:16]
    node _ALUMod_io_in_A_T_9 = mux(_ALUMod_io_in_A_T_2, regfileMod.io_rdata1, _ALUMod_io_in_A_T_8) @[Mux.scala 98:16]
    node _T = eq(CntrlDecMod.io_Ex_sel, UInt<1>("h0")) @[top.scala 57:28]
    node _T_1 = eq(CntrlDecMod.io_opBsel, UInt<1>("h1")) @[top.scala 57:65]
    node _T_2 = and(_T, _T_1) @[top.scala 57:40]
    node _T_3 = eq(CntrlDecMod.io_Ex_sel, UInt<1>("h1")) @[top.scala 59:42]
    node _T_4 = eq(CntrlDecMod.io_opBsel, UInt<1>("h1")) @[top.scala 59:79]
    node _T_5 = and(_T_3, _T_4) @[top.scala 59:54]
    node _T_6 = eq(CntrlDecMod.io_Ex_sel, UInt<2>("h2")) @[top.scala 61:42]
    node _T_7 = eq(CntrlDecMod.io_opBsel, UInt<1>("h1")) @[top.scala 61:79]
    node _T_8 = and(_T_6, _T_7) @[top.scala 61:54]
    node _GEN_0 = mux(_T_8, ImmgenMod.io_u_imm, ImmgenMod.io_z_imm) @[top.scala 61:87 top.scala 62:32 top.scala 64:32]
    node _GEN_1 = mux(_T_5, ImmgenMod.io_s_imm, _GEN_0) @[top.scala 59:87 top.scala 60:32]
    node _GEN_2 = mux(_T_2, ImmgenMod.io_i_imm, _GEN_1) @[top.scala 57:73 top.scala 58:32]
    node _config_io_rs1_T = bits(instmemMod.io_inst, 19, 15) @[top.scala 70:51]
    node _config_io_rd_T = bits(instmemMod.io_inst, 11, 7) @[top.scala 71:43]
    node _T_9 = eq(BrcntrlMod.io_branch, UInt<1>("h1")) @[top.scala 87:28]
    node _BrcntrlMod_io_arg_x_T = eq(CntrlDecMod.io_opAsel, UInt<1>("h0")) @[top.scala 89:24]
    node _BrcntrlMod_io_arg_x_T_1 = eq(CntrlDecMod.io_opAsel, UInt<1>("h1")) @[top.scala 90:24]
    node _BrcntrlMod_io_arg_x_T_2 = asSInt(PCMod.io_pc4) @[top.scala 90:54]
    node _BrcntrlMod_io_arg_x_T_3 = eq(CntrlDecMod.io_opAsel, UInt<2>("h2")) @[top.scala 91:24]
    node _BrcntrlMod_io_arg_x_T_4 = asSInt(PCMod.io_pc) @[top.scala 91:54]
    node _BrcntrlMod_io_arg_x_T_5 = eq(CntrlDecMod.io_opAsel, UInt<2>("h3")) @[top.scala 92:24]
    node _BrcntrlMod_io_arg_x_T_6 = mux(_BrcntrlMod_io_arg_x_T_5, regfileMod.io_rdata1, asSInt(UInt<1>("h0"))) @[Mux.scala 98:16]
    node _BrcntrlMod_io_arg_x_T_7 = mux(_BrcntrlMod_io_arg_x_T_3, _BrcntrlMod_io_arg_x_T_4, _BrcntrlMod_io_arg_x_T_6) @[Mux.scala 98:16]
    node _BrcntrlMod_io_arg_x_T_8 = mux(_BrcntrlMod_io_arg_x_T_1, _BrcntrlMod_io_arg_x_T_2, _BrcntrlMod_io_arg_x_T_7) @[Mux.scala 98:16]
    node _BrcntrlMod_io_arg_x_T_9 = mux(_BrcntrlMod_io_arg_x_T, regfileMod.io_rdata1, _BrcntrlMod_io_arg_x_T_8) @[Mux.scala 98:16]
    node _T_10 = eq(CntrlDecMod.io_Ex_sel, UInt<1>("h0")) @[top.scala 96:29]
    node _T_11 = eq(CntrlDecMod.io_opBsel, UInt<1>("h1")) @[top.scala 96:66]
    node _T_12 = and(_T_10, _T_11) @[top.scala 96:41]
    node _T_13 = eq(CntrlDecMod.io_Ex_sel, UInt<1>("h1")) @[top.scala 98:42]
    node _T_14 = eq(CntrlDecMod.io_opBsel, UInt<1>("h1")) @[top.scala 98:79]
    node _T_15 = and(_T_13, _T_14) @[top.scala 98:54]
    node _T_16 = eq(CntrlDecMod.io_Ex_sel, UInt<2>("h2")) @[top.scala 100:42]
    node _T_17 = eq(CntrlDecMod.io_opBsel, UInt<1>("h1")) @[top.scala 100:79]
    node _T_18 = and(_T_16, _T_17) @[top.scala 100:54]
    node _GEN_3 = mux(_T_18, ImmgenMod.io_u_imm, regfileMod.io_rdata2) @[top.scala 100:87 top.scala 101:37 top.scala 103:37]
    node _GEN_4 = mux(_T_15, ImmgenMod.io_s_imm, _GEN_3) @[top.scala 98:87 top.scala 99:37]
    node _GEN_5 = mux(_T_12, ImmgenMod.io_i_imm, _GEN_4) @[top.scala 96:74 top.scala 97:37]
    node _GEN_6 = mux(_T_9, _BrcntrlMod_io_arg_x_T_9, asSInt(UInt<1>("h0"))) @[top.scala 87:36 top.scala 88:25 top.scala 82:21]
    node _GEN_7 = mux(_T_9, _GEN_5, asSInt(UInt<1>("h0"))) @[top.scala 87:36 top.scala 83:21]
    node _PCMod_io_input_T = eq(CntrlDecMod.io_nextPCsel, UInt<1>("h0")) @[top.scala 120:27]
    node _PCMod_io_input_T_1 = eq(CntrlDecMod.io_nextPCsel, UInt<1>("h1")) @[top.scala 121:27]
    node _PCMod_io_input_T_2 = asUInt(ImmgenMod.io_sb_imm) @[top.scala 121:92]
    node _PCMod_io_input_T_3 = mux(BrcntrlMod.io_br_taken, _PCMod_io_input_T_2, PCMod.io_pc4) @[top.scala 121:46]
    node _PCMod_io_input_T_4 = eq(CntrlDecMod.io_nextPCsel, UInt<2>("h2")) @[top.scala 122:27]
    node _PCMod_io_input_T_5 = asUInt(ImmgenMod.io_uj_imm) @[top.scala 122:65]
    node _PCMod_io_input_T_6 = eq(CntrlDecMod.io_nextPCsel, UInt<2>("h3")) @[top.scala 123:27]
    node _PCMod_io_input_T_7 = asUInt(jalrCompMod.io_out) @[top.scala 123:64]
    node _PCMod_io_input_T_8 = mux(_PCMod_io_input_T_6, _PCMod_io_input_T_7, UInt<1>("h0")) @[Mux.scala 98:16]
    node _PCMod_io_input_T_9 = mux(_PCMod_io_input_T_4, _PCMod_io_input_T_5, _PCMod_io_input_T_8) @[Mux.scala 98:16]
    node _PCMod_io_input_T_10 = mux(_PCMod_io_input_T_1, _PCMod_io_input_T_3, _PCMod_io_input_T_9) @[Mux.scala 98:16]
    node _PCMod_io_input_T_11 = mux(_PCMod_io_input_T, PCMod.io_pc4, _PCMod_io_input_T_10) @[Mux.scala 98:16]
    node _datamemMod_io_Addr_T = bits(ALUMod.io_output, 9, 2) @[top.scala 127:40]
    node _regfileMod_io_WriteData_T = eq(CntrlDecMod.io_Mem2Reg, UInt<1>("h0")) @[top.scala 133:25]
    node _regfileMod_io_WriteData_T_1 = mux(CntrlDecMod.io_vset, config.io_vl, ALUMod.io_output) @[top.scala 133:41]
    node _regfileMod_io_WriteData_T_2 = eq(CntrlDecMod.io_Mem2Reg, UInt<1>("h1")) @[top.scala 134:25]
    node _regfileMod_io_WriteData_T_3 = mux(_regfileMod_io_WriteData_T_2, datamemMod.io_out, asSInt(UInt<1>("h0"))) @[Mux.scala 98:16]
    node _regfileMod_io_WriteData_T_4 = mux(_regfileMod_io_WriteData_T, _regfileMod_io_WriteData_T_1, _regfileMod_io_WriteData_T_3) @[Mux.scala 98:16]
    io_out <= UInt<1>("h0") @[top.scala 136:8]
    io_addr <= instmemMod.io_addr @[top.scala 28:9]
    PCMod.clock <= clock
    PCMod.reset <= reset
    PCMod.io_input <= _PCMod_io_input_T_11 @[top.scala 119:16]
    ALUMod.clock <= clock
    ALUMod.reset <= reset
    ALUMod.io_in_A <= _ALUMod_io_in_A_T_9 @[top.scala 49:16]
    ALUMod.io_in_B <= _GEN_2
    ALUMod.io_aluc <= ALUcMod.io_aluc @[top.scala 68:16]
    ALUcMod.clock <= clock
    ALUcMod.reset <= reset
    ALUcMod.io_aluOp <= CntrlDecMod.io_aluop @[top.scala 42:18]
    ALUcMod.io_func3 <= _ALUcMod_io_func3_T @[top.scala 43:18]
    ALUcMod.io_func7 <= _ALUcMod_io_func7_T @[top.scala 44:18]
    BrcntrlMod.clock <= clock
    BrcntrlMod.reset <= reset
    BrcntrlMod.io_aluc <= CntrlDecMod.io_aluop @[top.scala 107:20]
    BrcntrlMod.io_branch <= CntrlDecMod.io_Branch @[top.scala 81:22]
    BrcntrlMod.io_arg_x <= _GEN_6
    BrcntrlMod.io_arg_y <= _GEN_7
    CntrlDecMod.clock <= clock
    CntrlDecMod.reset <= reset
    CntrlDecMod.io_Instruction <= instmemMod.io_inst @[top.scala 27:28]
    datamemMod.clock <= clock
    datamemMod.reset <= reset
    datamemMod.io_Addr <= _datamemMod_io_Addr_T @[top.scala 127:20]
    datamemMod.io_Data <= regfileMod.io_rdata2 @[top.scala 128:20]
    datamemMod.io_MemWrite <= CntrlDecMod.io_MemWrite @[top.scala 129:24]
    datamemMod.io_MemRead <= CntrlDecMod.io_MemRead @[top.scala 130:23]
    ImmgenMod.clock <= clock
    ImmgenMod.reset <= reset
    ImmgenMod.io_instruction <= instmemMod.io_inst @[top.scala 38:26]
    ImmgenMod.io_pc <= PCMod.io_pc @[top.scala 39:17]
    instmemMod.clock <= clock
    instmemMod.reset <= reset
    instmemMod.io_addr <= _instmemMod_io_addr_T @[top.scala 26:20]
    jalrCompMod.clock <= clock
    jalrCompMod.reset <= reset
    jalrCompMod.io_rs1 <= regfileMod.io_rdata1 @[top.scala 110:20]
    jalrCompMod.io_imm <= ImmgenMod.io_i_imm @[top.scala 111:20]
    regfileMod.clock <= clock
    regfileMod.reset <= reset
    regfileMod.io_RegWrite <= CntrlDecMod.io_RegWrite @[top.scala 31:24]
    regfileMod.io_rs1 <= _regfileMod_io_rs1_T @[top.scala 32:18]
    regfileMod.io_rs2 <= _regfileMod_io_rs2_T @[top.scala 33:19]
    regfileMod.io_rd <= config.io_rd_out @[top.scala 75:34]
    regfileMod.io_WriteData <= _regfileMod_io_WriteData_T_4 @[top.scala 132:25]
    config.clock <= clock
    config.reset <= reset
    config.io_zimm <= ALUMod.io_in_B @[top.scala 73:24]
    config.io_rs1 <= _config_io_rs1_T @[top.scala 70:31]
    config.io_rd <= _config_io_rd_T @[top.scala 71:22]
    config.io_rs1_readdata <= regfileMod.io_rdata1 @[top.scala 72:33]
    config.io_current_vl <= asSInt(UInt<3>("h2")) @[top.scala 74:30]
