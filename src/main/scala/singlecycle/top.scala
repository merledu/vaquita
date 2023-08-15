package singlecycle
import chisel3._
import chisel3.util._

class Top extends Module{
    val io=IO(new Bundle{ 
        val out = Output(UInt(32.W))
         val addr = Output ( UInt ( 10 . W ) )
    //val inst = Output ( UInt ( 32 . W ) )
    })
// var temp = 0.U
val PCMod = Module(new pc)
val ALUMod = Module(new ALU_)
val ALUcMod = Module (new alucontrol)
val BrcntrlMod = Module (new BranchControl_)
val CntrlDecMod = Module (new controldec)
val datamemMod = Module (new datamem)
val ImmgenMod = Module(new ImmdValGen1)
val instmemMod = Module (new InstMem)
val jalrCompMod = Module (new jalr)
val regfileMod = Module (new regfile(32))
val config= Module(new configure)

PCMod.io.input := PCMod.io.pc4

instmemMod.io.addr := PCMod.io.pc(11,2)
CntrlDecMod.io.Instruction := instmemMod.io.inst
io.addr := instmemMod.io.addr

//regfile
regfileMod.io.RegWrite := CntrlDecMod.io.RegWrite
regfileMod.io.rs1:= instmemMod.io.inst(19,15)
regfileMod.io.rs2 := instmemMod.io.inst(24,20)
regfileMod.io.rd:=instmemMod.io.inst(11,7)


//immegen
ImmgenMod.io.instruction := instmemMod.io.inst
ImmgenMod.io.pc := PCMod.io.pc

//ALU Control
ALUcMod.io.aluOp := CntrlDecMod.io.aluop
ALUcMod.io.func3 := instmemMod.io.inst(14,12)
ALUcMod.io.func7 := instmemMod.io.inst(30)

//ALU

//InA
ALUMod.io.in_A := MuxCase ( 0.S , Array (
(CntrlDecMod.io.opAsel ==="b00".U || CntrlDecMod.io.opAsel ==="b11".U) -> regfileMod.io.rdata1 ,
(CntrlDecMod.io.opAsel ==="b01".U) -> PCMod.io.pc4.asSInt ,
(CntrlDecMod.io.opAsel ==="b10".U) -> PCMod.io.pc.asSInt 
)
)

//InB
when(CntrlDecMod.io.Ex_sel === "b00".U && CntrlDecMod.io.opBsel === 1.U){
		ALUMod.io.in_B := ImmgenMod.io.i_imm
	}.elsewhen(CntrlDecMod.io.Ex_sel === "b01".U && CntrlDecMod.io.opBsel === 1.U){
		ALUMod.io.in_B := ImmgenMod.io.s_imm
	}.elsewhen(CntrlDecMod.io.Ex_sel === "b10".U && CntrlDecMod.io.opBsel === 1.U){
		ALUMod.io.in_B := ImmgenMod.io.u_imm
	}.otherwise{
		ALUMod.io.in_B := ImmgenMod.io.z_imm
	}


ALUMod.io.aluc := ALUcMod.io.aluc

		config.io.rs1 :=instmemMod.io.inst(19,15)
        config.io.rd := instmemMod.io.inst(11,7)
        config.io. rs1_readdata := regfileMod.io.rdata1
        config.io.zimm := ALUMod.io.in_B
        config.io.current_vl :=16.S
		regfileMod.io.rd := config.io.rd_out



//Branch

BrcntrlMod.io.branch := CntrlDecMod.io.Branch
BrcntrlMod.io.arg_x := 0.S
BrcntrlMod.io.arg_y := 0.S


//In A
when (BrcntrlMod.io.branch === 1.B){
    BrcntrlMod.io.arg_x := MuxCase ( 0.S , Array (
(CntrlDecMod.io.opAsel ==="b00".U) -> regfileMod.io.rdata1 ,
(CntrlDecMod.io.opAsel ==="b01".U) -> (PCMod.io.pc4).asSInt ,
(CntrlDecMod.io.opAsel ==="b10".U ) -> (PCMod.io.pc).asSInt ,
(CntrlDecMod.io.opAsel ==="b11".U) -> regfileMod.io.rdata1)
)

//In B
 when(CntrlDecMod.io.Ex_sel === "b00".U && CntrlDecMod.io.opBsel === 1.U){
		BrcntrlMod.io.arg_y := ImmgenMod.io.i_imm
	}.elsewhen(CntrlDecMod.io.Ex_sel === "b01".U && CntrlDecMod.io.opBsel === 1.U){
		BrcntrlMod.io.arg_y := ImmgenMod.io.s_imm
	}.elsewhen(CntrlDecMod.io.Ex_sel === "b10".U && CntrlDecMod.io.opBsel === 1.U){
		BrcntrlMod.io.arg_y := ImmgenMod.io.u_imm
	}.otherwise{
		BrcntrlMod.io.arg_y := regfileMod.io.rdata2
	}

} 
BrcntrlMod.io.aluc := CntrlDecMod.io.aluop

//jalr component
jalrCompMod.io.rs1 := regfileMod.io.rdata1
jalrCompMod.io.imm := ImmgenMod.io.i_imm
//val temp = 0.U
// when (BrcntrlMod.io.br_taken & CntrlDecMod.io.Branch){
//     temp := ImmgenMod.io.immd_se
// }.otherwise {
//    temp := PCMod.io.pc4
// }

PCMod.io.input := MuxCase ( 0.U , Array (
(CntrlDecMod.io.nextPCsel === "b00".U ) -> PCMod.io.pc4 ,
(CntrlDecMod.io.nextPCsel === "b01".U) -> Mux(BrcntrlMod.io.br_taken,(ImmgenMod.io.sb_imm).asUInt,PCMod.io.pc4) ,
(CntrlDecMod.io.nextPCsel === "b10".U) -> (ImmgenMod.io.uj_imm).asUInt ,
(CntrlDecMod.io.nextPCsel === "b11".U) -> (jalrCompMod.io.out).asUInt)
)

//datamemory
datamemMod.io.Addr := (ALUMod.io.output(9,2)).asUInt
datamemMod.io.Data := regfileMod.io.rdata2
datamemMod.io.MemWrite := CntrlDecMod.io.MemWrite
datamemMod.io.MemRead := CntrlDecMod.io.MemRead

regfileMod.io.WriteData := MuxCase ( 0.S , Array (
(CntrlDecMod.io.Mem2Reg === 0.B ) -> Mux(CntrlDecMod.io.vset,config.io.vl,ALUMod.io.output),
(CntrlDecMod.io.Mem2Reg === 1.B ) -> datamemMod.io.out)
)
io.out := 0.U

}
