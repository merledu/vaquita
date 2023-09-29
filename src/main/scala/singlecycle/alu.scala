// package singlecycle
// import chisel3._ 
// import chisel3.util._ 


// object ALUOP1 {
// 	val ALU_ADD = "b000000000".U
//   val LUI = "b000000000".U
//     val ALU_ADDI = "b000000000".U
//     val ALU_SUB = "b000001000".U
//     val ALU_AND = "b000000111".U
//     val ALU_ANDI = "b000000111".U
//     val ALU_OR  = "b000000110".U
//     val ALU_ORI  = "b000000110".U
//     val ALU_XOR = "b000000100".U
//     val ALU_XORI = "b000000100".U
//     val ALU_SLT = "b000000010".U
//     val ALU_SLTI = "b000000010".U
//     val ALU_SLL = "b000000001".U
//     val ALU_SLLI = "b000000001".U
//     val ALU_SLTU= "b000000011".U
//     val ALU_SLTIU = "b000000011".U
//     val ALU_SRL = "b000000101".U
//     val ALU_SRLI = "b000000101".U
//     val ALU_SRA = "b000001101".U
//     val ALU_SRAI = "b000000101".U
//     val ALU_COPY_A = "b000011111".U  //JAL
//     val V_ADDI = "b000000011".U
//     val V_ADD = "b000000000".U
//     val Vaddvx = "b000000100".U
//     val VMVx = "b010111100".U
//     val VMVvv = "b010111100".U
//     val VMVvi = 187.U
//     val Vsubvv  = 184.U 
//     val Vsubvx = "b000010100".U 
//     val Vrsubvx = "b000011100".U
//     val Vrsubvi = "b000011011".U
//     val Vminuvv = "b000100000".U
//     val Vminuvx = "b000100100".U
//     val Vminvv = "b000101000".U
//     val Vminvx =  "b000101100".U
//     val Vmaxuvv = "b000110000".U
//     val Vmaxuvx = "b000110100".U
//     val Vmaxvv  = "b000111000".U
//     val Vmaxvx = "b000111100".U
//     val Vandvv = "b001001000".U
//     val Vandvx = "b001001100".U
//     val Vandvi = "b001001011".U
//     val Vorvv = "b001010000".U
//     val Vorvx = "b001010100".U
//     val Vorvi = "b00101011".U
//     val Vxorvv = "b001011000".U
//     val Vxorvx = "b001011100".U
//     val Vxorvi = "b001011011".U

  
// 	}

// trait Config{
//     val WLEN = 32
//     val ALUOP_SIG_LEN = 9
// }

// import ALUOP1._

// class ALUIO extends Bundle with Config {
//     val in_A = Input(SInt(WLEN.W))
//     val in_B = Input(SInt(WLEN.W))
// 	val vs1 = Input(SInt(128.W))
// 	val vs2 = Input(SInt(128.W))
//   // val vma =Input(UInt(1.W)) //vtype
//   // val vm =Input(UInt(1.W)) //umasked=0  , masked = 1
//   // val vs0 = Input(UInt(128.U))
//   val vd_addr = Input(UInt(5.W))
//     val aluc = Input(UInt(ALUOP_SIG_LEN.W))
// 	val sew = Input(UInt(3.W))
// 	val v_ins = Input(Bool())
//     val output = Output(SInt(WLEN.W))
// 	val v_output = Output(SInt(128.W))
// }

// class ALU_ extends Module with Config {
//     val io = IO(new ALUIO)

//     val sew_8_a = VecInit(Seq.fill(16)(0.S(8.W)))
//     val sew_16_a = VecInit(Seq.fill(8)(0.S(16.W)))
//     val sew_32_a = VecInit(Seq.fill(4)(0.S(32.W)))
//     val sew_64_a = VecInit(Seq.fill(2)(0.S(64.W)))

//     val sew_8_b = VecInit(Seq.fill(16)(0.S(8.W)))
//     val sew_16_b = VecInit(Seq.fill(8)(0.S(16.W)))
//     val sew_32_b = VecInit(Seq.fill(4)(0.S(32.W)))
//     val sew_64_b = VecInit(Seq.fill(2)(0.S(64.W)))

