package singlecycle
import chisel3._
import chisel3.util._
import chisel3.experimental.ChiselEnum
class controldec extends Module {
    val io = IO (new Bundle {
        val Instruction= Input ( UInt (32. W ) )
        val MemWrite = Output(Bool())
        val Branch = Output(Bool())
        val MemRead = Output(Bool())
        val RegWrite = Output(Bool())
        val Mem2Reg = Output(Bool())
        val opAsel = Output(UInt(2.W))
        val opBsel = Output(Bool())
        val Ex_sel = Output(UInt(4.W))
        val nextPCsel = Output(UInt(2.W))
        val aluop = Output(UInt(5.W))
        val vset = Output(Bool())
        val load = Output (UInt(4.W))
        val v_ins =Output(Bool())
    })
    io.MemWrite := 0.B
    io.Branch := 0.B
    io.MemRead := 0.B
    io.RegWrite := 0.B
    io.Mem2Reg := 0.B
    io.opAsel := 0.U
    io.opBsel := 0.B
    io.Ex_sel := 0.U
    io.nextPCsel := 0.U
    io.aluop := 7.U
    io.vset := 0.B
    io.load :=0.B
    io.v_ins := 0.B

    val configtype = io.Instruction(31,30)
    val opcode = io.Instruction(6, 0)
    val func3 = io.Instruction(14,12)

