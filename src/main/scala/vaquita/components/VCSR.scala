package vaquita.components
import chisel3._
import chisel3.util._
import vaquita.configparameter.VaquitaConfig

class VCSR(implicit val config: VaquitaConfig) extends Module {
    val io = IO (new Bundle{
      val instr_in = Input (UInt (32.W ))            
      val vl_rs1_in = Input(UInt(32.W))
      val vec_config = Input(Bool())
      val vl_out = Output(UInt(32.W))
      val vtype_out = Output(UInt(32.W))
      val sew  = Output(UInt(5.W))
      val lmul = Output(UInt(32.W))
    })
    val vtypeReg = RegInit(16.U(32.W))
    val vl = RegInit(4.U(32.W))
    val vstart = RegInit(0.S(32.W))

    when (io.vec_config === 1.B) {         
        vtypeReg := Cat(Fill(20, 0.U), io.instr_in(29,20))   //update 'vtype csr' with  vtype encoding, only when there is configuration setting instruction.
        vl := io.vl_rs1_in                                   //update 'vlReg' with 'io.vl_writeback', only when there is vsetvli instruction.
    }
    io.vl_out := io.vl_rs1_in
    io.vtype_out := vtypeReg
    io.sew := vtypeReg(5,3)
    io.lmul := vtypeReg(2,0)
    dontTouch(vl)
}