//     val out8 = VecInit(Seq.fill(16)(0.S(8.W)))
//     val out16 = VecInit(Seq.fill(8)(0.S(16.W)))
//     val out32 = VecInit(Seq.fill(4)(0.S(32.W)))
//     val out64 = VecInit(Seq.fill(2)(0.S(64.W)))

//     // define wires input a when sew = 8
//     sew_8_a(0) := io.vs1(7,0).asSInt
//     sew_8_a(1) := io.vs1(15,8).asSInt
//     sew_8_a(2) := io.vs1(23,16).asSInt
//     sew_8_a(3) := io.vs1(31,24).asSInt
//     sew_8_a(4) := io.vs1(39,32).asSInt
//     sew_8_a(5) := io.vs1(47,40).asSInt
//     sew_8_a(6) := io.vs1(55,48).asSInt
//     sew_8_a(7) := io.vs1(63,56).asSInt
//     sew_8_a(8) := io.vs1(71,64).asSInt
//     sew_8_a(9) := io.vs1(79,72).asSInt
//     sew_8_a(10) := io.vs1(87,80).asSInt
//     sew_8_a(11) := io.vs1(95,88).asSInt
//     sew_8_a(12) := io.vs1(103,96).asSInt
//     sew_8_a(13) := io.vs1(111,104).asSInt
//     sew_8_a(14) := io.vs1(119,112).asSInt
//     sew_8_a(15) := io.vs1(127,120).asSInt

//     // define wires input b when sew = 8
//     sew_8_b(0) := io.vs2(7,0).asSInt
//     sew_8_b(1) := io.vs2(15,8).asSInt
//     sew_8_b(2) := io.vs2(23,16).asSInt
//     sew_8_b(3) := io.vs2(31,24).asSInt
//     sew_8_b(4) := io.vs2(39,32).asSInt
//     sew_8_b(5) := io.vs2(47,40).asSInt
//     sew_8_b(6) := io.vs2(55,48).asSInt
//     sew_8_b(7) := io.vs2(63,56).asSInt
//     sew_8_b(8) := io.vs2(71,64).asSInt
//     sew_8_b(9) := io.vs2(79,72).asSInt
//     sew_8_b(10) := io.vs2(87,80).asSInt
//     sew_8_b(11) := io.vs2(95,88).asSInt
//     sew_8_b(12) := io.vs2(103,96).asSInt
//     sew_8_b(13) := io.vs2(111,104).asSInt
//     sew_8_b(14) := io.vs2(119,112).asSInt
//     sew_8_b(15) := io.vs2(127,120).asSInt

  

//     //define wires input a when sew = 16
//     sew_16_a(0) := io.vs1(15,0).asSInt
//     sew_16_a(1) := io.vs1(31,16).asSInt
//     sew_16_a(2) := io.vs1(47,32).asSInt
//     sew_16_a(3) := io.vs1(63,48).asSInt
//     sew_16_a(4) := io.vs1(79,64).asSInt
//     sew_16_a(5) := io.vs1(95,80).asSInt
//     sew_16_a(6) := io.vs1(111,96).asSInt
//     sew_16_a(7) := io.vs1(127,112).asSInt

//     //define wires input b when sew = 16
//     sew_16_b(0) := io.vs2(15,0).asSInt
//     sew_16_b(1) := io.vs2(31,16).asSInt
//     sew_16_b(2) := io.vs2(47,32).asSInt
//     sew_16_b(3) := io.vs2(63,48).asSInt
//     sew_16_b(4) := io.vs2(79,64).asSInt
//     sew_16_b(5) := io.vs2(95,80).asSInt
//     sew_16_b(6) := io.vs2(111,96).asSInt
//     sew_16_b(7) := io.vs2(127,112).asSInt

  
//     //define wires input a when sew = 32
//     sew_32_a(0) := io.vs1(31,0).asSInt
//     sew_32_a(1) := io.vs1(63,32).asSInt
//     sew_32_a(2) := io.vs1(95,64).asSInt
//     sew_32_a(3) := io.vs1(127,96).asSInt

