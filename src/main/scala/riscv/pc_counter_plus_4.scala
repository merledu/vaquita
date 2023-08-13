package riscv
import chisel3 . _
import chisel3 . util . _
class pc_counter_plus_4 extends Module {
    val io = IO(new Bundle{
        val pc = Input(UInt(32.W))
        val out = Output(UInt(32.W))
        val out4 = Output(UInt(32.W))
    })
    val reg = RegInit(0.U(32.W))
    reg := io.pc
    io.out := reg
    io.out4 := reg + 4.U
}