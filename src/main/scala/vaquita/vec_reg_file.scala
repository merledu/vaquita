package vaquita
import chisel3._
import chisel3.util._
import chisel3.experimental._


class vec_reg_file(implicit val config: Config) extends Module {
  val io = IO (new Bundle {
    val vs1_addr = Input(UInt(5.W))
    val vs2_addr = Input(UInt(5.W))
    val vd_addr = Input(UInt(5.W))
    val vd_data = Input(Vec((config.vlen >> 6),SInt(64.W)))
    val reg_write = Input(Bool())
    val vtype = Input(UInt(32.W))
    val lmul = Input(UInt(5.W))
    // val vl = Input(UInt(32.W))
    val vs1_data = Output(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))
    val vs2_data = Output(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))
    val vs0_data = Output (SInt(config.vlen.W))
  })
  val vrf = RegInit(VecInit(Seq.fill(config.reg_count){VecInit(Seq.fill(config.vlen>> 6) {0.S(64.W)})})) //6 means 64 bits
  dontTouch(vrf)

  // hardcoded value
  vrf(1)(0) := 10.S
  vrf(1)(1) := 20.S
for (i <- 0 to 7){
    for (j <- 0 until 2) {
      io.vs1_data(i)(j) := 0.S
      io.vs2_data(i)(j) := 0.S
    }
  }


  for (i <- 0 to 7) { // for grouping = 8
  val offset = i.U
  for (j <- 0 until (config.vlen >> 6)) {
    io.vs1_data(i)(j) := vrf(io.vs1_addr + offset)(j)
    io.vs2_data(i)(j) := vrf(io.vs2_addr + offset)(j)
  }
}
  // dontTouch(vs1_data_wire)
  // dontTouch(vs2_data_wire)
io.vs0_data := vrf(0)(0)

//   when (io.reg_write) {
//       for (i <- 0 to 7) { // for grouping = 8
//   val offset = i.U
//   for (j <- 0 until (config.vlen >> 6)) {
//     vrf(io.vs1_addr + offset)(j) := io.vs1_data(i)(j)
//     vrf(io.vs2_addr + offset)(j) := io.vs2_data(i)(j)
//   }
// }
  // }
}