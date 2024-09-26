package nucleusrv.components
import chisel3._

class Registers(implicit val config: Configs) extends Module {
  val XLEN = config.XLEN // XLEN can be either 32 or 64 depending on the config

  val io = IO(new Bundle {
    val readAddress = Input(Vec(2, UInt(5.W)))
    val writeEnable = Input(Bool())
    val writeAddress = Input(UInt(5.W))
    val writeData = Input(UInt(XLEN.W)) // writeData width adjusted based on XLEN

    val readData = Output(Vec(2, UInt(XLEN.W))) // readData width adjusted based on XLEN
  })

  // Register file initialization: E extension uses 16 registers, others use 32
  val reg = if (config.E) {
    RegInit(VecInit(Seq.fill(16)(0.U(XLEN.W)))) // 16 registers for E extension, width based on XLEN
  } else {
    RegInit(VecInit(Seq.fill(32)(0.U(XLEN.W)))) // 32 registers for non-E extension, width based on XLEN
  }

  // Writing to the register file
  when(io.writeEnable && io.writeAddress =/= 0.U) {
    reg(io.writeAddress) := io.writeData
  }

  // Reading from the register file
  for (i <- 0 until 2) {
    when(io.readAddress(i) === 0.U) {
      io.readData(i) := 0.U // Register 0 is hard-wired to 0
    }.otherwise {
      io.readData(i) := reg(io.readAddress(i))
    }
  }
}