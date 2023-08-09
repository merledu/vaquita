circuit V_Csr :
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
