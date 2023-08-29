package singlecycle
import chisel3._ 
import chisel3.util._ 


object ALUOP1 {
	val ALU_ADD = "b000000000".U
    val ALU_ADDI = "b000000000".U
    val ALU_SUB = "b000001000".U
    val ALU_AND = "b000000111".U
    val ALU_ANDI = "b000000111".U
    val ALU_OR  = "b000000110".U
    val ALU_ORI  = "b000000110".U
    val ALU_XOR = "b000000100".U
    val ALU_XORI = "b000000100".U
    val ALU_SLT = "b000000010".U
    val ALU_SLTI = "b000000010".U
    val ALU_SLL = "b000000001".U
    val ALU_SLLI = "b000000001".U
    val ALU_SLTU= "b000000011".U
    val ALU_SLTIU = "b000000011".U
    val ALU_SRL = "b000000101".U
    val ALU_SRLI = "b000000101".U
    val ALU_SRA = "b000001101".U
    val ALU_SRAI = "b000000101".U
    val ALU_COPY_A = "b000011111".U  //JAL
	val V_ADDI = "b000000011".U
	val V_ADD = "b000000000".U
	}

trait Config{
    val WLEN = 32
    val ALUOP_SIG_LEN = 9
}

import ALUOP1._

class ALUIO extends Bundle with Config {
    val in_A = Input(SInt(WLEN.W))
    val in_B = Input(SInt(WLEN.W))
	val vs1 = Input(UInt(128.W))
	val vs2 = Input(UInt(128.W))
    val aluc = Input(UInt(ALUOP_SIG_LEN.W))
	val sew = Input(UInt(3.W))
	val v_ins = Input(Bool())
    val output = Output(SInt(WLEN.W))
	val v_output = Output(UInt(128.W))
}

class ALU_ extends Module with Config {
    val io = IO(new ALUIO)

    val sew_8_a = VecInit((0 until 16).map(i => io.vs1(8*i + 7, 8*i)))
    val sew_8_b = VecInit((0 until 16).map(i => io.vs2(8*i + 7, 8*i)))

    val sew_16_a = VecInit((0 until 8).map(i => io.vs1(16*i + 15, 16*i)))
    val sew_16_b = VecInit((0 until 8).map(i => io.vs2(16*i + 15, 16*i)))

    val sew_32_a = VecInit((0 until 4).map(i => io.vs1(32*i + 31, 32*i)))
    val sew_32_b = VecInit((0 until 4).map(i => io.vs2(32*i + 31, 32*i)))

    val sew_64_a = VecInit((0 until 2).map(i => io.vs1(64*i + 63, 64*i)))
    val sew_64_b = VecInit((0 until 2).map(i => io.vs2(64*i + 63, 64*i)))

    val out8 = VecInit(Seq.fill(16)(0.U(8.W)))
    val out16 = VecInit(Seq.fill(8)(0.U(16.W)))
    val out32 = VecInit(Seq.fill(4)(0.U(32.W)))
    val out64 = VecInit(Seq.fill(2)(0.U(64.W)))


    io.v_output := 0.U

   io.output := 0.S

   when (io.v_ins =/= 1.B){

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

   }.otherwise{
	when (io.sew === "b011".U && io.aluc === V_ADD){  //sew = 64
		for (i <- 0 until 2) {
            out64(i) := sew_64_a(i) + sew_64_b(i)
        }
		io.v_output := Cat(out64(1),out64(0))
	}
	 .elsewhen (io.sew === "b010".U && io.aluc === V_ADD){ // sew = 32
        for (i <- 0 until 4) {
            out32(i) := sew_32_a(i) + sew_32_b(i)
        }
        io.v_output := Cat(out32(3),out32(2),out32(1),out32(0))
      }
	  .elsewhen(io.sew === "b001".U && io.aluc === V_ADD){ //sew = 16
		for (i <- 0 until 8) {
            out16(i) := sew_16_a(i) + sew_16_b(i)
        }
		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0))
	  }
	  .elsewhen(io.sew === "b000".U && io.aluc === V_ADD){ //sew = 8
		for (i <- 0 until 16) {
            out8(i) := sew_8_a(i) + sew_8_b(i)
        }
		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0))
	  }
	  .elsewhen(io.sew === "b011".U && io.aluc === V_ADDI){
		val imm = Cat(0.U(32.W), io.in_B.asUInt)
		for (i <- 0 until 2) {
            out64(i) := sew_64_b(i) + imm
        }
		io.v_output := Cat(out64(1),out64(0))}
	  .elsewhen(io.sew === "b010".U && io.aluc === V_ADDI){
		for (i <- 0 until 4) {
            out32(i) := sew_32_b(i) + io.in_B.asUInt
        }
        io.v_output := Cat(out32(3),out32(2),out32(1),out32(0))
	  }
	  .elsewhen(io.sew === "b000".U && io.aluc === V_ADDI){
		val imm = io.in_B(7,0).asUInt
		for (i <- 0 until 16) {
            out8(i) := sew_8_b(i) + imm
        }
		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0))
	  }
	  .elsewhen (io.sew === "b001".U && io.aluc === V_ADDI){
		val imm = io.in_B(15,0).asUInt
		for (i <- 0 until 8) {
            out16(i) := sew_16_a(i) + sew_16_b(i)
        }
		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0))
	  }
	}
  }