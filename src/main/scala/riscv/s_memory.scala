package riscv
import chisel3 . _
import chisel3 . util . _
class s_memory extends Module {
    val io = IO(new Bundle{
    val addr = Input(Vec(4,UInt(32.W)))
    val mem_data = Input(SInt(32.W))
    val  w_enable= Input(Bool())
    val r_enable = Input(Bool())
    val dataout = Output(SInt(128.W))
    val stall = Input(UInt(32.W))
    })
    val rdata = RegInit(VecInit(Seq.fill(4)(0.S(32.W))))
    val memory = Mem(1024,SInt(32.W))

    when(io.w_enable){
        memory.write(io.addr(0),io.mem_data)
    }
    when(io.r_enable && io.stall > 0.U) {
        for (i <- 0 until 4) {
            when (io.stall >= 0.U){
                rdata(i) := memory.read(io.addr(i))
            }
        }
    }
    io.dataout := Cat(rdata(0),rdata(1),rdata(2),rdata(3)).asSInt
}