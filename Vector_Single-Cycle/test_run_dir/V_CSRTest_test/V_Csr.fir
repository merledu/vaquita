;buildInfoPackage: chisel3, version: 3.4.3, scalaVersion: 2.12.12, sbtVersion: 1.3.10
circuit V_Csr : 
  module V_Csr : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip Vtype_inst : UInt<11>, flip vl_writeback : UInt<32>, vl_out : UInt<32>}
    
    node vtype_encod_hi = mux(UInt<1>("h00"), UInt<20>("h0fffff"), UInt<20>("h00")) @[Bitwise.scala 72:12]
    node vtype_encod = cat(vtype_encod_hi, io.Vtype_inst) @[Cat.scala 30:58]
    reg vtypeReg : UInt, clock with : (reset => (reset, vtype_encod)) @[V_CSR.scala 18:23]
    reg vlReg : UInt, clock with : (reset => (reset, io.vl_writeback)) @[V_CSR.scala 19:20]
    io.vl_out <= vlReg @[V_CSR.scala 23:11]
    
