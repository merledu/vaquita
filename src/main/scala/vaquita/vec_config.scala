package vaquita

import chisel3._

trait Vaquita_Config {
  val vlen: Int      = 256
  val reg_count :Int = 32
  val XLEN :Int = 32
  val count_lanes :Int   = 8// vlen >> 5 // vlen/32
  // val debug: Boolean = true
}