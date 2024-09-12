package vaquita

import chisel3._

trait Vaquita_Config {
  val vlen: Int      = 128
  val reg_count :Int = 32
  val XLEN :Int = 32
  val count_lanes :Int   = vlen >> 5
  val debug: Boolean = true
}