package riscv
import chisel3 . _
import chisel3 . util . _
class vector_file extends Module {
    val io = IO(new Bundle{
        // val instr = Input(UInt(32.W))
        val vs1_in = Input(UInt(5.W))
        val vs2_in = Input(UInt(5.W))
        val vd = Input(UInt(5.W))
        val vec_enable = Input(Bool())
        val vec_data = Input(SInt(128.W))
        val vs1_out = Output(SInt(128.W))
        val vs2_out = Output(SInt(128.W))
    })
    val regs = RegInit(VecInit(Seq.fill(32)(0.S(128.W))))
    io.vs1_out := Mux((io.vs1_in.orR),regs(io.vs1_in),0.S)
    io.vs2_out := Mux((io.vs2_in.orR),regs(io.vs2_in),0.S)
    when (io.vec_enable & io.vd.orR){
        regs(io.vd):= io.vec_data
    }
}