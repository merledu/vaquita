package riscv
import chisel3 . _
import chisel3 . util . _
class vec_csr extends Module {
    val io = IO(new Bundle{
        val vsew = Output(UInt(10.W))
        val vlmul = Output(UInt(10.W))
        val instr = Input(UInt(32.W))
        //val rs2 = Input(UInt(8.W))
    })
    val opcode = io.instr(6,0)
    // val lmul = io.instr(22,20)
    // val sew = io.instr(6,0)
    // val mask = io.instr(6,0)
    // val tail = io.instr(6,0)
    // val vill = io.instr(6,0)

    // val sew =Wire(UInt(3.W))
    // val lmul =Wire(UInt(3.W))
    // val vill =Wire(UInt(3.W))
    // val tail =Wire(UInt(3.W))
    // val mask =Wire(UInt(3.W))
    // val lmul =Wire(UInt(3.W))

    val vtype = RegInit("b00000000000000000000000000010000".U(32.W))
    val vl =    RegInit("b00000000000000000000000000000100".U(32.W))
    val vlenb = RegInit("b00000000000000000000000000010000".U(32.W))
    //update vtype csr through vsetvli instruction
    when (opcode==="b1010111".U && io.instr(31)===0.B && io.instr(14,12)==="b111".U){
        vtype := Cat(io.instr(8),"b00000000000000000000000".U,io.instr(27,20))  
    }
    //update vtype csr through vsetivli instruction
    // .elsewhen (opcode==="b1010111".U && io.instr(31)===1.B && io.instr(30)===1.B){
    //     vtype := Cat(io.instr(8),"b00000000000000000000000".U,io.instr(27,20))  
    // }
    // //update vtype csr through vsetvl instruction
    // .elsewhen (opcode==="b1010111".U && io.rs2===1.B && io.rs2(30)===0.B){
    //     vtype := Cat(io.rs2(8),"b00000000000000000000000".U,io.rs2(7,0))  
    // }
    io.vlmul := vtype(2,0)
    io.vsew := vtype(5,3)
    // io.mask := vtype(6)
    // io.tail := vtype(7)
    // io.vill := vtype(31)
    
}









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