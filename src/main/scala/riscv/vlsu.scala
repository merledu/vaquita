package riscv
import chisel3 . _
import chisel3 . util . _
class vlsu extends Module {
    val io = IO(new Bundle{
        val vlmul = Input(UInt(3.W))
        val vsew = Input(UInt(3.W))
        val opcode = Input(UInt(7.W))
        val mew = Input(UInt(1.W))
        val width_lw = Input(UInt(3.W))
        
        val out = Output(UInt(32.W))
    })
    //configuration  out===out
    when (io.opcode === "b1010111".U){
        when (io.vlmul==="b011".U && io.vsew==="b000".U){
            io.out :=128.U
        }
        .elsewhen ((io.vlmul==="b010".U  && io.vsew==="b000".U) || (io.vlmul==="b011".U && io.vsew==="b001".U))
        {
            io.out := 64.U
        }
        .elsewhen ((io.vlmul==="b001".U && io.vsew==="b000".U) || (io.vlmul==="b010".U && io.vsew==="b001".U) || 
        (io.vlmul==="b011".U && io.vsew==="b010".U))
        {
            io.out := 32.U
        }

        .elsewhen ((io.vlmul==="b000".U && io.vsew==="b000".U) || (io.vlmul==="b001".U && io.vsew==="b001".U) || 
        (io.vlmul==="b010".U && io.vsew==="b010".U) || (io.vlmul==="b011".U && io.vsew==="b011".U))
        {
            io.out := 16.U
        }

        .elsewhen ((io.vlmul==="b000".U && io.vsew==="b001".U) || (io.vlmul==="b001".U && io.vsew==="b010".U) || 
        (io.vlmul==="b010".U && io.vsew==="b011".U) || (io.vlmul==="b111".U && io.vsew==="b000".U))
        {
            io.out := 8.U
        }

        .elsewhen ((io.vlmul==="b000".U && io.vsew==="b010".U)  || (io.vlmul==="b001".U && io.vsew==="b011".U)  ||  
        (io.vlmul==="b111".U && io.vsew==="b001".U) || (io.vlmul==="b110".U && io.vsew==="b000".U))
        {
            io.out := 4.U
        }
        .elsewhen ((io.vlmul==="b000".U && io.vsew==="b011".U) || (io.vlmul==="b111".U && io.vsew==="b010".U) || 
        (io.vlmul==="b110".U && io.vsew==="b001".U) || (io.vlmul==="b101".U && io.vsew==="b000".U))
        {
            io.out := 2.U
        }
        .elsewhen ((io.vlmul==="b111".U && io.vsew==="b011".U) || (io.vlmul==="b110".U && io.vsew==="b010".U) ||
        (io.vlmul==="b101".U && io.vsew==="b001".U))
        {
            io.out := 1.U
        }
        .otherwise{
        io.out := 0.U
        }
    }
    // load instruction  out===mem bits
    .elsewhen(io.opcode==="b0000111".U){
        when(io.mew===0.U && io.width_lw==="b000".U){
            io.out := 8.U
        }
        .elsewhen(io.mew===0.U && io.width_lw==="b101".U){
            io.out := 16.U
        }
        .elsewhen(io.mew===0.U && io.width_lw==="b110".U){
            io.out := 32.U
        }
        .elsewhen(io.mew===0.U && io.width_lw==="b111".U){
            io.out := 64.U
        }
        .otherwise{
            io.out := 0.U
        }
    }
    .otherwise{
    io.out := 0.U
    }

}