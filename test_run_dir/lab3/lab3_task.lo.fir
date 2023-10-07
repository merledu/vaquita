circuit lab3_task :
  module lab3_task :
    input clock : Clock
    input reset : UInt<1>
    input io_in : UInt<8>
    output io_out : UInt<32>

    reg io_out_REG : UInt<8>, clock with :
      reset => (UInt<1>("h0"), io_out_REG) @[lab3.scala 9:21]
    io_out <= io_out_REG @[lab3.scala 9:10]
    io_out_REG <= io_in @[lab3.scala 9:21]
