package vaquita
import chisel3._
import chisel3.util._

class excute_stage(implicit val config: Config) extends Module {
    val io = IO (new Bundle{
        val ex_vs1_data_in = Input(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))
        val ex_vs2_data_in = Input(Vec(8, Vec(config.vlen >> 6, SInt(64.W))))           
        // val ex_vs1_data_out =Output(Vec((config.count_lanes),SInt(32.W)))
        // val ex_vs2_data_out =Output(Vec((config.count_lanes),SInt(32.W)))

})
// val a  = RegInit(VecInit(Seq.fill(config.count_lanes)(0.S(64.W))))

}