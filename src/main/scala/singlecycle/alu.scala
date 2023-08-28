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

val sew_8_a = VecInit(Seq.fill(16)(0.U(8.W)))
    val sew_16_a = VecInit(Seq.fill(8)(0.U(16.W)))
    val sew_32_a = VecInit(Seq.fill(4)(0.U(32.W)))
    val sew_64_a = VecInit(Seq.fill(2)(0.U(64.W)))

    val sew_8_b = VecInit(Seq.fill(16)(0.U(8.W)))
    val sew_16_b = VecInit(Seq.fill(8)(0.U(16.W)))
    val sew_32_b = VecInit(Seq.fill(4)(0.U(32.W)))
    val sew_64_b = VecInit(Seq.fill(2)(0.U(64.W)))


    val out8 = VecInit(Seq.fill(16)(0.U(8.W)))
    val out16 = VecInit(Seq.fill(8)(0.U(16.W)))
    val out32 = VecInit(Seq.fill(4)(0.U(32.W)))
    val out64 = VecInit(Seq.fill(2)(0.U(64.W)))

    // define wires input a when sew = 8
    sew_8_a(0) := io.vs1(7,0)
    sew_8_a(1) := io.vs1(15,8)
    sew_8_a(2) := io.vs1(23,16)
    sew_8_a(3) := io.vs1(31,24)
    sew_8_a(4) := io.vs1(39,32)
    sew_8_a(5) := io.vs1(47,40)
    sew_8_a(6) := io.vs1(55,48)
    sew_8_a(7) := io.vs1(63,56)
    sew_8_a(8) := io.vs1(71,64)
    sew_8_a(9) := io.vs1(79,72)
    sew_8_a(10) := io.vs1(87,80)
    sew_8_a(11) := io.vs1(95,88)
    sew_8_a(12) := io.vs1(103,96)
    sew_8_a(13) := io.vs1(111,104)
    sew_8_a(14) := io.vs1(119,112)
    sew_8_a(15) := io.vs1(127,120)

    // define wires input b when sew = 8
    sew_8_b(0) := io.vs2(7,0)
    sew_8_b(1) := io.vs2(15,8)
    sew_8_b(2) := io.vs2(23,16)
    sew_8_b(3) := io.vs2(31,24)
    sew_8_b(4) := io.vs2(39,32)
    sew_8_b(5) := io.vs2(47,40)
    sew_8_b(6) := io.vs2(55,48)
    sew_8_b(7) := io.vs2(63,56)
    sew_8_b(8) := io.vs2(71,64)
    sew_8_b(9) := io.vs2(79,72)
    sew_8_b(10) := io.vs2(87,80)
    sew_8_b(11) := io.vs2(95,88)
    sew_8_b(12) := io.vs2(103,96)
    sew_8_b(13) := io.vs2(111,104)
    sew_8_b(14) := io.vs2(119,112)
    sew_8_b(15) := io.vs2(127,120)

    //define wires input a when sew = 16
    sew_16_a(0) := io.vs1(15,0)
    sew_16_a(1) := io.vs1(31,16)
    sew_16_a(2) := io.vs1(47,32)
    sew_16_a(3) := io.vs1(63,48)
    sew_16_a(4) := io.vs1(79,64)
    sew_16_a(5) := io.vs1(95,80)
    sew_16_a(6) := io.vs1(111,96)
    sew_16_a(7) := io.vs1(127,112)

    //define wires input b when sew = 16
    sew_16_b(0) := io.vs2(15,0)
    sew_16_b(1) := io.vs2(31,16)
    sew_16_b(2) := io.vs2(47,32)
    sew_16_b(3) := io.vs2(63,48)
    sew_16_b(4) := io.vs2(79,64)
    sew_16_b(5) := io.vs2(95,80)
    sew_16_b(6) := io.vs2(111,96)
    sew_16_b(7) := io.vs2(127,112)

    //define wires input a when sew = 32
    sew_32_a(0) := io.vs1(31,0)
    sew_32_a(1) := io.vs1(63,32)
    sew_32_a(2) := io.vs1(95,64)
    sew_32_a(3) := io.vs1(127,96)

    //define wires input b when sew = 32
    sew_32_b(0) := io.vs2(31,0)
    sew_32_b(1) := io.vs2(63,32)
    sew_32_b(2) := io.vs2(95,64)
    sew_32_b(3) := io.vs2(127,96)

    //define wires input a when sew = 64
    sew_64_a(0) := io.vs1(63,0)
    sew_64_a(1) := io.vs1(127,64)

    //define wires input b when sew = 64
    sew_64_b(0) := io.vs2(63,0)
    sew_64_b(1) := io.vs2(127,64)

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