//     //define wires input b when sew = 32
//     sew_32_b(0) := io.vs2(31,0).asSInt
//     sew_32_b(1) := io.vs2(63,32).asSInt
//     sew_32_b(2) := io.vs2(95,64).asSInt
//     sew_32_b(3) := io.vs2(127,96).asSInt

//     //define wires input a when sew = 64
//     sew_64_a(0) := io.vs1(63,0).asSInt
//     sew_64_a(1) := io.vs1(127,64).asSInt

//     //define wires input b when sew = 64
//     sew_64_b(0) := io.vs2(63,0).asSInt
//     sew_64_b(1) := io.vs2(127,64).asSInt

//     io.v_output := 0.S

//    io.output := 0.S
//   //  val imm = 0.S

//     when (io.v_ins =/= 1.B) {
//     io.output := MuxLookup(io.aluc, io.in_A, Seq(
//       ALU_ADD -> (io.in_A + io.in_B),
//       ALU_SLL -> (io.in_A << io.in_B(4, 0)).asSInt,
//       ALU_SLT -> Mux(io.in_A < io.in_B, 1.S, 0.S),
//       ALU_SLTU -> Mux(io.in_A.asUInt < io.in_B.asUInt, 1.S, 0.S),
//       ALU_XOR -> (io.in_A ^ io.in_B),
//       ALU_SRL -> (io.in_A.asUInt >> io.in_B(4, 0).asUInt).asSInt,
//       ALU_OR -> (io.in_A | io.in_B),
//       ALU_AND -> (io.in_A & io.in_B),
//       ALU_SUB -> (io.in_A - io.in_B),
//       ALU_SRA -> (io.in_A >> io.in_B(4, 0)).asSInt,
//       ALU_COPY_A -> io.in_A
//     ))

