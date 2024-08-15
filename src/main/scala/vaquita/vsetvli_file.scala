// package vaquita
// import chisel3._
// import chisel3.util._


// class wb_stage(implicit val config: Vaquita_Config,val on : Bool =1.B, val off : Bool =0.B) extends Module {
//   val io = IO (new Bundle {
//     val lmul = Input(UInt(3.W))
//     val sew = Input(UInt(3.W))
//   })

// def vl_max_calculate(Lmul:UInt,Sew:UInt):UInt={
//     val a = (config.vlen*lmul)/sew
// }
// when (io.rs1=/=0.U){
//     when(io.rs1<=vl_max_calculate(2,32)){
        
//     }
// }

// }

// // when (io.lmul==="" and io.sew ==="b")
// // vlmax=128
// // if (rs1 !=0)
// // AVL = rs1
// // 	if AVL <= VLMAX
// // 		vl = AVL
// // 	if AVL < (2 * VLMAX)
// // 		 ceil(AVL / 2) ≤ vl ≤ VLMAX
// // 	if AVL >= (2 * VLMAX)
// // 		vl = VLMAX
// // whenelse (rs1=x0 and rd!=x0)
// // AVL = ??
// // if AVL <= VLMAX
// // 		vl = AVL
// // 	if AVL < (2 * VLMAX)
// // 		 ceil(AVL / 2) ≤ vl ≤ VLMAX
// // 	if AVL >= (2 * VLMAX)
// // 		vl = VLMAX
// // whenelse (rs1=x0 and rd=x0)
// // AVL = ??
// // vill=1
// // illegal instruction

// // }