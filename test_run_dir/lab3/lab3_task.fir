;buildInfoPackage: chisel3, version: 3.4.3, scalaVersion: 2.12.12, sbtVersion: 1.3.10
circuit lab3_task : 
  module lab3_task : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<8>, out : UInt<32>}
    
    reg io_out_REG : UInt, clock @[lab3.scala 9:21]
    io_out_REG <= io.in @[lab3.scala 9:21]
    io.out <= io_out_REG @[lab3.scala 9:10]
    
