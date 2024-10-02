package nucleusrv.components
import chisel3._
import chisel3.util._

class AluControl(implicit val config: nucleusrv.components.Configs) extends Module {
  
  val io = IO(new Bundle {
    val aluOp: UInt = Input(UInt(2.W))
    val f7: UInt = Input(UInt(7.W)) // funct7 is 7 bits
    val f3: UInt = Input(UInt(3.W)) // funct3 is 3 bits
    val aluSrc: Bool = Input(Bool())
    val imm: UInt = Input(UInt(XLEN.W)) // Immediate value input
    val out: UInt = Output(UInt(4.W))
  })

  io.out := 15.U 

  when(io.aluOp === 0.U) {
    io.out := 2.U // ALU performs addition
  }.otherwise {
    switch(io.f3) {
      is(0.U) {
        when(!io.aluSrc || io.f7 === 0.U) {
          io.out := 2.U // ADD
        }.elsewhen(io.f7 === "b0100000".U) {
          io.out := 3.U // SUB
        }.elsewhen(io.f7 === "b0000001".U) {
          io.out := 10.U // ADDW (32-bit)
        }.elsewhen(io.f7 === "b0100001".U) {
          io.out := 11.U // SUBW (32-bit)
        }
      }
      is(1.U) {
        when(io.f7 === 0.U) {
          io.out := 6.U // SLL
        }.elsewhen(io.f7 === "b0000001".U) {
          io.out := 12.U // SLLW (32-bit)
        }
      }
      is(2.U) {
        io.out := 4.U // SLT (signed less than)
      }
      is(3.U) {
        io.out := 5.U // SLTU (unsigned less than)
      }
      is(5.U) {
        when(io.f7 === 0.U) {
          io.out := 7.U // SRL (logical right shift)
        }.elsewhen(io.f7 === "b0100000".U) {
          io.out := 8.U // SRA (arithmetic right shift)
        }.elsewhen(io.f7 === "b0000001".U) {
          io.out := 13.U // SRLW (32-bit)
        }.elsewhen(io.f7 === "b0100001".U) {
          io.out := 14.U // SRAW (32-bit)
        }
      }
      is(7.U) {
        io.out := 0.U // AND
      }
      is(6.U) {
        io.out := 1.U // OR
      }
      is(4.U) { // XOR and XORI
        when(io.aluSrc && io.imm === -1.S.asUInt) {
          // If aluSrc is true and the immediate is -1, it's a NOT operation (XOR with -1)
          io.out := 9.U // NOT instruction
        }.elsewhen(io.aluSrc) {
          // If aluSrc is true but immediate is not -1, it's XORI
          io.out := 9.U // XOR immediate (XORI)
        }.otherwise {
          // Otherwise, it's a regular XOR operation
          io.out := 9.U // Regular XOR
        }
      }
    }
  }
}

// package nucleusrv.components
// import chisel3._
// import chisel3.util._

// class AluControl extends Module {
//   val io = IO(new Bundle {
//     val aluOp: UInt = Input(UInt(2.W))
//     val f7: UInt = Input(UInt(7.W)) // funct7 is 7 bits
//     val f3: UInt = Input(UInt(3.W)) // funct3 is 3 bits
//     val aluSrc: Bool = Input(Bool()) // Determines if the second operand is immediate or register
//     val imm: UInt = Input(UInt(32.W)) // Immediate value for xori
//     val out: UInt = Output(UInt(4.W))
//   })

//   io.out := 15.U // Default value for the ALU control output

//   when(io.aluOp === 0.U) {
//     io.out := 2.U // ALU performs addition
//   }.otherwise {
//     switch(io.f3) {
//       is(0.U) {
//         when(!io.aluSrc || io.f7 === 0.U) {
//           io.out := 2.U // ADD
//         }.elsewhen(io.f7 === "b0100000".U) {
//           io.out := 3.U // SUB
//         }.elsewhen(io.f7 === "b0000001".U) {
//           io.out := 10.U // ADDW (32-bit)
//         }.elsewhen(io.f7 === "b0100001".U) {
//           io.out := 11.U // SUBW (32-bit)
//         }
//       }
//       is(1.U) {
//         when(io.f7 === 0.U) {
//           io.out := 6.U // SLL
//         }.elsewhen(io.f7 === "b0000001".U) {
//           io.out := 12.U // SLLW (32-bit)
//         }
//       }
//       is(2.U) {
//         io.out := 4.U // SLT (signed less than)
//       }
//       is(3.U) {
//         io.out := 5.U // SLTU (unsigned less than)
//       }
//       is(4.U) {
//         io.out := 9.U // XOR (bitwise XOR)
//       }
//       is(5.U) {
//         when(io.f7 === 0.U) {
//           io.out := 7.U // SRL (logical right shift)
//         }.elsewhen(io.f7 === "b0100000".U) {
//           io.out := 8.U // SRA (arithmetic right shift)
//         }.elsewhen(io.f7 === "b0000001".U) {
//           io.out := 13.U // SRLW (32-bit)
//         }.elsewhen(io.f7 === "b0100001".U) {
//           io.out := 14.U // SRAW (32-bit)
//         }
//       }
//       // Implementing AND, OR, XOR, and special case for XORI and NOT
//       is(7.U) {
//         io.out := 0.U // AND
//       }
//       is(6.U) {
//         io.out := 1.U // OR
//       }
//       is(4.U) { // XOR and XORI
//         when(io.aluSrc) {
//           // If aluSrc is true, we assume immediate value is being used (XORI)
//           io.out := 9.U // XOR operation for immediate (XORI)
//         }.otherwise {
//           io.out := 9.U // Regular XOR
//         }
//         when(io.imm === -1.S.asUInt) { // Special case for NOT (XORI with -1)
//           io.out := 9.U // NOT is just XOR with all bits set to 1 (XORI with -1)
//         }
//       }
//     }
//   }
// }
