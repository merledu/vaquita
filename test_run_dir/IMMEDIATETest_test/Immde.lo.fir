circuit Immde :
  module Immde :
    input clock : Clock
    input reset : UInt<1>
    input io_instr : UInt<32>
    input io_pc : UInt<32>
    input io_I_instruction : UInt<1>
    input io_V_instruction : UInt<1>
    output io_I_type : SInt<32>
    output io_S_type : SInt<32>
    output io_SB_type : SInt<32>
    output io_U_type : SInt<32>
    output io_UJ_type : SInt<32>
    output io_V_I_type : SInt<64>

    node _T = eq(io_I_instruction, UInt<1>("h1")) @[IMMEDIATE.scala 21:24]
    node _io_I_type_T = bits(io_instr, 31, 31) @[IMMEDIATE.scala 22:39]
    node _io_I_type_T_1 = bits(_io_I_type_T, 0, 0) @[Bitwise.scala 72:15]
    node io_I_type_hi = mux(_io_I_type_T_1, UInt<20>("hfffff"), UInt<20>("h0")) @[Bitwise.scala 72:12]
    node io_I_type_lo = bits(io_instr, 31, 20) @[IMMEDIATE.scala 22:54]
    node _io_I_type_T_2 = cat(io_I_type_hi, io_I_type_lo) @[Cat.scala 30:58]
    node _io_I_type_T_3 = asSInt(_io_I_type_T_2) @[IMMEDIATE.scala 22:63]
    node _io_S_type_T = bits(io_instr, 31, 31) @[IMMEDIATE.scala 24:39]
    node _io_S_type_T_1 = bits(_io_S_type_T, 0, 0) @[Bitwise.scala 72:15]
    node io_S_type_hi_hi = mux(_io_S_type_T_1, UInt<20>("hfffff"), UInt<20>("h0")) @[Bitwise.scala 72:12]
    node io_S_type_hi_lo = bits(io_instr, 31, 25) @[IMMEDIATE.scala 24:54]
    node io_S_type_lo = bits(io_instr, 11, 7) @[IMMEDIATE.scala 24:71]
    node io_S_type_hi = cat(io_S_type_hi_hi, io_S_type_hi_lo) @[Cat.scala 30:58]
    node _io_S_type_T_2 = cat(io_S_type_hi, io_S_type_lo) @[Cat.scala 30:58]
    node _io_S_type_T_3 = asSInt(_io_S_type_T_2) @[IMMEDIATE.scala 24:79]
    node _a_T = bits(io_instr, 31, 31) @[IMMEDIATE.scala 26:34]
    node _a_T_1 = bits(_a_T, 0, 0) @[Bitwise.scala 72:15]
    node a_hi_hi_hi = mux(_a_T_1, UInt<19>("h7ffff"), UInt<19>("h0")) @[Bitwise.scala 72:12]
    node a_hi_hi_lo = bits(io_instr, 31, 31) @[IMMEDIATE.scala 26:49]
    node a_hi_lo = bits(io_instr, 7, 7) @[IMMEDIATE.scala 26:63]
    node a_lo_hi_hi = bits(io_instr, 30, 25) @[IMMEDIATE.scala 26:76]
    node a_lo_hi_lo = bits(io_instr, 11, 8) @[IMMEDIATE.scala 26:93]
    node a_lo_hi = cat(a_lo_hi_hi, a_lo_hi_lo) @[Cat.scala 30:58]
    node a_lo = cat(a_lo_hi, UInt<1>("h0")) @[Cat.scala 30:58]
    node a_hi_hi = cat(a_hi_hi_hi, a_hi_hi_lo) @[Cat.scala 30:58]
    node a_hi = cat(a_hi_hi, a_hi_lo) @[Cat.scala 30:58]
    node _a_T_2 = cat(a_hi, a_lo) @[Cat.scala 30:58]
    node a = asSInt(_a_T_2) @[IMMEDIATE.scala 26:106]
    node _io_SB_type_T = asSInt(io_pc) @[IMMEDIATE.scala 27:29]
    node _io_SB_type_T_1 = add(a, _io_SB_type_T) @[IMMEDIATE.scala 27:21]
    node _io_SB_type_T_2 = tail(_io_SB_type_T_1, 1) @[IMMEDIATE.scala 27:21]
    node _io_SB_type_T_3 = asSInt(_io_SB_type_T_2) @[IMMEDIATE.scala 27:21]
    node io_U_type_hi = bits(io_instr, 31, 12) @[IMMEDIATE.scala 29:30]
    node io_U_type_lo = mux(UInt<1>("h0"), UInt<12>("hfff"), UInt<12>("h0")) @[Bitwise.scala 72:12]
    node _io_U_type_T = cat(io_U_type_hi, io_U_type_lo) @[Cat.scala 30:58]
    node _io_U_type_T_1 = asSInt(_io_U_type_T) @[IMMEDIATE.scala 29:57]
    node _b_T = bits(io_instr, 31, 31) @[IMMEDIATE.scala 31:34]
    node _b_T_1 = bits(_b_T, 0, 0) @[Bitwise.scala 72:15]
    node b_hi_hi_hi = mux(_b_T_1, UInt<11>("h7ff"), UInt<11>("h0")) @[Bitwise.scala 72:12]
    node b_hi_hi_lo = bits(io_instr, 31, 31) @[IMMEDIATE.scala 31:49]
    node b_hi_lo = bits(io_instr, 19, 12) @[IMMEDIATE.scala 31:63]
    node b_lo_hi_hi = bits(io_instr, 20, 20) @[IMMEDIATE.scala 31:80]
    node b_lo_hi_lo = bits(io_instr, 30, 21) @[IMMEDIATE.scala 31:94]
    node b_lo_hi = cat(b_lo_hi_hi, b_lo_hi_lo) @[Cat.scala 30:58]
    node b_lo = cat(b_lo_hi, UInt<1>("h0")) @[Cat.scala 30:58]
    node b_hi_hi = cat(b_hi_hi_hi, b_hi_hi_lo) @[Cat.scala 30:58]
    node b_hi = cat(b_hi_hi, b_hi_lo) @[Cat.scala 30:58]
    node _b_T_2 = cat(b_hi, b_lo) @[Cat.scala 30:58]
    node b = asSInt(_b_T_2) @[IMMEDIATE.scala 31:108]
    node _io_UJ_type_T = asSInt(io_pc) @[IMMEDIATE.scala 32:29]
    node _io_UJ_type_T_1 = add(b, _io_UJ_type_T) @[IMMEDIATE.scala 32:21]
    node _io_UJ_type_T_2 = tail(_io_UJ_type_T_1, 1) @[IMMEDIATE.scala 32:21]
    node _io_UJ_type_T_3 = asSInt(_io_UJ_type_T_2) @[IMMEDIATE.scala 32:21]
    node _T_1 = eq(io_V_instruction, UInt<1>("h1")) @[IMMEDIATE.scala 36:30]
    node io_V_I_type_hi = mux(UInt<1>("h0"), UInt<59>("h7ffffffffffffff"), UInt<59>("h0")) @[Bitwise.scala 72:12]
    node io_V_I_type_lo = bits(io_instr, 19, 15) @[IMMEDIATE.scala 42:47]
    node _io_V_I_type_T = cat(io_V_I_type_hi, io_V_I_type_lo) @[Cat.scala 30:58]
    node _io_V_I_type_T_1 = asSInt(_io_V_I_type_T) @[IMMEDIATE.scala 42:57]
    node _GEN_0 = mux(_T_1, asSInt(UInt<1>("h0")), asSInt(UInt<1>("h0"))) @[IMMEDIATE.scala 36:39 IMMEDIATE.scala 37:15 IMMEDIATE.scala 45:15]
    node _GEN_1 = mux(_T_1, _io_V_I_type_T_1, asSInt(UInt<1>("h0"))) @[IMMEDIATE.scala 36:39 IMMEDIATE.scala 42:17 IMMEDIATE.scala 50:17]
    node _GEN_2 = mux(_T, _io_I_type_T_3, _GEN_0) @[IMMEDIATE.scala 21:33 IMMEDIATE.scala 22:15]
    node _GEN_3 = mux(_T, _io_S_type_T_3, _GEN_0) @[IMMEDIATE.scala 21:33 IMMEDIATE.scala 24:15]
    node _GEN_4 = mux(_T, _io_SB_type_T_3, _GEN_0) @[IMMEDIATE.scala 21:33 IMMEDIATE.scala 27:16]
    node _GEN_5 = mux(_T, _io_U_type_T_1, _GEN_0) @[IMMEDIATE.scala 21:33 IMMEDIATE.scala 29:15]
    node _GEN_6 = mux(_T, _io_UJ_type_T_3, _GEN_0) @[IMMEDIATE.scala 21:33 IMMEDIATE.scala 32:16]
    node _GEN_7 = mux(_T, asSInt(UInt<1>("h0")), _GEN_1) @[IMMEDIATE.scala 21:33 IMMEDIATE.scala 34:17]
    io_I_type <= _GEN_2
    io_S_type <= _GEN_3
    io_SB_type <= _GEN_4
    io_U_type <= _GEN_5
    io_UJ_type <= _GEN_6
    io_V_I_type <= _GEN_7