//    }.otherwise{ //VectorAddvv
// 	when (io.sew === "b011".U && io.aluc === V_ADD){  //sew = 64
// 		for (i <- 0 until 2) { out64(i) := (sew_64_a(i) + sew_64_b(i)).asSInt}
//     io.v_output := (Cat(out64(1),out64(0))).asSInt
// 	}
// 	 .elsewhen (io.sew === "b010".U && io.aluc === V_ADD){ // sew = 32
//         for (i <- 0 until 4) {out32(i) := (sew_32_a(i) + sew_32_b(i)).asSInt}
//         io.v_output := (Cat(out32(3),out32(2),out32(1),out32(0))).asSInt
//       }
// 	  .elsewhen(io.sew === "b001".U && io.aluc === V_ADD){ //sew = 16
// 		for (i <- 0 until 8) { out16(i) := (sew_16_a(i) + sew_16_b(i)).asSInt}
// 		io.v_output := (Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0))).asSInt
// 	  }
// 	  .elsewhen(io.sew === "b000".U && io.aluc === V_ADD){ //sew = 8
// 		for (i <- 0 until 16) { out8(i) := (sew_8_a(i) + sew_8_b(i)).asSInt }
// 		io.v_output := (Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0))).asSInt
// 	 //vectoraddvv end
//    //vector add vi start
//     }.elsewhen(io.sew === "b011".U && io.aluc === V_ADDI){
// 		val imm = Cat(0.S(32.W), io.in_B).asSInt
// 		for (i <- 0 until 2) { out64(i) := (sew_64_b(i) + imm).asSInt}
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U && io.aluc === V_ADDI){
//        val imm = io.in_B(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := (sew_32_b(i) + imm).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U && io.aluc === V_ADDI){
// 		val imm = io.in_B(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := (sew_8_b(i) + imm).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U && io.aluc === V_ADDI){
// 		val imm = io.in_B(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := (sew_16_b(i) + imm  ).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  }  //vector add vi end
//     //vector move vx instruction
//     .elsewhen (io.aluc === VMVx){
//       when(io.vd_addr === 0.U){
//     io.v_output := Cat((0.S(96.W)),io.in_A).asSInt
//   	}.otherwise{
//       when (io.sew === "b011".U){
//         val imm = Cat(0.S(32.W), io.in_A).asSInt
// 		for (i <- 0 until 2) { out64(i) := (imm).asSInt}
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U ){
//        val imm = io.in_A(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := (imm).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U ){
// 		val imm = io.in_A(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := (imm).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U){
// 		val imm = io.in_A(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := (imm).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt

//       }//vmv vx end
//     }}


//     //vector move vi instruction
//     .elsewhen (io.aluc === VMVvi){
//       when(io.vd_addr === 0.U){
//     io.v_output := Cat((0.S(96.W)),io.in_B).asSInt
//   	}.otherwise{
//       when (io.sew === "b011".U){
//         val imm = Cat(0.S(32.W), io.in_B).asSInt
// 		for (i <- 0 until 2) { out64(i) := (imm).asSInt}
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U ){
//        val imm = io.in_B(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := (imm).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U ){
// 		val imm = io.in_B(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := (imm).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U){
// 		val imm = io.in_B(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := (imm).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt

//       }//vmv vi end
//     }}


//     //vector move vv instruction
//     .elsewhen (io.aluc === VMVvv){
//       when(io.vd_addr === 0.U){
//     io.v_output := io.vs1
//   	}.otherwise{
//       when (io.sew === "b011".U){
// 		for (i <- 0 until 2) { out64(i) := sew_64_a(i).asSInt}
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U ){
//        val imm = io.in_A(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := sew_32_a(i).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U ){
// 		val imm = io.in_A(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := sew_8_a(i).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U){
// 		val imm = io.in_A(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := sew_16_a(i).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt

//       }//vmv vv end
//     }}

//     //vector add vx
//     .elsewhen(io.sew === "b011".U && io.aluc === Vaddvx){
// 		val imm = Cat(0.S(32.W), io.in_A).asSInt
// 		for (i <- 0 until 2) { out64(i) := (sew_64_b(i) + imm).asSInt}
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U && io.aluc === Vaddvx){
//        val imm = io.in_A(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := (sew_32_b(i) + imm).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U && io.aluc === Vaddvx){
// 		val imm = io.in_A(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := (sew_8_b(i) + imm).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U && io.aluc === Vaddvx){
// 		val imm = io.in_A(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := (sew_16_b(i) + imm).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  }  //vector add vx end
//     //vector sub vv
//     .elsewhen (io.sew === "b011".U && io.aluc === Vsubvv){
//       for (i <- 0 until 2) { out64(i) := (sew_64_b(i) - sew_64_a(i)).asSInt}
//     io.v_output := Cat(out64(1),out64(0)).asSInt
// 	}
// 	 .elsewhen (io.sew === "b010".U && io.aluc === Vsubvv){ // sew = 32
//         for (i <- 0 until 4) {out32(i) := (sew_32_b(i) - sew_32_a(i)).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
//       }
// 	  .elsewhen(io.sew === "b001".U && io.aluc === Vsubvv){ //sew = 16
// 		for (i <- 0 until 8) { out16(i) := (sew_16_b(i) - sew_16_a(i)).asSInt }
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  }
// 	  .elsewhen(io.sew === "b000".U && io.aluc === Vsubvv){ //sew = 8
// 		for (i <- 0 until 16) { out8(i) := (sew_8_b(i) - sew_8_a(i)).asSInt}
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
	 
