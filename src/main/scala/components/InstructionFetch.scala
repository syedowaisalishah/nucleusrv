package nucleusrv.components
import chisel3._
import chisel3.util._

class InstructionFetch(implicit val config: nucleusrv.components.Configs) extends Module {
  val XLEN   = config.XLEN // add config

  val io = IO(new Bundle {
    val address: UInt = Input(UInt(32.W))
    val instruction: UInt = Output(UInt(64.W)) // Change to 64-bit output
    val stall: Bool = Input(Bool())
    val coreInstrReq = Decoupled(new MemRequestIO)
    val coreInstrResp = Flipped(Decoupled(new MemResponseIO))
  })

  val rst = Wire(Bool())
  rst := reset.asBool()
  io.coreInstrResp.ready := true.B

  // Request for fetching 64-bit instructions
  io.coreInstrReq.bits.activeByteLane := "b1111111111111111".U // 16 bytes for 64-bit instruction
  io.coreInstrReq.bits.isWrite := false.B
  io.coreInstrReq.bits.dataRequest := DontCare

  // Shift address for fetching 64-bit instructions
  io.coreInstrReq.bits.addrRequest := io.address >> 2 // Word-aligned address
  io.coreInstrReq.valid := Mux(rst || io.stall, false.B, true.B)

  // Combine two 32-bit responses to form a 64-bit instruction
  val instrLow = io.coreInstrResp.bits.dataResponse(31, 0)  // Lower 32 bits of instruction
  val instrHigh = io.coreInstrResp.bits.dataResponse(63, 32) // Upper 32 bits of instruction

  // Assign the 64-bit instruction when the response is valid
  io.instruction := Mux(io.coreInstrResp.valid, Cat(instrHigh, instrLow), 0.U)
}