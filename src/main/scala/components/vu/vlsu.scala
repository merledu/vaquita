package nucleusrv.components.vu

import chisel3._ 
import chisel3.util._ 
class VLSUIO extends Bundle with Config {
    val instr = Input(UInt(WLEN.W))
    val vtype = Input(UInt(WLEN.W))
    val UnitStride = Output(UInt(2.W))
    val evl = Output(UInt(8.W))
    val vs3_Addr = Output(UInt(5.W))
    val lsuType = Output(UInt(4.W))
    val eew = Output(UInt(4.W))
    
    val nf =Output(UInt(4.W))
    val emul = Output(UInt(4.W))
}
class VLSU extends Module {
    val io = IO(new VLSUIO)
    val nf = io.instr(31,29)
    val mew = io.instr(28)
    val mop = io.instr(27,26)
    val vm = io.instr(25)
    val lsumop = io.instr(24,20)
    val rs1 = io.instr(19,15)
    val width = io.instr(14,12)
    val vs3_addr = io.instr(11,7)
    val opcode = io.instr(6,0)
    val vlmul = io.vtype(2,0)
    val vsew = io.vtype(5,3)

    val sew = MuxLookup (vsew, 0.U, Array (
                ("b000".U) -> 8.U ,
                ("b001".U) -> 16.U ,
                ("b010".U) -> 32.U,
                ("b011".U) -> 64.U)
            )
    val lmul = MuxLookup (vsew, 0.U, Array (
                ("b000".U) -> 1.U ,
                ("b001".U) -> 2.U ,
                ("b010".U) -> 4.U,
                ("b011".U) -> 8.U)
            )
    val eew = MuxLookup (vsew, 0.U, Array (
                ("b000".U) -> 8.U ,
                ("b101".U) -> 16.U ,
                ("b110".U) -> 32.U,
                ("b111".U) -> 64.U)
            )


//  for all emul < 1 is set to 1.


val emul = 0
when(sew === 8.U) {
  when(lmul === 1.U) {
    when(eew === 8.U) { val emul = 1 }
    .elsewhen(eew === 16.U) { val emul = 2 }
    .elsewhen(eew === 32.U) { val emul = 4 }
    .elsewhen(eew === 64.U) { val emul = 8 }
  }
}.elsewhen(sew === 16.U) {
  when(lmul === 1.U) {
    when(eew === 8.U) { val emul = 1 }
    .elsewhen(eew === 16.U) { val emul = 1 }
    .elsewhen(eew === 32.U) { val emul = 2 }
    .elsewhen(eew === 64.U) { val emul = 4 }
  }
}.elsewhen(sew === 32.U) {
  when(lmul === 1.U) {
    when(eew === 8.U) { val emul = 1 }
    .elsewhen(eew === 16.U) { val emul = 1 }
    .elsewhen(eew === 32.U) { val emul = 1 }
    .elsewhen(eew === 64.U) { val emul = 2 }
  }
}.elsewhen(sew === 64.U) {
  when(lmul === 1.U) {
    when(eew === 8.U) { val emul = 1 }
    .elsewhen(eew === 16.U) { val emul = 1 }
    .elsewhen(eew === 32.U) { val emul = 1 }
    .elsewhen(eew === 64.U) { val emul = 1 }
  }
}







    val nfields = 0
when(nf === "b000".U) {
  val nfields = 1
}.elsewhen(nf === "b001".U) {
  val nfields = 2
}.elsewhen(nf === "b010".U) {
  val nfields = 3
}.elsewhen(nf === "b011".U) {
  val nfields = 4
}.elsewhen(nf === "b100".U) {
  val nfields = 5
}.elsewhen(nf === "b101".U) {
  val nfields = 6
}.elsewhen(nf === "b110".U) {
  val nfields = 7
}.otherwise {
  val nfields = 8
}
    // vlen = 128 and for store unit stride whole register eew= 8 , evl = nfields*vlen/eew
   
    io.evl := MuxLookup(nfields.U, 0.U, Array(
        1.U -> 16.U,
        2.U -> 32.U,
        4.U -> 64.U,
        8.U -> 128.U
        ))
    
    
    io.UnitStride := MuxLookup(lsumop, 0.U, Array(
        ("b00000".U) -> 1.U , //unit stride store
        ("b01000".U) -> 2.U , // whole register
        ("b01011".U) -> 3.U // mask store unit stride
        ))

    
    val lsuType = MuxLookup(mop, 0.U, Array(
        ("b00".U) -> 1.U , //unit stride store
        ("b01".U) -> 2.U , // index unordered
        ("b10".U) -> 3.U, // strided
        ("b11".U) -> 4.U // index ordered
        ))
io.vs3_Addr := 0.U

    // when (io.UnitStride === 1.U){
    //     for (i <- 0 until emul){
    //         io.vs3_Addr := vs3_addr + i.U
    //     }
    // }

    // when ( io.UnitStride === 2.U){
    //     for (i <- 0 until nfields){
    //         io.vs3_Addr := vs3_addr + i.U
    //     }
    // }
    io.emul := emul.asUInt
    io.nf := nfields.asUInt
    io.eew := eew
    io.lsuType := lsuType
}