package vaquita
import chisel3._
import chisel3.util._
import chisel3.experimental._


class vec_mem_fetch(implicit val config: Vaquita_Config) extends Module {
  val io = IO (new Bundle {
    val addr = Input(UInt(32.W))
    val mem_vs3_data = Input(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))
    val vec_read_data_load = Output(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))
    val write_en = Input(Bool())
    val read_en = Input(Bool())
    val dccmReq = Decoupled(new MemRequestIO)
    val dccmRsp = Flipped(Decoupled(new MemResponseIO))
  })
  io.dccmRsp.ready := true.B
  io.dccmReq.bits.activeByteLane := "b1111".U
  // io.dccmReq.bits.dataRequest := 0.U
  // io.dccmReq.bits.addrRequest := io.addr+offset
  io.dccmReq.bits.isWrite := io.write_en
  io.dccmReq.valid := true.B

  // when(io.read_en===1.B){
    for (i <- 0 to 7) { // for grouping = 8
      for (j <- 0 until (config.vlen >> 6)) {
        io.vec_read_data_load(i)(j) := 57.S
      }
//-----------vector address ---------------------------start
  val vec_load_store_bit = io.read_en || io.write_en
  dontTouch(vec_load_store_bit)

  val vec_load_store_counter = RegInit(((config.vlen.U*1.U)/32.U)-1.U(32.W))
  val offset = RegInit(0.U(32.W))

  dontTouch(vec_load_store_counter)
  val vec_stall = WireInit(false.B)
  when(vec_load_store_bit===1.B && vec_load_store_counter=/=0.U){
    vec_load_store_counter := vec_load_store_counter - 1.U
    vec_stall := true.B
    offset := offset + 4.U
  }.otherwise{
    vec_load_store_counter := RegInit(((128.U*1.U)/32.U)-1.U(32.W))
    vec_stall := false.B
     offset := 0.U
  }

    io.dccmReq.bits.addrRequest := io.addr+offset
//-----------vector address ---------------------------end
//------------data send to memory-----------------
  when(io.write_en){
      io.dccmReq.bits.dataRequest := io.mem_vs3_data(0)(0).asUInt
  }.otherwise{
    io.dccmReq.bits.dataRequest := 0.U
  }


      // }
    // }.otherwise{
    //     for (i <- 0 to 7) { // for grouping = 8
    //   for (j <- 0 until (config.vlen >> 6)) {
    //     io.vec_read_data_load(i)(j) := 0.S
    //   }
    //   }

      }
}
// note
// storing data come from vs1 address because in store instruction use the vs2 address