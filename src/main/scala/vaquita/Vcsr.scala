package vaquita
import chisel3._
import chisel3.util._

class Vcsr(implicit val config: Vaquita_Config) extends Module {
    val io = IO (new Bundle{
        val instr_in = Input (UInt (32.W ))            
        val vl_rs1_in = Input(UInt(32.W))
        val vec_config = Input(Bool())
        val vl_out = Output(UInt(32.W))
        val vtype_out = Output(UInt(32.W))
        // val vstart_out =Output(SInt(32.W))
        val sew = Output(UInt(5.W))
        // val out1 = Output(UInt(5.W))
})
val vtypeReg = RegInit(16.U(32.W))//
val vl = RegInit(4.U(32.W))
val vstart = RegInit(0.S(32.W))

  // val vsetivli_lmul = WireInit(1.U(4.W))
  // switch(io.instr_in(22,20)) {
  //   is(0.U) { vsetivli_lmul := 1.U }
  //   is(1.U) { vsetivli_lmul := 2.U }
  //   is(2.U) { vsetivli_lmul := 4.U }
  //   is(3.U) { vsetivli_lmul := 8.U }
  // }

// val vsetivli_sew = WireInit(0.U(10.W))
//   switch(io.instr_in(25,23)) {
//     is(0.U) { vsetivli_sew := 8.U }
//     is(1.U) { vsetivli_sew := 16.U }
//     is(2.U) { vsetivli_sew := 32.U }
//     is(3.U) { vsetivli_sew := 64.U }
//   }

// def vl_max_calculate(Lmul:UInt,Sew:UInt):UInt={
//     val vl_max = (config.vlen.U*Lmul)/Sew
//     vl_max
// }

// val rs1 = io.instr_in(19,15)
// val rd = 0.U
// val vl=RegInit(0.U)
// // val VLMAX = vl_max_calculate(vsetivli_lmul,vsetivli_sew)
// when(io.vec_config){
//     when (rs1=/=0.U){
//     when(rs1<=VLMAX){
//     vl := rs1
//     }.elsewhen(rs1 >= (2.U * VLMAX)){
//         vl := VLMAX
//     }
//    }.elsewhen(rd=/=0.U && rs1===0.U){
//     vl := VLMAX
//    }.elsewhen(rd===0.U && rs1===0.U){
//     vl := vl
//     }
// }


when (io.vec_config === 1.B) {         
    vtypeReg := Cat(Fill(20, 0.U), io.instr_in(29,20))   //update 'vtype csr' with  vtype encoding, only when there is configuration setting instruction.
    vl := io.vl_rs1_in        //update 'vlReg' with 'io.vl_writeback', only when there is vsetvli instruction.
}
io.vl_out := io.vl_rs1_in
io.vtype_out := vtypeReg
// io.vstart_out := vstart
io.sew := vtypeReg(5,3)
dontTouch(vl)
}