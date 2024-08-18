package vaquita
import chisel3._
import chisel3.util._


class vsetvli(implicit val config: Vaquita_Config,val on : Bool =1.B, val off : Bool =0.B) extends Module {
  val io = IO (new Bundle {
    val rs1_in = Input(UInt(32.W))
    val instr_in = Input(UInt(32.W))
    val vl = Output(UInt(32.W))
    // val sew = Input(UInt(3.W))
  })

val vsetivli_lmul = WireInit(1.U(4.W))
  switch(io.instr_in(22,20)) {
    is(0.U) { vsetivli_lmul := 1.U }
    is(1.U) { vsetivli_lmul := 2.U }
    is(2.U) { vsetivli_lmul := 4.U }
    is(3.U) { vsetivli_lmul := 8.U }
  }

val vsetivli_sew = WireInit(0.U(10.W))
  switch(io.instr_in(25,23)) {
    is(0.U) { vsetivli_sew := 8.U }
    is(1.U) { vsetivli_sew := 16.U }
    is(2.U) { vsetivli_sew := 32.U }
    is(3.U) { vsetivli_sew := 64.U }
  }

def vl_max_calculate(Lmul:UInt,Sew:UInt):UInt={
    val vl_max = (config.vlen.U*Lmul)/Sew
    vl_max
}
// val rs1 = WireInit(0.U(32.W))
// rs1 := io.rs1_in
// val rs1 = io.instr_in(19,15)
val rd = io.instr_in(11,7)
// val vl=RegInit(0.U)
val VLMAX = vl_max_calculate(vsetivli_lmul,vsetivli_sew)
val vec_config = io.instr_in(6,0)==="b1010111".U && io.instr_in(14,12)==="b111".U
when(vec_config===1.B){
    when (io.instr_in(19,15)=/=0.U){
    when(io.rs1_in<=VLMAX){
    io.vl := io.rs1_in
    }.elsewhen(io.rs1_in >= VLMAX){
        io.vl := VLMAX
    }.otherwise{
        io.vl := 3.U
    }
   }.elsewhen(io.instr_in(11,7)=/=0.U && io.instr_in(19,15)===0.U){
    io.vl := VLMAX
   }.otherwise{
    io.vl:=2.U
   }
//    .elsewhen(rd===0.U && rs1===0.U){
//     io.vl := vl
//     }
}
.otherwise{
    io.vl := 1.U
}
dontTouch(io.vl)
}