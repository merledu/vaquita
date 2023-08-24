package riscv
import chisel3 . _
import chisel3 . util . _
class s_memory extends Module {
    val io = IO(new Bundle{
    val addr = Input(UInt(32.W))
    val vec_addr =Input(UInt(128.W))
    val mem_data = Input(SInt(32.W))
    val  w_enable= Input(Bool())
    val r_enable = Input(Bool())
    val dataout = Output(SInt(32.W))
    val stall = Input(UInt(32.W))
    val vec_dataout = Output(UInt(128.W))
    val vec_datain = Input(UInt(128.W))
    val vec_en =Input(Bool())

    })
    val memory = Mem(1024,UInt(32.W))
    val rdata = VecInit(Seq.fill(4)(0.U(32.W)))
    val addr32 = VecInit(Seq.fill(4)(0.U(32.W)))
    val vector_data32 = VecInit(Seq.fill(4)(0.U(32.W)))
    addr32(0) := io.vec_addr(31,0)
    addr32(1) := io.vec_addr(63,32)
    addr32(2) := io.vec_addr(95,64)
    addr32(3) := io.vec_addr(127,96)

    vector_data32(0) := io.vec_datain(31,0)
    vector_data32(1) := io.vec_datain(63,32)
    vector_data32(2) := io.vec_datain(95,64)
    vector_data32(3) := io.vec_datain(127,96)
    dontTouch(vector_data32)
    
    
    
    when(io.w_enable===1.B && io.stall >= 0.U && io.vec_en===1.B) {
        for (i <- 0 until 4) {
            memory.write(addr32(i),vector_data32(i))
        }
    }
    .elsewhen(io.w_enable===1.B && io.vec_en===0.B){
        memory.write(io.addr,io.mem_data.asUInt)
    }   
    .elsewhen(io.r_enable===1.B && io.stall >= 0.U && io.vec_en===1.B) {
        for (i <- 0 until 4) {
            rdata(i) := memory.read(addr32(i))
        }
    }
    .otherwise{
        io.dataout := (memory.read(io.addr)).asSInt
    }
     
    io.dataout := (memory.read(io.addr)).asSInt
    io.vec_dataout := Cat(rdata(3),rdata(2),rdata(1),rdata(0))
}