//     }
//     //vector sub vv end
//     //vector sub vx
//     .elsewhen(io.sew === "b011".U && io.aluc === Vsubvx){
// 		val imm = Cat(0.S(32.W), io.in_A).asSInt
// 		for (i <- 0 until 2) { out64(i) := (sew_64_b(i) - imm).asSInt}
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U && io.aluc === Vsubvx){
//        val imm = io.in_A(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := (sew_32_b(i) - imm).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U && io.aluc === Vsubvx){
// 		val imm = io.in_A(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := (sew_8_b(i) - imm).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U && io.aluc === Vsubvx){
// 		val imm = io.in_A(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := (sew_16_b(i) - imm  ).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  }  
//     //vector sub vx end
//     //vector rsub vx
//     .elsewhen(io.sew === "b011".U && io.aluc === Vrsubvx){
// 		val imm = Cat(0.S(32.W), io.in_A).asSInt
// 		for (i <- 0 until 2) { out64(i) := (imm - sew_64_b(i)).asSInt}
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U && io.aluc === Vrsubvx){
//        val imm = io.in_A(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := (imm - sew_32_b(i)).asSInt }
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U && io.aluc === Vrsubvx){
// 		val imm = io.in_A(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := (imm - sew_8_b(i) ).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U && io.aluc === Vrsubvx){
// 		val imm = io.in_A(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := (imm - sew_16_b(i) ).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  }
//     //vector rsub vx end
//     //vector rsub vi
//     .elsewhen(io.sew === "b011".U && io.aluc === Vrsubvi){
// 		val imm = Cat(0.S(32.W), io.in_B).asSInt
// 		for (i <- 0 until 2) { out64(i) := (imm - sew_64_b(i)).asSInt }
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U && io.aluc === Vrsubvi){
//        val imm = io.in_B(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := (imm - sew_32_b(i)).asSInt }
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U && io.aluc === Vrsubvi){
// 		val imm = io.in_B(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := (imm - sew_8_b(i) ).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U && io.aluc === Vrsubvi){
// 		val imm = io.in_B(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := (imm - sew_16_b(i) ).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  }//vrsub vi end
//     // vandvv start
//      .elsewhen (io.sew === "b011".U && io.aluc === Vandvv){
//       for (i <- 0 until 2) { out64(i) := (sew_64_b(i) & sew_64_a(i)).asSInt}
//     io.v_output := Cat(out64(1),out64(0)).asSInt
// 	}
// 	 .elsewhen (io.sew === "b010".U && io.aluc === Vandvv){ // sew = 32
//         for (i <- 0 until 4) {out32(i) := (sew_32_b(i) & sew_32_a(i)).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
//       }
// 	  .elsewhen(io.sew === "b001".U && io.aluc === Vandvv){ //sew = 16
// 		for (i <- 0 until 8) { out16(i) := (sew_16_b(i) & sew_16_a(i)).asSInt }
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  }
// 	  .elsewhen(io.sew === "b000".U && io.aluc === Vandvv){ //sew = 8
// 		for (i <- 0 until 16) { out8(i) := (sew_8_b(i) & sew_8_a(i)).asSInt }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
	 
//     }
//     //vand vv end
//     //vand vx start
//        .elsewhen(io.sew === "b011".U && io.aluc === Vandvx){
// 		val imm = Cat(0.S(32.W), io.in_A).asSInt
// 		for (i <- 0 until 2) { out64(i) := (sew_64_b(i) & imm).asSInt}
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U && io.aluc === Vandvx){
//        val imm = io.in_A(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := (sew_32_b(i) & imm).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U && io.aluc === Vandvx){
// 		val imm = io.in_A(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := (sew_8_b(i) & imm).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U && io.aluc === Vandvx){
// 		val imm = io.in_A(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := (sew_16_b(i) & imm  ).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  } 
//     //vand vx end
//     //vand vi start
//     .elsewhen(io.sew === "b011".U && io.aluc === Vandvi){
// 		val imm = Cat(0.S(32.W), io.in_B).asSInt
// 		for (i <- 0 until 2) { out64(i) := (sew_64_b(i) & imm).asSInt}
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U && io.aluc === Vandvi){
//        val imm = io.in_B(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := (sew_32_b(i) & imm).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U && io.aluc === Vandvi){
// 		val imm = io.in_B(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := (sew_8_b(i) & imm).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U && io.aluc === Vandvi){
// 		val imm = io.in_B(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := (sew_16_b(i) & imm ).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  } 
//     //vand vi end
//     //vor vv start
//     .elsewhen (io.sew === "b011".U && io.aluc === Vorvv){
//       for (i <- 0 until 2) { out64(i) := (sew_64_b(i) | sew_64_a(i)).asSInt}
//     io.v_output := Cat(out64(1),out64(0)).asSInt
// 	}
// 	 .elsewhen (io.sew === "b010".U && io.aluc === Vorvv){ // sew = 32
//         for (i <- 0 until 4) {out32(i) := (sew_32_b(i) | sew_32_a(i)).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
//       }
// 	  .elsewhen(io.sew === "b001".U && io.aluc === Vorvv){ //sew = 16
// 		for (i <- 0 until 8) { out16(i) := (sew_16_b(i) | sew_16_a(i)) .asSInt}
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  }
// 	  .elsewhen(io.sew === "b000".U && io.aluc === Vorvv){ //sew = 8
// 		for (i <- 0 until 16) { out8(i) := (sew_8_b(i) | sew_8_a(i)).asSInt }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
	 
