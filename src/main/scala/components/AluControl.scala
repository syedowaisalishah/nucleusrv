
// Copyright (C) 2020-2021 the original author or authors.
// See the LICENCE.txt file distributed with this work for additional
// information regarding copyright ownership.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

package nucleusrv.components
import chisel3._
import chisel3.util._

class AluControl extends Module {
  val io = IO(new Bundle {
    val aluOp: UInt = Input(UInt(2.W))
    val f7: UInt = Input(UInt(7.W)) // funct7 is 7 bits
    val f3: UInt = Input(UInt(3.W)) // funct3 is 3 bits
    val aluSrc: Bool = Input(Bool())
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
      is(4.U) {
        io.out := 9.U // XOR
      }
    }
  }
}