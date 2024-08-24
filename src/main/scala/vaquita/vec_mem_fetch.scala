package vaquita
import chisel3._
import chisel3.util._
import chisel3.experimental._


class vec_mem_fetch(implicit val config: Vaquita_Config) extends Module {
  val io = IO (new Bundle {
    val addr = Input(UInt(32.W))
    val mem_vs3_data       = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
    val vec_read_data_load = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
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

//   // when(io.read_en===1.B){
//     for (i <- 0 to 7) { // for grouping = 8
//       for (j <- 0 until (config.vlen >> 6)) {
//         io.vec_read_data_load(i)(j) := WireInit(0.S(32.W))// io.dccmRsp.bits.dataResponse.asSInt
//       }
//     }
// io.vec_read_data_load(0)(0) := io.dccmRsp.bits.dataResponse.asSInt

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
    vec_load_store_counter := RegInit(((config.vlen.U*1.U)/32.U)-1.U(32.W))
    vec_stall := false.B
     offset := 0.U
  }

    io.dccmReq.bits.addrRequest := (io.addr+offset & "h00001fff".U) >> 2//io.addr+offset >> 2
//-----------vector address ---------------------------end


//------------data send to memory-----------------


  // when(io.write_en){
  //     io.dccmReq.bits.dataRequest := io.mem_vs3_data(0)(0).asUInt
  // }.otherwise{
  //   io.dccmReq.bits.dataRequest := 0.U
  // }


      // }
    // }.otherwise{
    //     for (i <- 0 to 7) { // for grouping = 8
    //   for (j <- 0 until (config.vlen >> 6)) {
    //     io.vec_read_data_load(i)(j) := 0.S
    //   }
    //   }

      // }

      
      
  //   val write_data = io.mem_vs3_data(0)(0).asUInt

  // when(io.write_en){
  //   printf("%x\n", write_data(31,0))
  // }



  //---------------data read from memory-------------------

    // val initValue    = VecInit(Seq.fill(8)(VecInit(Seq.fill(config.count_lanes)(0.S(config.XLEN.W)))))
    val vsd_data_reg = RegInit(VecInit(Seq.fill(8){VecInit(Seq.fill(config.count_lanes) {0.S(config.XLEN.W)})}))

    // val vsd_data_reg = RegNext(initValue)

    // for (i <- 0 to 7) { // for grouping = 8
    //     for (j <- 0 until (config.count_lanes)) {
    //         vsd_data(i)(j) := io.mem_vsd_data_in(i)(j)
    //         io.mem_vsd_data_out(i)(j) := vsd_data(i)(j)
    //         // vs3_data(i)(j) := io.mem_vs1_data_vs3_in(i)(j)
    //         io.vs3_data_out(i)(j) := io.mem_vs1_data_vs3_in(i)(j)// vs3_data(i)(j)
    //         // io.vec_read_data_load(i)(j) := 0.S
    //       }
    // }

    // ---------------- reg store


    val load_reg_i          = RegInit(0.U(32.W))
    val load_reg_j          = RegInit(0.U(32.W))
    val load_reg_end        = RegInit(((config.vlen.U*1.U)/32.U)-1.U(32.W))
    val load_lmul           = RegInit(1.U(32.W))
    val read_data_last_reg = WireInit(0.S(32.W))
    dontTouch(load_reg_i)
    dontTouch(load_reg_j)
    dontTouch(load_reg_end)
    dontTouch(load_lmul)
    val read_en_reg = RegNext(io.read_en)
    dontTouch(read_en_reg)
    when(read_en_reg){
      when(load_reg_i=/=load_lmul){
        when(load_reg_j=/=load_reg_end){
          load_reg_j := load_reg_j +1.U
          vsd_data_reg(load_reg_i)(load_reg_j) := io.dccmRsp.bits.dataResponse.asSInt
        }.otherwise{
          read_data_last_reg := io.dccmRsp.bits.dataResponse.asSInt
          load_reg_j := 0.U
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

  when(load_reg_j===7.U){//vec changes
  for (i <- 0 to 7) { // for grouping = 8
      for (j <- 0 until (config.count_lanes)) {
        io.vec_read_data_load(i)(j) := vsd_data_reg(i)(j)// io.dccmRsp.bits.dataResponse.asSInt
      }
    }
    //vec changes--------------------------
    io.vec_read_data_load(0)(7) := read_data_last_reg
  }.otherwise{
    for (i <- 0 to 7) { // for grouping = 8
      for (j <- 0 until (config.count_lanes)) {
        io.vec_read_data_load(i)(j) := 0.S// io.dccmRsp.bits.dataResponse.asSInt
      }
    }
  }
  //--------------------load elements ------------------end
  //-------------------store elements--------------------start
val store_reg_i          = RegInit(0.U(32.W))
    val store_reg_j          = RegInit(0.U(32.W))
    val store_reg_end        = RegInit(((config.vlen.U*1.U)/32.U)-1.U(32.W))
    val store_lmul           = RegInit(1.U(32.W))
    dontTouch(store_reg_i)
    dontTouch(store_reg_j)
    dontTouch(store_reg_end)
    dontTouch(store_lmul)
    when(io.write_en){
      when(store_reg_i=/=store_lmul){
        when(store_reg_j=/=store_reg_end){
          store_reg_j := store_reg_j +1.U
          io.dccmReq.bits.dataRequest  := io.mem_vs3_data(store_reg_i)(store_reg_j).asUInt
          printf("%x\n", io.mem_vs3_data(store_reg_i)(store_reg_j).asUInt)
        }.otherwise{
          io.dccmReq.bits.dataRequest  := io.mem_vs3_data(store_reg_i)(3).asUInt
          printf("%x\n", io.mem_vs3_data(store_reg_i)(3).asUInt)
          store_reg_j := 0.U
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

// //---------check code-----------------start
//   when(io.write_en){
//       when(reg_i=/=lmul){
//         when(reg_j=/=reg_end){
//           when(reg_k===0.B){
//             io.dccmReq.bits.dataRequest  := io.mem_vs3_data(reg_i)(reg_j)(31,0).asUInt
//             printf("%x\n", io.mem_vs3_data(reg_i)(reg_j).asUInt)
//             reg_k := 1.B
//           }.otherwise{
//             io.dccmReq.bits.dataRequest  := io.mem_vs3_data(reg_i)(reg_j).asUInt
//             printf("%x\n", io.mem_vs3_data(reg_i)(reg_j).asUInt)
//             reg_k := 0.B
//           }
//         }.otherwise{
//           io.dccmReq.bits.dataRequest  := 0.U
//         }
//       }.otherwise{
//         io.dccmReq.bits.dataRequest  := 0.U
//       }
//   }.otherwise{
//     io.dccmReq.bits.dataRequest := 0.U
//   }
}