//     }
//     //vor vv end
//     //vor vx start
//        .elsewhen(io.sew === "b011".U && io.aluc === Vorvx){
// 		val imm = Cat(0.S(32.W), io.in_A).asSInt
// 		for (i <- 0 until 2) { out64(i) := (sew_64_b(i) | imm).asSInt}
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U && io.aluc === Vorvx){
//        val imm = io.in_A(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := (sew_32_b(i) | imm).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U && io.aluc === Vorvx){
// 		val imm = io.in_A(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := (sew_8_b(i) | imm).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U && io.aluc === Vorvx){
// 		val imm = io.in_A(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := (sew_16_b(i) | imm  ).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  } 
//     //vor vx end
//     //vxor vi start
//     .elsewhen(io.sew === "b011".U && io.aluc === Vorvi){
// 		val imm = Cat(0.S(32.W), io.in_B).asSInt
// 		for (i <- 0 until 2) { out64(i) := (sew_64_b(i) | imm).asSInt}
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U && io.aluc === Vorvi){
//        val imm = io.in_B(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := (sew_32_b(i) | imm).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U && io.aluc === Vorvi){
// 		val imm = io.in_B(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := (sew_8_b(i) | imm).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U && io.aluc === Vorvi){
// 		val imm = io.in_B(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := (sew_16_b(i) | imm  ).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  } //vor vi end

//     //vxor vv start
//     .elsewhen (io.sew === "b011".U && io.aluc === Vxorvv){
//       for (i <- 0 until 2) { out64(i) := (sew_64_b(i) ^ sew_64_a(i)).asSInt}
//     io.v_output := Cat(out64(1),out64(0)).asSInt
// 	}
// 	 .elsewhen (io.sew === "b010".U && io.aluc === Vxorvv){ // sew = 32
//         for (i <- 0 until 4) {out32(i) := (sew_32_b(i) ^ sew_32_a(i)).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
//       }
// 	  .elsewhen(io.sew === "b001".U && io.aluc === Vxorvv){ //sew = 16
// 		for (i <- 0 until 8) { out16(i) := (sew_16_b(i) ^ sew_16_a(i)).asSInt }
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  }
// 	  .elsewhen(io.sew === "b000".U && io.aluc === Vxorvv){ //sew = 8
// 		for (i <- 0 until 16) { out8(i) := (sew_8_b(i) ^ sew_8_a(i)).asSInt }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
	 
