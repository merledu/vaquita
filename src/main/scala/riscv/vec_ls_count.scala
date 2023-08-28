// // package riscv
// // import chisel3 . _
// // import chisel3 . util . _
// // class vec_ls_count extends Module {
// //     val io = IO(new Bundle{
// //         val count = Input(UInt(32.W)) //from immediate
// //         // val pc_in = Input(UInt(32.W)) //from pc counter
// //         // val pc_out = Output(UInt(32.W)) // mux
// //         val stall_count = Output(UInt(32.W)) // 
// //     })
// //     val reg = RegInit(0.U(32.W))
// //     when (io.count === 4.U){
// //         reg := io.count -1.U
// //         io.stall_count := reg
// //         // io.pc_out := io.pc_in
// //     }
// //     .elsewhen(io.count < 4.U){
// //         reg := reg -1.U
// //         io.stall_count := reg
// //         // io.pc_out := io.pc_in


// //     }
// //     .otherwise{
// //         reg := 10.U
// //         io.stall_count := reg
// //         // io.pc_out := 0.U
// //     }

// //     // reg := io.count
// //     // io.out := reg

// //     // when (io.count > 0.U){
// //     //     io.out4 := reg - 1.U
// //     // }
// // }




// package riscv
// import chisel3 . _
// import chisel3 . util . _
// class s_memory extends Module {
//     val io = IO(new Bundle{
//     val addr = Input(Vec(4,UInt(32.W)))
//     val mem_data = Input(SInt(32.W))
//     val  w_enable= Input(Bool())
//     val r_enable = Input(Bool())
//     val dataout = Output(SInt(128.W))
//     val stall = Input(UInt(32.W))
//     })
//     val rdata = RegInit(VecInit(Seq.fill(4)(0.S(32.W))))
//     val memory = Mem(1024,SInt(32.W))

//     when(io.w_enable){
//         memory.write(io.addr(0),io.mem_data)
//     }
//     when (io.stall >= 0.U){
//         rdata(0) := memory.read(io.addr(0))
//         rdata(1) := memory.read(io.addr(1))
//         rdata(2) := memory.read(io.addr(2))
//         rdata(3) := memory.read(io.addr(3))
//     }
//     io.dataout := Cat(rdata(0),rdata(1),rdata(2),rdata(3)).asSInt
// }