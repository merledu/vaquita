circuit configure :
  module configure :
    input clock : Clock
    input reset : UInt<1>
    input io_zimm : UInt<32>
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
