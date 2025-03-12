package vaquita

import chisel3._

trait VaquitaConfig {
  val vlen: Int      = 256
  val reg_count :Int = 32
  val XLEN :Int = 32
  val count_lanes :Int   = vlen >> 5
  val debug: Boolean = true
}