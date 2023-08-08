package singlecycle

import chisel3._ 
import chisel3.util._ 


object ALUOP1 {
	    val ALU_ADD = "b00000".U
    val ALU_ADDI = "b00000".U
    val ALU_SUB = "b01000".U
    val ALU_AND = "b00111".U
    val ALU_ANDI = "b00111".U
    val ALU_OR  = "b00110".U
    val ALU_ORI  = "b00110".U
    val ALU_XOR = "b00100".U
    val ALU_XORI = "b00100".U
    val ALU_SLT = "b00010".U
    val ALU_SLTI = "b00010".U
    val ALU_SLL = "b00001".U
    val ALU_SLLI = "b00001".U
    val ALU_SLTU= "b00011".U
    val ALU_SLTIU = "b00011".U
    val ALU_SRL = "b00101".U
     val ALU_SRLI = "b00101".U
    val ALU_SRA = "b01101".U
    val ALU_SRAI = "b00101".U
    val ALU_COPY_A = "b11111" .U  //JAL
    val ALU_XXX = DontCare
}

trait Config{
    val WLEN = 32
    val ALUOP_SIG_LEN = 5
}

import ALUOP1._

class ALUIO extends Bundle with Config {
    val in_A = Input(SInt(WLEN.W))
    val in_B = Input(SInt(WLEN.W))
    val aluc = Input(UInt(ALUOP_SIG_LEN.W))
    val output = Output(SInt(WLEN.W))
}

class ALU_ extends Module with Config {
    val io = IO(new ALUIO)

   io.output := 0.S

	when(io.aluc === ALU_ADD ||io.aluc === ALU_ADDI ){ 								
		io.output := io.in_A + io.in_B
	}.elsewhen(io.aluc === ALU_SLL ||io.aluc === ALU_SLLI ){ 							
		io.output:= (io.in_A << io.in_B(4,0)).asSInt
	}.elsewhen(io.aluc === ALU_SLT || io.aluc === ALU_SLTI ){							
		when(io.in_A < io.in_B){
			io.output := 1.S
		}.otherwise{
			io.output := 0.S
		}
	}.elsewhen(io.aluc === ALU_SLTU | io.aluc === ALU_SLTIU){			
		val Ua = io.in_A.asUInt
		val Ub = io.in_B.asUInt
		when(Ua < Ub){
			io.output := 1.S
		}.otherwise{
			io.output := 0.S
		}
	}.elsewhen(io.aluc === ALU_XOR ||io.aluc === ALU_XORI ){							
		io.output := io.in_A ^ io.in_B
	}.elsewhen(io.aluc === ALU_SRL || io.aluc === ALU_SRLI ){							
			
		val shift = io.in_A.asUInt >> (io.in_B(4,0)).asUInt
		io.output := shift.asSInt
	}.elsewhen(io.aluc === ALU_OR || io.aluc === ALU_ORI ){							
		io.output := io.in_A | io.in_B
	}.elsewhen(io.aluc === ALU_AND || io.aluc === ALU_ANDI ){							
		io.output := io.in_A & io.in_B
	}.elsewhen(io.aluc === ALU_SUB){							
		io.output := io.in_A - io.in_B
	}.elsewhen(io.aluc === ALU_SRA || io.aluc === ALU_SRAI){							
		io.output := (io.in_A >> io.in_B(4,0)).asSInt
	}.elsewhen(io.aluc === ALU_COPY_A){							
		io.output := io.in_A
	}

}
