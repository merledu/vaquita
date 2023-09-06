circuit PC :
  module PC :
    input clock : Clock
    input reset : UInt<1>
    input io_in : SInt<32>
    output io_out : SInt<32>

    reg reg : SInt<32>, clock with :
      reset => (UInt<1>("h0"), reg) @[PC.scala 11:18]
    io_out <= reg @[PC.scala 12:8]
    reg <= mux(reset, asSInt(UInt<32>("h0")), io_in) @[PC.scala 11:18 PC.scala 11:18 PC.scala 13:5]
