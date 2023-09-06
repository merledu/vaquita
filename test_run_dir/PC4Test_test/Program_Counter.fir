;buildInfoPackage: chisel3, version: 3.4.3, scalaVersion: 2.12.12, sbtVersion: 1.3.10
circuit Program_Counter : 
  module Program_Counter : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip pc : UInt<32>, out : UInt<32>}
    
    io.out <= UInt<1>("h00") @[PC4.scala 11:8]
    node _io_out_T = add(io.pc, UInt<32>("h04")) @[PC4.scala 12:17]
    node _io_out_T_1 = tail(_io_out_T, 1) @[PC4.scala 12:17]
    io.out <= _io_out_T_1 @[PC4.scala 12:8]
    
