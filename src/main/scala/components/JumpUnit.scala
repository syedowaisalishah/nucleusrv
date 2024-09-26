package nucleusrv.components
import chisel3._
import chisel3.util.BitPat

class JumpUnit extends Module {

  val io = IO(new Bundle {
    val func7: UInt = Input(UInt(32.W))    
    val jump: UInt = Output(UInt(2.W))     
    val pc: UInt = Input(UInt(64.W))
    val targetAddress: UInt = Output(UInt(64.W))
    val imm: SInt = Input(SInt(64.W))      
  })

  io.targetAddress := 0.U

  when(io.func7 === BitPat("b1101111")) {
    io.jump := 2.U
    io.targetAddress := io.pc + io.imm.asUInt 
  }.elsewhen(io.func7 === BitPat("b1100111")) { 
    io.jump := 3.U
    io.targetAddress := (io.pc + io.imm.asUInt) & (~1.U(64.W))
  }
  .otherwise {
    io.jump := 0.U
  }
}