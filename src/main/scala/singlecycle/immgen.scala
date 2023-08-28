package singlecycle
import chisel3._
import chisel3.util._

class ImmdValGen( n : Int) extends Bundle {
    val instruction = Input ( UInt (32. W ) )
    val pc = Input(UInt(32.W))
	val s_imm = Output(SInt(32.W))
	val sb_imm = Output(SInt(32.W))
	val uj_imm = Output(SInt(32.W))
	val u_imm = Output(SInt(32.W))
	val i_imm = Output(SInt(32.W))
	val z_imm = Output(SInt(32.W))
	val v_imm = Output(SInt(n.W))

}

class ImmdValGen1(n: Int) extends Module {
    val io = IO (new ImmdValGen(n) )
// Start coding here
    //S-type
	val s_imm_ = Cat (io.instruction(31,25),io.instruction(11,7))
	io.s_imm := (Cat(Fill(20,s_imm_(11)),s_imm_)).asSInt
	//SB-type
	val sb_imm_ = Cat (io.instruction(31),io.instruction(7),io.instruction(30,25),io.instruction(11,8),"b0".U)
	io.sb_imm := ((Cat(Fill(19,sb_imm_(12)),sb_imm_)) + io.pc).asSInt
	//UJ-type
	val uj_imm_ = Cat (io.instruction(31),io.instruction(19,12),io.instruction(20),io.instruction(30,21),"b0".U)
	io.uj_imm := ((Cat(Fill(12,uj_imm_(20)),uj_imm_)) + io.pc).asSInt
	//U-type
	io.u_imm := (((Cat(Fill(12,io.instruction(31)),io.instruction(31,12))) << 12)+io.pc).asSInt
	//I-type
	io.i_imm := (Cat(Fill(20,io.instruction(31)),io.instruction(31,20))).asSInt

	io.z_imm:= (Cat(Fill(21,io.instruction(30)),io.instruction(30,20))).asSInt

	io.v_imm := (Cat(Fill(n,io.instruction(n-1)),io.instruction(n-1,n-10))).asSInt
}