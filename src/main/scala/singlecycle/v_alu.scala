// package  singlecycle
// import chisel3._
// import chisel3.util._
// import chisel3.experimental._

// class vecalu extends Module {
// val io = IO (new Bundle {
//     // val vs1_data = Input(Vec(16, SInt(128.W)))
//     // val vs2_data = Input(Vec(16, SInt(128.W)))
//     val vs1_data = Input(SInt(128.W))
//     val vs2_data = Input(SInt(128.W))
//     val vd_addr = Input(UInt(5.W))
//     val aluC = Input(UInt(5.W))
//     val imm = Input(SInt(64.W))
//     val vsew = Input(UInt(3.W))
//     val out_v0 = Output(SInt(128.W))
//     val output = Output( SInt(128.W))
//     val flag = Output(Bool())})
//     val register = RegInit(VecInit(Seq.fill(32)(0.S(n.W))))
// when (io.vsew === "b011".U) {
//     io.vs1_data := VecInit(Seq.tabulate(16) { i =>
//     val t1_1 = register(io.vs1_addr)
//     val t1 = t1_1(127, 64)
//     val t2 = t1_1(63, 0)
//     Cat(t1, t2)
//     })

//     io.vs2_data := VecInit(Seq.tabulate(16) { i =>
//     val t3_1 = register(io.vs2_addr)
//     val t3 = t3_1(127, 64)
//     val t4 = t3_1(63, 0)
//     Cat(t3, t4)
//     })
// }.elsewhen (io.vsew === "b010".U) {
//     io.vs1_data := VecInit(Seq.tabulate(16) { i =>
//     val t1_1 = register(io.vs1_addr)
//     val t1 = t1_1(127, 96)
//     val t2 = t1_1(95, 64)
//     val t3 = t1_1(63, 32)
//     val t4 = t1_1(31, 0)
//     Cat(t1, t2, t3, t4)
//     })

//     io.vs2_data := VecInit(Seq.tabulate(16) { i =>
//     val t3_1 = register(io.vs2_addr)
//     val t5 = t3_1(127, 96)
//     val t6 = t3_1(95, 64)
//     val t7 = t3_1(63, 32)
//     val t8 = t3_1(31, 0)
//     Cat(t5, t6, t7, t8)
//     })
// }.elsewhen (io.vsew === "b001".U) {
//     io.vs1_data := VecInit(Seq.tabulate(16) { i =>
//     val t1_1 = register(io.vs1_addr)
//     val t1 = t1_1(127, 112)
//     val t2 = t1_1(111, 96)
//     val t3 = t1_1(95, 80)
//     val t4 = t1_1(79, 64)
//     val t5 = t1_1(63, 48)
//     val t6 = t1_1(47, 32)
//     val t7 = t1_1(31, 16)
//     val t8 = t1_1(15, 0)
//     Cat(t1, t2, t3, t4, t5, t6, t7, t8)
//     })

//     io.vs2_data := VecInit(Seq.tabulate(16) { i =>
//     val t3_1 = register(io.vs2_addr)
//     val t9 = t3_1(127, 112)
//     val t10 = t3_1(111, 96)
//     val t11 = t3_1(95, 80)
//     val t12 = t3_1(79, 64)
//     val t13 = t3_1(63, 48)
//     val t14 = t3_1(47, 32)
//     val t15 = t3_1(31, 16)
//     val t16 = t3_1(15, 0)
//     Cat(t9, t10, t11, t12, t13, t14, t15, t16)
//     })
// }.elsewhen (io.vsew === "b000".U) {
//     io.vs1_data := VecInit(Seq.tabulate(16) { i =>
//     val t1_1 = register(io.vs1_addr)
//     val t1 = t1_1(127, 120)
//     val t2 = t1_1(119, 112)
//     val t3 = t1_1(111, 104)
//     val t4 = t1_1(103, 96)
//     val t5 = t1_1(95, 88)
//     val t6 = t1_1(87, 80)
//     val t7 = t1_1(79, 72)
//     val t8 = t1_1(71, 64)
//     val t9 = t1_1(63, 56)
//     val t10 = t1_1(55, 48)
//     val t11 = t1_1(47, 40)
//     val t12 = t1_1(39, 32)
//     val t13 = t1_1(31, 24)
//     val t14 = t1_1(23, 16)
//     val t15 = t1_1(15, 8)
//     val t16 = t1_1(7, 0)
//     Cat(t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16)
//     })

//     io.vs2_data := VecInit(Seq.tabulate(16) { i =>
//     val t3_1 = register(io.vs2_addr)
//     val t17 = t3_1(127, 120)
//     val t18 = t3_1(119, 112)
//     val t19 = t3_1(111, 104)
//     val t20 = t3_1(103, 96)
//     val t21 = t3_1(95, 88)
//     val t22 = t3_1(87, 80)
//     val t23 = t3_1(79, 72)
//     val t24 = t3_1(71, 64)
//     val t25 = t3_1(63, 56)
//     val t26 = t3_1(55, 48)
//     val t27 = t3_1(47, 40)
//     val t28 = t3_1(39, 32)
//     val t29 = t3_1(31, 24)
//     val t30 = t3_1(23, 16)
//     val t31 = t3_1(15, 8)
//     val t32 = t3_1(7, 0)
//     Cat(t17, t18, t19, t20, t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32)
//     })


//     val imm_f = 0.S
//     val ele = 0
    
//     when (io.vsew === "b011".U) {
//         val imm_f = io.imm(63,0)
//         val ele = 2
//     }.elsewhen (io.vsew === "b010".U){
//         val imm_f = io.imm(31,0)  
//         val ele = 4      
//     }.elsewhen (io.vsew === "b001".U){
//         val imm_f = io.imm(15,0) 
//         val ele = 8       
//     }.elsewhen (io.vsew === "b000".U){
//         val imm_f = io.imm(7,0)
//         val ele = 16
//     }

//     when (io.rd === "b00000".U and io.aluop === "b00000".U){
//         val resultReg = RegInit(0.S)
//         for (i <- 0 until ele) {
//     // Concatenate the current vector element to the result
//             resultReg := Cat(vs1_data(i), resultReg)}
//             // immediate is only 5 bits how we can give mask bits for 16 elements
//     }.otherwise{
// //Make AluC output list first

//     }
// }
// }