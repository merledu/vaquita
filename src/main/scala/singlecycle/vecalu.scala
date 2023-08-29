// package singlecycle

// import chisel3._ 
// import chisel3.util._ 

// object ALUOP12 {
// 	val VEC_ADD = "b000000".U
//     val VEC_SUB = "b000010".U

	
// }

// import ALUOP12._
// class vecalu extends Module {
//     val io = IO (new Bundle {
//         // val vs1_data = Input(Vec(16, SInt(128.W)))
//         // val vs2_data = Input(Vec(16, SInt(128.W)))
//         val vs1_data = Input(SInt(128.W))
//         val vs2_data = Input(SInt(128.W))
//         // val vd_addr = Input(UInt(5.W))
//         val aluC = Input(UInt(5.W))
//         val imm = Input(SInt(64.W))
//         val vsew = Input(UInt(3.W))
//         val out_v0 = Output(SInt(128.W))
//         val output = Output( SInt(128.W))
//         val flag = Output(Bool())})

//         val imm_f = 0.S
//         val ele = 0
//         val sew = 0

// val vs1_datav = Wire(Vec(16, SInt(128.W))) 
// val vs2_datav = Wire(Vec(16, SInt(128.W))) 

//     when (io.vsew === "b011".U) {
//         vs1_datav := VecInit(Seq.tabulate(2) { i =>
//         val t1 = io.vs1_data(127, 64)
//         val t2 = io.vs1_data(63, 0)
//         Cat(t1, t2)
//         })

//         vs2_datav := VecInit(Seq.tabulate(2) { i =>
//         val t3 = io.vs2_data(127, 64)
//         val t4 = io.vs2_data(63, 0)
//         Cat(t3, t4)
//         })
//         val imm_f = io.imm(63,0)
//         val ele = 2
//         val sew = 64
//     }.elsewhen (io.vsew === "b010".U) {
//         vs1_datav := VecInit(Seq.tabulate(4) { i =>
//         val t1 = io.vs1_data(127, 96)
//         val t2 = io.vs1_data(95, 64)
//         val t3 = io.vs1_data(63, 32)
//         val t4 = io.vs1_data(31, 0)
//         Cat(t1, t2, t3, t4)
//         })

//         vs2_datav := VecInit(Seq.tabulate(4) { i =>
//         val t5 = io.vs2_data(127, 96)
//         val t6 = io.vs2_data(95, 64)
//         val t7 = io.vs2_data(63, 32)
//         val t8 = io.vs2_data(31, 0)
//         Cat(t5, t6, t7, t8)
//         })
//         val imm_f = io.imm(31,0)  
//         val ele = 4   
//         val sew = 32
//     }.elsewhen (io.vsew === "b001".U) {
//         vs1_datav := VecInit(Seq.tabulate(8) { i =>
//         val t1 = io.vs1_data(127, 112)
//         val t2 = io.vs1_data(111, 96)
//         val t3 = io.vs1_data(95, 80)
//         val t4 = io.vs1_data(79, 64)
//         val t5 = io.vs1_data(63, 48)
//         val t6 = io.vs1_data(47, 32)
//         val t7 = io.vs1_data(31, 16)
//         val t8 = io.vs1_data(15, 0)
//         Cat(t1, t2, t3, t4, t5, t6, t7, t8)
//         })

//         vs2_datav := VecInit(Seq.tabulate(8) { i =>
//         val t9 = io.vs2_data(127, 112)
//         val t10 = io.vs2_data(111, 96)
//         val t11 = io.vs2_data(95, 80)
//         val t12 = io.vs2_data(79, 64)
//         val t13 = io.vs2_data(63, 48)
//         val t14 = io.vs2_data(47, 32)
//         val t15 = io.vs2_data(31, 16)
//         val t16 = io.vs2_data(15, 0)
//         Cat(t9, t10, t11, t12, t13, t14, t15, t16)
//         })
//         val imm_f = io.imm(15,0) 
//         val ele = 8  
//         val sew = 16   
//     }.elsewhen (io.vsew === "b000".U) {
//         vs1_datav := VecInit(Seq.tabulate(16) { i =>
//         val t1 = io.vs1_data(127, 120)
//         val t2 = io.vs1_data(119, 112)
//         val t3 = io.vs1_data(111, 104)
//         val t4 = io.vs1_data(103, 96)
//         val t5 = io.vs1_data(95, 88)
//         val t6 = io.vs1_data(87, 80)
//         val t7 = io.vs1_data(79, 72)
//         val t8 = io.vs1_data(71, 64)
//         val t9 = io.vs1_data(63, 56)
//         val t10 = io.vs1_data(55, 48)
//         val t11 = io.vs1_data(47, 40)
//         val t12 = io.vs1_data(39, 32)
//         val t13 = io.vs1_data(31, 24)
//         val t14 = io.vs1_data(23, 16)
//         val t15 = io.vs1_data(15, 8)
//         val t16 = io.vs1_data(7, 0)
//         Cat(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16)
//         })

//         vs2_datav := VecInit(Seq.tabulate(16) { i =>
//         val t17 = io.vs2_data(127, 120)
//         val t18 = io.vs2_data(119, 112)
//         val t19 = io.vs2_data(111, 104)
//         val t20 = io.vs2_data(103, 96)
//         val t21 = io.vs2_data(95, 88)
//         val t22 = io.vs2_data(87, 80)
//         val t23 = io.vs2_data(79, 72)
//         val t24 = io.vs2_data(71, 64)
//         val t25 = io.vs2_data(63, 56)
//         val t26 = io.vs2_data(55, 48)
//         val t27 = io.vs2_data(47, 40)
//         val t28 = io.vs2_data(39, 32)
//         val t29 = io.vs2_data(31, 24)
//         val t30 = io.vs2_data(23, 16)
//         val t31 = io.vs2_data(15, 8)
//         val t32 = io.vs2_data(7, 0)
//         Cat(t17, t18, t19, t20, t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32)
//         })
//         val imm_f = io.imm(7,0)
//         val ele = 16
//         val sew = 8
//     }.otherwise{
//         vs1_datav := VecInit(Seq.fill(16)(0.U(128.W))) // Connect numElem elements of elemWidth bits each
//         vs2_datav := VecInit(Seq.fill(16)(0.U(128.W)))
//     }

//     when (io.aluC === VEC_ADD){

//         val temVec = Wire(Vec(ele, SInt(sew.W))) // Create a Vec to hold the intermediate values
//         for (i <- 0 until ele) {
//             temVec(i) := vs2_datav(i) + imm_f
//         }
//         io.output := temVec
//         // for (i <- 0 until ele){
//         //     io.output := Cat(temVec(i))
//         // }
//         // val concatenatedValues = temVec.reduceLeft((acc, value) => Cat(value, acc.asUInt)).asSInt
//         // io.output := concatenatedValues
// //        

//     }}