    switch (opcode){
        is ("b0110011".U){      //r-type
            io.MemWrite := 0.B
            io. Branch := 0.B
            io. MemRead := 0.B 
            io. RegWrite := 1.B
            io. Mem2Reg := 0.B
            io. opAsel := "b00".U
            io. opBsel := 0.B
            io. Ex_sel :=0.U
            io.aluop := "b00000".U
            io.vset := 0.B
             
        }
        is ("b0010011".U){     //i-type
            io. MemWrite := 0.B
            io. Branch := 0.B
            io. MemRead := 0.B 
            io. RegWrite := 1.B
            io. Mem2Reg := 0.B
            io. opAsel := "b00".U
            io. opBsel := 1.B
            io. Ex_sel := 0.U
            io.aluop := "b00001".U
            io.vset := 0.B
        }
        is ("b0100011".U){ //s-type
            io. MemWrite := 1.B
            io. Branch := 0.B
            io. MemRead := 0.B 
            io. RegWrite := 1.B
            io. Mem2Reg := 0.B
            io. opAsel := "b00".U
            io. opBsel := 1.B
            io. Ex_sel := 1.U
            io.aluop := "b00101".U
            io.vset := 0.B
        }
         is ("b0000011".U){  //load-type
            io. MemWrite := 0.B
            io. Branch := 0.B
            io. MemRead := 1.B 
            io. RegWrite := 1.B
            io. Mem2Reg := 1.B
            io. opAsel := "b00".U
            io. opBsel := 1.B
            io. Ex_sel := 0.U
            io.aluop := "b00100".U
            io.vset := 0.B

        }
         is ("b1100011".U){    //sb-type
            io. MemWrite := 0.B
            io. Branch := 1.B
            io. MemRead := 0.B 
            io. RegWrite := 0.B
            io. Mem2Reg := 0.B
            io. opAsel := "b00".U
            io. opBsel := 0.B
            io. Ex_sel := 0.U
            io.nextPCsel := "b01".U
            io.aluop := "b00010".U
            io.vset := 0.B
        }
         is ("b1101111".U){        //jal-type
            io. MemWrite := 0.B
            io. Branch := 0.B
            io. MemRead := 0.B 
            io. RegWrite := 1.B
            io. Mem2Reg := 0.B
            io. opAsel := "b01".U
            io. opBsel := 0.B
            io. Ex_sel := 0.U
            io.nextPCsel := "b10".U
            io.aluop := "b00011".U
            io.vset := 0.B
        }
         is ("b1100111".U){   //jalr-type
            io. MemWrite := 0.B
            io. Branch := 0.B
            io. MemRead := 0.B 
            io. RegWrite := 1.B
            io. Mem2Reg := 0.B
            io. opAsel := "b01".U
            io. opBsel := 1.B
            io. Ex_sel := 0.U
            io.nextPCsel := "b11".U
            io.aluop := "b00011".U
            io.vset := 0.B
        }
        is ("b0110111".U){   //lui-type
            io. MemWrite := 0.B
            io. Branch := 0.B
            io. MemRead := 0.B 
            io. RegWrite := 1.B
            io. Mem2Reg := 0.B
            io. opAsel := "b10".U
            io. opBsel := 1.B
            io. Ex_sel := 2.U
            io.nextPCsel := "b00".U
            io.aluop := "b00110".U
            io.vset := 0.B
        }
        is ("b1010111".U){ //vector operations
            
            io.v_ins := 1.B
            when (func3 ==="b111".U && (configtype ==="b00".U || configtype ==="b01".U )){ // vsetvli
                io.RegWrite:=1.B
                io.aluop:=0.U
                io.opBsel:=1.B
                io.MemWrite:=0.B
                io.Branch:=0.B
                io.MemRead :=0.B
                io.Mem2Reg:=0.B
                io.opAsel:="b00".U
                io.Ex_sel:=3.U
                io.nextPCsel:="b00".U
                io.vset := 1.B
            }.elsewhen(func3 ==="b111".U && configtype ==="b10".U){ // vsetivli
                io.RegWrite:=1.B
                io.aluop:="b00001".U
                io.opBsel:=1.B
                io.MemWrite:=0.B
                io.Branch:=0.B
                io.MemRead :=0.B
                io.Mem2Reg:=0.B
                io.opAsel:="b00".U
                io.Ex_sel:=3.U
                io.nextPCsel:="b00".U
                io.vset := 1.B
            }.elsewhen(func3 ==="b111".U && configtype ==="b11".U){ //vsetvl
                io.RegWrite:=1.B
                io.MemWrite:=0.B
                io.Branch:=0.B
                io.MemRead :=0.B
                io.Mem2Reg:=0.B
                io.aluop:="b00000".U
                io.opAsel:="b00".U
                io.opBsel:=0.B
                io.Ex_sel:=3.U
                io.nextPCsel:="b00".U
                io.vset := 1.B
            }.elsewhen (func3 === "b000".U) {//vector-vector
                io.RegWrite:=1.B
                io.MemWrite:=0.B
                io.Branch:=0.B
                io.MemRead :=0.B
                io.Mem2Reg:=0.B
                io.aluop:=2.U
                io.opAsel:="b00".U
                io.opBsel:=0.B
                io.Ex_sel:=4.U
                io.nextPCsel:="b00".U
                io.v_ins := 1.U
                io.vset := 0.B
            }.elsewhen (func3 === "b100".U) {//vector-scalar
                io.RegWrite:=1.B
                io.MemWrite:=0.B
                io.Branch:=0.B
                io.MemRead :=0.B
                io.Mem2Reg:=0.B
                io.aluop:=3.U
                io.opAsel:="b00".U
                io.opBsel:=0.B
                io.Ex_sel:=4.U
                io.nextPCsel:="b00".U
                // io.V_inst := 1.U
            }.elsewhen (func3 === "b011".U) {//vector-immediate
                io.RegWrite:=1.B
                io.MemWrite:=0.B
                io.Branch:=0.B
                io.MemRead :=0.B
                io.Mem2Reg:=0.B
                io.aluop:=1.U
                io.opAsel:="b00".U
                io.opBsel:=1.B
                io.Ex_sel:=4.U
                io.nextPCsel:="b00".U
                io.v_ins := 1.B
                io.vset := 0.B
            }
            }
            is ("b0000111".U){//load-vector
            when (io.Instruction(27,26) ==="b00".U && io.Instruction(24,20 )=== "b00000".U){// (mop =00) unit stride// (lumop =000000) unit stride load
                io.RegWrite:=1.B
                io.MemWrite:=0.B
                io.Branch:=0.B
                io.MemRead :=1.B
                io.Mem2Reg:=1.B
                io.aluop:="b00111".U
                io.opAsel:="b00".U
                io.opBsel:=0.B
                io.Ex_sel:=3.U
                io.nextPCsel:="b00".U  
                io.load := 1.U
            }
        }
        
    }}
