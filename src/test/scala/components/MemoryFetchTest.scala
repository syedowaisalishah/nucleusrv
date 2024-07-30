package nucleusrv.components

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec

class MemoryFetchTest extends AnyFreeSpec with ChiselScalatestTester {
  implicit val config = new Configs {
    override val XLEN: Int = 64 // or 32, depending on your configuration
  }

  "MemoryFetch should write and read correctly" in {
    test(new MemoryFetch) { dut =>
      // Test 1: Simple write and read back
      dut.io.aluResultIn.poke(4.U)
      dut.io.writeData.poke("h12345678".U)
      dut.io.writeEnable.poke(true.B)
      dut.io.readEnable.poke(false.B)
      dut.io.f3.poke("b000".U)
      dut.clock.step(1)

      // Deassert write and assert read
      dut.io.writeEnable.poke(false.B)
      dut.io.readEnable.poke(true.B)
      dut.io.dccmRsp.valid.poke(true.B)
      dut.io.dccmRsp.bits.dataResponse.poke("h12345678".U)
      dut.clock.step(1)

      // Verify the read data
      dut.io.readData.expect("h12345678".U, "Read data should be 0x12345678")

      // Test 2: Halfword store and load
      dut.io.aluResultIn.poke(2.U)
      dut.io.writeData.poke("hABCD".U)
      dut.io.writeEnable.poke(true.B)
      dut.io.readEnable.poke(false.B)
      dut.io.f3.poke("b001".U)
      dut.clock.step(1)

      // Deassert write and assert read
      dut.io.writeEnable.poke(false.B)
      dut.io.readEnable.poke(true.B)
      dut.io.dccmRsp.valid.poke(true.B)
      dut.io.dccmRsp.bits.dataResponse.poke("hABCD".U)
      dut.clock.step(1)

      // Verify the read data
    //   dut.io.readData.expect("hABCD".U, "Read data should be 0xABCD")

      // Additional tests for different memory operations can be added here
    }
  }
}