//     }
//     //vxor vv end
//     //vxor vx start
//        .elsewhen(io.sew === "b011".U && io.aluc === Vxorvx){
// 		val imm = Cat(0.S(32.W), io.in_A).asSInt
// 		for (i <- 0 until 2) { out64(i) := (sew_64_b(i) ^ imm).asSInt}
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U && io.aluc === Vxorvx){
//        val imm = io.in_A(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := (sew_32_b(i) ^ imm).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U && io.aluc === Vxorvx){
// 		val imm = io.in_A(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := (sew_8_b(i) ^ imm).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U && io.aluc === Vxorvx){
// 		val imm = io.in_A(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := (sew_16_b(i) ^ imm  ).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  } 
//     //vxor vx end
//     //vxor vi start
//     .elsewhen(io.sew === "b011".U && io.aluc === Vxorvi){
// 		val imm = Cat(0.S(32.W), io.in_B).asSInt
// 		for (i <- 0 until 2) { out64(i) := (sew_64_b(i) ^ imm).asSInt}
// 		io.v_output := Cat(out64(1),out64(0)).asSInt
    
//     }.elsewhen(io.sew === "b010".U && io.aluc === Vxorvi){
//        val imm = io.in_B(31,0).asSInt
// 		  for (i <- 0 until 4) {out32(i) := (sew_32_b(i) ^ imm).asSInt}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
	  
//     }.elsewhen(io.sew === "b000".U && io.aluc === Vxorvi){
// 		val imm = io.in_B(7,0).asSInt
// 		for (i <- 0 until 16) {
//             out8(i) := (sew_8_b(i) ^ imm).asSInt
//         }
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
// 	  }
// 	  .elsewhen (io.sew === "b001".U && io.aluc === Vxorvi){
// 		val imm = io.in_B(15,0).asSInt
// 		for (i <- 0 until 8) {
//         out16(i) := (sew_16_b(i) ^ imm).asSInt
//         }
                 
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  } //vxor vi end

    


//     //vminu vv start
//     .elsewhen (io.sew === "b011".U && io.aluc === Vminuvv){
//       for (i <- 0 until 2) { 
//         when(sew_64_b(i).asUInt <= sew_64_a(i).asUInt)
//         {out64(i) := sew_64_b(i) }
//         .otherwise{out64(i) := sew_64_a(i)}}
//     io.v_output := Cat(out64(1),out64(0)).asSInt
// 	}
// 	 .elsewhen (io.sew === "b010".U && io.aluc === Vminuvv){ // sew = 32
//         for (i <- 0 until 4) { 
//           when(sew_32_b(i).asUInt <= sew_32_a(i).asUInt){out32(i) := sew_32_b(i).asSInt}
//         .otherwise{out32(i) := sew_32_a(i).asSInt}}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
//       }
// 	  .elsewhen(io.sew === "b001".U && io.aluc === Vminuvv){ //sew = 16
// 		for (i <- 0 until 8) { 
//       when (sew_16_b(i).asUInt <= sew_16_a(i).asUInt){out16(i) := sew_16_b(i).asSInt}
//     .otherwise{
//      out16(i) := sew_16_a(i).asSInt
//     }}
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  }
// 	  .elsewhen(io.sew === "b000".U && io.aluc === Vminuvv){ //sew = 8
// 		for (i <- 0 until 16) { 
//       when (sew_8_b(i).asUInt <= sew_8_a(i).asUInt){out8(i) := sew_8_b(i).asSInt }
//     .otherwise{
//       out8(i) :=  sew_8_a(i).asSInt
//     }}
  
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
	 
//     }
//     //vminu vv end

//      //vminu vx start
//     .elsewhen (io.sew === "b011".U && io.aluc === Vminuvx){
//       val imm = Cat(0.S(32.W), io.in_A).asSInt
//       for (i <- 0 until 2) { 
//         when(sew_64_b(i).asUInt <= imm.asUInt)
//         {out64(i) := sew_64_b(i) }
//         .otherwise{out64(i) := imm}}
//     io.v_output := Cat(out64(1),out64(0)).asSInt
// 	}
// 	 .elsewhen (io.sew === "b010".U && io.aluc === Vminuvx){ // sew = 32
//     val imm = io.in_A(31,0).asSInt
//         for (i <- 0 until 4) { 
//           when(sew_32_b(i).asUInt <= imm.asUInt){out32(i) := sew_32_b(i).asSInt}
//         .otherwise{out32(i) := imm.asSInt}}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
//       }
// 	  .elsewhen(io.sew === "b001".U && io.aluc === Vminuvx){ //sew = 16
// 		val imm = io.in_A(15,0).asSInt
//     for (i <- 0 until 8) { 
//       when (sew_16_b(i).asUInt <= imm.asUInt){out16(i) := sew_16_b(i).asSInt}
//     .otherwise{
//      out16(i) := imm.asSInt
//     }}
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  }
// 	  .elsewhen(io.sew === "b000".U && io.aluc === Vminuvx){ //sew = 8
// 		val imm = io.in_A(7,0).asSInt
//     for (i <- 0 until 16) { 
//       when (sew_8_b(i).asUInt <= imm.asUInt){out8(i) := sew_8_b(i).asSInt }
//     .otherwise{
//       out8(i) :=  imm.asSInt
//     }}
  
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
	 
