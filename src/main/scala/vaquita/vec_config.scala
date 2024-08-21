package vaquita

import chisel3._

trait Vaquita_Config {
  val vlen: Int = 256
  val reg_count :Int = 32
  val count_lanes = vlen >> 6
  val debug: Boolean = true
}