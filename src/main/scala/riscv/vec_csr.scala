// // package riscv
// // import chisel3 . _
// // import chisel3 . util . _
// // class instr_memory extends Module {
// //     val io = IO(new Bundle{
// //         val address = Input(UInt(10.W))
// //         //val address4 = Input(UInt(10.W))
// //         val r_data = Output(UInt(32.W))
// //     })
// //     //val vtype = RegInit(24.U(8.W))
// // }

// //vlsu module
// package riscv
// import chisel3 . _
// import chisel3 . util . _
// class vlsu extends Module {
//     val io = IO(new Bundle{
//         val vlmul = Input(UInt(3.W))
//         val vsew = Input(UInt(3.W))
        
//         val vlmax = Output(UInt(32.W))
//     })
//     val valmax = 0.U(32.W)
//     when (io.vlmul==="b011".U && io.vsew==="b000".U){
//         valmax :=128.U
//     }
//     .elsewhen ((io.vlmul==="b010".U  && io.vsew==="b000".U) || (io.vlmul==="b011".U && io.vsew==="b001".U))
//     {
//         valmax := 64.U
//     }
//     .elsewhen ((io.vlmul==="b001".U && io.vsew==="b000".U) || (io.vlmul==="b010".U && io.vsew==="b001".U) || 
//     (io.vlmul==="b011".U && io.vsew==="b010".U))
//     {
//         valmax := 32.U
//     }

//     .elsewhen ((io.vlmul==="b000".U && io.vsew==="b000".U) || (io.vlmul==="b001".U && io.vsew==="b001".U) || 
//     (io.vlmul==="b010".U && io.vsew==="b010".U) || (io.vlmul==="b011".U && io.vsew==="b011".U))
//     {
//         valmax := 16.U
//     }

//     .elsewhen ((io.vlmul==="b000".U && io.vsew==="b001".U) || (io.vlmul==="b001".U && io.vsew==="b010".U) || 
//     (io.vlmul==="b010".U && io.vsew==="b011".U) || (io.vlmul==="b111".U && io.vsew==="b000".U))
//     {
//         valmax := 8.U
//     }

//     .elsewhen ((io.vlmul==="b000".U && io.vsew==="b010".U)  || (io.vlmul==="b001".U && io.vsew==="b011".U)  ||  
//     (io.vlmul==="b111".U && io.vsew==="b001".U) || (io.vlmul==="b110".U && io.vsew==="b000".U))
//     {
//         valmax := 4.U
//     }
//     .elsewhen ((io.vlmul==="b000".U && io.vsew==="b011".U) || (io.vlmul==="b111".U && io.vsew==="b010".U) || 
//     (io.vlmul==="b110".U && io.vsew==="b001".U) || (io.vlmul==="b101".U && io.vsew==="b000".U))
//     {
//         valmax := 2.U
//     }
//     .elsewhen ((io.vlmul==="b111".U && io.vsew==="b011".U) || (io.vlmul==="b110".U && io.vsew==="b010".U) ||
//     (io.vlmul==="b101".U && io.vsew==="b001".U))
//     {
//         valmax := 1.U
//     }
//     .otherwise{
//         0.U
//     }
// io.vlmax:=valmax
// }