;buildInfoPackage: chisel3, version: 3.4.3, scalaVersion: 2.12.12, sbtVersion: 1.3.10
circuit InstMem1 : 
  module InstMem1 : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip addr : UInt<32>, data : UInt<32>}
    
    cmem imem : UInt<32>[1024] @[INST_MEM.scala 17:16]
    node _io_data_T = bits(io.addr, 9, 0) @[INST_MEM.scala 20:17]
    infer mport io_data_MPORT = imem[_io_data_T], clock @[INST_MEM.scala 20:17]
    io.data <= io_data_MPORT @[INST_MEM.scala 20:9]
    
