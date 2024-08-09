package vaquita
import chisel3._
import chisel3.util._
import chisel3.experimental._


class vec_reg_file(implicit val config: Config) extends Module {
  val io = IO (new Bundle {
    val vs1_addr = Input(UInt(5.W))
    val vs2_addr = Input(UInt(5.W))
    val vd_addr = Input(UInt(5.W))//not use
    val wb_vd_addr = Input(UInt(5.W))
    val vd_data = Input(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))
    val reg_write = Input(Bool())
    val vtype = Input(UInt(32.W))
    val lmul = Input(UInt(3.W))
    val sew = Input(UInt(3.W))
    val vl = Input(SInt(32.W))
    val vs1_data = Output(Vec(8, Vec(config.count_lanes, SInt(64.W))))
    val vs2_data = Output(Vec(8, Vec(config.count_lanes, SInt(64.W))))
    val vs0_data = Output (SInt(config.vlen.W))
    val func3 = Input(UInt(3.W))
    // val mask_bits = Output(Vec(8, UInt(4.W)))
  })
  val vrf = RegInit(VecInit(Seq.fill(config.reg_count){VecInit(Seq.fill(config.vlen>> 6) {0.S(64.W)})})) //6 means 64 bits
  dontTouch(vrf)
 val vl=3.U
  def read_vrf(a:Int):Unit={
    when((io.reg_write === 1.B) && (io.vs1_addr === io.wb_vd_addr && 0.U===io.func3 && (io.vs2_addr =/= io.wb_vd_addr))){
      for (i <- 0 until a) { // for grouping = 8
      val offset = i.U
      for (j <- 0 until (config.vlen >> 6)) {
        io.vs1_data(i)(j) := io.vd_data(io.vs1_addr + offset)(j)
        io.vs2_data(i)(j) := vrf(io.vs2_addr + offset)(j)
  }}}.elsewhen((io.reg_write === 1.B) && (io.vs2_addr === io.wb_vd_addr && (io.vs1_addr =/= io.wb_vd_addr))){
      for (i <- 0 until a) { // for grouping = 8
      val offset = i.U
      for (j <- 0 until (config.vlen >> 6)) {
        io.vs2_data(i)(j) := io.vd_data(io.vs2_addr + offset)(j)
        io.vs1_data(i)(j) := vrf(io.vs1_addr + offset)(j)
  }}}.elsewhen((io.reg_write === 1.B) && (io.vs2_addr === io.wb_vd_addr) && (io.vs1_addr === io.wb_vd_addr) && 0.U===io.func3){
      for (i <- 0 until a) { // for grouping = 8
      val offset = i.U
      for (j <- 0 until (config.vlen >> 6)) {
        io.vs1_data(i)(j) := io.vd_data(io.vs1_addr + offset)(j)
        io.vs2_data(i)(j) := io.vd_data(io.vs2_addr + offset)(j)
  }}}.otherwise{
    for (i <- 0 until a) { // for grouping = 8
      val offset = i.U
      for (j <- 0 until (config.vlen >> 6)) {
        io.vs1_data(i)(j) := vrf(io.vs1_addr + offset)(j)
        io.vs2_data(i)(j) := vrf(io.vs2_addr + offset)(j)
  }}
  }
  }

  def write_vrf(a:Int):Unit ={
    val ab=0.U
    for (i <- 0 until a) { // for grouping = 8
      val offset = i.U
      for (j <- 0 until (config.count_lanes)) {
        vrf(io.wb_vd_addr + offset)(j) := io.vd_data(i)(j)
    }}
  }

for (i <- 0 to 7){
    for (j <- 0 until config.count_lanes) {
      io.vs1_data(i)(j) := 0.S
      io.vs2_data(i)(j) := 0.S
    }
  }

  when(io.lmul===0.U){
    read_vrf(1)
  }.elsewhen(io.lmul===1.U){
    read_vrf(2)
  }.elsewhen(io.lmul===2.U){
    read_vrf(4)
  }.elsewhen(io.lmul===3.U){
    read_vrf(8)
  } .otherwise{
    read_vrf(1)
  }

  // def mask_Selector():Unit = {
  //   val sew = 2//sew 32
  //   val count = 0
  //   when (count <= io.vl){
  //   for (i <- 0 to sew){
  //     io.mask_bits := vrf()
  //   }}
  // }
io.vs0_data := vrf(0)(0)

  when (io.reg_write) {
    when(io.lmul===0.U){
    write_vrf(1)
  }.elsewhen(io.lmul===1.U){
    write_vrf(2)
  }.elsewhen(io.lmul===2.U){
    write_vrf(4)
  }.elsewhen(io.lmul===3.U){
    write_vrf(8)
  } .otherwise{
    write_vrf(1)
  }
    }
}