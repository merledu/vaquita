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
        val Ex_sel = Output(UInt(2.W))
        val nextPCsel = Output(UInt(2.W))
        val aluop = Output(UInt(3.W))
        val vset = Output(Bool())
    
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
    io.vset := 1.B

    val configtype = io.Instruction(31,30)
    val opcode = io.Instruction(6, 0)

    switch (opcode){
        is ("b0110011".U){      //r-type
            io.MemWrite := 0.B
            io. Branch := 0.B
            io. MemRead := 0.B 
            io. RegWrite := 1.B
            io. Mem2Reg := 0.B
            io. opAsel := "b00".U
            io. opBsel := 0.B
            io. Ex_sel :="b00".U
            io.aluop := "b000".U
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
            io. Ex_sel := "b00".U
            io.aluop := "b001".U
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
            io. Ex_sel := "b01".U
            io.aluop := "b101".U
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
            io. Ex_sel := "b00".U
            io.aluop := "b100".U
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
            io. Ex_sel := "b00".U
            io.nextPCsel := "b01".U
            io.aluop := "b010".U
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
            io. Ex_sel := "b00".U
            io.nextPCsel := "b10".U
            io.aluop := "b011".U
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
            io. Ex_sel := "b00".U
            io.nextPCsel := "b11".U
            io.aluop := "b011".U
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
            io. Ex_sel := "b10".U
            io.nextPCsel := "b00".U
            io.aluop := "b110".U
            io.vset := 0.B
        }
        is ("b1010111".U){
            io.vset := 1.B
            when (configtype ==="b00".U || configtype ==="b01".U ){ // vsetvli
                io.RegWrite:=1.B
                io.aluop:="b001".U
                io.opBsel:=1.B
                io.MemWrite:=0.B
                io.Branch:=0.B
                io.MemRead :=0.B
                io.Mem2Reg:=0.B
                io.opAsel:="b00".U
                io.Ex_sel:=3.U
                io.nextPCsel:="b00".U


            }
            .elsewhen(configtype ==="b10".U){ // vsetivli
                io.RegWrite:=1.B
                io.aluop:="b001".U
                io.opBsel:=1.B
                io.MemWrite:=0.B
                io.Branch:=0.B
                io.MemRead :=0.B
                io.Mem2Reg:=0.B
                io.opAsel:="b00".U
                io.Ex_sel:=3.U
                io.nextPCsel:="b00".U
            }
            .otherwise{ //vsetvl
                io.RegWrite:=1.B
                io.MemWrite:=0.B
                io.Branch:=0.B
                io.MemRead :=0.B
                io.Mem2Reg:=0.B
                io.aluop:="b000".U
                io.opAsel:="b00".U
                io.opBsel:=0.B
                io.Ex_sel:=3.U
                io.nextPCsel:="b00".U
            }
    }
    }}
