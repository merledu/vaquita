package vaquita
import chisel3._
import chisel3.util._
import chisel3.experimental._


class VecMemFetch(implicit val config: VaquitaConfig) extends Module {
  val io = IO (new Bundle {
    val addr = Input(UInt(32.W))
    val mem_vs3_data       = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vec_read_data_load = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val write_en = Input(Bool())
    val read_en = Input(Bool())
    val dccmReq = Decoupled(new MemRequestIO)
    val dccmRsp = Flipped(Decoupled(new MemResponseIO))
    val mem_lmul_in = Input(UInt(32.W))
  })
  io.dccmRsp.ready := true.B
  io.dccmReq.bits.activeByteLane := "b1111".U
  io.dccmReq.bits.isWrite := io.write_en
  io.dccmReq.valid := true.B
val lmul = WireInit(1.U(32.W))
    switch(io.mem_lmul_in) {
    is(0.U) { lmul := 1.U }
    is(1.U) { lmul := 2.U }
    is(2.U) { lmul := 4.U }
    is(3.U) { lmul := 8.U }
  }

//-----------vector address ---------------------------start
  val vec_load_store_bit = io.read_en || io.write_en
  val vec_load_store_counter = RegInit(((config.vlen.U*2.U)/32.U)-1.U(32.W))
  val offset = RegInit(0.U(32.W))
  val vec_stall = WireInit(false.B)
  when(vec_load_store_bit===1.B && vec_load_store_counter=/=0.U){
    vec_load_store_counter := vec_load_store_counter - 1.U
    vec_stall := true.B
    offset := offset + 4.U
  }.otherwise{
    when (lmul==="b000".U){
      vec_load_store_counter := ((config.vlen.U*1.U)/32.U)-1.U
    }
    .elsewhen (lmul==="b001".U){
      vec_load_store_counter := ((config.vlen.U*2.U)/32.U)-1.U
    }
    .elsewhen (lmul==="b010".U){
      vec_load_store_counter := ((config.vlen.U*4.U)/32.U)-1.U
    }
    .elsewhen (lmul==="b011".U){
      vec_load_store_counter := ((config.vlen.U*8.U)/32.U)-1.U
    }.otherwise{
      vec_load_store_counter := ((config.vlen.U*lmul)/32.U)-1.U
    }
    // changes

    vec_stall := false.B
     offset := 0.U
  }

    io.dccmReq.bits.addrRequest := (io.addr+offset & "h00001fff".U) >> 2//io.addr+offset >> 2
//-----------vector address ---------------------------end




  //---------------data read from memory-------------------

    val vsd_data_reg = RegInit(VecInit(Seq.fill(8){VecInit(Seq.fill(config.count_lanes) {0.S(config.XLEN.W)})}))

    val load_reg_i          = RegInit(0.U(32.W))
    val load_reg_j          = RegInit(0.U(32.W))
    val load_reg_end        = RegInit(((config.vlen.U)/32.U)-1.U(32.W))
    val load_lmul           = lmul//io.mem_lmul_in
    val read_data_last_reg = WireInit(0.S(32.W))
    val read_en_reg = RegNext(io.read_en)
    when(read_en_reg){
      when(load_reg_i=/=load_lmul){
        when(load_reg_j=/=load_reg_end){
          load_reg_j := load_reg_j +1.U
          vsd_data_reg(load_reg_i)(load_reg_j) := io.dccmRsp.bits.dataResponse.asSInt
        }.otherwise{
          vsd_data_reg(load_reg_i)(load_reg_j) := io.dccmRsp.bits.dataResponse.asSInt
          read_data_last_reg := io.dccmRsp.bits.dataResponse.asSInt
          load_reg_j := 0.U
          load_reg_i := load_reg_i +1.U
        }
      }.elsewhen(load_reg_j===load_reg_end){
        load_reg_i := load_reg_i +1.U
      }.otherwise{
        load_reg_j := 0.U
      }
  }.otherwise{
    load_reg_j := 0.U
    load_reg_i := 0.U
  }

  when(load_reg_i+1.U===lmul && load_reg_j===(config.vlen.U/32.U-1.U)){
  for (i <- 0 to 7) { // for grouping = 8
      for (j <- 0 until (config.count_lanes)) {
        io.vec_read_data_load(i)(j) := vsd_data_reg(i)(j)
      }
    }
    //vec changes--------------------------
    io.vec_read_data_load(load_reg_i)((config.vlen.U/32.U-1.U)) := read_data_last_reg
  }.otherwise{
    for (i <- 0 to 7) { // for grouping = 8
      for (j <- 0 until (config.count_lanes)) {
        io.vec_read_data_load(i)(j) := 0.S
      }
    }
  }
  //--------------------load elements ------------------end
  //-------------------store elements--------------------start
val store_reg_i          = RegInit(0.U(32.W))
    val store_reg_j          = RegInit(0.U(32.W))
    val store_reg_end        = RegInit(((config.vlen.U*1.U)/32.U)-1.U(32.W))
    val store_lmul           = lmul
    when(io.write_en){
      when(store_reg_i=/=store_lmul){
        when(store_reg_j=/=store_reg_end){
          store_reg_j := store_reg_j +1.U
          io.dccmReq.bits.dataRequest  := io.mem_vs3_data(store_reg_i)(store_reg_j).asUInt //Mux(io.vec_comparison_bit && store_reg_i>1.U,"hdeadbeef".U,)
          printf("%x\n", io.mem_vs3_data(store_reg_i)(store_reg_j).asUInt)
        }.otherwise{
          io.dccmReq.bits.dataRequest  := io.mem_vs3_data(store_reg_i)((config.vlen.U/32.U-1.U)).asUInt
          printf("%x\n", io.mem_vs3_data(store_reg_i)((config.vlen.U/32.U-1.U)).asUInt)
          store_reg_j := 0.U
          store_reg_i := store_reg_i +1.U
        }
      }.elsewhen(store_reg_j===store_reg_end){
        store_reg_i := store_reg_i +1.U
        io.dccmReq.bits.dataRequest  := 0.U
      }.otherwise{
        store_reg_j := 0.U
        io.dccmReq.bits.dataRequest  := 0.U
      }
  }.otherwise{
    store_reg_j := 0.U
    store_reg_i := 0.U
    io.dccmReq.bits.dataRequest  := 0.U
  }
  dontTouch(load_reg_i)
  dontTouch(load_reg_j)
  dontTouch(load_reg_end)
  dontTouch(load_lmul)
  dontTouch(store_reg_i)
  dontTouch(store_reg_j)
  dontTouch(store_reg_end)
  dontTouch(store_lmul)
  dontTouch(read_en_reg)
  dontTouch(vec_load_store_bit)
  dontTouch(vec_load_store_counter)
}