//     }
//     //vminu vx end
    

//     //vmin vv start
//     .elsewhen (io.sew === "b011".U && io.aluc === Vminvv){
//       for (i <- 0 until 2) { 
//         when(sew_64_b(i) <= sew_64_a(i))
//         {out64(i) := sew_64_b(i) }
//         .otherwise{out64(i) := sew_64_a(i)}}
//     io.v_output := Cat(out64(1),out64(0)).asSInt
// 	}
// 	 .elsewhen (io.sew === "b010".U && io.aluc === Vminvv){ // sew = 32
//         for (i <- 0 until 4) { 
//           when(sew_32_b(i) <= sew_32_a(i)){out32(i) := sew_32_b(i).asSInt}
//         .otherwise{out32(i) := sew_32_a(i).asSInt}}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
//       }
// 	  .elsewhen(io.sew === "b001".U && io.aluc === Vminvv){ //sew = 16
// 		for (i <- 0 until 8) { 
//       when (sew_16_b(i) <= sew_16_a(i)){out16(i) := sew_16_b(i).asSInt}
//     .otherwise{
//      out16(i) := sew_16_a(i).asSInt
//     }}
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  }
// 	  .elsewhen(io.sew === "b000".U && io.aluc === Vminvv){ //sew = 8
// 		for (i <- 0 until 16) { 
//       when (sew_8_b(i) <= sew_8_a(i)){out8(i) := sew_8_b(i).asSInt }
//     .otherwise{
//       out8(i) :=  sew_8_a(i).asSInt
//     }}
  
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
	 
//     }
//     //vmin vv end

//      //vmin vx start
//     .elsewhen (io.sew === "b011".U && io.aluc === Vminvx){
//       val imm = Cat(0.S(32.W), io.in_A).asSInt
//       for (i <- 0 until 2) { 
//         when(sew_64_b(i) <= imm)
//         {out64(i) := sew_64_b(i) }
//         .otherwise{out64(i) := imm}}
//     io.v_output := Cat(out64(1),out64(0)).asSInt
// 	}
// 	 .elsewhen (io.sew === "b010".U && io.aluc === Vminvx){ // sew = 32
//     val imm = io.in_A(31,0).asSInt
//         for (i <- 0 until 4) { 
//           when(sew_32_b(i) <= imm){out32(i) := sew_32_b(i).asSInt}
//         .otherwise{out32(i) := imm.asSInt}}
//         io.v_output := Cat(out32(3),out32(2),out32(1),out32(0)).asSInt
//       }
// 	  .elsewhen(io.sew === "b001".U && io.aluc === Vminvx){ //sew = 16
// 		val imm = io.in_A(15,0).asSInt
//     for (i <- 0 until 8) { 
//       when (sew_16_b(i) <= imm){out16(i) := sew_16_b(i).asSInt}
//     .otherwise{
//      out16(i) := imm.asSInt
//     }}
// 		io.v_output := Cat(out16(7),out16(6),out16(5),out16(4),out16(3),out16(2),out16(1),out16(0)).asSInt
// 	  }
// 	  .elsewhen(io.sew === "b000".U && io.aluc === Vminvx){ //sew = 8
// 		val imm = io.in_A(7,0).asSInt
//     for (i <- 0 until 16) { 
//       when (sew_8_b(i) <= imm){out8(i) := sew_8_b(i).asSInt }
//     .otherwise{
//       out8(i) :=  imm.asSInt
//     }}
  
// 		io.v_output := Cat(out8(15),out8(14),out8(13),out8(12),out8(11),out8(10),out8(9),out8(8),out8(7),out8(6),out8(5),out8(4),out8(3),out8(2),out8(1),out8(0)).asSInt
	 
//     }
//     //vmin vx end
// 	}
//   }