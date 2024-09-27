// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_init_sub__TOP__0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+368,"clock", false,-1);
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declBus(c+370,"io_pin", false,-1, 31,0);
    tracep->declBus(c+371,"io_fcsr", false,-1, 31,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+368,"clock", false,-1);
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declBus(c+370,"io_pin", false,-1, 31,0);
    tracep->declBus(c+371,"io_fcsr", false,-1, 31,0);
    tracep->declBit(c+368,"core_clock", false,-1);
    tracep->declBit(c+369,"core_reset", false,-1);
    tracep->declBus(c+295,"core_io_pin", false,-1, 31,0);
    tracep->declBit(c+1,"core_io_dmemReq_valid", false,-1);
    tracep->declBus(c+2,"core_io_dmemReq_bits_addrRequest", false,-1, 31,0);
    tracep->declQuad(c+3,"core_io_dmemReq_bits_dataRequest", false,-1, 63,0);
    tracep->declBus(c+5,"core_io_dmemReq_bits_activeByteLane", false,-1, 7,0);
    tracep->declBit(c+6,"core_io_dmemReq_bits_isWrite", false,-1);
    tracep->declBit(c+7,"core_io_dmemRsp_valid", false,-1);
    tracep->declQuad(c+315,"core_io_dmemRsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+372,"core_io_imemReq_valid", false,-1);
    tracep->declBus(c+325,"core_io_imemReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBit(c+8,"core_io_imemRsp_valid", false,-1);
    tracep->declQuad(c+317,"core_io_imemRsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBus(c+9,"core_io_rvfiUInt_0", false,-1, 31,0);
    tracep->declBus(c+10,"core_io_rvfiUInt_1", false,-1, 31,0);
    tracep->declBus(c+11,"core_io_rvfiUInt_2", false,-1, 31,0);
    tracep->declBus(c+12,"core_io_rvfiUInt_3", false,-1, 31,0);
    tracep->declBus(c+295,"core_io_rvfiSInt_0", false,-1, 31,0);
    tracep->declBus(c+13,"core_io_rvfiSInt_1", false,-1, 31,0);
    tracep->declBus(c+14,"core_io_rvfiSInt_2", false,-1, 31,0);
    tracep->declBus(c+326,"core_io_rvfiSInt_3", false,-1, 31,0);
    tracep->declBus(c+15,"core_io_rvfiSInt_4", false,-1, 31,0);
    tracep->declBit(c+16,"core_io_rvfiBool_0", false,-1);
    tracep->declBus(c+17,"core_io_rvfiRegAddr_0", false,-1, 4,0);
    tracep->declBus(c+18,"core_io_rvfiRegAddr_1", false,-1, 4,0);
    tracep->declBus(c+19,"core_io_rvfiRegAddr_2", false,-1, 4,0);
    tracep->declBus(c+20,"core_io_fcsr_o_data", false,-1, 31,0);
    tracep->declBit(c+368,"dmem_clock", false,-1);
    tracep->declBit(c+369,"dmem_reset", false,-1);
    tracep->declBit(c+1,"dmem_io_req_valid", false,-1);
    tracep->declBus(c+2,"dmem_io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declQuad(c+3,"dmem_io_req_bits_dataRequest", false,-1, 63,0);
    tracep->declBus(c+5,"dmem_io_req_bits_activeByteLane", false,-1, 7,0);
    tracep->declBit(c+6,"dmem_io_req_bits_isWrite", false,-1);
    tracep->declBit(c+7,"dmem_io_rsp_valid", false,-1);
    tracep->declQuad(c+315,"dmem_io_rsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+368,"imem_clock", false,-1);
    tracep->declBit(c+369,"imem_reset", false,-1);
    tracep->declBit(c+372,"imem_io_req_valid", false,-1);
    tracep->declBus(c+325,"imem_io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBit(c+8,"imem_io_rsp_valid", false,-1);
    tracep->declQuad(c+317,"imem_io_rsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+368,"tracer_clock", false,-1);
    tracep->declBit(c+369,"tracer_reset", false,-1);
    tracep->declBus(c+9,"tracer_io_rvfiUInt_0", false,-1, 31,0);
    tracep->declBus(c+10,"tracer_io_rvfiUInt_1", false,-1, 31,0);
    tracep->declBus(c+11,"tracer_io_rvfiUInt_2", false,-1, 31,0);
    tracep->declBus(c+12,"tracer_io_rvfiUInt_3", false,-1, 31,0);
    tracep->declQuad(c+296,"tracer_io_rvfiSInt_0", false,-1, 63,0);
    tracep->declQuad(c+21,"tracer_io_rvfiSInt_1", false,-1, 63,0);
    tracep->declQuad(c+23,"tracer_io_rvfiSInt_2", false,-1, 63,0);
    tracep->declQuad(c+327,"tracer_io_rvfiSInt_3", false,-1, 63,0);
    tracep->declQuad(c+25,"tracer_io_rvfiSInt_4", false,-1, 63,0);
    tracep->declBit(c+16,"tracer_io_rvfiBool_0", false,-1);
    tracep->declBus(c+17,"tracer_io_rvfiRegAddr_0", false,-1, 4,0);
    tracep->declBus(c+18,"tracer_io_rvfiRegAddr_1", false,-1, 4,0);
    tracep->declBus(c+19,"tracer_io_rvfiRegAddr_2", false,-1, 4,0);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+368,"clock", false,-1);
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declBus(c+295,"io_pin", false,-1, 31,0);
    tracep->declBit(c+1,"io_dmemReq_valid", false,-1);
    tracep->declBus(c+2,"io_dmemReq_bits_addrRequest", false,-1, 31,0);
    tracep->declQuad(c+3,"io_dmemReq_bits_dataRequest", false,-1, 63,0);
    tracep->declBus(c+5,"io_dmemReq_bits_activeByteLane", false,-1, 7,0);
    tracep->declBit(c+6,"io_dmemReq_bits_isWrite", false,-1);
    tracep->declBit(c+7,"io_dmemRsp_valid", false,-1);
    tracep->declQuad(c+315,"io_dmemRsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+372,"io_imemReq_valid", false,-1);
    tracep->declBus(c+325,"io_imemReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBit(c+8,"io_imemRsp_valid", false,-1);
    tracep->declQuad(c+317,"io_imemRsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBus(c+9,"io_rvfiUInt_0", false,-1, 31,0);
    tracep->declBus(c+10,"io_rvfiUInt_1", false,-1, 31,0);
    tracep->declBus(c+11,"io_rvfiUInt_2", false,-1, 31,0);
    tracep->declBus(c+12,"io_rvfiUInt_3", false,-1, 31,0);
    tracep->declBus(c+295,"io_rvfiSInt_0", false,-1, 31,0);
    tracep->declBus(c+13,"io_rvfiSInt_1", false,-1, 31,0);
    tracep->declBus(c+14,"io_rvfiSInt_2", false,-1, 31,0);
    tracep->declBus(c+326,"io_rvfiSInt_3", false,-1, 31,0);
    tracep->declBus(c+15,"io_rvfiSInt_4", false,-1, 31,0);
    tracep->declBit(c+16,"io_rvfiBool_0", false,-1);
    tracep->declBus(c+17,"io_rvfiRegAddr_0", false,-1, 4,0);
    tracep->declBus(c+18,"io_rvfiRegAddr_1", false,-1, 4,0);
    tracep->declBus(c+19,"io_rvfiRegAddr_2", false,-1, 4,0);
    tracep->declBus(c+20,"io_fcsr_o_data", false,-1, 31,0);
    tracep->declBit(c+369,"InstructionFetch_reset", false,-1);
    tracep->declBus(c+329,"InstructionFetch_io_address", false,-1, 31,0);
    tracep->declQuad(c+330,"InstructionFetch_io_instruction", false,-1, 63,0);
    tracep->declBit(c+372,"InstructionFetch_io_coreInstrReq_valid", false,-1);
    tracep->declBus(c+325,"InstructionFetch_io_coreInstrReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBit(c+8,"InstructionFetch_io_coreInstrResp_valid", false,-1);
    tracep->declQuad(c+317,"InstructionFetch_io_coreInstrResp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+368,"InstructionDecode_clock", false,-1);
    tracep->declBit(c+369,"InstructionDecode_reset", false,-1);
    tracep->declBus(c+27,"InstructionDecode_io_id_instruction", false,-1, 31,0);
    tracep->declQuad(c+332,"InstructionDecode_io_writeData", false,-1, 63,0);
    tracep->declBus(c+17,"InstructionDecode_io_writeReg", false,-1, 4,0);
    tracep->declBus(c+28,"InstructionDecode_io_pcAddress", false,-1, 31,0);
    tracep->declBit(c+29,"InstructionDecode_io_ctl_writeEnable", false,-1);
    tracep->declBit(c+30,"InstructionDecode_io_id_ex_mem_read", false,-1);
    tracep->declBit(c+31,"InstructionDecode_io_ex_mem_mem_read", false,-1);
    tracep->declBus(c+32,"InstructionDecode_io_id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+33,"InstructionDecode_io_ex_mem_rd", false,-1, 4,0);
    tracep->declBit(c+34,"InstructionDecode_io_id_ex_branch", false,-1);
    tracep->declBus(c+35,"InstructionDecode_io_ex_mem_ins", false,-1, 31,0);
    tracep->declBus(c+36,"InstructionDecode_io_mem_wb_ins", false,-1, 31,0);
    tracep->declBus(c+37,"InstructionDecode_io_ex_ins", false,-1, 31,0);
    tracep->declQuad(c+334,"InstructionDecode_io_ex_result", false,-1, 63,0);
    tracep->declQuad(c+38,"InstructionDecode_io_ex_mem_result", false,-1, 63,0);
    tracep->declQuad(c+332,"InstructionDecode_io_mem_wb_result", false,-1, 63,0);
    tracep->declBit(c+40,"InstructionDecode_io_id_ex_regWr", false,-1);
    tracep->declBit(c+41,"InstructionDecode_io_ex_mem_regWr", false,-1);
    tracep->declBit(c+42,"InstructionDecode_io_csr_Ex", false,-1);
    tracep->declBit(c+43,"InstructionDecode_io_csr_Mem", false,-1);
    tracep->declBit(c+44,"InstructionDecode_io_csr_Wb", false,-1);
    tracep->declBus(c+45,"InstructionDecode_io_csr_Ex_data", false,-1, 31,0);
    tracep->declBus(c+46,"InstructionDecode_io_csr_Mem_data", false,-1, 31,0);
    tracep->declBus(c+47,"InstructionDecode_io_csr_Wb_data", false,-1, 31,0);
    tracep->declQuad(c+315,"InstructionDecode_io_dmem_data", false,-1, 63,0);
    tracep->declQuad(c+48,"InstructionDecode_io_immediate", false,-1, 63,0);
    tracep->declBus(c+50,"InstructionDecode_io_writeRegAddress", false,-1, 4,0);
    tracep->declQuad(c+336,"InstructionDecode_io_readData1", false,-1, 63,0);
    tracep->declQuad(c+338,"InstructionDecode_io_readData2", false,-1, 63,0);
    tracep->declBus(c+51,"InstructionDecode_io_func7", false,-1, 6,0);
    tracep->declBus(c+52,"InstructionDecode_io_func3", false,-1, 2,0);
    tracep->declBit(c+53,"InstructionDecode_io_ctl_aluSrc", false,-1);
    tracep->declBus(c+54,"InstructionDecode_io_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+55,"InstructionDecode_io_ctl_regWrite", false,-1);
    tracep->declBit(c+56,"InstructionDecode_io_ctl_memRead", false,-1);
    tracep->declBit(c+57,"InstructionDecode_io_ctl_memWrite", false,-1);
    tracep->declBit(c+58,"InstructionDecode_io_ctl_branch", false,-1);
    tracep->declBus(c+59,"InstructionDecode_io_ctl_aluOp", false,-1, 1,0);
    tracep->declBus(c+60,"InstructionDecode_io_ctl_jump", false,-1, 1,0);
    tracep->declBus(c+61,"InstructionDecode_io_ctl_aluSrc1", false,-1, 1,0);
    tracep->declBit(c+62,"InstructionDecode_io_hdu_pcWrite", false,-1);
    tracep->declBit(c+62,"InstructionDecode_io_hdu_if_reg_write", false,-1);
    tracep->declBit(c+340,"InstructionDecode_io_pcSrc", false,-1);
    tracep->declBus(c+298,"InstructionDecode_io_pcPlusOffset", false,-1, 31,0);
    tracep->declBit(c+299,"InstructionDecode_io_ifid_flush", false,-1);
    tracep->declBus(c+63,"InstructionDecode_io_csr_o_data", false,-1, 31,0);
    tracep->declBit(c+64,"InstructionDecode_io_is_csr", false,-1);
    tracep->declBus(c+20,"InstructionDecode_io_fscr_o_data", false,-1, 31,0);
    tracep->declBus(c+65,"InstructionDecode_io_rs_addr_0", false,-1, 4,0);
    tracep->declBus(c+66,"InstructionDecode_io_rs_addr_1", false,-1, 4,0);
    tracep->declQuad(c+67,"Execute_io_immediate", false,-1, 63,0);
    tracep->declQuad(c+69,"Execute_io_readData1", false,-1, 63,0);
    tracep->declQuad(c+71,"Execute_io_readData2", false,-1, 63,0);
    tracep->declBus(c+73,"Execute_io_pcAddress", false,-1, 31,0);
    tracep->declBus(c+74,"Execute_io_func7", false,-1, 6,0);
    tracep->declBus(c+75,"Execute_io_func3", false,-1, 2,0);
    tracep->declQuad(c+38,"Execute_io_mem_result", false,-1, 63,0);
    tracep->declQuad(c+332,"Execute_io_wb_result", false,-1, 63,0);
    tracep->declBit(c+41,"Execute_io_ex_mem_regWrite", false,-1);
    tracep->declBit(c+29,"Execute_io_mem_wb_regWrite", false,-1);
    tracep->declBus(c+37,"Execute_io_id_ex_ins", false,-1, 31,0);
    tracep->declBus(c+35,"Execute_io_ex_mem_ins", false,-1, 31,0);
    tracep->declBus(c+36,"Execute_io_mem_wb_ins", false,-1, 31,0);
    tracep->declBit(c+76,"Execute_io_ctl_aluSrc", false,-1);
    tracep->declBus(c+77,"Execute_io_ctl_aluOp", false,-1, 1,0);
    tracep->declBus(c+78,"Execute_io_ctl_aluSrc1", false,-1, 1,0);
    tracep->declQuad(c+300,"Execute_io_writeData", false,-1, 63,0);
    tracep->declQuad(c+334,"Execute_io_ALUresult", false,-1, 63,0);
    tracep->declBit(c+368,"MEM_clock", false,-1);
    tracep->declBit(c+369,"MEM_reset", false,-1);
    tracep->declQuad(c+38,"MEM_io_aluResultIn", false,-1, 63,0);
    tracep->declQuad(c+79,"MEM_io_writeData", false,-1, 63,0);
    tracep->declBit(c+6,"MEM_io_writeEnable", false,-1);
    tracep->declBit(c+31,"MEM_io_readEnable", false,-1);
    tracep->declQuad(c+341,"MEM_io_readData", false,-1, 63,0);
    tracep->declBus(c+81,"MEM_io_f3", false,-1, 2,0);
    tracep->declBit(c+1,"MEM_io_dccmReq_valid", false,-1);
    tracep->declBus(c+2,"MEM_io_dccmReq_bits_addrRequest", false,-1, 31,0);
    tracep->declQuad(c+3,"MEM_io_dccmReq_bits_dataRequest", false,-1, 63,0);
    tracep->declBus(c+5,"MEM_io_dccmReq_bits_activeByteLane", false,-1, 7,0);
    tracep->declBit(c+6,"MEM_io_dccmReq_bits_isWrite", false,-1);
    tracep->declBit(c+7,"MEM_io_dccmRsp_valid", false,-1);
    tracep->declQuad(c+315,"MEM_io_dccmRsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+368,"pc_clock", false,-1);
    tracep->declBit(c+369,"pc_reset", false,-1);
    tracep->declBus(c+343,"pc_io_in", false,-1, 31,0);
    tracep->declBus(c+82,"pc_io_out", false,-1, 31,0);
    tracep->declBus(c+83,"pc_io_pc4", false,-1, 31,0);
    tracep->declBus(c+84,"pc_io_pc2", false,-1, 31,0);
    tracep->declBit(c+368,"Realigner_clock", false,-1);
    tracep->declBit(c+369,"Realigner_reset", false,-1);
    tracep->declBus(c+343,"Realigner_io_ral_address_i", false,-1, 31,0);
    tracep->declBus(c+344,"Realigner_io_ral_instruction_i", false,-1, 31,0);
    tracep->declBit(c+340,"Realigner_io_ral_jmp", false,-1);
    tracep->declBus(c+329,"Realigner_io_ral_address_o", false,-1, 31,0);
    tracep->declBus(c+345,"Realigner_io_ral_instruction_o", false,-1, 31,0);
    tracep->declBus(c+345,"CompressedDecoder_io_instruction_i", false,-1, 31,0);
    tracep->declBit(c+346,"CompressedDecoder_io_is_comp", false,-1);
    tracep->declBus(c+347,"CompressedDecoder_io_instruction_o", false,-1, 31,0);
    tracep->declBus(c+28,"if_reg_pc", false,-1, 31,0);
    tracep->declBus(c+27,"if_reg_ins", false,-1, 31,0);
    tracep->declBus(c+73,"id_reg_pc", false,-1, 31,0);
    tracep->declQuad(c+69,"id_reg_rd1", false,-1, 63,0);
    tracep->declQuad(c+71,"id_reg_rd2", false,-1, 63,0);
    tracep->declQuad(c+67,"id_reg_imm", false,-1, 63,0);
    tracep->declBus(c+85,"id_reg_wra", false,-1, 4,0);
    tracep->declBus(c+74,"id_reg_f7", false,-1, 6,0);
    tracep->declBus(c+75,"id_reg_f3", false,-1, 2,0);
    tracep->declBus(c+37,"id_reg_ins", false,-1, 31,0);
    tracep->declBit(c+76,"id_reg_ctl_aluSrc", false,-1);
    tracep->declBus(c+78,"id_reg_ctl_aluSrc1", false,-1, 1,0);
    tracep->declBus(c+86,"id_reg_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+40,"id_reg_ctl_regWrite", false,-1);
    tracep->declBit(c+30,"id_reg_ctl_memRead", false,-1);
    tracep->declBit(c+87,"id_reg_ctl_memWrite", false,-1);
    tracep->declBus(c+77,"id_reg_ctl_aluOp", false,-1, 1,0);
    tracep->declBit(c+42,"id_reg_is_csr", false,-1);
    tracep->declBus(c+45,"id_reg_csr_data", false,-1, 31,0);
    tracep->declQuad(c+38,"ex_reg_result", false,-1, 63,0);
    tracep->declQuad(c+79,"ex_reg_wd", false,-1, 63,0);
    tracep->declBus(c+88,"ex_reg_wra", false,-1, 4,0);
    tracep->declBus(c+35,"ex_reg_ins", false,-1, 31,0);
    tracep->declBus(c+89,"ex_reg_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+41,"ex_reg_ctl_regWrite", false,-1);
    tracep->declBit(c+31,"ex_reg_ctl_memRead", false,-1);
    tracep->declBit(c+6,"ex_reg_ctl_memWrite", false,-1);
    tracep->declBus(c+90,"ex_reg_pc", false,-1, 31,0);
    tracep->declBit(c+43,"ex_reg_is_csr", false,-1);
    tracep->declBus(c+46,"ex_reg_csr_data", false,-1, 31,0);
    tracep->declBus(c+36,"mem_reg_ins", false,-1, 31,0);
    tracep->declQuad(c+91,"mem_reg_result", false,-1, 63,0);
    tracep->declBus(c+17,"mem_reg_wra", false,-1, 4,0);
    tracep->declBus(c+93,"mem_reg_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+29,"mem_reg_ctl_regWrite", false,-1);
    tracep->declBus(c+9,"mem_reg_pc", false,-1, 31,0);
    tracep->declBit(c+44,"mem_reg_is_csr", false,-1);
    tracep->declBus(c+47,"mem_reg_csr_data", false,-1, 31,0);
    tracep->declBus(c+347,"instruction", false,-1, 31,0);
    tracep->declBit(c+346,"is_comp", false,-1);
    tracep->declQuad(c+302,"wb_data", false,-1, 63,0);
    tracep->declBus(c+94,"npcDelay_0", false,-1, 31,0);
    tracep->declBus(c+95,"npcDelay_1", false,-1, 31,0);
    tracep->declBus(c+96,"npcDelay_2", false,-1, 31,0);
    tracep->declBus(c+10,"npcDelay_3", false,-1, 31,0);
    tracep->declBus(c+97,"rsAddrDelay_0_0", false,-1, 4,0);
    tracep->declBus(c+98,"rsAddrDelay_0_1", false,-1, 4,0);
    tracep->declBus(c+18,"rsAddrDelay_0_2", false,-1, 4,0);
    tracep->declBus(c+99,"rsAddrDelay_1_0", false,-1, 4,0);
    tracep->declBus(c+100,"rsAddrDelay_1_1", false,-1, 4,0);
    tracep->declBus(c+19,"rsAddrDelay_1_2", false,-1, 4,0);
    tracep->declBus(c+101,"rsDataDelay_0_0", false,-1, 31,0);
    tracep->declBus(c+13,"rsDataDelay_0_1", false,-1, 31,0);
    tracep->declBus(c+102,"rsDataDelay_1_0", false,-1, 31,0);
    tracep->declBus(c+14,"rsDataDelay_1_1", false,-1, 31,0);
    tracep->declBus(c+12,"memAddrDelay", false,-1, 31,0);
    tracep->declBus(c+15,"memWdataDelay", false,-1, 31,0);
    tracep->declBit(c+103,"stallDelay_0", false,-1);
    tracep->declBit(c+104,"stallDelay_1", false,-1);
    tracep->declBit(c+105,"stallDelay_2", false,-1);
    tracep->declBit(c+16,"stallDelay_3", false,-1);
    tracep->declBus(c+106,"insDelay_0", false,-1, 31,0);
    tracep->declBus(c+107,"insDelay_1", false,-1, 31,0);
    tracep->declBus(c+108,"insDelay_2", false,-1, 31,0);
    tracep->declBus(c+11,"insDelay_3", false,-1, 31,0);
    tracep->declQuad(c+330,"c_ins_trace", false,-1, 63,0);
    tracep->pushNamePrefix("CompressedDecoder ");
    tracep->declBus(c+345,"io_instruction_i", false,-1, 31,0);
    tracep->declBit(c+346,"io_is_comp", false,-1);
    tracep->declBus(c+347,"io_instruction_o", false,-1, 31,0);
    tracep->declBus(c+348,"io_instruction_o_lo_2", false,-1, 17,0);
    tracep->declBus(c+349,"io_instruction_o_lo_4", false,-1, 24,0);
    tracep->declBus(c+350,"io_instruction_o_lo_16", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Execute ");
    tracep->declQuad(c+67,"io_immediate", false,-1, 63,0);
    tracep->declQuad(c+69,"io_readData1", false,-1, 63,0);
    tracep->declQuad(c+71,"io_readData2", false,-1, 63,0);
    tracep->declBus(c+73,"io_pcAddress", false,-1, 31,0);
    tracep->declBus(c+74,"io_func7", false,-1, 6,0);
    tracep->declBus(c+75,"io_func3", false,-1, 2,0);
    tracep->declQuad(c+38,"io_mem_result", false,-1, 63,0);
    tracep->declQuad(c+332,"io_wb_result", false,-1, 63,0);
    tracep->declBit(c+41,"io_ex_mem_regWrite", false,-1);
    tracep->declBit(c+29,"io_mem_wb_regWrite", false,-1);
    tracep->declBus(c+37,"io_id_ex_ins", false,-1, 31,0);
    tracep->declBus(c+35,"io_ex_mem_ins", false,-1, 31,0);
    tracep->declBus(c+36,"io_mem_wb_ins", false,-1, 31,0);
    tracep->declBit(c+76,"io_ctl_aluSrc", false,-1);
    tracep->declBus(c+77,"io_ctl_aluOp", false,-1, 1,0);
    tracep->declBus(c+78,"io_ctl_aluSrc1", false,-1, 1,0);
    tracep->declQuad(c+300,"io_writeData", false,-1, 63,0);
    tracep->declQuad(c+334,"io_ALUresult", false,-1, 63,0);
    tracep->declQuad(c+351,"alu_io_input1", false,-1, 63,0);
    tracep->declQuad(c+353,"alu_io_input2", false,-1, 63,0);
    tracep->declBus(c+109,"alu_io_aluCtl", false,-1, 3,0);
    tracep->declQuad(c+334,"alu_io_result", false,-1, 63,0);
    tracep->declBus(c+77,"aluCtl_io_aluOp", false,-1, 1,0);
    tracep->declBus(c+110,"aluCtl_io_f7", false,-1, 6,0);
    tracep->declBus(c+75,"aluCtl_io_f3", false,-1, 2,0);
    tracep->declBit(c+76,"aluCtl_io_aluSrc", false,-1);
    tracep->declBus(c+109,"aluCtl_io_out", false,-1, 3,0);
    tracep->declBus(c+33,"ForwardingUnit_io_ex_reg_rd", false,-1, 4,0);
    tracep->declBus(c+111,"ForwardingUnit_io_mem_reg_rd", false,-1, 4,0);
    tracep->declBus(c+112,"ForwardingUnit_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+113,"ForwardingUnit_io_reg_rs2", false,-1, 4,0);
    tracep->declBit(c+41,"ForwardingUnit_io_ex_regWrite", false,-1);
    tracep->declBit(c+29,"ForwardingUnit_io_mem_regWrite", false,-1);
    tracep->declBus(c+114,"ForwardingUnit_io_forwardA", false,-1, 1,0);
    tracep->declBus(c+115,"ForwardingUnit_io_forwardB", false,-1, 1,0);
    tracep->declQuad(c+304,"inputMux1", false,-1, 63,0);
    tracep->declQuad(c+300,"inputMux2", false,-1, 63,0);
    tracep->pushNamePrefix("ForwardingUnit ");
    tracep->declBus(c+33,"io_ex_reg_rd", false,-1, 4,0);
    tracep->declBus(c+111,"io_mem_reg_rd", false,-1, 4,0);
    tracep->declBus(c+112,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+113,"io_reg_rs2", false,-1, 4,0);
    tracep->declBit(c+41,"io_ex_regWrite", false,-1);
    tracep->declBit(c+29,"io_mem_regWrite", false,-1);
    tracep->declBus(c+114,"io_forwardA", false,-1, 1,0);
    tracep->declBus(c+115,"io_forwardB", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declQuad(c+351,"io_input1", false,-1, 63,0);
    tracep->declQuad(c+353,"io_input2", false,-1, 63,0);
    tracep->declBus(c+109,"io_aluCtl", false,-1, 3,0);
    tracep->declQuad(c+334,"io_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluCtl ");
    tracep->declBus(c+77,"io_aluOp", false,-1, 1,0);
    tracep->declBus(c+110,"io_f7", false,-1, 6,0);
    tracep->declBus(c+75,"io_f3", false,-1, 2,0);
    tracep->declBit(c+76,"io_aluSrc", false,-1);
    tracep->declBus(c+109,"io_out", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("InstructionDecode ");
    tracep->declBit(c+368,"clock", false,-1);
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declBus(c+27,"io_id_instruction", false,-1, 31,0);
    tracep->declQuad(c+332,"io_writeData", false,-1, 63,0);
    tracep->declBus(c+17,"io_writeReg", false,-1, 4,0);
    tracep->declBus(c+28,"io_pcAddress", false,-1, 31,0);
    tracep->declBit(c+29,"io_ctl_writeEnable", false,-1);
    tracep->declBit(c+30,"io_id_ex_mem_read", false,-1);
    tracep->declBit(c+31,"io_ex_mem_mem_read", false,-1);
    tracep->declBus(c+32,"io_id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+33,"io_ex_mem_rd", false,-1, 4,0);
    tracep->declBit(c+34,"io_id_ex_branch", false,-1);
    tracep->declBus(c+35,"io_ex_mem_ins", false,-1, 31,0);
    tracep->declBus(c+36,"io_mem_wb_ins", false,-1, 31,0);
    tracep->declBus(c+37,"io_ex_ins", false,-1, 31,0);
    tracep->declQuad(c+334,"io_ex_result", false,-1, 63,0);
    tracep->declQuad(c+38,"io_ex_mem_result", false,-1, 63,0);
    tracep->declQuad(c+332,"io_mem_wb_result", false,-1, 63,0);
    tracep->declBit(c+40,"io_id_ex_regWr", false,-1);
    tracep->declBit(c+41,"io_ex_mem_regWr", false,-1);
    tracep->declBit(c+42,"io_csr_Ex", false,-1);
    tracep->declBit(c+43,"io_csr_Mem", false,-1);
    tracep->declBit(c+44,"io_csr_Wb", false,-1);
    tracep->declBus(c+45,"io_csr_Ex_data", false,-1, 31,0);
    tracep->declBus(c+46,"io_csr_Mem_data", false,-1, 31,0);
    tracep->declBus(c+47,"io_csr_Wb_data", false,-1, 31,0);
    tracep->declQuad(c+315,"io_dmem_data", false,-1, 63,0);
    tracep->declQuad(c+48,"io_immediate", false,-1, 63,0);
    tracep->declBus(c+50,"io_writeRegAddress", false,-1, 4,0);
    tracep->declQuad(c+336,"io_readData1", false,-1, 63,0);
    tracep->declQuad(c+338,"io_readData2", false,-1, 63,0);
    tracep->declBus(c+51,"io_func7", false,-1, 6,0);
    tracep->declBus(c+52,"io_func3", false,-1, 2,0);
    tracep->declBit(c+53,"io_ctl_aluSrc", false,-1);
    tracep->declBus(c+54,"io_ctl_memToReg", false,-1, 1,0);
    tracep->declBit(c+55,"io_ctl_regWrite", false,-1);
    tracep->declBit(c+56,"io_ctl_memRead", false,-1);
    tracep->declBit(c+57,"io_ctl_memWrite", false,-1);
    tracep->declBit(c+58,"io_ctl_branch", false,-1);
    tracep->declBus(c+59,"io_ctl_aluOp", false,-1, 1,0);
    tracep->declBus(c+60,"io_ctl_jump", false,-1, 1,0);
    tracep->declBus(c+61,"io_ctl_aluSrc1", false,-1, 1,0);
    tracep->declBit(c+62,"io_hdu_pcWrite", false,-1);
    tracep->declBit(c+62,"io_hdu_if_reg_write", false,-1);
    tracep->declBit(c+340,"io_pcSrc", false,-1);
    tracep->declBus(c+298,"io_pcPlusOffset", false,-1, 31,0);
    tracep->declBit(c+299,"io_ifid_flush", false,-1);
    tracep->declBus(c+63,"io_csr_o_data", false,-1, 31,0);
    tracep->declBit(c+64,"io_is_csr", false,-1);
    tracep->declBus(c+20,"io_fscr_o_data", false,-1, 31,0);
    tracep->declBus(c+65,"io_rs_addr_0", false,-1, 4,0);
    tracep->declBus(c+66,"io_rs_addr_1", false,-1, 4,0);
    tracep->declBit(c+368,"csr_clock", false,-1);
    tracep->declBit(c+369,"csr_reset", false,-1);
    tracep->declBus(c+373,"csr_io_i_data", false,-1, 31,0);
    tracep->declBus(c+65,"csr_io_i_imm", false,-1, 4,0);
    tracep->declBus(c+63,"csr_io_o_data", false,-1, 31,0);
    tracep->declBus(c+52,"csr_io_i_opr", false,-1, 2,0);
    tracep->declBus(c+116,"csr_io_i_addr", false,-1, 11,0);
    tracep->declBit(c+117,"csr_io_i_w_en", false,-1);
    tracep->declBus(c+20,"csr_io_fcsr_o_data", false,-1, 31,0);
    tracep->declBit(c+40,"csrController_io_regWrExecute", false,-1);
    tracep->declBus(c+32,"csrController_io_rdSelExecute", false,-1, 4,0);
    tracep->declBit(c+42,"csrController_io_csrWrExecute", false,-1);
    tracep->declBit(c+41,"csrController_io_regWrMemory", false,-1);
    tracep->declBus(c+33,"csrController_io_rdSelMemory", false,-1, 4,0);
    tracep->declBit(c+43,"csrController_io_csrWrMemory", false,-1);
    tracep->declBit(c+29,"csrController_io_regWrWriteback", false,-1);
    tracep->declBus(c+17,"csrController_io_rdSelWriteback", false,-1, 4,0);
    tracep->declBit(c+44,"csrController_io_csrWrWriteback", false,-1);
    tracep->declBus(c+65,"csrController_io_rs1SelDecode", false,-1, 4,0);
    tracep->declBit(c+64,"csrController_io_csrInstDecode", false,-1);
    tracep->declBus(c+118,"csrController_io_forwardRS1", false,-1, 2,0);
    tracep->declBit(c+30,"hdu_io_id_ex_memRead", false,-1);
    tracep->declBit(c+31,"hdu_io_ex_mem_memRead", false,-1);
    tracep->declBit(c+34,"hdu_io_id_ex_branch", false,-1);
    tracep->declBus(c+32,"hdu_io_id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+33,"hdu_io_ex_mem_rd", false,-1, 4,0);
    tracep->declBus(c+65,"hdu_io_id_rs1", false,-1, 4,0);
    tracep->declBus(c+66,"hdu_io_id_rs2", false,-1, 4,0);
    tracep->declBit(c+355,"hdu_io_taken", false,-1);
    tracep->declBus(c+60,"hdu_io_jump", false,-1, 1,0);
    tracep->declBit(c+58,"hdu_io_branch", false,-1);
    tracep->declBit(c+62,"hdu_io_if_reg_write", false,-1);
    tracep->declBit(c+62,"hdu_io_pc_write", false,-1);
    tracep->declBit(c+62,"hdu_io_ctl_mux", false,-1);
    tracep->declBit(c+299,"hdu_io_ifid_flush", false,-1);
    tracep->declBit(c+119,"hdu_io_take_branch", false,-1);
    tracep->declBus(c+27,"control_io_in", false,-1, 31,0);
    tracep->declBit(c+53,"control_io_aluSrc", false,-1);
    tracep->declBus(c+54,"control_io_memToReg", false,-1, 1,0);
    tracep->declBit(c+120,"control_io_regWrite", false,-1);
    tracep->declBit(c+56,"control_io_memRead", false,-1);
    tracep->declBit(c+121,"control_io_memWrite", false,-1);
    tracep->declBit(c+58,"control_io_branch", false,-1);
    tracep->declBus(c+59,"control_io_aluOp", false,-1, 1,0);
    tracep->declBus(c+60,"control_io_jump", false,-1, 1,0);
    tracep->declBus(c+61,"control_io_aluSrc1", false,-1, 1,0);
    tracep->declBit(c+368,"registers_clock", false,-1);
    tracep->declBit(c+369,"registers_reset", false,-1);
    tracep->declBus(c+65,"registers_io_readAddress_0", false,-1, 4,0);
    tracep->declBus(c+66,"registers_io_readAddress_1", false,-1, 4,0);
    tracep->declBit(c+122,"registers_io_writeEnable", false,-1);
    tracep->declBus(c+17,"registers_io_writeAddress", false,-1, 4,0);
    tracep->declQuad(c+356,"registers_io_writeData", false,-1, 63,0);
    tracep->declQuad(c+123,"registers_io_readData_0", false,-1, 63,0);
    tracep->declQuad(c+125,"registers_io_readData_1", false,-1, 63,0);
    tracep->declBus(c+27,"immediate_io_instruction", false,-1, 31,0);
    tracep->declQuad(c+48,"immediate_io_out", false,-1, 63,0);
    tracep->declBit(c+58,"bu_io_branch", false,-1);
    tracep->declBus(c+52,"bu_io_funct3", false,-1, 2,0);
    tracep->declQuad(c+358,"bu_io_rd1", false,-1, 63,0);
    tracep->declQuad(c+360,"bu_io_rd2", false,-1, 63,0);
    tracep->declBit(c+119,"bu_io_take_branch", false,-1);
    tracep->declBit(c+355,"bu_io_taken", false,-1);
    tracep->declQuad(c+306,"input1", false,-1, 63,0);
    tracep->declQuad(c+308,"j_offset", false,-1, 63,0);
    tracep->pushNamePrefix("bu ");
    tracep->declBit(c+58,"io_branch", false,-1);
    tracep->declBus(c+52,"io_funct3", false,-1, 2,0);
    tracep->declQuad(c+358,"io_rd1", false,-1, 63,0);
    tracep->declQuad(c+360,"io_rd2", false,-1, 63,0);
    tracep->declBit(c+119,"io_take_branch", false,-1);
    tracep->declBit(c+355,"io_taken", false,-1);
    tracep->declBit(c+310,"check", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+27,"io_in", false,-1, 31,0);
    tracep->declBit(c+53,"io_aluSrc", false,-1);
    tracep->declBus(c+54,"io_memToReg", false,-1, 1,0);
    tracep->declBit(c+120,"io_regWrite", false,-1);
    tracep->declBit(c+56,"io_memRead", false,-1);
    tracep->declBit(c+121,"io_memWrite", false,-1);
    tracep->declBit(c+58,"io_branch", false,-1);
    tracep->declBus(c+59,"io_aluOp", false,-1, 1,0);
    tracep->declBus(c+60,"io_jump", false,-1, 1,0);
    tracep->declBus(c+61,"io_aluSrc1", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+368,"clock", false,-1);
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declBus(c+373,"io_i_data", false,-1, 31,0);
    tracep->declBus(c+65,"io_i_imm", false,-1, 4,0);
    tracep->declBus(c+63,"io_o_data", false,-1, 31,0);
    tracep->declBus(c+52,"io_i_opr", false,-1, 2,0);
    tracep->declBus(c+116,"io_i_addr", false,-1, 11,0);
    tracep->declBit(c+117,"io_i_w_en", false,-1);
    tracep->declBus(c+20,"io_fcsr_o_data", false,-1, 31,0);
    tracep->declBit(c+368,"csrRegFile_clock", false,-1);
    tracep->declBit(c+369,"csrRegFile_reset", false,-1);
    tracep->declBus(c+374,"csrRegFile_io_MISA_i_value", false,-1, 31,0);
    tracep->declBus(c+374,"csrRegFile_io_MHARTID_i_value", false,-1, 31,0);
    tracep->declBus(c+127,"csrRegFile_io_CSR_i_opr", false,-1, 1,0);
    tracep->declBus(c+63,"csrRegFile_io_CSR_o_data", false,-1, 31,0);
    tracep->declBus(c+362,"csrRegFile_io_CSR_i_data", false,-1, 31,0);
    tracep->declBus(c+116,"csrRegFile_io_CSR_i_addr", false,-1, 11,0);
    tracep->declBit(c+117,"csrRegFile_io_CSR_i_w_en", false,-1);
    tracep->declBit(c+128,"csrRegFile_io_FCSR_nx", false,-1);
    tracep->declBit(c+129,"csrRegFile_io_FCSR_uf", false,-1);
    tracep->declBit(c+130,"csrRegFile_io_FCSR_of", false,-1);
    tracep->declBit(c+131,"csrRegFile_io_FCSR_dz", false,-1);
    tracep->declBit(c+132,"csrRegFile_io_FCSR_nv", false,-1);
    tracep->declBus(c+133,"csrRegFile_io_FCSR_frm", false,-1, 2,0);
    tracep->declBus(c+134,"io_fcsr_o_data_lo", false,-1, 2,0);
    tracep->declBus(c+135,"io_fcsr_o_data_hi", false,-1, 28,0);
    tracep->pushNamePrefix("csrRegFile ");
    tracep->declBit(c+368,"clock", false,-1);
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declBus(c+374,"io_MISA_i_value", false,-1, 31,0);
    tracep->declBus(c+374,"io_MHARTID_i_value", false,-1, 31,0);
    tracep->declBus(c+127,"io_CSR_i_opr", false,-1, 1,0);
    tracep->declBus(c+63,"io_CSR_o_data", false,-1, 31,0);
    tracep->declBus(c+362,"io_CSR_i_data", false,-1, 31,0);
    tracep->declBus(c+116,"io_CSR_i_addr", false,-1, 11,0);
    tracep->declBit(c+117,"io_CSR_i_w_en", false,-1);
    tracep->declBit(c+128,"io_FCSR_nx", false,-1);
    tracep->declBit(c+129,"io_FCSR_uf", false,-1);
    tracep->declBit(c+130,"io_FCSR_of", false,-1);
    tracep->declBit(c+131,"io_FCSR_dz", false,-1);
    tracep->declBit(c+132,"io_FCSR_nv", false,-1);
    tracep->declBus(c+133,"io_FCSR_frm", false,-1, 2,0);
    tracep->declBus(c+136,"MISA_REG", false,-1, 31,0);
    tracep->declBus(c+136,"MHARTID_REG", false,-1, 31,0);
    tracep->declBus(c+137,"MCAUSE_REG", false,-1, 31,0);
    tracep->declBus(c+138,"MTVEC_REG", false,-1, 31,0);
    tracep->declBus(c+139,"MEPC_REG", false,-1, 31,0);
    tracep->declBus(c+140,"MIE_REG", false,-1, 31,0);
    tracep->declBit(c+141,"MSTATUS_TW_REG", false,-1);
    tracep->declBit(c+142,"MSTATUS_MPRV_REG", false,-1);
    tracep->declBus(c+143,"MSTATUS_MPP_REG", false,-1, 1,0);
    tracep->declBit(c+144,"MSTATUS_MPIE_REG", false,-1);
    tracep->declBit(c+145,"MSTATUS_MIE_REG", false,-1);
    tracep->declBit(c+128,"FCSR_NX_REG", false,-1);
    tracep->declBit(c+129,"FCSR_UF_REG", false,-1);
    tracep->declBit(c+130,"FCSR_OF_REG", false,-1);
    tracep->declBit(c+131,"FCSR_DZ_REG", false,-1);
    tracep->declBit(c+132,"FCSR_NV_REG", false,-1);
    tracep->declBus(c+133,"FCSR_FRM_REG", false,-1, 2,0);
    tracep->declBus(c+146,"MSTATUS_WIRE_lo", false,-1, 10,0);
    tracep->declBus(c+147,"MSTATUS_WIRE", false,-1, 31,0);
    tracep->declBus(c+148,"FFLAGS_WIRE", false,-1, 31,0);
    tracep->declBus(c+149,"FRM_WIRE", false,-1, 31,0);
    tracep->declBus(c+150,"FCSR_WIRE", false,-1, 31,0);
    tracep->declBus(c+151,"r_data", false,-1, 31,0);
    tracep->declBus(c+311,"set_data", false,-1, 31,0);
    tracep->declBus(c+312,"clear_data", false,-1, 31,0);
    tracep->declBus(c+363,"w_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csrController ");
    tracep->declBit(c+40,"io_regWrExecute", false,-1);
    tracep->declBus(c+32,"io_rdSelExecute", false,-1, 4,0);
    tracep->declBit(c+42,"io_csrWrExecute", false,-1);
    tracep->declBit(c+41,"io_regWrMemory", false,-1);
    tracep->declBus(c+33,"io_rdSelMemory", false,-1, 4,0);
    tracep->declBit(c+43,"io_csrWrMemory", false,-1);
    tracep->declBit(c+29,"io_regWrWriteback", false,-1);
    tracep->declBus(c+17,"io_rdSelWriteback", false,-1, 4,0);
    tracep->declBit(c+44,"io_csrWrWriteback", false,-1);
    tracep->declBus(c+65,"io_rs1SelDecode", false,-1, 4,0);
    tracep->declBit(c+64,"io_csrInstDecode", false,-1);
    tracep->declBus(c+118,"io_forwardRS1", false,-1, 2,0);
    tracep->declBit(c+152,"hazard_DecEx", false,-1);
    tracep->declBit(c+153,"hazard_DecMem", false,-1);
    tracep->declBit(c+154,"hazard_DecWb", false,-1);
    tracep->declBit(c+155,"csrHazard_DecEx", false,-1);
    tracep->declBit(c+156,"csrHazard_DecMem", false,-1);
    tracep->declBit(c+157,"csrHazard_DecWb", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hdu ");
    tracep->declBit(c+30,"io_id_ex_memRead", false,-1);
    tracep->declBit(c+31,"io_ex_mem_memRead", false,-1);
    tracep->declBit(c+34,"io_id_ex_branch", false,-1);
    tracep->declBus(c+32,"io_id_ex_rd", false,-1, 4,0);
    tracep->declBus(c+33,"io_ex_mem_rd", false,-1, 4,0);
    tracep->declBus(c+65,"io_id_rs1", false,-1, 4,0);
    tracep->declBus(c+66,"io_id_rs2", false,-1, 4,0);
    tracep->declBit(c+355,"io_taken", false,-1);
    tracep->declBus(c+60,"io_jump", false,-1, 1,0);
    tracep->declBit(c+58,"io_branch", false,-1);
    tracep->declBit(c+62,"io_if_reg_write", false,-1);
    tracep->declBit(c+62,"io_pc_write", false,-1);
    tracep->declBit(c+62,"io_ctl_mux", false,-1);
    tracep->declBit(c+299,"io_ifid_flush", false,-1);
    tracep->declBit(c+119,"io_take_branch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immediate ");
    tracep->declBus(c+27,"io_instruction", false,-1, 31,0);
    tracep->declQuad(c+48,"io_out", false,-1, 63,0);
    tracep->declBus(c+158,"opcode", false,-1, 6,0);
    tracep->declBus(c+116,"imm_i", false,-1, 11,0);
    tracep->declQuad(c+159,"ext_i", false,-1, 63,0);
    tracep->declBus(c+161,"imm_u", false,-1, 19,0);
    tracep->declQuad(c+162,"ext_u", false,-1, 63,0);
    tracep->declBus(c+164,"imm_s", false,-1, 11,0);
    tracep->declQuad(c+165,"ext_s", false,-1, 63,0);
    tracep->declBus(c+167,"imm_sb", false,-1, 11,0);
    tracep->declQuad(c+168,"ext_sb", false,-1, 57,0);
    tracep->declBus(c+170,"imm_uj", false,-1, 19,0);
    tracep->declQuad(c+171,"ext_uj", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("registers ");
    tracep->declBit(c+368,"clock", false,-1);
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declBus(c+65,"io_readAddress_0", false,-1, 4,0);
    tracep->declBus(c+66,"io_readAddress_1", false,-1, 4,0);
    tracep->declBit(c+122,"io_writeEnable", false,-1);
    tracep->declBus(c+17,"io_writeAddress", false,-1, 4,0);
    tracep->declQuad(c+356,"io_writeData", false,-1, 63,0);
    tracep->declQuad(c+123,"io_readData_0", false,-1, 63,0);
    tracep->declQuad(c+125,"io_readData_1", false,-1, 63,0);
    tracep->declQuad(c+173,"reg_0", false,-1, 63,0);
    tracep->declQuad(c+175,"reg_1", false,-1, 63,0);
    tracep->declQuad(c+177,"reg_2", false,-1, 63,0);
    tracep->declQuad(c+179,"reg_3", false,-1, 63,0);
    tracep->declQuad(c+181,"reg_4", false,-1, 63,0);
    tracep->declQuad(c+183,"reg_5", false,-1, 63,0);
    tracep->declQuad(c+185,"reg_6", false,-1, 63,0);
    tracep->declQuad(c+187,"reg_7", false,-1, 63,0);
    tracep->declQuad(c+189,"reg_8", false,-1, 63,0);
    tracep->declQuad(c+191,"reg_9", false,-1, 63,0);
    tracep->declQuad(c+193,"reg_10", false,-1, 63,0);
    tracep->declQuad(c+195,"reg_11", false,-1, 63,0);
    tracep->declQuad(c+197,"reg_12", false,-1, 63,0);
    tracep->declQuad(c+199,"reg_13", false,-1, 63,0);
    tracep->declQuad(c+201,"reg_14", false,-1, 63,0);
    tracep->declQuad(c+203,"reg_15", false,-1, 63,0);
    tracep->declQuad(c+205,"reg_16", false,-1, 63,0);
    tracep->declQuad(c+207,"reg_17", false,-1, 63,0);
    tracep->declQuad(c+209,"reg_18", false,-1, 63,0);
    tracep->declQuad(c+211,"reg_19", false,-1, 63,0);
    tracep->declQuad(c+213,"reg_20", false,-1, 63,0);
    tracep->declQuad(c+215,"reg_21", false,-1, 63,0);
    tracep->declQuad(c+217,"reg_22", false,-1, 63,0);
    tracep->declQuad(c+219,"reg_23", false,-1, 63,0);
    tracep->declQuad(c+221,"reg_24", false,-1, 63,0);
    tracep->declQuad(c+223,"reg_25", false,-1, 63,0);
    tracep->declQuad(c+225,"reg_26", false,-1, 63,0);
    tracep->declQuad(c+227,"reg_27", false,-1, 63,0);
    tracep->declQuad(c+229,"reg_28", false,-1, 63,0);
    tracep->declQuad(c+231,"reg_29", false,-1, 63,0);
    tracep->declQuad(c+233,"reg_30", false,-1, 63,0);
    tracep->declQuad(c+235,"reg_31", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("InstructionFetch ");
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declBus(c+329,"io_address", false,-1, 31,0);
    tracep->declQuad(c+330,"io_instruction", false,-1, 63,0);
    tracep->declBit(c+372,"io_coreInstrReq_valid", false,-1);
    tracep->declBus(c+325,"io_coreInstrReq_bits_addrRequest", false,-1, 31,0);
    tracep->declBit(c+8,"io_coreInstrResp_valid", false,-1);
    tracep->declQuad(c+317,"io_coreInstrResp_bits_dataResponse", false,-1, 63,0);
    tracep->declBus(c+319,"instrLow", false,-1, 31,0);
    tracep->declBus(c+320,"instrHigh", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+368,"clock", false,-1);
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declQuad(c+38,"io_aluResultIn", false,-1, 63,0);
    tracep->declQuad(c+79,"io_writeData", false,-1, 63,0);
    tracep->declBit(c+6,"io_writeEnable", false,-1);
    tracep->declBit(c+31,"io_readEnable", false,-1);
    tracep->declQuad(c+341,"io_readData", false,-1, 63,0);
    tracep->declBus(c+81,"io_f3", false,-1, 2,0);
    tracep->declBit(c+1,"io_dccmReq_valid", false,-1);
    tracep->declBus(c+2,"io_dccmReq_bits_addrRequest", false,-1, 31,0);
    tracep->declQuad(c+3,"io_dccmReq_bits_dataRequest", false,-1, 63,0);
    tracep->declBus(c+5,"io_dccmReq_bits_activeByteLane", false,-1, 7,0);
    tracep->declBit(c+6,"io_dccmReq_bits_isWrite", false,-1);
    tracep->declBit(c+7,"io_dccmRsp_valid", false,-1);
    tracep->declQuad(c+315,"io_dccmRsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBus(c+237,"offset", false,-1, 2,0);
    tracep->declBus(c+238,"funct3", false,-1, 2,0);
    tracep->declBus(c+239,"offsetSW", false,-1, 2,0);
    tracep->declBus(c+240,"wdata_0", false,-1, 7,0);
    tracep->declBus(c+241,"wdata_1", false,-1, 7,0);
    tracep->declBus(c+242,"wdata_2", false,-1, 7,0);
    tracep->declBus(c+243,"wdata_3", false,-1, 7,0);
    tracep->declBus(c+244,"wdata_4", false,-1, 7,0);
    tracep->declBus(c+245,"wdata_5", false,-1, 7,0);
    tracep->declBus(c+246,"wdata_6", false,-1, 7,0);
    tracep->declBus(c+247,"wdata_7", false,-1, 7,0);
    tracep->declBus(c+248,"io_dccmReq_bits_dataRequest_lo", false,-1, 31,0);
    tracep->declBus(c+249,"io_dccmReq_bits_dataRequest_hi", false,-1, 31,0);
    tracep->declQuad(c+364,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Realigner ");
    tracep->declBit(c+368,"clock", false,-1);
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declBus(c+343,"io_ral_address_i", false,-1, 31,0);
    tracep->declBus(c+344,"io_ral_instruction_i", false,-1, 31,0);
    tracep->declBit(c+340,"io_ral_jmp", false,-1);
    tracep->declBus(c+329,"io_ral_address_o", false,-1, 31,0);
    tracep->declBus(c+345,"io_ral_instruction_o", false,-1, 31,0);
    tracep->declBit(c+366,"addri", false,-1);
    tracep->declBus(c+250,"lhw_reg", false,-1, 15,0);
    tracep->declBus(c+313,"conc_instr", false,-1, 31,0);
    tracep->declBus(c+251,"stateReg", false,-1, 1,0);
    tracep->declBit(c+314,"pc4_sel", false,-1);
    tracep->declBit(c+252,"conc_sel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+368,"clock", false,-1);
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declBus(c+343,"io_in", false,-1, 31,0);
    tracep->declBus(c+82,"io_out", false,-1, 31,0);
    tracep->declBus(c+83,"io_pc4", false,-1, 31,0);
    tracep->declBus(c+84,"io_pc2", false,-1, 31,0);
    tracep->declBus(c+82,"pc_reg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dmem ");
    tracep->declBit(c+368,"clock", false,-1);
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declBit(c+1,"io_req_valid", false,-1);
    tracep->declBus(c+2,"io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declQuad(c+3,"io_req_bits_dataRequest", false,-1, 63,0);
    tracep->declBus(c+5,"io_req_bits_activeByteLane", false,-1, 7,0);
    tracep->declBit(c+6,"io_req_bits_isWrite", false,-1);
    tracep->declBit(c+7,"io_rsp_valid", false,-1);
    tracep->declQuad(c+315,"io_rsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+368,"sram1_clk_i", false,-1);
    tracep->declBit(c+369,"sram1_rst_i", false,-1);
    tracep->declBit(c+253,"sram1_csb_i", false,-1);
    tracep->declBit(c+254,"sram1_we_i", false,-1);
    tracep->declBus(c+255,"sram1_wmask_i", false,-1, 3,0);
    tracep->declBus(c+256,"sram1_addr_i", false,-1, 20,0);
    tracep->declBus(c+257,"sram1_wdata_i", false,-1, 31,0);
    tracep->declBus(c+321,"sram1_rdata_o", false,-1, 31,0);
    tracep->declBit(c+368,"sram2_clk_i", false,-1);
    tracep->declBit(c+369,"sram2_rst_i", false,-1);
    tracep->declBit(c+253,"sram2_csb_i", false,-1);
    tracep->declBit(c+254,"sram2_we_i", false,-1);
    tracep->declBus(c+258,"sram2_wmask_i", false,-1, 3,0);
    tracep->declBus(c+259,"sram2_addr_i", false,-1, 20,0);
    tracep->declBus(c+260,"sram2_wdata_i", false,-1, 31,0);
    tracep->declBus(c+322,"sram2_rdata_o", false,-1, 31,0);
    tracep->declBit(c+7,"validReg", false,-1);
    tracep->declBus(c+322,"rdata2", false,-1, 31,0);
    tracep->declBus(c+321,"rdata1", false,-1, 31,0);
    tracep->declQuad(c+323,"rdata64", false,-1, 63,0);
    tracep->pushNamePrefix("sram1 ");
    tracep->declBus(c+375,"IFILE_IN", false,-1, 7,0);
    tracep->declBit(c+368,"clk_i", false,-1);
    tracep->declBit(c+369,"rst_i", false,-1);
    tracep->declBit(c+253,"csb_i", false,-1);
    tracep->declBus(c+256,"addr_i", false,-1, 20,0);
    tracep->declBus(c+257,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+255,"wmask_i", false,-1, 3,0);
    tracep->declBit(c+254,"we_i", false,-1);
    tracep->declBus(c+321,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+261,"csb", false,-1);
    tracep->declBus(c+262,"addr_o", false,-1, 20,0);
    tracep->declBus(c+263,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+264,"wmask_o", false,-1, 3,0);
    tracep->declBit(c+265,"we_o", false,-1);
    tracep->declBus(c+376,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+266,"rvalid", false,-1);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+377,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+379,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+380,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+381,"DELAY", false,-1, 31,0);
    tracep->declBus(c+382,"IZERO", false,-1, 31,0);
    tracep->declBus(c+375,"IFILE", false,-1, 7,0);
    tracep->declBit(c+368,"clk0", false,-1);
    tracep->declBit(c+253,"csb0", false,-1);
    tracep->declBit(c+254,"web0", false,-1);
    tracep->declBus(c+255,"wmask0", false,-1, 3,0);
    tracep->declBus(c+256,"addr0", false,-1, 20,0);
    tracep->declBus(c+257,"din0", false,-1, 31,0);
    tracep->declBus(c+321,"dout0", false,-1, 31,0);
    tracep->declBit(c+383,"clk1", false,-1);
    tracep->declBit(c+384,"csb1", false,-1);
    tracep->declBus(c+385,"addr1", false,-1, 20,0);
    tracep->declBus(c+386,"dout1", false,-1, 31,0);
    tracep->declBit(c+267,"csb0_reg", false,-1);
    tracep->declBit(c+268,"web0_reg", false,-1);
    tracep->declBus(c+269,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+270,"addr0_reg", false,-1, 20,0);
    tracep->declBus(c+271,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+387,"csb1_reg", false,-1);
    tracep->declBus(c+388,"addr1_reg", false,-1, 20,0);
    tracep->declBus(c+389,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sram2 ");
    tracep->declBus(c+375,"IFILE_IN", false,-1, 7,0);
    tracep->declBit(c+368,"clk_i", false,-1);
    tracep->declBit(c+369,"rst_i", false,-1);
    tracep->declBit(c+253,"csb_i", false,-1);
    tracep->declBus(c+259,"addr_i", false,-1, 20,0);
    tracep->declBus(c+260,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+258,"wmask_i", false,-1, 3,0);
    tracep->declBit(c+254,"we_i", false,-1);
    tracep->declBus(c+322,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+272,"csb", false,-1);
    tracep->declBus(c+273,"addr_o", false,-1, 20,0);
    tracep->declBus(c+274,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+275,"wmask_o", false,-1, 3,0);
    tracep->declBit(c+276,"we_o", false,-1);
    tracep->declBus(c+390,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+277,"rvalid", false,-1);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+377,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+379,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+380,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+381,"DELAY", false,-1, 31,0);
    tracep->declBus(c+382,"IZERO", false,-1, 31,0);
    tracep->declBus(c+375,"IFILE", false,-1, 7,0);
    tracep->declBit(c+368,"clk0", false,-1);
    tracep->declBit(c+253,"csb0", false,-1);
    tracep->declBit(c+254,"web0", false,-1);
    tracep->declBus(c+258,"wmask0", false,-1, 3,0);
    tracep->declBus(c+259,"addr0", false,-1, 20,0);
    tracep->declBus(c+260,"din0", false,-1, 31,0);
    tracep->declBus(c+322,"dout0", false,-1, 31,0);
    tracep->declBit(c+383,"clk1", false,-1);
    tracep->declBit(c+384,"csb1", false,-1);
    tracep->declBus(c+385,"addr1", false,-1, 20,0);
    tracep->declBus(c+391,"dout1", false,-1, 31,0);
    tracep->declBit(c+278,"csb0_reg", false,-1);
    tracep->declBit(c+279,"web0_reg", false,-1);
    tracep->declBus(c+280,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+281,"addr0_reg", false,-1, 20,0);
    tracep->declBus(c+282,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+392,"csb1_reg", false,-1);
    tracep->declBus(c+393,"addr1_reg", false,-1, 20,0);
    tracep->declBus(c+394,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("imem ");
    tracep->declBit(c+368,"clock", false,-1);
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declBit(c+372,"io_req_valid", false,-1);
    tracep->declBus(c+325,"io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBit(c+8,"io_rsp_valid", false,-1);
    tracep->declQuad(c+317,"io_rsp_bits_dataResponse", false,-1, 63,0);
    tracep->declBit(c+368,"sram_clk_i", false,-1);
    tracep->declBit(c+369,"sram_rst_i", false,-1);
    tracep->declBit(c+369,"sram_csb_i", false,-1);
    tracep->declBit(c+372,"sram_we_i", false,-1);
    tracep->declBus(c+395,"sram_wmask_i", false,-1, 3,0);
    tracep->declBus(c+367,"sram_addr_i", false,-1, 20,0);
    tracep->declBus(c+374,"sram_wdata_i", false,-1, 31,0);
    tracep->declBus(c+319,"sram_rdata_o", false,-1, 31,0);
    tracep->declBit(c+8,"validReg", false,-1);
    tracep->pushNamePrefix("sram ");
    tracep->declArray(c+396,"IFILE_IN", false,-1, 263,0);
    tracep->declBit(c+368,"clk_i", false,-1);
    tracep->declBit(c+369,"rst_i", false,-1);
    tracep->declBit(c+369,"csb_i", false,-1);
    tracep->declBus(c+367,"addr_i", false,-1, 20,0);
    tracep->declBus(c+374,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+395,"wmask_i", false,-1, 3,0);
    tracep->declBit(c+372,"we_i", false,-1);
    tracep->declBus(c+319,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+283,"csb", false,-1);
    tracep->declBus(c+284,"addr_o", false,-1, 20,0);
    tracep->declBus(c+285,"wdata_o", false,-1, 31,0);
    tracep->declBus(c+286,"wmask_o", false,-1, 3,0);
    tracep->declBit(c+287,"we_o", false,-1);
    tracep->declBus(c+405,"rdata_i", false,-1, 31,0);
    tracep->declBit(c+288,"rvalid", false,-1);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+377,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+379,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+380,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+381,"DELAY", false,-1, 31,0);
    tracep->declBus(c+382,"IZERO", false,-1, 31,0);
    tracep->declArray(c+396,"IFILE", false,-1, 263,0);
    tracep->declBit(c+368,"clk0", false,-1);
    tracep->declBit(c+369,"csb0", false,-1);
    tracep->declBit(c+372,"web0", false,-1);
    tracep->declBus(c+395,"wmask0", false,-1, 3,0);
    tracep->declBus(c+367,"addr0", false,-1, 20,0);
    tracep->declBus(c+374,"din0", false,-1, 31,0);
    tracep->declBus(c+319,"dout0", false,-1, 31,0);
    tracep->declBit(c+383,"clk1", false,-1);
    tracep->declBit(c+384,"csb1", false,-1);
    tracep->declBus(c+385,"addr1", false,-1, 20,0);
    tracep->declBus(c+406,"dout1", false,-1, 31,0);
    tracep->declBit(c+289,"csb0_reg", false,-1);
    tracep->declBit(c+290,"web0_reg", false,-1);
    tracep->declBus(c+291,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+292,"addr0_reg", false,-1, 20,0);
    tracep->declBus(c+293,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+407,"csb1_reg", false,-1);
    tracep->declBus(c+408,"addr1_reg", false,-1, 20,0);
    tracep->declBus(c+409,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("tracer ");
    tracep->declBit(c+368,"clock", false,-1);
    tracep->declBit(c+369,"reset", false,-1);
    tracep->declBus(c+9,"io_rvfiUInt_0", false,-1, 31,0);
    tracep->declBus(c+10,"io_rvfiUInt_1", false,-1, 31,0);
    tracep->declBus(c+11,"io_rvfiUInt_2", false,-1, 31,0);
    tracep->declBus(c+12,"io_rvfiUInt_3", false,-1, 31,0);
    tracep->declQuad(c+296,"io_rvfiSInt_0", false,-1, 63,0);
    tracep->declQuad(c+21,"io_rvfiSInt_1", false,-1, 63,0);
    tracep->declQuad(c+23,"io_rvfiSInt_2", false,-1, 63,0);
    tracep->declQuad(c+327,"io_rvfiSInt_3", false,-1, 63,0);
    tracep->declQuad(c+25,"io_rvfiSInt_4", false,-1, 63,0);
    tracep->declBit(c+16,"io_rvfiBool_0", false,-1);
    tracep->declBus(c+17,"io_rvfiRegAddr_0", false,-1, 4,0);
    tracep->declBus(c+18,"io_rvfiRegAddr_1", false,-1, 4,0);
    tracep->declBus(c+19,"io_rvfiRegAddr_2", false,-1, 4,0);
    tracep->declBus(c+294,"clkCycle", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_top\n"); );
    // Body
    VTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<9>/*287:0*/ VTop__ConstPool__CONST_h06c05930_0;

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_valid));
    bufp->fullIData(oldp+2,((IData)((0x7ffULL & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                                 >> 2U)))),32);
    bufp->fullQData(oldp+3,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),64);
    bufp->fullCData(oldp+5,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),8);
    bufp->fullBit(oldp+6,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite));
    bufp->fullBit(oldp+7,(vlSelf->Top__DOT__dmem__DOT__validReg));
    bufp->fullBit(oldp+8,(vlSelf->Top__DOT__imem__DOT__validReg));
    bufp->fullIData(oldp+9,(vlSelf->Top__DOT__core__DOT__mem_reg_pc),32);
    bufp->fullIData(oldp+10,(vlSelf->Top__DOT__core__DOT__npcDelay_3),32);
    bufp->fullIData(oldp+11,(vlSelf->Top__DOT__core__DOT__insDelay_3),32);
    bufp->fullIData(oldp+12,(vlSelf->Top__DOT__core__DOT__memAddrDelay),32);
    bufp->fullIData(oldp+13,(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_1),32);
    bufp->fullIData(oldp+14,(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_1),32);
    bufp->fullIData(oldp+15,(vlSelf->Top__DOT__core__DOT__memWdataDelay),32);
    bufp->fullBit(oldp+16,(vlSelf->Top__DOT__core__DOT__stallDelay_3));
    bufp->fullCData(oldp+17,(vlSelf->Top__DOT__core__DOT__mem_reg_wra),5);
    bufp->fullCData(oldp+18,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_2),5);
    bufp->fullCData(oldp+19,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_2),5);
    bufp->fullIData(oldp+20,(((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                << 5U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                           << 4U) | 
                                          ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                           << 3U))) 
                              | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                  << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                             << 1U) 
                                            | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))))),32);
    bufp->fullQData(oldp+21,((((QData)((IData)((- (IData)(
                                                          (vlSelf->Top__DOT__core__DOT__rsDataDelay_0_1 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_1)))),64);
    bufp->fullQData(oldp+23,((((QData)((IData)((- (IData)(
                                                          (vlSelf->Top__DOT__core__DOT__rsDataDelay_1_1 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_1)))),64);
    bufp->fullQData(oldp+25,((((QData)((IData)((- (IData)(
                                                          (vlSelf->Top__DOT__core__DOT__memWdataDelay 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__core__DOT__memWdataDelay)))),64);
    bufp->fullIData(oldp+27,(vlSelf->Top__DOT__core__DOT__if_reg_ins),32);
    bufp->fullIData(oldp+28,(vlSelf->Top__DOT__core__DOT__if_reg_pc),32);
    bufp->fullBit(oldp+29,(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite));
    bufp->fullBit(oldp+30,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memRead));
    bufp->fullBit(oldp+31,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead));
    bufp->fullCData(oldp+32,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                       >> 7U))),5);
    bufp->fullCData(oldp+33,((0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                       >> 7U))),5);
    bufp->fullBit(oldp+34,((0x63U == (0x7fU & vlSelf->Top__DOT__core__DOT__id_reg_ins))));
    bufp->fullIData(oldp+35,(vlSelf->Top__DOT__core__DOT__ex_reg_ins),32);
    bufp->fullIData(oldp+36,(vlSelf->Top__DOT__core__DOT__mem_reg_ins),32);
    bufp->fullIData(oldp+37,(vlSelf->Top__DOT__core__DOT__id_reg_ins),32);
    bufp->fullQData(oldp+38,(vlSelf->Top__DOT__core__DOT__ex_reg_result),64);
    bufp->fullBit(oldp+40,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_regWrite));
    bufp->fullBit(oldp+41,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_regWrite));
    bufp->fullBit(oldp+42,(vlSelf->Top__DOT__core__DOT__id_reg_is_csr));
    bufp->fullBit(oldp+43,(vlSelf->Top__DOT__core__DOT__ex_reg_is_csr));
    bufp->fullBit(oldp+44,(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr));
    bufp->fullIData(oldp+45,(vlSelf->Top__DOT__core__DOT__id_reg_csr_data),32);
    bufp->fullIData(oldp+46,(vlSelf->Top__DOT__core__DOT__ex_reg_csr_data),32);
    bufp->fullIData(oldp+47,(vlSelf->Top__DOT__core__DOT__mem_reg_csr_data),32);
    bufp->fullQData(oldp+48,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out),64);
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 7U))),5);
    bufp->fullCData(oldp+51,((((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               | (IData)((0x5013U == 
                                          (0x707fU 
                                           & vlSelf->Top__DOT__core__DOT__if_reg_ins))))
                               ? (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x19U) : 0U)),7);
    bufp->fullCData(oldp+52,((7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+53,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            | ((0x3bU == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_36)))));
    bufp->fullCData(oldp+54,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                               ? 0U : ((0x3bU == (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                        ? 0U : ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                 ? 0U
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                  ? 0U
                                                  : 
                                                 ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                   ? 0U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                    ? 1U
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                     ? 1U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                      ? 0U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                       ? 0U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                        ? 0U
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                         ? 0U
                                                         : 
                                                        ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                          ? 2U
                                                          : 
                                                         ((0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                           ? 2U
                                                           : 0U)))))))))))))),2);
    bufp->fullBit(oldp+55,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write) 
                             & (0x13U != vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            & ((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               | ((0x3bU == (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  | ((0x13U == (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     | ((0x1bU == (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        | ((0x73U == 
                                            (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           | ((3U == 
                                               (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                              | ((0xbU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                 | ((0x23U 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                    & ((0x63U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                       & ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                          | ((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                             | ((0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                                | (0x67U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->Top__DOT__core__DOT__if_reg_ins)))))))))))))))));
    bufp->fullBit(oldp+56,(((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            & ((0x3bU != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x13U != (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x1bU != (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x73U != (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((3U == (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           | (0xbU 
                                              == (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))))));
    bufp->fullBit(oldp+57,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write) 
                             & (0x13U != vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                            & ((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x3bU != (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x13U != (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x1bU != (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x73U != 
                                            (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((3U != 
                                               (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                              & ((0xbU 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                 & (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))))))));
    bufp->fullBit(oldp+58,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch));
    bufp->fullCData(oldp+59,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                               ? 2U : ((0x3bU == (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                        ? 2U : ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                 ? 2U
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                  ? 2U
                                                  : 
                                                 ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                   ? 2U
                                                   : 0U)))))),2);
    bufp->fullCData(oldp+60,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump),2);
    bufp->fullCData(oldp+61,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                               ? 0U : ((0x3bU == (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                        ? 0U : ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                 ? 0U
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                  ? 0U
                                                  : 
                                                 ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                   ? 0U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                    ? 0U
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                     ? 0U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                      ? 0U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                       ? 0U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                        ? 2U
                                                        : 
                                                       (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))))))))),2);
    bufp->fullBit(oldp+62,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write));
    bufp->fullIData(oldp+63,(((3U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U)) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE
                               : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___r_data_T_17)),32);
    bufp->fullBit(oldp+64,((0x73U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))));
    bufp->fullCData(oldp+65,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+66,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0x14U))),5);
    bufp->fullQData(oldp+67,(vlSelf->Top__DOT__core__DOT__id_reg_imm),64);
    bufp->fullQData(oldp+69,(vlSelf->Top__DOT__core__DOT__id_reg_rd1),64);
    bufp->fullQData(oldp+71,(vlSelf->Top__DOT__core__DOT__id_reg_rd2),64);
    bufp->fullIData(oldp+73,(vlSelf->Top__DOT__core__DOT__id_reg_pc),32);
    bufp->fullCData(oldp+74,(vlSelf->Top__DOT__core__DOT__id_reg_f7),7);
    bufp->fullCData(oldp+75,(vlSelf->Top__DOT__core__DOT__id_reg_f3),3);
    bufp->fullBit(oldp+76,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc));
    bufp->fullCData(oldp+77,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
    bufp->fullCData(oldp+78,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
    bufp->fullQData(oldp+79,(vlSelf->Top__DOT__core__DOT__ex_reg_wd),64);
    bufp->fullCData(oldp+81,((7U & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                    >> 0xcU))),3);
    bufp->fullIData(oldp+82,(vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg),32);
    bufp->fullIData(oldp+83,(((IData)(4U) + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg)),32);
    bufp->fullIData(oldp+84,(((IData)(2U) + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg)),32);
    bufp->fullCData(oldp+85,(vlSelf->Top__DOT__core__DOT__id_reg_wra),5);
    bufp->fullCData(oldp+86,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
    bufp->fullBit(oldp+87,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memWrite));
    bufp->fullCData(oldp+88,(vlSelf->Top__DOT__core__DOT__ex_reg_wra),5);
    bufp->fullCData(oldp+89,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
    bufp->fullIData(oldp+90,(vlSelf->Top__DOT__core__DOT__ex_reg_pc),32);
    bufp->fullQData(oldp+91,(vlSelf->Top__DOT__core__DOT__mem_reg_result),64);
    bufp->fullCData(oldp+93,(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
    bufp->fullIData(oldp+94,(vlSelf->Top__DOT__core__DOT__npcDelay_0),32);
    bufp->fullIData(oldp+95,(vlSelf->Top__DOT__core__DOT__npcDelay_1),32);
    bufp->fullIData(oldp+96,(vlSelf->Top__DOT__core__DOT__npcDelay_2),32);
    bufp->fullCData(oldp+97,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_0),5);
    bufp->fullCData(oldp+98,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_1),5);
    bufp->fullCData(oldp+99,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_0),5);
    bufp->fullCData(oldp+100,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_1),5);
    bufp->fullIData(oldp+101,(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_0),32);
    bufp->fullIData(oldp+102,(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_0),32);
    bufp->fullBit(oldp+103,(vlSelf->Top__DOT__core__DOT__stallDelay_0));
    bufp->fullBit(oldp+104,(vlSelf->Top__DOT__core__DOT__stallDelay_1));
    bufp->fullBit(oldp+105,(vlSelf->Top__DOT__core__DOT__stallDelay_2));
    bufp->fullIData(oldp+106,(vlSelf->Top__DOT__core__DOT__insDelay_0),32);
    bufp->fullIData(oldp+107,(vlSelf->Top__DOT__core__DOT__insDelay_1),32);
    bufp->fullIData(oldp+108,(vlSelf->Top__DOT__core__DOT__insDelay_2),32);
    bufp->fullCData(oldp+109,(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out),4);
    bufp->fullCData(oldp+110,((1U & ((IData)(vlSelf->Top__DOT__core__DOT__id_reg_f7) 
                                     >> 5U))),7);
    bufp->fullCData(oldp+111,((0x1fU & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                        >> 7U))),5);
    bufp->fullCData(oldp+112,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+113,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+114,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
    bufp->fullCData(oldp+115,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
    bufp->fullSData(oldp+116,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+117,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr_io_i_w_en));
    bufp->fullCData(oldp+118,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1),3);
    bufp->fullBit(oldp+119,((1U & ((~ (((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
                                        & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch)) 
                                       & (((0x1fU & 
                                            (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                             >> 7U)) 
                                           == (0x1fU 
                                               & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0xfU))) 
                                          | ((0x1fU 
                                              & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                 >> 7U)) 
                                             == (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x14U)))))) 
                                   & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu__DOT___T_14))))));
    bufp->fullBit(oldp+120,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                             | ((0x3bU == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x13U == (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x1bU == (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x73U == 
                                          (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((3U == 
                                             (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                            | ((0xbU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                               | ((0x23U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                  & ((0x63U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                     & ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                        | ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                           | ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                                              | (0x67U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))))))))))));
    bufp->fullBit(oldp+121,(((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                             & ((0x3bU != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                & ((0x13U != (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x1bU != (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((0x73U != 
                                          (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((3U != 
                                             (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                            & ((0xbU 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                               & (0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)))))))))));
    bufp->fullBit(oldp+122,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable));
    bufp->fullQData(oldp+123,(((0U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)))
                                ? 0ULL : ((0x1fU == 
                                           (0x1fU & 
                                            (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU)))
                                           ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_31
                                           : ((0x1eU 
                                               == (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)))
                                               ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_30
                                               : ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0xfU)))
                                                   ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_27
                                                     : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_90))))))),64);
    bufp->fullQData(oldp+125,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1),64);
    bufp->fullCData(oldp+127,((3U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0xcU))),2);
    bufp->fullBit(oldp+128,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
    bufp->fullBit(oldp+129,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
    bufp->fullBit(oldp+130,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
    bufp->fullBit(oldp+131,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
    bufp->fullBit(oldp+132,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
    bufp->fullCData(oldp+133,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
    bufp->fullCData(oldp+134,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))),3);
    bufp->fullIData(oldp+135,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                           << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
    bufp->fullIData(oldp+136,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
    bufp->fullIData(oldp+137,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
    bufp->fullIData(oldp+138,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
    bufp->fullIData(oldp+139,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
    bufp->fullIData(oldp+140,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
    bufp->fullBit(oldp+141,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
    bufp->fullBit(oldp+142,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
    bufp->fullCData(oldp+143,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
    bufp->fullBit(oldp+144,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
    bufp->fullBit(oldp+145,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
    bufp->fullSData(oldp+146,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                << 7U) | ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                          << 3U))),11);
    bufp->fullIData(oldp+147,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                << 0x15U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                              << 0x11U) 
                                             | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                 << 0xbU) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                    << 7U) 
                                                   | ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                      << 3U)))))),32);
    bufp->fullIData(oldp+148,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                           << 3U) | 
                                          (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                            << 2U) 
                                           | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                               << 1U) 
                                              | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))))),32);
    bufp->fullIData(oldp+149,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
    bufp->fullIData(oldp+150,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE),32);
    bufp->fullIData(oldp+151,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
    bufp->fullBit(oldp+152,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx));
    bufp->fullBit(oldp+153,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem));
    bufp->fullBit(oldp+154,((((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                & (~ (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr))) 
                               & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
                              & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx))) 
                             & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem))));
    bufp->fullBit(oldp+155,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx));
    bufp->fullBit(oldp+156,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem));
    bufp->fullBit(oldp+157,((((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                & (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr)) 
                               & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
                              & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx))) 
                             & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem))));
    bufp->fullCData(oldp+158,((0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)),7);
    bufp->fullQData(oldp+159,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0xfffffffffffffULL
                                  : 0ULL) << 0xcU) 
                               | (QData)((IData)((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U))))),64);
    bufp->fullIData(oldp+161,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                               >> 0xcU)),20);
    bufp->fullQData(oldp+162,((((QData)((IData)(((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins))))),64);
    bufp->fullSData(oldp+164,(((0xfe0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                           >> 7U)))),12);
    bufp->fullQData(oldp+165,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0xfffffffffffffULL
                                  : 0ULL) << 0xcU) 
                               | (QData)((IData)(((0xfe0U 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 7U))))))),64);
    bufp->fullSData(oldp+167,(((0x800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 8U)))))),12);
    bufp->fullQData(oldp+168,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0x1fffffffffffULL
                                  : 0ULL) << 0xdU) 
                               | (QData)((IData)(((0x1000U 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x13U)) 
                                                  | ((0x800U 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                              >> 7U))))))))),58);
    bufp->fullIData(oldp+170,(((0x80000U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x15U)))))),20);
    bufp->fullQData(oldp+171,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0x7ffffffffffULL
                                  : 0ULL) << 0x15U) 
                               | (QData)((IData)(((0x100000U 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->Top__DOT__core__DOT__if_reg_ins) 
                                                     | ((0x800U 
                                                         & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                              >> 0x14U))))))))),64);
    bufp->fullQData(oldp+173,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_0),64);
    bufp->fullQData(oldp+175,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_1),64);
    bufp->fullQData(oldp+177,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_2),64);
    bufp->fullQData(oldp+179,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_3),64);
    bufp->fullQData(oldp+181,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_4),64);
    bufp->fullQData(oldp+183,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_5),64);
    bufp->fullQData(oldp+185,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_6),64);
    bufp->fullQData(oldp+187,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_7),64);
    bufp->fullQData(oldp+189,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_8),64);
    bufp->fullQData(oldp+191,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_9),64);
    bufp->fullQData(oldp+193,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_10),64);
    bufp->fullQData(oldp+195,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_11),64);
    bufp->fullQData(oldp+197,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_12),64);
    bufp->fullQData(oldp+199,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_13),64);
    bufp->fullQData(oldp+201,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_14),64);
    bufp->fullQData(oldp+203,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_15),64);
    bufp->fullQData(oldp+205,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_16),64);
    bufp->fullQData(oldp+207,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_17),64);
    bufp->fullQData(oldp+209,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_18),64);
    bufp->fullQData(oldp+211,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_19),64);
    bufp->fullQData(oldp+213,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_20),64);
    bufp->fullQData(oldp+215,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_21),64);
    bufp->fullQData(oldp+217,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_22),64);
    bufp->fullQData(oldp+219,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_23),64);
    bufp->fullQData(oldp+221,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_24),64);
    bufp->fullQData(oldp+223,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_25),64);
    bufp->fullQData(oldp+225,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_26),64);
    bufp->fullQData(oldp+227,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_27),64);
    bufp->fullQData(oldp+229,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_28),64);
    bufp->fullQData(oldp+231,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_29),64);
    bufp->fullQData(oldp+233,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_30),64);
    bufp->fullQData(oldp+235,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_31),64);
    bufp->fullCData(oldp+237,(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset),3);
    bufp->fullCData(oldp+238,(vlSelf->Top__DOT__core__DOT__MEM__DOT__funct3),3);
    bufp->fullCData(oldp+239,((7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result))),3);
    bufp->fullCData(oldp+240,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0),8);
    bufp->fullCData(oldp+241,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1),8);
    bufp->fullCData(oldp+242,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2),8);
    bufp->fullCData(oldp+243,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3),8);
    bufp->fullCData(oldp+244,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4),8);
    bufp->fullCData(oldp+245,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5),8);
    bufp->fullCData(oldp+246,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6),8);
    bufp->fullCData(oldp+247,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7),8);
    bufp->fullIData(oldp+248,((((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3) 
                                << 0x18U) | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1) 
                                                 << 8U) 
                                                | (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0))))),32);
    bufp->fullIData(oldp+249,((((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7) 
                                << 0x18U) | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5) 
                                                 << 8U) 
                                                | (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4))))),32);
    bufp->fullSData(oldp+250,(vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg),16);
    bufp->fullCData(oldp+251,(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg),2);
    bufp->fullBit(oldp+252,((2U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
    bufp->fullBit(oldp+253,(vlSelf->Top__DOT__dmem__DOT__sram2_csb_i));
    bufp->fullBit(oldp+254,(vlSelf->Top__DOT__dmem__DOT__sram2_we_i));
    bufp->fullCData(oldp+255,((0xfU & (IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane))),4);
    bufp->fullIData(oldp+256,(vlSelf->Top__DOT__dmem__DOT__sram1_addr_i),21);
    bufp->fullIData(oldp+257,((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest)),32);
    bufp->fullCData(oldp+258,((0xfU & ((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane) 
                                       >> 4U))),4);
    bufp->fullIData(oldp+259,(vlSelf->Top__DOT__dmem__DOT__sram2_addr_i),21);
    bufp->fullIData(oldp+260,((IData)((vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+261,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__csb));
    bufp->fullIData(oldp+262,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__addr_o),21);
    bufp->fullIData(oldp+263,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__wdata_o),32);
    bufp->fullCData(oldp+264,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__wmask_o),4);
    bufp->fullBit(oldp+265,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__we_o));
    bufp->fullBit(oldp+266,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__rvalid));
    bufp->fullBit(oldp+267,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__csb0_reg));
    bufp->fullBit(oldp+268,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__web0_reg));
    bufp->fullCData(oldp+269,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__wmask0_reg),4);
    bufp->fullIData(oldp+270,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__addr0_reg),21);
    bufp->fullIData(oldp+271,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__din0_reg),32);
    bufp->fullBit(oldp+272,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__csb));
    bufp->fullIData(oldp+273,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__addr_o),21);
    bufp->fullIData(oldp+274,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__wdata_o),32);
    bufp->fullCData(oldp+275,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__wmask_o),4);
    bufp->fullBit(oldp+276,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__we_o));
    bufp->fullBit(oldp+277,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__rvalid));
    bufp->fullBit(oldp+278,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__csb0_reg));
    bufp->fullBit(oldp+279,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__web0_reg));
    bufp->fullCData(oldp+280,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__wmask0_reg),4);
    bufp->fullIData(oldp+281,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__addr0_reg),21);
    bufp->fullIData(oldp+282,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__din0_reg),32);
    bufp->fullBit(oldp+283,(vlSelf->Top__DOT__imem__DOT__sram__DOT__csb));
    bufp->fullIData(oldp+284,(vlSelf->Top__DOT__imem__DOT__sram__DOT__addr_o),21);
    bufp->fullIData(oldp+285,(vlSelf->Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
    bufp->fullCData(oldp+286,(vlSelf->Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
    bufp->fullBit(oldp+287,(vlSelf->Top__DOT__imem__DOT__sram__DOT__we_o));
    bufp->fullBit(oldp+288,(vlSelf->Top__DOT__imem__DOT__sram__DOT__rvalid));
    bufp->fullBit(oldp+289,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
    bufp->fullBit(oldp+290,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
    bufp->fullCData(oldp+291,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
    bufp->fullIData(oldp+292,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),21);
    bufp->fullIData(oldp+293,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
    bufp->fullIData(oldp+294,(vlSelf->Top__DOT__tracer__DOT__clkCycle),32);
    bufp->fullIData(oldp+295,((IData)(((1U == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                        ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
                                        : vlSelf->Top__DOT__core__DOT___GEN_6))),32);
    bufp->fullQData(oldp+296,((((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (((1U 
                                                                         == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                                                         ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
                                                                         : vlSelf->Top__DOT__core__DOT___GEN_6) 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                                              ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
                                                              : vlSelf->Top__DOT__core__DOT___GEN_6))))),64);
    bufp->fullIData(oldp+298,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump))
                                ? (vlSelf->Top__DOT__core__DOT__if_reg_pc 
                                   + (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out))
                                : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump))
                                    ? ((IData)((((0x1fU 
                                                  & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xfU)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                     >> 7U)))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U])))
                                                 : 
                                                (((0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                      >> 7U)))
                                                  ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                                  : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___GEN_6))) 
                                       + (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out))
                                    : (vlSelf->Top__DOT__core__DOT__if_reg_pc 
                                       + (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out))))),32);
    bufp->fullBit(oldp+299,(((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_taken) 
                             | (0U != (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump)))));
    bufp->fullQData(oldp+300,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                                ? vlSelf->Top__DOT__core__DOT__id_reg_rd2
                                : vlSelf->Top__DOT__core__DOT__Execute__DOT___inputMux2_T_4)),64);
    bufp->fullQData(oldp+302,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
                                : vlSelf->Top__DOT__core__DOT___GEN_6)),64);
    bufp->fullQData(oldp+304,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                                ? vlSelf->Top__DOT__core__DOT__id_reg_rd1
                                : ((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                                    ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                    : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                                        ? vlSelf->Top__DOT__core__DOT__Execute_io_wb_result
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+306,((((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)) 
                                == (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                             >> 7U)))
                                ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___GEN_6)),64);
    bufp->fullQData(oldp+308,((((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)) 
                                == (0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                             >> 7U)))
                                ? (((QData)((IData)(
                                                    vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U])))
                                : (((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0xfU)) 
                                    == (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                 >> 7U)))
                                    ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                    : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___GEN_6))),64);
    bufp->fullBit(oldp+310,(((0U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0xcU)))
                              ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                 == vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                              : ((1U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)))
                                  ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                     != vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                  : ((4U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                      ? VL_LTS_IQQ(64, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                      : ((5U == (7U 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xcU)))
                                          ? VL_GTES_IQQ(64, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                          : ((6U == 
                                              (7U & 
                                               (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xcU)))
                                              ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 < vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                              : (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 >= vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2))))))));
    bufp->fullIData(oldp+311,((vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                               | vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
    bufp->fullIData(oldp+312,((vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                               & (~ vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data))),32);
    bufp->fullIData(oldp+313,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction) 
                                << 0x10U) | (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg))),32);
    bufp->fullBit(oldp+314,((((1U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
                              & (vlSelf->Top__DOT__core__DOT__pc_io_in 
                                 >> 1U)) & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_pcSrc)))));
    bufp->fullQData(oldp+315,(vlSelf->Top__DOT__dmem__DOT___GEN_14),64);
    bufp->fullQData(oldp+317,((QData)((IData)(vlSelf->Top__DOT__imem__DOT__sram_rdata_o))),64);
    bufp->fullIData(oldp+319,(vlSelf->Top__DOT__imem__DOT__sram_rdata_o),32);
    bufp->fullIData(oldp+320,((IData)(((QData)((IData)(vlSelf->Top__DOT__imem__DOT__sram_rdata_o)) 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+321,(vlSelf->Top__DOT__dmem__DOT__sram1_rdata_o),32);
    bufp->fullIData(oldp+322,(vlSelf->Top__DOT__dmem__DOT__sram2_rdata_o),32);
    bufp->fullQData(oldp+323,((((QData)((IData)(vlSelf->Top__DOT__dmem__DOT__sram2_rdata_o)) 
                                << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__dmem__DOT__sram1_rdata_o)))),64);
    bufp->fullIData(oldp+325,((vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                               >> 2U)),32);
    bufp->fullIData(oldp+326,((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_readData)),32);
    bufp->fullQData(oldp+327,((((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->Top__DOT__core__DOT__MEM_io_readData 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_readData)))),64);
    bufp->fullIData(oldp+329,(vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o),32);
    bufp->fullQData(oldp+330,(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction),64);
    bufp->fullQData(oldp+332,(vlSelf->Top__DOT__core__DOT__Execute_io_wb_result),64);
    bufp->fullQData(oldp+334,((((QData)((IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U])))),64);
    bufp->fullQData(oldp+336,(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData1),64);
    bufp->fullQData(oldp+338,(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData2),64);
    bufp->fullBit(oldp+340,(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_pcSrc));
    bufp->fullQData(oldp+341,(vlSelf->Top__DOT__core__DOT__MEM_io_readData),64);
    bufp->fullIData(oldp+343,(vlSelf->Top__DOT__core__DOT__pc_io_in),32);
    bufp->fullIData(oldp+344,((IData)(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction)),32);
    bufp->fullIData(oldp+345,(vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o),32);
    bufp->fullBit(oldp+346,(((0U != vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                             & ((0U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                 ? ((0U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                  >> 0xeU))) 
                                    | ((1U == (3U & 
                                               (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 0xeU))) 
                                       | (3U == (3U 
                                                 & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                    >> 0xeU)))))
                                 : ((1U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                     ? ((0U == (7U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   >> 0xdU))) 
                                        | (IData)(vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37))
                                     : ((2U == (3U 
                                                & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)) 
                                        & ((0U == (3U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xeU))) 
                                           | ((1U == 
                                               (3U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   >> 0xeU))) 
                                              | ((2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xeU))) 
                                                 | (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                        >> 0xeU))))))))))));
    bufp->fullIData(oldp+347,(((0U == vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                ? vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o
                                : ((0U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                    ? vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_7
                                    : vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_62))),32);
    bufp->fullIData(oldp+348,((0x2023U | ((0x38000U 
                                           & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                              << 8U)) 
                                          | ((0xc00U 
                                              & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                             | (0x200U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   << 3U)))))),18);
    bufp->fullIData(oldp+349,((0x6fU | ((0x1000000U 
                                         & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            << 0xdU)) 
                                        | ((0xe00000U 
                                            & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               << 0x12U)) 
                                           | ((((0x1000U 
                                                 & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                                 ? 0x1ffU
                                                 : 0U) 
                                               << 0xcU) 
                                              | (0x80U 
                                                 & ((~ 
                                                     (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xfU)) 
                                                    << 7U))))))),25);
    bufp->fullSData(oldp+350,((0x63U | ((0x1000U & 
                                         (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                          >> 1U)) | 
                                        ((0xc00U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                         | ((0x300U 
                                             & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                << 5U)) 
                                            | (0x80U 
                                               & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                  >> 5U))))))),15);
    bufp->fullQData(oldp+351,(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1),64);
    bufp->fullQData(oldp+353,(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2),64);
    bufp->fullBit(oldp+355,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_taken));
    bufp->fullQData(oldp+356,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeData),64);
    bufp->fullQData(oldp+358,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1),64);
    bufp->fullQData(oldp+360,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2),64);
    bufp->fullIData(oldp+362,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
    bufp->fullIData(oldp+363,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
    bufp->fullQData(oldp+364,(vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata),64);
    bufp->fullBit(oldp+366,((1U & (vlSelf->Top__DOT__core__DOT__pc_io_in 
                                   >> 1U))));
    bufp->fullIData(oldp+367,((0x1fffffU & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                            >> 2U))),21);
    bufp->fullBit(oldp+368,(vlSelf->clock));
    bufp->fullBit(oldp+369,(vlSelf->reset));
    bufp->fullIData(oldp+370,(vlSelf->io_pin),32);
    bufp->fullIData(oldp+371,(vlSelf->io_fcsr),32);
    bufp->fullBit(oldp+372,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullIData(oldp+373,((IData)(((6U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                        ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_csr_data))
                                        : ((5U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                            ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_csr_data))
                                            : ((4U 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_csr_data))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                    ? vlSelf->Top__DOT__core__DOT__Execute_io_wb_result
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                     ? 
                                                    ((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead)
                                                      ? vlSelf->Top__DOT__dmem__DOT___GEN_14
                                                      : vlSelf->Top__DOT__core__DOT__ex_reg_result)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U])))
                                                      : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1)))))))),32);
    bufp->fullIData(oldp+374,(0U),32);
    bufp->fullCData(oldp+375,(0U),8);
    bufp->fullIData(oldp+376,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__rdata_i),32);
    bufp->fullIData(oldp+377,(4U),32);
    bufp->fullIData(oldp+378,(0x20U),32);
    bufp->fullIData(oldp+379,(0x15U),32);
    bufp->fullIData(oldp+380,(0x200000U),32);
    bufp->fullIData(oldp+381,(3U),32);
    bufp->fullIData(oldp+382,(0U),32);
    bufp->fullBit(oldp+383,(0U));
    bufp->fullBit(oldp+384,(1U));
    bufp->fullIData(oldp+385,(0U),21);
    bufp->fullIData(oldp+386,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__dout1),32);
    bufp->fullBit(oldp+387,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__csb1_reg));
    bufp->fullIData(oldp+388,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__addr1_reg),21);
    bufp->fullIData(oldp+389,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__i),32);
    bufp->fullIData(oldp+390,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__rdata_i),32);
    bufp->fullIData(oldp+391,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__dout1),32);
    bufp->fullBit(oldp+392,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__csb1_reg));
    bufp->fullIData(oldp+393,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__addr1_reg),21);
    bufp->fullIData(oldp+394,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__i),32);
    bufp->fullCData(oldp+395,(0xfU),4);
    bufp->fullWData(oldp+396,(VTop__ConstPool__CONST_h06c05930_0),264);
    bufp->fullIData(oldp+405,(vlSelf->Top__DOT__imem__DOT__sram__DOT__rdata_i),32);
    bufp->fullIData(oldp+406,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__dout1),32);
    bufp->fullBit(oldp+407,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb1_reg));
    bufp->fullIData(oldp+408,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr1_reg),21);
    bufp->fullIData(oldp+409,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__i),32);
}
