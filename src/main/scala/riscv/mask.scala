// package riscv
// import chisel3 . _
// import chisel3 . util . _
// class vec_mask extends Module {
//     val io = IO(new Bundle{
//         val vec_0_in = Vec(128,Input(UInt(1.W)))
//         val vd_in = Input(UInt(128.W))
//         val arith_mask = Input(Bool())
//         val sew = Input(UInt(5.W))
//         val vma = Input(Bool())
//         val vec_0_out = Vec(128,Output(UInt(1.W)))
//         val vd_out_32 = Output(UInt(128.W))
//     })
//     when (io.arith_mask===0.B){
//         for (i <- 0 until 4) {
//             when (io.arith_mask===0.B && io.vec_0_in(i)===1.U){
//                 io.vd_out_32 := 0.U 
//             }
//             .elsewhen(io.vma === 0.B){
//                 io.vd_out_32 := io.vd_in
//             }
//             .elsewhen(io.vma === 1.B){
//                 io.vd_out_32 := Fill(128,1.U)
//             }
//             .otherwise{
//                 io.vec_0_out(i) := 1.U
//                 io.vd_out_32 := 1.U
//             }
//         }
//     }
//     .otherwise{
//         io.vd_out_32 := io.vd_in
//     }
// dontTouch(io.vd_out_32)
//         io.vec_0_out := io.vec_0_in

// }
