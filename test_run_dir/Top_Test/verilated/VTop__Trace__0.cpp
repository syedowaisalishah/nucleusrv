// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__trace_chg_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTop___024root__trace_chg_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_valid));
        bufp->chgIData(oldp+1,((IData)((0x7ffULL & 
                                        (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                         >> 2U)))),32);
        bufp->chgQData(oldp+2,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest),64);
        bufp->chgCData(oldp+4,(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane),8);
        bufp->chgBit(oldp+5,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite));
        bufp->chgBit(oldp+6,(vlSelf->Top__DOT__dmem__DOT__validReg));
        bufp->chgBit(oldp+7,(vlSelf->Top__DOT__imem__DOT__validReg));
        bufp->chgIData(oldp+8,(vlSelf->Top__DOT__core__DOT__mem_reg_pc),32);
        bufp->chgIData(oldp+9,(vlSelf->Top__DOT__core__DOT__npcDelay_3),32);
        bufp->chgIData(oldp+10,(vlSelf->Top__DOT__core__DOT__insDelay_3),32);
        bufp->chgIData(oldp+11,(vlSelf->Top__DOT__core__DOT__memAddrDelay),32);
        bufp->chgIData(oldp+12,(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_1),32);
        bufp->chgIData(oldp+13,(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_1),32);
        bufp->chgIData(oldp+14,(vlSelf->Top__DOT__core__DOT__memWdataDelay),32);
        bufp->chgBit(oldp+15,(vlSelf->Top__DOT__core__DOT__stallDelay_3));
        bufp->chgCData(oldp+16,(vlSelf->Top__DOT__core__DOT__mem_reg_wra),5);
        bufp->chgCData(oldp+17,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_2),5);
        bufp->chgCData(oldp+18,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_2),5);
        bufp->chgIData(oldp+19,(((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                   << 5U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                              << 4U) 
                                             | ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                << 3U))) 
                                 | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                     << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                << 1U) 
                                               | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))))),32);
        bufp->chgQData(oldp+20,((((QData)((IData)((- (IData)(
                                                             (vlSelf->Top__DOT__core__DOT__rsDataDelay_0_1 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_1)))),64);
        bufp->chgQData(oldp+22,((((QData)((IData)((- (IData)(
                                                             (vlSelf->Top__DOT__core__DOT__rsDataDelay_1_1 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_1)))),64);
        bufp->chgQData(oldp+24,((((QData)((IData)((- (IData)(
                                                             (vlSelf->Top__DOT__core__DOT__memWdataDelay 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__core__DOT__memWdataDelay)))),64);
        bufp->chgIData(oldp+26,(vlSelf->Top__DOT__core__DOT__if_reg_ins),32);
        bufp->chgIData(oldp+27,(vlSelf->Top__DOT__core__DOT__if_reg_pc),32);
        bufp->chgBit(oldp+28,(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite));
        bufp->chgBit(oldp+29,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memRead));
        bufp->chgBit(oldp+30,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead));
        bufp->chgCData(oldp+31,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                          >> 7U))),5);
        bufp->chgCData(oldp+32,((0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                          >> 7U))),5);
        bufp->chgBit(oldp+33,((0x63U == (0x7fU & vlSelf->Top__DOT__core__DOT__id_reg_ins))));
        bufp->chgIData(oldp+34,(vlSelf->Top__DOT__core__DOT__ex_reg_ins),32);
        bufp->chgIData(oldp+35,(vlSelf->Top__DOT__core__DOT__mem_reg_ins),32);
        bufp->chgIData(oldp+36,(vlSelf->Top__DOT__core__DOT__id_reg_ins),32);
        bufp->chgQData(oldp+37,(vlSelf->Top__DOT__core__DOT__ex_reg_result),64);
        bufp->chgBit(oldp+39,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_regWrite));
        bufp->chgBit(oldp+40,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_regWrite));
        bufp->chgBit(oldp+41,(vlSelf->Top__DOT__core__DOT__id_reg_is_csr));
        bufp->chgBit(oldp+42,(vlSelf->Top__DOT__core__DOT__ex_reg_is_csr));
        bufp->chgBit(oldp+43,(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr));
        bufp->chgIData(oldp+44,(vlSelf->Top__DOT__core__DOT__id_reg_csr_data),32);
        bufp->chgIData(oldp+45,(vlSelf->Top__DOT__core__DOT__ex_reg_csr_data),32);
        bufp->chgIData(oldp+46,(vlSelf->Top__DOT__core__DOT__mem_reg_csr_data),32);
        bufp->chgQData(oldp+47,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out),64);
        bufp->chgCData(oldp+49,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 7U))),5);
        bufp->chgCData(oldp+50,((((0x33U == (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  | (IData)((0x5013U 
                                             == (0x707fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins))))
                                  ? (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x19U) : 0U)),7);
        bufp->chgCData(oldp+51,((7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+52,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               | ((0x3bU == (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_36)))));
        bufp->chgCData(oldp+53,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                  ? 0U : ((0x3bU == 
                                           (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                           ? 0U : (
                                                   (0x13U 
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
        bufp->chgBit(oldp+54,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write) 
                                & (0x13U != vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x33U == (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  | ((0x3bU == (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     | ((0x13U == (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        | ((0x1bU == 
                                            (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           | ((0x73U 
                                               == (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                              | ((3U 
                                                  == 
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
        bufp->chgBit(oldp+55,(((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x3bU != (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x13U != (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x1bU != (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x73U != 
                                            (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((3U == 
                                               (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                              | (0xbU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))))));
        bufp->chgBit(oldp+56,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write) 
                                & (0x13U != vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                               & ((0x33U != (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                  & ((0x3bU != (0x7fU 
                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                     & ((0x13U != (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                        & ((0x1bU != 
                                            (0x7fU 
                                             & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                           & ((0x73U 
                                               != (0x7fU 
                                                   & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                              & ((3U 
                                                  != 
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
        bufp->chgBit(oldp+57,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch));
        bufp->chgCData(oldp+58,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                  ? 2U : ((0x3bU == 
                                           (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                           ? 2U : (
                                                   (0x13U 
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
        bufp->chgCData(oldp+59,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump),2);
        bufp->chgCData(oldp+60,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                  ? 0U : ((0x3bU == 
                                           (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                           ? 0U : (
                                                   (0x13U 
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
        bufp->chgBit(oldp+61,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write));
        bufp->chgIData(oldp+62,(((3U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0x14U))
                                  ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE
                                  : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___r_data_T_17)),32);
        bufp->chgBit(oldp+63,((0x73U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))));
        bufp->chgCData(oldp+64,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+65,((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+66,((IData)(vlSelf->Top__DOT__core__DOT__id_reg_imm)),32);
        bufp->chgQData(oldp+67,(vlSelf->Top__DOT__core__DOT__id_reg_rd1),64);
        bufp->chgQData(oldp+69,(vlSelf->Top__DOT__core__DOT__id_reg_rd2),64);
        bufp->chgIData(oldp+71,(vlSelf->Top__DOT__core__DOT__id_reg_pc),32);
        bufp->chgCData(oldp+72,(vlSelf->Top__DOT__core__DOT__id_reg_f7),7);
        bufp->chgCData(oldp+73,(vlSelf->Top__DOT__core__DOT__id_reg_f3),3);
        bufp->chgBit(oldp+74,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc));
        bufp->chgCData(oldp+75,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluOp),2);
        bufp->chgCData(oldp+76,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc1),2);
        bufp->chgQData(oldp+77,(vlSelf->Top__DOT__core__DOT__ex_reg_wd),64);
        bufp->chgCData(oldp+79,((7U & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                       >> 0xcU))),3);
        bufp->chgIData(oldp+80,(vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg),32);
        bufp->chgIData(oldp+81,(((IData)(4U) + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg)),32);
        bufp->chgIData(oldp+82,(((IData)(2U) + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg)),32);
        bufp->chgQData(oldp+83,(vlSelf->Top__DOT__core__DOT__id_reg_imm),64);
        bufp->chgCData(oldp+85,(vlSelf->Top__DOT__core__DOT__id_reg_wra),5);
        bufp->chgCData(oldp+86,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memToReg),2);
        bufp->chgBit(oldp+87,(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memWrite));
        bufp->chgCData(oldp+88,(vlSelf->Top__DOT__core__DOT__ex_reg_wra),5);
        bufp->chgCData(oldp+89,(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memToReg),2);
        bufp->chgIData(oldp+90,(vlSelf->Top__DOT__core__DOT__ex_reg_pc),32);
        bufp->chgQData(oldp+91,(vlSelf->Top__DOT__core__DOT__mem_reg_result),64);
        bufp->chgCData(oldp+93,(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg),2);
        bufp->chgIData(oldp+94,(vlSelf->Top__DOT__core__DOT__npcDelay_0),32);
        bufp->chgIData(oldp+95,(vlSelf->Top__DOT__core__DOT__npcDelay_1),32);
        bufp->chgIData(oldp+96,(vlSelf->Top__DOT__core__DOT__npcDelay_2),32);
        bufp->chgCData(oldp+97,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_0),5);
        bufp->chgCData(oldp+98,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_1),5);
        bufp->chgCData(oldp+99,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_0),5);
        bufp->chgCData(oldp+100,(vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_1),5);
        bufp->chgIData(oldp+101,(vlSelf->Top__DOT__core__DOT__rsDataDelay_0_0),32);
        bufp->chgIData(oldp+102,(vlSelf->Top__DOT__core__DOT__rsDataDelay_1_0),32);
        bufp->chgBit(oldp+103,(vlSelf->Top__DOT__core__DOT__stallDelay_0));
        bufp->chgBit(oldp+104,(vlSelf->Top__DOT__core__DOT__stallDelay_1));
        bufp->chgBit(oldp+105,(vlSelf->Top__DOT__core__DOT__stallDelay_2));
        bufp->chgIData(oldp+106,(vlSelf->Top__DOT__core__DOT__insDelay_0),32);
        bufp->chgIData(oldp+107,(vlSelf->Top__DOT__core__DOT__insDelay_1),32);
        bufp->chgIData(oldp+108,(vlSelf->Top__DOT__core__DOT__insDelay_2),32);
        bufp->chgCData(oldp+109,(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out),4);
        bufp->chgBit(oldp+110,((1U & ((IData)(vlSelf->Top__DOT__core__DOT__id_reg_f7) 
                                      >> 5U))));
        bufp->chgCData(oldp+111,((0x1fU & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                           >> 7U))),5);
        bufp->chgCData(oldp+112,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+113,((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+114,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA),2);
        bufp->chgCData(oldp+115,(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB),2);
        bufp->chgSData(oldp+116,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+117,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr_io_i_w_en));
        bufp->chgCData(oldp+118,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1),3);
        bufp->chgBit(oldp+119,((1U & ((~ (((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
                                           & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch)) 
                                          & (((0x1fU 
                                               & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                  >> 7U)) 
                                              == (0x1fU 
                                                  & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xfU))) 
                                             | ((0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                    >> 7U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x14U)))))) 
                                      & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu__DOT___T_14))))));
        bufp->chgBit(oldp+120,(((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                | ((0x3bU == (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                   | ((0x13U == (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                      | ((0x1bU == 
                                          (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                         | ((0x73U 
                                             == (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                            | ((3U 
                                                == 
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
        bufp->chgBit(oldp+121,(((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                & ((0x3bU != (0x7fU 
                                              & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                   & ((0x13U != (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                      & ((0x1bU != 
                                          (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                         & ((0x73U 
                                             != (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                                            & ((3U 
                                                != 
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
        bufp->chgBit(oldp+122,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable));
        bufp->chgQData(oldp+123,(((0U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xfU)))
                                   ? 0ULL : ((0x1fU 
                                              == (0x1fU 
                                                  & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xfU)))
                                              ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_31
                                              : ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)))
                                                  ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_30
                                                  : 
                                                 ((0x1dU 
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
        bufp->chgQData(oldp+125,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1),64);
        bufp->chgCData(oldp+127,((3U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                        >> 0xcU))),2);
        bufp->chgBit(oldp+128,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
        bufp->chgBit(oldp+129,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
        bufp->chgBit(oldp+130,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
        bufp->chgBit(oldp+131,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
        bufp->chgBit(oldp+132,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
        bufp->chgCData(oldp+133,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),3);
        bufp->chgCData(oldp+134,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))),3);
        bufp->chgIData(oldp+135,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                                   << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                              << 1U) 
                                             | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG)))),29);
        bufp->chgIData(oldp+136,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG),32);
        bufp->chgIData(oldp+137,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG),32);
        bufp->chgIData(oldp+138,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG),32);
        bufp->chgIData(oldp+139,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG),32);
        bufp->chgIData(oldp+140,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG),32);
        bufp->chgBit(oldp+141,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG));
        bufp->chgBit(oldp+142,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG));
        bufp->chgCData(oldp+143,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG),2);
        bufp->chgBit(oldp+144,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG));
        bufp->chgBit(oldp+145,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG));
        bufp->chgSData(oldp+146,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                   << 7U) | ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                             << 3U))),11);
        bufp->chgIData(oldp+147,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                   << 0x15U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                                 << 0x11U) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                                       << 7U) 
                                                      | ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                         << 3U)))))),32);
        bufp->chgIData(oldp+148,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                   << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                              << 3U) 
                                             | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))))),32);
        bufp->chgIData(oldp+149,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG),32);
        bufp->chgIData(oldp+150,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE),32);
        bufp->chgIData(oldp+151,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data),32);
        bufp->chgBit(oldp+152,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx));
        bufp->chgBit(oldp+153,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem));
        bufp->chgBit(oldp+154,((((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                   & (~ (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr))) 
                                  & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
                                 & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx))) 
                                & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem))));
        bufp->chgBit(oldp+155,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx));
        bufp->chgBit(oldp+156,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem));
        bufp->chgBit(oldp+157,((((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                   & (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr)) 
                                  & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
                                 & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx))) 
                                & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem))));
        bufp->chgCData(oldp+158,((0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)),7);
        bufp->chgQData(oldp+159,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0xfffffffffffffULL
                                     : 0ULL) << 0xcU) 
                                  | (QData)((IData)(
                                                    (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x14U))))),64);
        bufp->chgIData(oldp+161,((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0xcU)),20);
        bufp->chgQData(oldp+162,((((QData)((IData)(
                                                   ((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x1fU)
                                                     ? 0xffffffffU
                                                     : 0U))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (0xfffff000U 
                                                                & vlSelf->Top__DOT__core__DOT__if_reg_ins))))),64);
        bufp->chgSData(oldp+164,(((0xfe0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                              >> 7U)))),12);
        bufp->chgQData(oldp+165,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0xfffffffffffffULL
                                     : 0ULL) << 0xcU) 
                                  | (QData)((IData)(
                                                    ((0xfe0U 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                           >> 7U))))))),64);
        bufp->chgSData(oldp+167,(((0x800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0x14U)) 
                                  | ((0x400U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                << 3U)) 
                                     | ((0x3f0U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x15U)) 
                                        | (0xfU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 8U)))))),12);
        bufp->chgQData(oldp+168,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0x1fffffffffffULL
                                     : 0ULL) << 0xdU) 
                                  | (QData)((IData)(
                                                    ((0x1000U 
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
        bufp->chgIData(oldp+170,(((0x80000U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x15U)))))),20);
        bufp->chgQData(oldp+171,(((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                     >> 0x1fU) ? 0x7ffffffffffULL
                                     : 0ULL) << 0x15U) 
                                  | (QData)((IData)(
                                                    ((0x100000U 
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
        bufp->chgQData(oldp+173,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_0),64);
        bufp->chgQData(oldp+175,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_1),64);
        bufp->chgQData(oldp+177,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_2),64);
        bufp->chgQData(oldp+179,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_3),64);
        bufp->chgQData(oldp+181,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_4),64);
        bufp->chgQData(oldp+183,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_5),64);
        bufp->chgQData(oldp+185,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_6),64);
        bufp->chgQData(oldp+187,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_7),64);
        bufp->chgQData(oldp+189,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_8),64);
        bufp->chgQData(oldp+191,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_9),64);
        bufp->chgQData(oldp+193,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_10),64);
        bufp->chgQData(oldp+195,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_11),64);
        bufp->chgQData(oldp+197,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_12),64);
        bufp->chgQData(oldp+199,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_13),64);
        bufp->chgQData(oldp+201,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_14),64);
        bufp->chgQData(oldp+203,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_15),64);
        bufp->chgQData(oldp+205,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_16),64);
        bufp->chgQData(oldp+207,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_17),64);
        bufp->chgQData(oldp+209,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_18),64);
        bufp->chgQData(oldp+211,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_19),64);
        bufp->chgQData(oldp+213,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_20),64);
        bufp->chgQData(oldp+215,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_21),64);
        bufp->chgQData(oldp+217,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_22),64);
        bufp->chgQData(oldp+219,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_23),64);
        bufp->chgQData(oldp+221,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_24),64);
        bufp->chgQData(oldp+223,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_25),64);
        bufp->chgQData(oldp+225,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_26),64);
        bufp->chgQData(oldp+227,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_27),64);
        bufp->chgQData(oldp+229,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_28),64);
        bufp->chgQData(oldp+231,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_29),64);
        bufp->chgQData(oldp+233,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_30),64);
        bufp->chgQData(oldp+235,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_31),64);
        bufp->chgCData(oldp+237,(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset),3);
        bufp->chgCData(oldp+238,(vlSelf->Top__DOT__core__DOT__MEM__DOT__funct3),3);
        bufp->chgCData(oldp+239,((7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result))),3);
        bufp->chgCData(oldp+240,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0),8);
        bufp->chgCData(oldp+241,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1),8);
        bufp->chgCData(oldp+242,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2),8);
        bufp->chgCData(oldp+243,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3),8);
        bufp->chgCData(oldp+244,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4),8);
        bufp->chgCData(oldp+245,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5),8);
        bufp->chgCData(oldp+246,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6),8);
        bufp->chgCData(oldp+247,(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7),8);
        bufp->chgIData(oldp+248,((((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3) 
                                   << 0x18U) | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0))))),32);
        bufp->chgIData(oldp+249,((((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7) 
                                   << 0x18U) | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4))))),32);
        bufp->chgSData(oldp+250,(vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg),16);
        bufp->chgCData(oldp+251,(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg),2);
        bufp->chgBit(oldp+252,((2U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg))));
        bufp->chgBit(oldp+253,(vlSelf->Top__DOT__dmem__DOT__sram2_csb_i));
        bufp->chgBit(oldp+254,(vlSelf->Top__DOT__dmem__DOT__sram2_we_i));
        bufp->chgCData(oldp+255,((0xfU & (IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane))),4);
        bufp->chgIData(oldp+256,(vlSelf->Top__DOT__dmem__DOT__sram1_addr_i),21);
        bufp->chgIData(oldp+257,((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest)),32);
        bufp->chgCData(oldp+258,((0xfU & ((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane) 
                                          >> 4U))),4);
        bufp->chgIData(oldp+259,(vlSelf->Top__DOT__dmem__DOT__sram2_addr_i),21);
        bufp->chgIData(oldp+260,((IData)((vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest 
                                          >> 0x20U))),32);
        bufp->chgBit(oldp+261,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__csb));
        bufp->chgIData(oldp+262,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__addr_o),21);
        bufp->chgIData(oldp+263,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__wdata_o),32);
        bufp->chgCData(oldp+264,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__wmask_o),4);
        bufp->chgBit(oldp+265,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__we_o));
        bufp->chgBit(oldp+266,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__rvalid));
        bufp->chgBit(oldp+267,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+268,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+269,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgIData(oldp+270,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__addr0_reg),21);
        bufp->chgIData(oldp+271,(vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__din0_reg),32);
        bufp->chgBit(oldp+272,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__csb));
        bufp->chgIData(oldp+273,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__addr_o),21);
        bufp->chgIData(oldp+274,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__wdata_o),32);
        bufp->chgCData(oldp+275,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__wmask_o),4);
        bufp->chgBit(oldp+276,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__we_o));
        bufp->chgBit(oldp+277,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__rvalid));
        bufp->chgBit(oldp+278,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+279,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+280,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgIData(oldp+281,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__addr0_reg),21);
        bufp->chgIData(oldp+282,(vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__din0_reg),32);
        bufp->chgBit(oldp+283,(vlSelf->Top__DOT__imem__DOT__sram__DOT__csb));
        bufp->chgIData(oldp+284,(vlSelf->Top__DOT__imem__DOT__sram__DOT__addr_o),21);
        bufp->chgIData(oldp+285,(vlSelf->Top__DOT__imem__DOT__sram__DOT__wdata_o),32);
        bufp->chgCData(oldp+286,(vlSelf->Top__DOT__imem__DOT__sram__DOT__wmask_o),4);
        bufp->chgBit(oldp+287,(vlSelf->Top__DOT__imem__DOT__sram__DOT__we_o));
        bufp->chgBit(oldp+288,(vlSelf->Top__DOT__imem__DOT__sram__DOT__rvalid));
        bufp->chgBit(oldp+289,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg));
        bufp->chgBit(oldp+290,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg));
        bufp->chgCData(oldp+291,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg),4);
        bufp->chgIData(oldp+292,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg),21);
        bufp->chgIData(oldp+293,(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg),32);
        bufp->chgIData(oldp+294,(vlSelf->Top__DOT__tracer__DOT__clkCycle),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+295,((IData)(((1U == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                           ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
                                           : vlSelf->Top__DOT__core__DOT___GEN_6))),32);
        bufp->chgQData(oldp+296,((((QData)((IData)(
                                                   (- (IData)(
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
        bufp->chgIData(oldp+298,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump))
                                   ? (vlSelf->Top__DOT__core__DOT__if_reg_pc 
                                      + (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out))
                                   : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump))
                                       ? ((IData)((
                                                   ((0x1fU 
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
        bufp->chgBit(oldp+299,(((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_taken) 
                                | (0U != (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump)))));
        bufp->chgQData(oldp+300,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_rd2
                                   : vlSelf->Top__DOT__core__DOT__Execute__DOT___inputMux2_T_4)),64);
        bufp->chgQData(oldp+302,(((1U == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                   ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
                                   : vlSelf->Top__DOT__core__DOT___GEN_6)),64);
        bufp->chgQData(oldp+304,(((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                                   ? vlSelf->Top__DOT__core__DOT__id_reg_rd1
                                   : ((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                                       ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                       : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                                           ? vlSelf->Top__DOT__core__DOT__Execute_io_wb_result
                                           : 0ULL)))),64);
        bufp->chgQData(oldp+306,((((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU)) 
                                   == (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                >> 7U)))
                                   ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                   : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___GEN_6)),64);
        bufp->chgQData(oldp+308,((((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU)) 
                                   == (0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                                >> 7U)))
                                   ? (((QData)((IData)(
                                                       vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U])))
                                   : (((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xfU)) 
                                       == (0x1fU & 
                                           (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                            >> 7U)))
                                       ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                                       : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___GEN_6))),64);
        bufp->chgBit(oldp+310,(((0U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                              >> 0xcU)))
                                 ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                    == vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                 : ((1U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0xcU)))
                                     ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                        != vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                     : ((4U == (7U 
                                                & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xcU)))
                                         ? VL_LTS_IQQ(64, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                         : ((5U == 
                                             (7U & 
                                              (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xcU)))
                                             ? VL_GTES_IQQ(64, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 < vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                                                 : 
                                                (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                                 >= vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2))))))));
        bufp->chgIData(oldp+311,((vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                  | vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)),32);
        bufp->chgIData(oldp+312,((vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                  & (~ vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data))),32);
        bufp->chgIData(oldp+313,((((IData)(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction) 
                                   << 0x10U) | (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg))),32);
        bufp->chgBit(oldp+314,((((1U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
                                 & (vlSelf->Top__DOT__core__DOT__pc_io_in 
                                    >> 1U)) & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_pcSrc)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+315,(vlSelf->Top__DOT__dmem__DOT___GEN_14),64);
        bufp->chgQData(oldp+317,((QData)((IData)(vlSelf->Top__DOT__imem__DOT__sram_rdata_o))),64);
        bufp->chgIData(oldp+319,(vlSelf->Top__DOT__imem__DOT__sram_rdata_o),32);
        bufp->chgIData(oldp+320,((IData)(((QData)((IData)(vlSelf->Top__DOT__imem__DOT__sram_rdata_o)) 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+321,(vlSelf->Top__DOT__dmem__DOT__sram1_rdata_o),32);
        bufp->chgIData(oldp+322,(vlSelf->Top__DOT__dmem__DOT__sram2_rdata_o),32);
        bufp->chgQData(oldp+323,((((QData)((IData)(vlSelf->Top__DOT__dmem__DOT__sram2_rdata_o)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__dmem__DOT__sram1_rdata_o)))),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+325,((vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                  >> 2U)),32);
        bufp->chgIData(oldp+326,((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_readData)),32);
        bufp->chgQData(oldp+327,((((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->Top__DOT__core__DOT__MEM_io_readData 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_readData)))),64);
        bufp->chgIData(oldp+329,(vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o),32);
        bufp->chgQData(oldp+330,(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction),64);
        bufp->chgQData(oldp+332,(vlSelf->Top__DOT__core__DOT__Execute_io_wb_result),64);
        bufp->chgQData(oldp+334,((((QData)((IData)(
                                                   vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U])))),64);
        bufp->chgQData(oldp+336,(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData1),64);
        bufp->chgQData(oldp+338,(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData2),64);
        bufp->chgBit(oldp+340,(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_pcSrc));
        bufp->chgQData(oldp+341,(vlSelf->Top__DOT__core__DOT__MEM_io_readData),64);
        bufp->chgIData(oldp+343,(vlSelf->Top__DOT__core__DOT__pc_io_in),32);
        bufp->chgIData(oldp+344,((IData)(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction)),32);
        bufp->chgIData(oldp+345,(vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o),32);
        bufp->chgBit(oldp+346,(((0U != vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                & ((0U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                    ? ((0U == (3U & 
                                               (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 0xeU))) 
                                       | ((1U == (3U 
                                                  & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     >> 0xeU))) 
                                          | (3U == 
                                             (3U & 
                                              (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 0xeU)))))
                                    : ((1U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                        ? ((0U == (7U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xdU))) 
                                           | (IData)(vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37))
                                        : ((2U == (3U 
                                                   & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)) 
                                           & ((0U == 
                                               (3U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   >> 0xeU))) 
                                              | ((1U 
                                                  == 
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
        bufp->chgIData(oldp+347,(((0U == vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                   ? vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o
                                   : ((0U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                       ? vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_7
                                       : vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_62))),32);
        bufp->chgIData(oldp+348,((0x2023U | ((0x38000U 
                                              & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                 << 8U)) 
                                             | ((0xc00U 
                                                 & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                                | (0x200U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      << 3U)))))),18);
        bufp->chgIData(oldp+349,((0x6fU | ((0x1000000U 
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
        bufp->chgSData(oldp+350,((0x63U | ((0x1000U 
                                            & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               >> 1U)) 
                                           | ((0xc00U 
                                               & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                              | ((0x300U 
                                                  & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     << 5U)) 
                                                 | (0x80U 
                                                    & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                       >> 5U))))))),15);
        bufp->chgQData(oldp+351,(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1),64);
        bufp->chgQData(oldp+353,(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2),64);
        bufp->chgBit(oldp+355,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_taken));
        bufp->chgQData(oldp+356,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeData),64);
        bufp->chgQData(oldp+358,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1),64);
        bufp->chgQData(oldp+360,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2),64);
        bufp->chgIData(oldp+362,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data),32);
        bufp->chgIData(oldp+363,(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data),32);
        bufp->chgQData(oldp+364,(vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata),64);
        bufp->chgBit(oldp+366,((1U & (vlSelf->Top__DOT__core__DOT__pc_io_in 
                                      >> 1U))));
        bufp->chgIData(oldp+367,((0x1fffffU & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
                                               >> 2U))),21);
    }
    bufp->chgBit(oldp+368,(vlSelf->clock));
    bufp->chgBit(oldp+369,(vlSelf->reset));
    bufp->chgIData(oldp+370,(vlSelf->io_pin),32);
    bufp->chgIData(oldp+371,(vlSelf->io_fcsr),32);
    bufp->chgBit(oldp+372,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->chgIData(oldp+373,((IData)(((6U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                       ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_csr_data))
                                       : ((5U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                           ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_csr_data))
                                           : ((4U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                               ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_csr_data))
                                               : ((3U 
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
}

void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_cleanup\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
