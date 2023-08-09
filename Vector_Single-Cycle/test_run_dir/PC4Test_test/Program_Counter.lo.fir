circuit Program_Counter :
  module Program_Counter :
    input clock : Clock
    input reset : UInt<1>
    input io_pc : UInt<32>
    output io_out : UInt<32>

    node _io_out_T = add(io_pc, UInt<32>("h4")) @[PC4.scala 12:17]
    node _io_out_T_1 = tail(_io_out_T, 1) @[PC4.scala 12:17]
    io_out <= _io_out_T_1 @[PC4.scala 12:8]
