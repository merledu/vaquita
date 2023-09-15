package riscv
import chisel3 . _
import chisel3 . util . _
class vec_csr extends Module {
    val io = IO(new Bundle{
        val instr = Input(UInt(32.W))
        val vsew = Output(UInt(10.W))
        val vlmul = Output(UInt(10.W))
        val vlmul_count = Output(UInt(10.W))
        val mask = Output(Bool())
        val tail = Output(Bool())
        val vl_out = Output(UInt(10.W))
        val vl_in = Input(UInt(10.W))
        val rs2 = Input(SInt(32.W))
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
    val llll = vtype(2,0)
    dontTouch(llll)
    //update vtype csr through vsetvli instruction
    when (opcode==="b1010111".U && io.instr(31)===0.B && io.instr(14,12)==="b111".U){
        vtype := Cat(io.instr(8),"b00000000000000000000000".U,io.instr(27,20))  
        vl := io.vl_in
    }
    //update vtype csr through vsetivli instruction
    .elsewhen (opcode==="b1010111".U && io.instr(31,30)==="b11".U && io.instr(14,12)==="b111".U){
        vtype := Cat(io.instr(8),"b00000000000000000000000".U,io.instr(27,20))  
        vl := io.vl_in
    }
    // update vtype csr through vsetvl instruction
    .elsewhen (opcode==="b1010111".U && io.rs2(31,30)==="b10".U && io.instr(14,12)==="b111".U){
        vtype := Cat(io.rs2(8),"b00000000000000000000000".U,io.rs2(7,0))  
        vl := io.vl_in
    }
    // io.vlmul := vtype(2,0)
    io.vsew := vtype(5,3)
    io.mask := vtype(7)
    io.tail := vtype(6)
    io.vl_out := vl
    // io.vill := vtype(31)

    // working on  only one vector 
    when (vtype(2,0)==="b000".U){
        io.vlmul := 0.U
        io.vlmul_count := 0.U
    }
    // working on  only two vector continously
    .elsewhen (vtype(2,0)==="b001".U){
        when((vtype(6)===1.B) && (vl < 4.U && vtype(5,3)==="b010".U) ){
            io.vlmul := 1.U
            io.vlmul_count := 0.U
        }
        .otherwise{
            io.vlmul := 1.U
            io.vlmul_count := 2.U
        }
        
    }
    // working on  only four vector continously
    .elsewhen (vtype(2,0)==="b010".U){
        when(vtype(6)===1.B && (vl < 4.U && vl > 0.U) ){
            io.vlmul := 2.U
            io.vlmul_count := 1.U
        }
        .elsewhen(vtype(6)===1.B && (vl < 8.U && vl > 4.U)){
            io.vlmul := 2.U
            io.vlmul_count := 3.U
        }
        .otherwise{
            io.vlmul := 2.U
            io.vlmul_count := 3.U
        }
        
    }
    // working on  only eight vector continously
    .elsewhen (vtype(2,0)==="b011".U){
        io.vlmul := 3.U
        when(vl < 4.U && vl > 0.U ){
            io.vlmul_count := 0.U
        }
        .elsewhen((vl < 8.U && vl > 4.U)){
            io.vlmul_count := 1.U
        }
        .elsewhen((vl < 12.U && vl > 8.U)){
            io.vlmul_count := 2.U
        }
        .elsewhen((vl < 16.U && vl > 12.U)){
            io.vlmul_count := 3.U
        }
        .elsewhen((vl < 20.U && vl > 16.U)){
            io.vlmul_count := 4.U
        }
        .elsewhen((vl < 24.U && vl > 20.U)){
            io.vlmul_count := 5.U
        }
        .elsewhen((vl < 28.U && vl > 24.U)){
            io.vlmul_count := 6.U
        }
        .elsewhen((vl < 32.U && vl > 28.U)){
            io.vlmul_count := 7.U
        }
        .elsewhen((vl < 36.U && vl > 32.U)){
            io.vlmul_count := 8.U
        }
        .elsewhen((vl < 40.U && vl > 36.U)){
            io.vlmul_count := 9.U
        }
        .elsewhen((vl < 44.U && vl > 40.U)){
            io.vlmul_count := 10.U
        }
        .elsewhen((vl < 48.U && vl > 44.U)){
            io.vlmul_count := 11.U
        }
        .elsewhen((vl < 52.U && vl > 48.U)){
            io.vlmul_count := 12.U
        }
        .elsewhen((vl < 56.U && vl > 52.U)){
            io.vlmul_count := 13.U
        }
        .elsewhen((vl < 60.U && vl > 56.U)){
            io.vlmul_count := 14.U
        }
        .elsewhen((vl < 64.U && vl > 60.U)){
            io.vlmul_count := 15.U
        }

        .otherwise{
            io.vlmul_count := 0.U
        }
    }
    .otherwise{
        io.vlmul := 0.U
        io.vlmul_count := 0.U
    }
    
}