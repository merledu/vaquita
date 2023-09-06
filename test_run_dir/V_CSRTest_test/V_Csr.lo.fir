circuit V_Csr :
  module V_Csr :
    input clock : Clock
    input reset : UInt<1>
    input io_Vtype_inst : UInt<11>
    input io_vl_writeback : UInt<32>
    output io_vl_out : UInt<32>
    output io_vtype_out : UInt<32>

    node vtype_encod_hi = mux(UInt<1>("h0"), UInt<21>("h1fffff"), UInt<21>("h0")) @[Bitwise.scala 72:12]
    node vtype_encod = cat(vtype_encod_hi, io_Vtype_inst) @[Cat.scala 30:58]
    reg vtypeReg_REG_0 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), vtypeReg_REG_0) @[V_CSR.scala 19:23]
    reg vlReg_REG_0 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), vlReg_REG_0) @[V_CSR.scala 22:20]
    node _vtypeReg_WIRE_0 = UInt<32>("h0") @[V_CSR.scala 19:31 V_CSR.scala 19:31]
    node _vlReg_WIRE_0 = UInt<32>("h0") @[V_CSR.scala 22:28 V_CSR.scala 22:28]
    io_vl_out <= vlReg_REG_0 @[V_CSR.scala 25:11]
    io_vtype_out <= vtypeReg_REG_0 @[V_CSR.scala 26:14]
    vtypeReg_REG_0 <= mux(reset, _vtypeReg_WIRE_0, vtype_encod) @[V_CSR.scala 19:23 V_CSR.scala 19:23 V_CSR.scala 20:10]
    vlReg_REG_0 <= mux(reset, _vlReg_WIRE_0, io_vl_writeback) @[V_CSR.scala 22:20 V_CSR.scala 22:20 V_CSR.scala 23:7]
