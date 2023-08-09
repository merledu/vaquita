circuit InstMem1 :
  module InstMem1 :
    input clock : Clock
    input reset : UInt<1>
    input io_addr : UInt<32>
    output io_data : UInt<32>

    mem imem : @[INST_MEM.scala 17:16]
      data-type => UInt<32>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => io_data_MPORT
      read-under-write => undefined
    node _io_data_T = bits(io_addr, 9, 0) @[INST_MEM.scala 20:17]
    io_data <= imem.io_data_MPORT.data @[INST_MEM.scala 20:9]
    imem.io_data_MPORT.addr <= _io_data_T @[INST_MEM.scala 20:17]
    imem.io_data_MPORT.en <= UInt<1>("h1") @[INST_MEM.scala 20:17]
    imem.io_data_MPORT.clk <= clock @[INST_MEM.scala 20:17]
