;buildInfoPackage: chisel3, version: 3.4.3, scalaVersion: 2.12.12, sbtVersion: 1.3.10
circuit V_Csr : 
  module V_Csr : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip Vtype_inst : UInt<11>, flip vl_writeback : UInt<32>, vl_out : UInt<32>, vtype_out : UInt<32>}
    
    node vtype_encod_hi = mux(UInt<1>("h00"), UInt<21>("h01fffff"), UInt<21>("h00")) @[Bitwise.scala 72:12]
    node vtype_encod = cat(vtype_encod_hi, io.Vtype_inst) @[Cat.scala 30:58]
    wire _vtypeReg_WIRE : UInt<32>[1] @[V_CSR.scala 19:31]
    _vtypeReg_WIRE[0] <= UInt<32>("h00") @[V_CSR.scala 19:31]
    reg vtypeReg_REG : UInt<32>[1], clock with : (reset => (reset, _vtypeReg_WIRE)) @[V_CSR.scala 19:23]
    vtypeReg_REG[0] <= vtype_encod @[V_CSR.scala 20:10]
    wire _vlReg_WIRE : UInt<32>[1] @[V_CSR.scala 22:28]
    _vlReg_WIRE[0] <= UInt<32>("h00") @[V_CSR.scala 22:28]
    reg vlReg_REG : UInt<32>[1], clock with : (reset => (reset, _vlReg_WIRE)) @[V_CSR.scala 22:20]
    vlReg_REG[0] <= io.vl_writeback @[V_CSR.scala 23:7]
    io.vl_out <= vlReg_REG[0] @[V_CSR.scala 25:11]
    io.vtype_out <= vtypeReg_REG[0] @[V_CSR.scala 26:14]
    
