circuit Alu_Control :
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
