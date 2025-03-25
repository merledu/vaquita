package vaquita.components
import chisel3._
import chisel3.util._
import chisel3.experimental._
import vaquita.configparameter.VaquitaConfig

class VecRegFile(implicit val config: VaquitaConfig) extends Module {
    val io = IO (new Bundle {
        val vs1_addr = Input(UInt(5.W))
        val vs2_addr = Input(UInt(5.W))
        val vd_addr = Input(UInt(5.W))//use for vs3(store)
        val wb_vd_addr = Input(UInt(5.W))
        val vd_data = Input(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val reg_write = Input(Bool())
        val vtype = Input(UInt(32.W))
        val lmul = Input(UInt(3.W))
        val sew = Input(UInt(3.W))
        val vl = Input(SInt(32.W))
        val vs1_data = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val vs2_data = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val vs3_data = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val vs0_data = Output(Vec(8, Vec(config.count_lanes, SInt(config.XLEN.W))))
        val func3 = Input(UInt(3.W))
        val store_vs3_to_mem = Input(Bool())
        val reg_write_decode = Input(Bool())
    })
    val vrf = RegInit(VecInit(Seq.fill(config.reg_count){VecInit(Seq.fill(config.count_lanes) {0.S(config.XLEN.W)})}))
    dontTouch(vrf)
    val vl=3.U
    val vs3_addr = io.vd_addr//decode vs3 addr
    val vs0_addr = 0.U
    def read_vrf(a:Int):Unit={
      when((io.reg_write === 1.B) && (io.vs1_addr === io.wb_vd_addr && 0.U===io.func3 && (io.vs2_addr =/= io.wb_vd_addr)) && io.store_vs3_to_mem===0.B){
        for (i <- 0 until a) { // for grouping = 8
        val offset = i.U
        for (j <- 0 until (config.count_lanes)) {
          io.vs1_data(i)(j) := io.vd_data(offset)(j)
          io.vs2_data(i)(j) := vrf(io.vs2_addr + offset)(j)
          io.vs3_data(i)(j) := vrf(vs3_addr + offset)(j)
          io.vs0_data(i)(j) := vrf(vs0_addr + offset)(j)
    }}}.elsewhen((io.reg_write === 1.B) && (io.vs2_addr === io.wb_vd_addr  && io.store_vs3_to_mem===0.B)){
        for (i <- 0 until a) { // for grouping = 8
        val offset = i.U
        for (j <- 0 until (config.count_lanes)) {
          io.vs2_data(i)(j) := io.vd_data(offset)(j)
          io.vs1_data(i)(j) := vrf(io.vs1_addr + offset)(j)
          io.vs3_data(i)(j) := vrf(vs3_addr + offset)(j)
          io.vs0_data(i)(j) := vrf(vs0_addr + offset)(j)
    }}}.elsewhen((io.reg_write === 1.B) && (io.vd_addr === io.wb_vd_addr  && io.store_vs3_to_mem===1.B) ){//use next vs3 addr for store instruction
        for (i <- 0 until a) { // for grouping = 8
        val offset = i.U
        for (j <- 0 until (config.count_lanes)) {
          io.vs3_data(i)(j) := io.vd_data(offset)(j)
          io.vs1_data(i)(j) := vrf(io.vs1_addr + offset)(j)
          io.vs2_data(i)(j) := vrf(io.vs2_addr + offset)(j)
          io.vs0_data(i)(j) := vrf(vs0_addr + offset)(j)
    }}}.elsewhen((io.reg_write === 1.B) && (vs0_addr === io.wb_vd_addr) && io.store_vs3_to_mem===0.B){
        for (i <- 0 until a) { // for grouping = 8
        val offset = i.U
        for (j <- 0 until (config.count_lanes)) {
          io.vs0_data(i)(j) := io.vd_data(offset)(j)
          io.vs1_data(i)(j) := vrf(io.vs1_addr + offset)(j)
          io.vs2_data(i)(j) := vrf(io.vs2_addr + offset)(j)
          io.vs3_data(i)(j) := vrf(vs3_addr + offset)(j)
    }}}
    .elsewhen((io.reg_write === 1.B) && (io.vs2_addr === io.wb_vd_addr) && (io.vs1_addr === io.wb_vd_addr) && 0.U===io.func3  && io.store_vs3_to_mem===0.B){
        for (i <- 0 until a) { // for grouping = 8
        val offset = i.U
        for (j <- 0 until (config.count_lanes)) {
          io.vs1_data(i)(j) := io.vd_data(offset)(j)
          io.vs2_data(i)(j) := io.vd_data(offset)(j)
          io.vs3_data(i)(j) := vrf(vs3_addr + offset)(j)
          io.vs0_data(i)(j) := vrf(vs0_addr + offset)(j)
    }}}.otherwise{
      for (i <- 0 until a) { // for grouping = 8
        val offset = i.U
        for (j <- 0 until (config.count_lanes)) {
          io.vs1_data(i)(j) := vrf(io.vs1_addr + offset)(j)
          io.vs2_data(i)(j) := vrf(io.vs2_addr + offset)(j)
          io.vs3_data(i)(j) := vrf(vs3_addr + offset)(j)
          io.vs0_data(i)(j) := vrf(vs0_addr + offset)(j)
    }}
    }
    }
    def write_vrf(a:Int):Unit ={
      for (i <- 0 until a) { // for grouping = 8
        val write_offset = i.U
        for (j <- 0 until (config.count_lanes)) {
          vrf(io.wb_vd_addr + write_offset)(j) := io.vd_data(i)(j)
      }}
    }

  for (i <- 0 to 7){
      for (j <- 0 until config.count_lanes) {
        io.vs1_data(i)(j) := 0.S
        io.vs2_data(i)(j) := 0.S
        io.vs3_data(i)(j) := 0.S
        io.vs0_data(i)(j) := 0.S

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

    when (io.reg_write===1.B) {
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