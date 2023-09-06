;buildInfoPackage: chisel3, version: 3.4.3, scalaVersion: 2.12.12, sbtVersion: 1.3.10
circuit PC : 
  module PC : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : SInt<32>, out : SInt<32>}
    
    reg reg : SInt<32>, clock with : (reset => (reset, asSInt(UInt<32>("h00")))) @[PC.scala 11:18]
    io.out <= reg @[PC.scala 12:8]
    reg <= io.in @[PC.scala 13:5]
    
