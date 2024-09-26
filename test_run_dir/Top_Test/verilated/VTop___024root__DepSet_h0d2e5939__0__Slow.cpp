// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop___024root.h"

extern const VlWide<9>/*287:0*/ VTop__ConstPool__CONST_h06c05930_0;

VL_ATTR_COLD void VTop___024root___initial__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___initial__TOP__0\n"); );
    // Body
    VL_READMEM_N(true, 32, 2097152, 0, VL_CVT_PACK_STR_NW(9, VTop__ConstPool__CONST_h06c05930_0)
                 ,  &(vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VTop___024root___settle__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4;
    CData/*0:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7;
    CData/*0:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4;
    CData/*0:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7;
    QData/*63:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_77;
    QData/*63:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_110;
    QData/*63:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_123;
    QData/*63:0*/ Top__DOT__core__DOT__InstructionDecode__DOT__immediate__DOT___GEN_2;
    CData/*7:0*/ Top__DOT__core__DOT__MEM__DOT___GEN_12;
    CData/*7:0*/ Top__DOT__core__DOT__MEM__DOT___GEN_19;
    CData/*7:0*/ Top__DOT__core__DOT__MEM__DOT___GEN_27;
    QData/*63:0*/ Top__DOT__core__DOT__MEM__DOT___GEN_134;
    QData/*63:0*/ Top__DOT__core__DOT__MEM__DOT___GEN_159;
    QData/*63:0*/ Top__DOT__core__DOT__MEM__DOT___GEN_162;
    IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___io_instruction_o_T_42;
    IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___io_instruction_o_T_82;
    IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_16;
    IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___io_instruction_o_T_126;
    IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_32;
    IData/*31:0*/ Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_52;
    CData/*0:0*/ Top__DOT__dmem__DOT___GEN_0;
    VlWide<3>/*95:0*/ __Vtemp_h99160175__0;
    VlWide<3>/*95:0*/ __Vtemp_h98c0084d__0;
    VlWide<3>/*95:0*/ __Vtemp_h986cdebf__0;
    VlWide<3>/*95:0*/ __Vtemp_h9859e56f__0;
    VlWide<3>/*95:0*/ __Vtemp_h82f999f9__0;
    VlWide<3>/*95:0*/ __Vtemp_h825659f6__0;
    VlWide<3>/*95:0*/ __Vtemp_h065781c6__0;
    VlWide<3>/*95:0*/ __Vtemp_hdd428101__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8447bbf__0;
    // Body
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable 
        = ((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite) 
           | (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr));
    vlSelf->io_fcsr = ((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
                         << 5U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                    << 4U) | ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                              << 3U))) 
                       | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                           << 2U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                      << 1U) | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))));
    vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out 
        = ((0U == (IData)(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluOp))
            ? 2U : ((0U == (IData)(vlSelf->Top__DOT__core__DOT__id_reg_f3))
                     ? ((1U & ((~ (IData)(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc)) 
                               | (~ ((IData)(vlSelf->Top__DOT__core__DOT__id_reg_f7) 
                                     >> 5U)))) ? 2U
                         : ((0x20U & (IData)(vlSelf->Top__DOT__core__DOT__id_reg_f7))
                             ? 0xaU : 0xfU)) : ((1U 
                                                 == (IData)(vlSelf->Top__DOT__core__DOT__id_reg_f3))
                                                 ? 
                                                ((0x20U 
                                                  & (IData)(vlSelf->Top__DOT__core__DOT__id_reg_f7))
                                                  ? 
                                                 ((0x20U 
                                                   & (IData)(vlSelf->Top__DOT__core__DOT__id_reg_f7))
                                                   ? 0xcU
                                                   : 0xfU)
                                                  : 6U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->Top__DOT__core__DOT__id_reg_f3))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__id_reg_f3))
                                                   ? 5U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__id_reg_f3))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->Top__DOT__core__DOT__id_reg_f7))
                                                     ? 
                                                    ((0x20U 
                                                      & (IData)(vlSelf->Top__DOT__core__DOT__id_reg_f7))
                                                      ? 0xdU
                                                      : 0xfU)
                                                     : 7U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__id_reg_f3))
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__id_reg_f3))
                                                      ? 1U
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__id_reg_f3))
                                                       ? 9U
                                                       : 0xfU)))))))));
    vlSelf->Top__DOT__dmem__DOT___rdata64_T = (((QData)((IData)(vlSelf->Top__DOT__dmem__DOT__sram2_rdata_o)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->Top__DOT__dmem__DOT__sram1_rdata_o)));
    vlSelf->Top__DOT__tracer__DOT___clkCycle_T_1 = 
        ((IData)(1U) + vlSelf->Top__DOT__tracer__DOT__clkCycle);
    vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_valid 
        = ((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
           | (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead));
    vlSelf->Top__DOT__core__DOT___GEN_6 = ((2U == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                                            ? (QData)((IData)(
                                                              ((IData)(4U) 
                                                               + vlSelf->Top__DOT__core__DOT__mem_reg_pc)))
                                            : vlSelf->Top__DOT__core__DOT__mem_reg_result);
    Top__DOT__core__DOT__MEM__DOT___GEN_12 = (0xffU 
                                              & ((6U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))
                                                  ? (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd)
                                                  : (IData)(
                                                            (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                             >> 0x30U))));
    Top__DOT__core__DOT__MEM__DOT___GEN_19 = (0xffU 
                                              & ((5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))
                                                  ? (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd)
                                                  : (IData)(
                                                            (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                             >> 0x28U))));
    Top__DOT__core__DOT__MEM__DOT___GEN_27 = (0xffU 
                                              & ((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))
                                                  ? (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd)
                                                  : (IData)(
                                                            (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                             >> 0x20U))));
    if (((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
         & (0U == (0x7000U & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))) {
        if ((0U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
            vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 1U;
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0 
                = (0xffU & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 8U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x10U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x18U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x38U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x30U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x28U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x20U)));
        } else if ((1U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
            vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 2U;
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 8U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 
                = (0xffU & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x10U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x18U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x38U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x30U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x28U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x20U)));
        } else if ((2U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
            vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 4U;
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 8U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x10U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
                = (0xffU & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x18U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x38U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x30U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x28U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x20U)));
        } else if ((3U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
            vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 8U;
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 8U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x10U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x18U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                = (0xffU & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x38U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x30U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x28U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x20U)));
        } else {
            if ((4U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
                vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 0x10U;
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 8U)));
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 0x10U)));
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 0x18U)));
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 0x20U)));
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 0x38U)));
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 0x30U)));
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 0x28U)));
            } else {
                if ((5U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
                    vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 0x20U;
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0 
                        = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                            >> 8U)));
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 
                        = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                            >> 0x10U)));
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
                        = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                            >> 0x18U)));
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                        = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                            >> 0x28U)));
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                        = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                            >> 0x38U)));
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                        = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                            >> 0x30U)));
                } else {
                    if ((6U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
                        vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 0x40U;
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 8U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x10U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x18U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x30U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x38U)));
                    } else if ((7U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
                        vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 0x80U;
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 8U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x10U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x18U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x38U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                            = (0xffU & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd));
                    } else {
                        vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 0U;
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0 
                            = (0xffU & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 8U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x10U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x18U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x38U)));
                    }
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                        = (0xffU & (IData)(Top__DOT__core__DOT__MEM__DOT___GEN_12));
                }
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 
                    = (0xffU & (IData)(Top__DOT__core__DOT__MEM__DOT___GEN_19));
            }
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4 
                = (0xffU & (IData)(Top__DOT__core__DOT__MEM__DOT___GEN_27));
        }
    } else if (((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite) 
                & (0x1000U == (0x7000U & vlSelf->Top__DOT__core__DOT__ex_reg_ins)))) {
        if ((0U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
            vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 3U;
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0 
                = (0xffU & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 8U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x10U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x18U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x38U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x30U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x28U)));
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4 
                = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                    >> 0x20U)));
        } else {
            if ((1U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
                vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 6U;
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 
                    = (0xffU & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd));
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 8U)));
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 0x18U)));
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 0x38U)));
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 0x30U)));
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 0x28U)));
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 0x20U)));
            } else {
                if ((2U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
                    vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 0xcU;
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
                        = (0xffU & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd));
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                        = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                            >> 8U)));
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                        = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                            >> 0x38U)));
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                        = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                            >> 0x30U)));
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 
                        = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                            >> 0x28U)));
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4 
                        = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                            >> 0x20U)));
                } else {
                    if ((3U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
                        vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 0x18U;
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                            = (0xffU & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x38U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x30U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x28U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 8U)));
                    } else {
                        if ((4U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
                            vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 0x30U;
                            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                                = (0xffU & (IData)(
                                                   (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x38U)));
                            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                                = (0xffU & (IData)(
                                                   (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 0x30U)));
                            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 
                                = (0xffU & (IData)(
                                                   (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                    >> 8U)));
                        } else {
                            if ((5U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
                                vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 0x60U;
                                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                                    = (0xffU & (IData)(
                                                       (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                        >> 0x38U)));
                                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                                    = (0xffU & (IData)(
                                                       (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                        >> 8U)));
                            } else {
                                if ((6U == (7U & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_result)))) {
                                    vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 0xc0U;
                                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                                        = (0xffU & (IData)(
                                                           (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                            >> 8U)));
                                } else {
                                    vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 0U;
                                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
                                        = (0xffU & (IData)(
                                                           (vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                            >> 0x38U)));
                                }
                                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
                                    = (0xffU & (IData)(Top__DOT__core__DOT__MEM__DOT___GEN_12));
                            }
                            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 
                                = (0xffU & (IData)(Top__DOT__core__DOT__MEM__DOT___GEN_19));
                        }
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
                            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                                >> 0x18U)));
                        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4 
                            = (0xffU & (IData)(Top__DOT__core__DOT__MEM__DOT___GEN_27));
                    }
                    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
                        = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                            >> 0x10U)));
                }
                vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 
                    = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                        >> 8U)));
            }
            vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0 
                = (0xffU & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd));
        }
    } else {
        vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = 0xffU;
        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0 
            = (0xffU & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_wd));
        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 
            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                >> 8U)));
        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 
            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                >> 0x10U)));
        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 
            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                >> 0x18U)));
        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 
            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                >> 0x38U)));
        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 
            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                >> 0x30U)));
        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 
            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                >> 0x28U)));
        vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4 
            = (0xffU & (IData)((vlSelf->Top__DOT__core__DOT__ex_reg_wd 
                                >> 0x20U)));
    }
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE 
        = (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG) 
            << 5U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                       << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                  << 3U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                             << 2U) 
                                            | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                << 1U) 
                                               | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG))))));
    vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA 
        = (((((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                        >> 0xfU)) == (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                               >> 7U))) 
             & (0U != (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                >> 7U)))) & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_regWrite))
            ? 1U : (((((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                 >> 0xfU)) == (0x1fU 
                                               & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                                  >> 7U))) 
                      & (0U != (0x1fU & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                         >> 7U)))) 
                     & (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite))
                     ? 2U : 0U));
    vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB 
        = (((((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                        >> 0x14U)) == (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                                >> 7U))) 
             & (0U != (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                >> 7U)))) & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_regWrite))
            ? 1U : (((((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                 >> 0x14U)) == (0x1fU 
                                                & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                                   >> 7U))) 
                      & (0U != (0x1fU & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                         >> 7U)))) 
                     & (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite))
                     ? 2U : 0U));
    vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction 
        = ((IData)(vlSelf->Top__DOT__imem__DOT__validReg)
            ? (((QData)((IData)(((QData)((IData)(vlSelf->Top__DOT__imem__DOT__sram_rdata_o)) 
                                 >> 0x20U))) << 0x20U) 
               | (QData)((IData)(vlSelf->Top__DOT__imem__DOT__sram_rdata_o)))
            : 0ULL);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr_io_i_w_en 
        = ((0x73U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
           & (0U != (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                              >> 0xfU))));
    Top__DOT__core__DOT__InstructionDecode__DOT__immediate__DOT___GEN_2 
        = (((0x17U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
            | (0x37U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)))
            ? (((QData)((IData)(((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x1fU) ? 0xffffffffU
                                  : 0U))) << 0x20U) 
               | (QData)((IData)((0xfffff000U & vlSelf->Top__DOT__core__DOT__if_reg_ins))))
            : ((0x23U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                ? ((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                      >> 0x1fU) ? 0xfffffffffffffULL
                      : 0ULL) << 0xcU) | (QData)((IData)(
                                                         ((0xfe0U 
                                                           & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                                >> 7U))))))
                : ((0x63U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                    ? ((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                          >> 0x1fU) ? 0x1fffffffffffULL
                          : 0ULL) << 0xdU) | (QData)((IData)(
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
                                                                          >> 7U))))))))
                    : ((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                          >> 0x1fU) ? 0x7ffffffffffULL
                          : 0ULL) << 0x15U) | (QData)((IData)(
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
                                                                           >> 0x14U)))))))))));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump 
        = ((0x33U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
            ? 0U : ((0x3bU == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                     ? 0U : ((0x13U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                              ? 0U : ((0x1bU == (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                       ? 0U : ((0x73U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                ? 0U
                                                : (
                                                   (3U 
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
                                                          ? 1U
                                                          : 
                                                         ((0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->Top__DOT__core__DOT__if_reg_ins))
                                                           ? 2U
                                                           : 0U)))))))))))));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___r_data_T_17 
        = ((2U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                   >> 0x14U)) ? (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG)
            : ((1U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                       >> 0x14U)) ? (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG) 
                                      << 4U) | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG)))))
                : ((0x304U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                               >> 0x14U)) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG
                    : ((0x341U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                   >> 0x14U)) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG
                        : ((0x305U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0x14U)) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG
                            : ((0x342U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U))
                                ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG
                                : ((0x300U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U))
                                    ? (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG) 
                                        << 0x15U) | 
                                       (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG) 
                                         << 0x11U) 
                                        | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG) 
                                            << 0xbU) 
                                           | (((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG) 
                                               << 7U) 
                                              | ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG) 
                                                 << 3U)))))
                                    : ((0xf14U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U))
                                        ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG
                                        : ((0x301U 
                                            == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U))
                                            ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG
                                            : 0U)))))))));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7 
        = ((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_wra) 
           == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                        >> 0xfU)));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4 
        = (((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite) 
            & (0x73U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))) 
           & (0U != (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_wra)));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_36 
        = ((0x13U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
           & ((0x1bU != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
              & ((0x73U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                 & ((3U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                    & ((0xbU != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                       & ((0x23U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                          & (0x63U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))))))));
    Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7 
        = ((0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                     >> 7U)) == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)));
    Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4 
        = (((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_regWrite) 
            & (0x73U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))) 
           & (0U != (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                              >> 7U))));
    Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_77 
        = ((0xdU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                              >> 0xfU))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_13
            : ((0xcU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0xfU))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_12
                : ((0xbU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0xfU))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_11
                    : ((0xaU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)))
                        ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_10
                        : ((9U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0xfU)))
                            ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_9
                            : ((8U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)))
                                ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_8
                                : ((7U == (0x1fU & 
                                           (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0xfU)))
                                    ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_7
                                    : ((6U == (0x1fU 
                                               & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0xfU)))
                                        ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_6
                                        : ((5U == (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)))
                                            ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xfU)))
                                                ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0xfU)))
                                                      ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_1
                                                      : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_0)))))))))))));
    Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_110 
        = ((0xdU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                              >> 0x14U))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_13
            : ((0xcU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                  >> 0x14U))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_12
                : ((0xbU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                      >> 0x14U))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_11
                    : ((0xaU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0x14U)))
                        ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_10
                        : ((9U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x14U)))
                            ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_9
                            : ((8U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)))
                                ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_8
                                : ((7U == (0x1fU & 
                                           (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x14U)))
                                    ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_7
                                    : ((6U == (0x1fU 
                                               & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U)))
                                        ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_6
                                        : ((5U == (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0x14U)))
                                            ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x14U)))
                                                ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0x14U)))
                                                    ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U)))
                                                     ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0x14U)))
                                                      ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_1
                                                      : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_0)))))))))))));
    Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7 
        = ((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                     >> 7U)) == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                          >> 0xfU)));
    Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4 
        = (((IData)(vlSelf->Top__DOT__core__DOT__id_reg_ctl_regWrite) 
            & (0x73U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))) 
           & (0U != (0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                              >> 7U))));
    vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata = 
        ((IData)(vlSelf->Top__DOT__dmem__DOT__validReg)
          ? (QData)((IData)(vlSelf->Top__DOT__dmem__DOT___rdata64_T))
          : 0ULL);
    vlSelf->Top__DOT__dmem__DOT__sram2_we_i = ((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_valid) 
                                               & (~ (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite)));
    Top__DOT__dmem__DOT___GEN_0 = (1U & (~ ((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_valid) 
                                            & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite))));
    if (((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_valid) 
         & (~ (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite)))) {
        vlSelf->Top__DOT__dmem__DOT__sram1_addr_i = 
            (0x1fffffU & (IData)((0x7ffULL & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                              >> 2U))));
        vlSelf->Top__DOT__dmem__DOT__sram2_addr_i = 
            (0x1fffffU & (IData)((0x7ffULL & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                              >> 2U))));
    } else {
        vlSelf->Top__DOT__dmem__DOT__sram1_addr_i = 
            (0x1fffffU & (IData)((0x7ffULL & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                              >> 2U))));
        vlSelf->Top__DOT__dmem__DOT__sram2_addr_i = 
            (0x1fffffU & (IData)((0x7ffULL & (vlSelf->Top__DOT__core__DOT__ex_reg_result 
                                              >> 2U))));
    }
    vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
        = ((1U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg))
            ? 0x13U : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg))
                        ? (((IData)(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction) 
                            << 0x10U) | (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg))
                        : (IData)(vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction)));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out 
        = (((((((3U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
                | (0xfU == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))) 
               | (0x13U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))) 
              | (0x1bU == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))) 
             | (0x67U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins))) 
            | (0x73U == (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)))
            ? ((((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                  >> 0x1fU) ? 0xfffffffffffffULL : 0ULL) 
                << 0xcU) | (QData)((IData)((vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0x14U))))
            : Top__DOT__core__DOT__InstructionDecode__DOT__immediate__DOT___GEN_2);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
        = ((3U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                   >> 0x14U)) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE
            : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___r_data_T_17);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch 
        = ((0x33U != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
           & ((0x3bU != (0x7fU & vlSelf->Top__DOT__core__DOT__if_reg_ins)) 
              & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_36)));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_90 
        = ((0x1aU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                               >> 0xfU))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_26
            : ((0x19U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                   >> 0xfU))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_25
                : ((0x18U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0xfU))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_24
                    : ((0x17U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0xfU)))
                        ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_23
                        : ((0x16U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0xfU)))
                            ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_22
                            : ((0x15U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0xfU)))
                                ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xfU)))
                                    ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0xfU)))
                                        ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)))
                                            ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0xfU)))
                                                ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0xfU)))
                                                      ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_14
                                                      : Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_77)))))))))))));
    Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_123 
        = ((0x1aU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                               >> 0x14U))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_26
            : ((0x19U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                   >> 0x14U))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_25
                : ((0x18U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0x14U))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_24
                    : ((0x17U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0x14U)))
                        ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_23
                        : ((0x16U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                               >> 0x14U)))
                            ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_22
                            : ((0x15U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U)))
                                ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x14U)))
                                    ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                     >> 0x14U)))
                                        ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0x14U)))
                                            ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x14U)))
                                                ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0x14U)))
                                                    ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U)))
                                                     ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0x14U)))
                                                      ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_14
                                                      : Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_110)))))))))))));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx 
        = (((IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4) 
            & (~ (IData)(vlSelf->Top__DOT__core__DOT__id_reg_is_csr))) 
           & (IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx 
        = (((IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_4) 
            & (IData)(vlSelf->Top__DOT__core__DOT__id_reg_is_csr)) 
           & (IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecEx_T_7));
    Top__DOT__core__DOT__MEM__DOT___GEN_134 = ((1U 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                ? (
                                                   (((1U 
                                                      & (IData)(
                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                 >> 0xfU)))
                                                      ? 0xffffffffffffffULL
                                                      : 0ULL) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 8U))))))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                  >> 0x17U)))
                                                       ? 0xffffffffffffffULL
                                                       : 0ULL) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x10U))))))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                     ? 
                                                    ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffffffffULL
                                                        : 0ULL) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x18U))))))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                      ? 
                                                     ((((1U 
                                                         & (IData)(
                                                                   (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                    >> 0x27U)))
                                                         ? 0xffffffffffffffULL
                                                         : 0ULL) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x20U))))))
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                       ? 
                                                      ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                     >> 0x2fU)))
                                                          ? 0xffffffffffffffULL
                                                          : 0ULL) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x28U))))))
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                        ? 
                                                       ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                      >> 0x37U)))
                                                           ? 0xffffffffffffffULL
                                                           : 0ULL) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x30U))))))
                                                        : 
                                                       ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                      >> 0x3fU)))
                                                           ? 0xffffffffffffffULL
                                                           : 0ULL) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x38U))))))))))));
    Top__DOT__core__DOT__MEM__DOT___GEN_159 = ((0U 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                ? (
                                                   (((1U 
                                                      & (IData)(
                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                 >> 0xfU)))
                                                      ? 0xffffffffffffULL
                                                      : 0ULL) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata)))))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                  >> 0x17U)))
                                                       ? 0xffffffffffffULL
                                                       : 0ULL) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 8U))))))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                     ? 
                                                    ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffffffULL
                                                        : 0ULL) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x10U))))))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                      ? 
                                                     ((((1U 
                                                         & (IData)(
                                                                   (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                    >> 0x27U)))
                                                         ? 0xffffffffffffULL
                                                         : 0ULL) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x18U))))))
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                       ? 
                                                      ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                     >> 0x2fU)))
                                                          ? 0xffffffffffffULL
                                                          : 0ULL) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x20U))))))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                        ? 
                                                       ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                      >> 0x37U)))
                                                           ? 0xffffffffffffULL
                                                           : 0ULL) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x28U))))))
                                                        : 
                                                       ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                      >> 0x3fU)))
                                                           ? 0xffffffffffffULL
                                                           : 0ULL) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x30U))))))))))));
    vlSelf->Top__DOT__dmem__DOT__sram2_csb_i = ((~ 
                                                 ((IData)(vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_valid) 
                                                  & (~ (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite)))) 
                                                & (IData)(Top__DOT__dmem__DOT___GEN_0));
    vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest 
        = (((QData)((IData)((((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7) 
                              << 0x18U) | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6) 
                                            << 0x10U) 
                                           | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5) 
                                               << 8U) 
                                              | (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4)))))) 
            << 0x20U) | (QData)((IData)((((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3) 
                                          << 0x18U) 
                                         | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1) 
                                                << 8U) 
                                               | (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0)))))));
    vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_7 
        = ((0U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                         >> 0xeU))) ? (0x10413U | (
                                                   (0x3c000000U 
                                                    & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                       << 0x13U)) 
                                                   | ((0x3000000U 
                                                       & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                          << 0xdU)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                             << 0x12U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                << 0x10U)) 
                                                            | (0x380U 
                                                               & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                  << 5U)))))))
            : ((1U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                             >> 0xeU))) ? (0x42403U 
                                           | ((0x4000000U 
                                               & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                  << 0x15U)) 
                                              | ((0x3800000U 
                                                  & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     << 0xdU)) 
                                                 | ((0x400000U 
                                                     & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                        << 0x10U)) 
                                                    | ((0x38000U 
                                                        & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                           << 8U)) 
                                                       | (0x380U 
                                                          & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                             << 5U)))))))
                : ((3U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                 >> 0xeU))) ? (0x842023U 
                                               | ((0x4000000U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      << 0x15U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                         << 0xdU)) 
                                                     | ((0x700000U 
                                                         & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                            << 0x12U)) 
                                                        | ((0x38000U 
                                                            & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                               << 8U)) 
                                                           | ((0xc00U 
                                                               & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                                              | (0x200U 
                                                                 & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                    << 3U))))))))
                    : vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)));
    Top__DOT__core__DOT__CompressedDecoder__DOT___io_instruction_o_T_42 
        = (0x6fU | ((0x80000000U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                    << 0x13U)) | ((0x40000000U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      << 0x16U)) 
                                                  | ((0x30000000U 
                                                      & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                         << 0x13U)) 
                                                     | ((0x8000000U 
                                                         & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                            << 0x15U)) 
                                                        | ((0x4000000U 
                                                            & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                               << 0x13U)) 
                                                           | ((0x2000000U 
                                                               & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                  << 0x17U)) 
                                                              | ((0x1000000U 
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
                                                                             << 7U))))))))))));
    Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_52 
        = ((2U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                         >> 0xeU))) ? ((0x1000U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                        ? ((0U != (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 2U)))
                                            ? (0x33U 
                                               | ((0x1f00000U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      << 0x12U)) 
                                                  | ((0xf8000U 
                                                      & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                         << 8U)) 
                                                     | (0xf80U 
                                                        & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))))
                                            : ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                    >> 7U)))
                                                ? 0x100073U
                                                : (0xe7U 
                                                   | (0xf8000U 
                                                      & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                         << 8U)))))
                                        : ((0U != (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 2U)))
                                            ? (0x33U 
                                               | ((0x1f00000U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      << 0x12U)) 
                                                  | (0xf80U 
                                                     & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)))
                                            : (0x67U 
                                               | (0xf8000U 
                                                  & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     << 8U)))))
            : ((3U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                             >> 0xeU))) ? (0x12023U 
                                           | ((0xc000000U 
                                               & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                  << 0x13U)) 
                                              | ((0x2000000U 
                                                  & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     << 0xdU)) 
                                                 | ((0x1f00000U 
                                                     & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                        << 0x12U)) 
                                                    | (0xe00U 
                                                       & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)))))
                : vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o));
    Top__DOT__core__DOT__CompressedDecoder__DOT___io_instruction_o_T_82 
        = (0x45413U | ((0x40000000U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                       << 0x14U)) | 
                       ((0x1f00000U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                       << 0x12U)) | 
                        ((0x38000U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                      << 8U)) | (0x380U 
                                                 & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)))));
    Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_16 
        = ((0U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                         >> 5U))) ? (0x40840433U | 
                                     ((0x700000U & 
                                       (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                        << 0x12U)) 
                                      | ((0x38000U 
                                          & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             << 8U)) 
                                         | (0x380U 
                                            & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))))
            : ((1U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                             >> 5U))) ? (0x844433U 
                                         | ((0x700000U 
                                             & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                << 0x12U)) 
                                            | ((0x38000U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   << 8U)) 
                                               | (0x380U 
                                                  & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))))
                : ((2U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                 >> 5U))) ? (0x846433U 
                                             | ((0x700000U 
                                                 & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                    << 0x12U)) 
                                                | ((0x38000U 
                                                    & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                       << 8U)) 
                                                   | (0x380U 
                                                      & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))))
                    : ((3U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                     >> 5U))) ? (0x847433U 
                                                 | ((0x700000U 
                                                     & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                        << 0x12U)) 
                                                    | ((0x38000U 
                                                        & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                           << 8U)) 
                                                       | (0x380U 
                                                          & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))))
                        : vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))));
    Top__DOT__core__DOT__CompressedDecoder__DOT___io_instruction_o_T_126 
        = (0x40063U | ((((0x1000U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                          ? 0xfU : 0U) << 0x1cU) | 
                       ((0xc000000U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                       << 0x15U)) | 
                        ((0x2000000U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                        << 0x17U)) 
                         | ((0x38000U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                         << 8U)) | 
                            ((0x1000U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                         >> 1U)) | 
                             ((0xc00U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                              | ((0x300U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                            << 5U)) 
                                 | (0x80U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                             >> 5U))))))))));
    vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37 
        = ((1U == (7U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                         >> 0xdU))) | ((5U == (7U & 
                                               (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 0xdU))) 
                                       | ((2U == (7U 
                                                  & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     >> 0xdU))) 
                                          | ((3U == 
                                              (7U & 
                                               (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                >> 0xdU))) 
                                             | ((4U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     >> 0xdU)))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xaU))) 
                                                 | ((1U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                         >> 0xaU))) 
                                                    | ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                            >> 0xaU))) 
                                                       | (IData)(
                                                                 ((0xc00U 
                                                                   == 
                                                                   (0xc00U 
                                                                    & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)) 
                                                                  & ((0U 
                                                                      == 
                                                                      (3U 
                                                                       & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                          >> 5U))) 
                                                                     | ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                             >> 5U))) 
                                                                        | ((2U 
                                                                            == 
                                                                            (3U 
                                                                             & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                                >> 5U))) 
                                                                           | (3U 
                                                                              == 
                                                                              (3U 
                                                                               & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                                >> 5U)))))))))))
                                                 : 
                                                ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xdU))) 
                                                 | (7U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                        >> 0xdU)))))))));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu__DOT___T_14 
        = (((((IData)(vlSelf->Top__DOT__core__DOT__id_reg_ctl_memRead) 
              | (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch)) 
             & (((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                           >> 7U)) == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU))) 
                | ((0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                             >> 7U)) == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0x14U))))) 
            & (((0U != (0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                 >> 7U))) & (0U != 
                                             (0x1fU 
                                              & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0xfU)))) 
               | ((0U != (0x1fU & (vlSelf->Top__DOT__core__DOT__id_reg_ins 
                                   >> 7U))) & (0U != 
                                               (0x1fU 
                                                & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                   >> 0x14U)))))) 
           & (0x63U != (0x7fU & vlSelf->Top__DOT__core__DOT__id_reg_ins)));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1 
        = ((0U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                            >> 0x14U))) ? 0ULL : ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                       >> 0x14U)))
                                                   ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_31
                                                   : 
                                                  ((0x1eU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                        >> 0x14U)))
                                                    ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_30
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                         >> 0x14U)))
                                                     ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_29
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                          >> 0x14U)))
                                                      ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_28
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                           >> 0x14U)))
                                                       ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_27
                                                       : Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_123))))));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem 
        = ((((IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4) 
             & (~ (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_is_csr))) 
            & (IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7)) 
           & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx)));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem 
        = ((((IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_4) 
             & (IData)(vlSelf->Top__DOT__core__DOT__ex_reg_is_csr)) 
            & (IData)(Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecMem_T_7)) 
           & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx)));
    Top__DOT__core__DOT__MEM__DOT___GEN_162 = ((4U 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__funct3))
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata))))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                     ? (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 8U)))))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x10U)))))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                       ? (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x18U)))))
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                        ? (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x20U)))))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                         ? (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x28U)))))
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                          ? (QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x30U)))))
                                                          : (QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x38U))))))))))))
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__funct3))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                     ? (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata))))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                      ? (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 8U)))))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                       ? (QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x10U)))))
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                        ? (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x18U)))))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                         ? (QData)((IData)(
                                                                           (0xffffU 
                                                                            & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x20U)))))
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                                                          ? (QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x28U)))))
                                                          : (QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(
                                                                                (vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                                                                >> 0x30U)))))))))))
                                                    : Top__DOT__core__DOT__MEM__DOT___GEN_159));
    Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_32 
        = ((3U == (7U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                         >> 0xdU))) ? ((2U == (0x1fU 
                                               & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                  >> 7U)))
                                        ? (0x10113U 
                                           | ((((0x1000U 
                                                 & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                                 ? 7U
                                                 : 0U) 
                                               << 0x1dU) 
                                              | ((0x18000000U 
                                                  & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                     << 0x18U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                        << 0x15U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                           << 0x17U)) 
                                                       | (0x1000000U 
                                                          & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                             << 0x12U)))))))
                                        : (0x37U | 
                                           ((((0x1000U 
                                               & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                               ? 0x7fffU
                                               : 0U) 
                                             << 0x11U) 
                                            | ((0x1f000U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   << 0xaU)) 
                                               | (0xf80U 
                                                  & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)))))
            : ((4U == (7U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                             >> 0xdU))) ? ((0U == (3U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      >> 0xaU)))
                                            ? Top__DOT__core__DOT__CompressedDecoder__DOT___io_instruction_o_T_82
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                    >> 0xaU)))
                                                ? Top__DOT__core__DOT__CompressedDecoder__DOT___io_instruction_o_T_82
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                        >> 0xaU)))
                                                    ? 
                                                   (0x47413U 
                                                    | ((((0x1000U 
                                                          & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                                          ? 0x3fU
                                                          : 0U) 
                                                        << 0x1aU) 
                                                       | ((0x2000000U 
                                                           & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                              << 0xdU)) 
                                                          | ((0x1f00000U 
                                                              & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                 << 0x12U)) 
                                                             | ((0x38000U 
                                                                 & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                    << 8U)) 
                                                                | (0x380U 
                                                                   & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))))))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                         >> 0xaU)))
                                                     ? Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_16
                                                     : vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))))
                : ((6U == (7U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                 >> 0xdU))) ? Top__DOT__core__DOT__CompressedDecoder__DOT___io_instruction_o_T_126
                    : ((7U == (7U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                     >> 0xdU))) ? Top__DOT__core__DOT__CompressedDecoder__DOT___io_instruction_o_T_126
                        : vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write 
        = (1U & ((~ (((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
                      & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch)) 
                     & (((0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                   >> 7U)) == (0x1fU 
                                               & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                  >> 0xfU))) 
                        | ((0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                     >> 7U)) == (0x1fU 
                                                 & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                    >> 0x14U)))))) 
                 & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu__DOT___T_14))));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1 
        = ((((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
               & (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr)) 
              & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
             & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx))) 
            & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem))
            ? 6U : ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem)
                     ? 5U : ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx)
                              ? 4U : ((((((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4) 
                                          & (~ (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr))) 
                                         & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7)) 
                                        & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx))) 
                                       & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem))
                                       ? 3U : ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem)
                                                ? 2U
                                                : (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx))))));
    vlSelf->Top__DOT__core__DOT__MEM_io_readData = 
        ((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead)
          ? ((2U == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__funct3))
              ? vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata
              : ((0U == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__funct3))
                  ? ((0U == (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__offset))
                      ? ((((1U & (IData)((vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata 
                                          >> 7U))) ? 0xffffffffffffffULL
                            : 0ULL) << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata)))))
                      : Top__DOT__core__DOT__MEM__DOT___GEN_134)
                  : 0ULL)) : Top__DOT__core__DOT__MEM__DOT___GEN_162);
    vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_62 
        = ((1U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
            ? ((0U == (7U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                             >> 0xdU))) ? (0x13U | 
                                           ((((0x1000U 
                                               & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                               ? 0x3fU
                                               : 0U) 
                                             << 0x1aU) 
                                            | ((0x2000000U 
                                                & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                   << 0xdU)) 
                                               | ((0x1f00000U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      << 0x12U)) 
                                                  | ((0xf8000U 
                                                      & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                         << 8U)) 
                                                     | (0xf80U 
                                                        & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))))))
                : ((1U == (7U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                 >> 0xdU))) ? Top__DOT__core__DOT__CompressedDecoder__DOT___io_instruction_o_T_42
                    : ((5U == (7U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                     >> 0xdU))) ? Top__DOT__core__DOT__CompressedDecoder__DOT___io_instruction_o_T_42
                        : ((2U == (7U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                         >> 0xdU)))
                            ? (0x13U | ((((0x1000U 
                                           & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)
                                           ? 0x3fU : 0U) 
                                         << 0x1aU) 
                                        | ((0x2000000U 
                                            & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                               << 0xdU)) 
                                           | ((0x1f00000U 
                                               & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                  << 0x12U)) 
                                              | (0xf80U 
                                                 & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)))))
                            : Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_32))))
            : ((2U == (3U & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                ? ((0U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                 >> 0xeU))) ? (0x1013U 
                                               | ((0x1f00000U 
                                                   & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                      << 0x12U)) 
                                                  | ((0xf8000U 
                                                      & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                         << 8U)) 
                                                     | (0xf80U 
                                                        & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))))
                    : ((1U == (3U & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                     >> 0xeU))) ? (0x12003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                             << 0xdU)) 
                                                         | ((0x1c00000U 
                                                             & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)))))
                        : Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_52))
                : vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o));
    vlSelf->io_pin = (IData)(((1U == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
                               ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
                               : vlSelf->Top__DOT__core__DOT___GEN_6));
    vlSelf->Top__DOT__core__DOT__Execute_io_wb_result 
        = ((1U == (IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg))
            ? vlSelf->Top__DOT__core__DOT__MEM_io_readData
            : vlSelf->Top__DOT__core__DOT___GEN_6);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeData 
        = ((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_is_csr)
            ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_csr_data))
            : vlSelf->Top__DOT__core__DOT__Execute_io_wb_result);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
        = ((1U == (IData)(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc1))
            ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_pc))
            : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc1))
                ? 0ULL : ((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                           ? vlSelf->Top__DOT__core__DOT__id_reg_rd1
                           : ((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                               ? vlSelf->Top__DOT__core__DOT__ex_reg_result
                               : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA))
                                   ? vlSelf->Top__DOT__core__DOT__Execute_io_wb_result
                                   : 0ULL)))));
    vlSelf->Top__DOT__core__DOT__Execute__DOT___inputMux2_T_4 
        = ((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
            ? vlSelf->Top__DOT__core__DOT__ex_reg_result
            : ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                ? vlSelf->Top__DOT__core__DOT__Execute_io_wb_result
                : 0ULL));
    vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData1 
        = (((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite) 
            & ((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_wra) 
               == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                            >> 0xfU)))) ? ((0U == (0x1fU 
                                                   & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                      >> 0xfU)))
                                            ? 0ULL : vlSelf->Top__DOT__core__DOT__Execute_io_wb_result)
            : ((0U == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                >> 0xfU))) ? 0ULL : 
               ((0x1fU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                    >> 0xfU))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_31
                 : ((0x1eU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                        >> 0xfU))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_30
                     : ((0x1dU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0xfU)))
                         ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_29
                         : ((0x1cU == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                >> 0xfU)))
                             ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_28
                             : ((0x1bU == (0x1fU & 
                                           (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                            >> 0xfU)))
                                 ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_27
                                 : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_90)))))));
    vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData2 
        = (((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite) 
            & ((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_wra) 
               == (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                            >> 0x14U)))) ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x14U)))
                                             ? 0ULL
                                             : vlSelf->Top__DOT__core__DOT__Execute_io_wb_result)
            : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2 
        = ((IData)(vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc)
            ? ((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB))
                ? vlSelf->Top__DOT__core__DOT__id_reg_rd2
                : vlSelf->Top__DOT__core__DOT__Execute__DOT___inputMux2_T_4)
            : vlSelf->Top__DOT__core__DOT__id_reg_imm);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___GEN_6 
        = (((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                      >> 0xfU)) == (0x1fU & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                             >> 7U)))
            ? vlSelf->Top__DOT__core__DOT__Execute_io_wb_result
            : vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2 
        = (((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                      >> 0x14U)) == (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                              >> 7U)))
            ? vlSelf->Top__DOT__core__DOT__ex_reg_result
            : (((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                          >> 0x14U)) == (0x1fU & (vlSelf->Top__DOT__core__DOT__mem_reg_ins 
                                                  >> 7U)))
                ? vlSelf->Top__DOT__core__DOT__Execute_io_wb_result
                : vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData2));
    VL_EXTEND_WQ(95,64, __Vtemp_h99160175__0, (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                               & vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2));
    VL_EXTEND_WQ(95,64, __Vtemp_h98c0084d__0, (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                               | vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2));
    VL_EXTEND_WQ(95,64, __Vtemp_h986cdebf__0, (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                               + vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2));
    VL_EXTEND_WQ(95,64, __Vtemp_h9859e56f__0, (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                               - vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2));
    VL_EXTEND_WI(95,1, __Vtemp_h82f999f9__0, VL_LTS_IQQ(64, vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1, vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2));
    VL_EXTEND_WI(95,1, __Vtemp_h825659f6__0, (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                              < vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2));
    __Vtemp_h065781c6__0[0U] = (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1);
    __Vtemp_h065781c6__0[1U] = (IData)((vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                        >> 0x20U));
    __Vtemp_h065781c6__0[2U] = (0x7fffffffU & (- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                                     >> 0x3fU))))));
    VL_SHIFTL_WWI(95,95,5, __Vtemp_hdd428101__0, __Vtemp_h065781c6__0, 
                  (0x1fU & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)));
    VL_EXTEND_WQ(95,64, __Vtemp_ha8447bbf__0, ((7U 
                                                == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                ? (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                : (
                                                   (8U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                    ? 
                                                   VL_SHIFTRS_QQI(64,64,6, vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1, 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)))
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))
                                                     ? 
                                                    (vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 
                                                     ^ vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2)
                                                     : 0ULL))));
    if ((0U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))) {
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U] 
            = __Vtemp_h99160175__0[0U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U] 
            = __Vtemp_h99160175__0[1U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[2U] 
            = (0x7fffffffU & __Vtemp_h99160175__0[2U]);
    } else if ((1U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))) {
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U] 
            = __Vtemp_h98c0084d__0[0U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U] 
            = __Vtemp_h98c0084d__0[1U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[2U] 
            = (0x7fffffffU & __Vtemp_h98c0084d__0[2U]);
    } else if ((2U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))) {
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U] 
            = __Vtemp_h986cdebf__0[0U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U] 
            = __Vtemp_h986cdebf__0[1U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[2U] 
            = (0x7fffffffU & __Vtemp_h986cdebf__0[2U]);
    } else if ((3U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))) {
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U] 
            = __Vtemp_h9859e56f__0[0U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U] 
            = __Vtemp_h9859e56f__0[1U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[2U] 
            = (0x7fffffffU & __Vtemp_h9859e56f__0[2U]);
    } else if ((4U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))) {
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U] 
            = __Vtemp_h82f999f9__0[0U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U] 
            = __Vtemp_h82f999f9__0[1U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[2U] 
            = (0x7fffffffU & __Vtemp_h82f999f9__0[2U]);
    } else if ((5U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))) {
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U] 
            = __Vtemp_h825659f6__0[0U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U] 
            = __Vtemp_h825659f6__0[1U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[2U] 
            = (0x7fffffffU & __Vtemp_h825659f6__0[2U]);
    } else if ((6U == (IData)(vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out))) {
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U] 
            = __Vtemp_hdd428101__0[0U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U] 
            = __Vtemp_hdd428101__0[1U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[2U] 
            = (0x7fffffffU & __Vtemp_hdd428101__0[2U]);
    } else {
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[0U] 
            = __Vtemp_ha8447bbf__0[0U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[1U] 
            = __Vtemp_ha8447bbf__0[1U];
        vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40[2U] 
            = (0x7fffffffU & __Vtemp_ha8447bbf__0[2U]);
    }
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
        = (((0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                      >> 0xfU)) == (0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                             >> 7U)))
            ? vlSelf->Top__DOT__core__DOT__ex_reg_result
            : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___GEN_6);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data 
        = ((0x4000U & vlSelf->Top__DOT__core__DOT__if_reg_ins)
            ? (0x1fU & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                        >> 0xfU)) : (IData)(((6U == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                              ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__mem_reg_csr_data))
                                              : ((5U 
                                                  == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                  ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_csr_data))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                   ? (QData)((IData)(vlSelf->Top__DOT__core__DOT__id_reg_csr_data))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                    ? vlSelf->Top__DOT__core__DOT__Execute_io_wb_result
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1))
                                                     ? 
                                                    ((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead)
                                                      ? (QData)((IData)(vlSelf->Top__DOT__dmem__DOT___rdata64_T))
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
                                                      : vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1))))))));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_taken 
        = ((((0U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                           >> 0xcU))) ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                         == vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
              : ((1U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                               >> 0xcU))) ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                             != vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                  : ((4U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                   >> 0xcU))) ? VL_LTS_IQQ(64, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                      : ((5U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                       >> 0xcU))) ? 
                         VL_GTES_IQQ(64, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1, vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                          : ((6U == (7U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                           >> 0xcU)))
                              ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                 < vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)
                              : (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 
                                 >= vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2)))))) 
            & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch)) 
           & ((~ (((IData)(vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead) 
                   & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch)) 
                  & (((0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                >> 7U)) == (0x1fU & 
                                            (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                             >> 0xfU))) 
                     | ((0x1fU & (vlSelf->Top__DOT__core__DOT__ex_reg_ins 
                                  >> 7U)) == (0x1fU 
                                              & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                                 >> 0x14U)))))) 
              & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu__DOT___T_14))));
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
        = ((3U == (3U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                         >> 0xcU))) ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                       & (~ vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data))
            : ((2U == (3U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                             >> 0xcU))) ? (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data 
                                           | vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data)
                : ((1U == (3U & (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                 >> 0xcU))) ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data
                    : 0U)));
    vlSelf->Top__DOT__core__DOT__InstructionDecode_io_pcSrc 
        = ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_taken) 
           | (0U != (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump)));
    if ((0x305U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                    >> 0x14U))) {
        vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28 
            = vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data;
        vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 
            = vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG;
        vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
            = vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG;
        vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_31 
            = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
        vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_32 
            = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
        vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_33 
            = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
        vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_34 
            = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
        vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_35 
            = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
        vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
            = (7U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG));
    } else {
        vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28 
            = vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG;
        if ((0x341U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                        >> 0x14U))) {
            vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 
                = vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data;
            vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
                = vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG;
            vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_31 
                = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
            vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_32 
                = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
            vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_33 
                = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
            vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_34 
                = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
            vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_35 
                = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
            vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
                = (7U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG));
        } else {
            vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 
                = vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG;
            if ((0x304U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                            >> 0x14U))) {
                vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
                    = vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data;
                vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_31 
                    = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
                vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_32 
                    = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
                vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_33 
                    = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
                vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_34 
                    = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
                vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_35 
                    = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
                vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
                    = (7U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG));
            } else {
                vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 
                    = vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG;
                if ((3U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                            >> 0x14U))) {
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_31 
                        = (1U & vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data);
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_32 
                        = (1U & (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 1U));
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_33 
                        = (1U & (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 2U));
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_34 
                        = (1U & (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 3U));
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_35 
                        = (1U & (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 4U));
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
                        = (7U & (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 5U));
                } else if ((1U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                   >> 0x14U))) {
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_31 
                        = (1U & vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data);
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_32 
                        = (1U & (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 1U));
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_33 
                        = (1U & (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 2U));
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_34 
                        = (1U & (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 3U));
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_35 
                        = (1U & (vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data 
                                 >> 4U));
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
                        = (7U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG));
                } else {
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_31 
                        = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG));
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_32 
                        = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG));
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_33 
                        = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG));
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_34 
                        = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG));
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_35 
                        = (1U & (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG));
                    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 
                        = (7U & ((2U == (vlSelf->Top__DOT__core__DOT__if_reg_ins 
                                         >> 0x14U))
                                  ? vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data
                                  : (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG)));
                }
            }
        }
    }
    vlSelf->Top__DOT__core__DOT___npc_T_2 = ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_pcSrc)
                                              ? ((1U 
                                                  == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump))
                                                  ? 
                                                 (vlSelf->Top__DOT__core__DOT__if_reg_pc 
                                                  + (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump))
                                                   ? 
                                                  ((IData)(
                                                           (((0x1fU 
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
                                                   : 
                                                  (vlSelf->Top__DOT__core__DOT__if_reg_pc 
                                                   + (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out))))
                                              : (((0U 
                                                   != vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o) 
                                                  & ((0U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                           >> 0xeU))) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                              >> 0xeU))) 
                                                         | (3U 
                                                            == 
                                                            (3U 
                                                             & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                                >> 0xeU)))))
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o 
                                                            >> 0xdU))) 
                                                       | (IData)(vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37))
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o)) 
                                                       & ((0U 
                                                           == 
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
                                                                       >> 0xeU))))))))))
                                                  ? 
                                                 ((IData)(2U) 
                                                  + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg)));
    vlSelf->Top__DOT__core__DOT__pc_io_in = ((IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write)
                                              ? vlSelf->Top__DOT__core__DOT___npc_T_2
                                              : vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg);
    vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o 
        = ((((1U == (IData)(vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg)) 
             & (vlSelf->Top__DOT__core__DOT__pc_io_in 
                >> 1U)) & (~ (IData)(vlSelf->Top__DOT__core__DOT__InstructionDecode_io_pcSrc)))
            ? ((IData)(4U) + vlSelf->Top__DOT__core__DOT__pc_io_in)
            : vlSelf->Top__DOT__core__DOT__pc_io_in);
}

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    VTop___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
    // Body
    VTop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VTop___024root___final(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___final\n"); );
}

VL_ATTR_COLD void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pin = VL_RAND_RESET_I(32);
    vlSelf->io_fcsr = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionFetch_io_instruction = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode_io_readData2 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode_io_pcSrc = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__Execute_io_wb_result = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__MEM_io_readData = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_dataRequest = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__MEM_io_dccmReq_bits_activeByteLane = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__core__DOT__pc_io_in = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__Realigner_io_ral_address_o = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__Realigner_io_ral_instruction_o = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__if_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__if_reg_ins = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__id_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__id_reg_rd1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__id_reg_rd2 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__id_reg_imm = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__id_reg_wra = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__core__DOT__id_reg_f7 = VL_RAND_RESET_I(7);
    vlSelf->Top__DOT__core__DOT__id_reg_f3 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__core__DOT__id_reg_ins = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluSrc1 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_memToReg = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_regWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_memRead = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_memWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__id_reg_ctl_aluOp = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__id_reg_is_csr = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__id_reg_csr_data = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__ex_reg_result = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__ex_reg_wd = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__ex_reg_wra = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__core__DOT__ex_reg_ins = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memToReg = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__ex_reg_ctl_regWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memRead = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__ex_reg_ctl_memWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__ex_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__ex_reg_is_csr = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__ex_reg_csr_data = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__mem_reg_ins = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__mem_reg_result = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__mem_reg_wra = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__core__DOT__mem_reg_ctl_memToReg = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__mem_reg_ctl_regWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__mem_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__mem_reg_is_csr = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__mem_reg_csr_data = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT___npc_T_2 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT___GEN_6 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__npcDelay_0 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__npcDelay_1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__npcDelay_2 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__npcDelay_3 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_0 = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_1 = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__core__DOT__rsAddrDelay_0_2 = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_0 = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_1 = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__core__DOT__rsAddrDelay_1_2 = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__core__DOT__rsDataDelay_0_0 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__rsDataDelay_0_1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__rsDataDelay_1_0 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__rsDataDelay_1_1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__memAddrDelay = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__memWdataDelay = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__stallDelay_0 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__stallDelay_1 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__stallDelay_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__stallDelay_3 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__insDelay_0 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__insDelay_1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__insDelay_2 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__insDelay_3 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr_io_i_w_en = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController_io_forwardRS1 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu_io_if_reg_write = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_branch = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control_io_jump = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeEnable = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_writeData = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers_io_readData_1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__immediate_io_out = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_rd2 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__bu_io_taken = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT___GEN_6 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile_io_CSR_i_data = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MHARTID_REG = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MCAUSE_REG = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MTVEC_REG = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MEPC_REG = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MIE_REG = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_TW_REG = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPRV_REG = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPP_REG = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MPIE_REG = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__MSTATUS_MIE_REG = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NX_REG = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_UF_REG = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_OF_REG = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_DZ_REG = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_NV_REG = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_FRM_REG = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__FCSR_WIRE = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___r_data_T_17 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__r_data = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT__w_data = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_28 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_29 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_30 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_31 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_32 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_33 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_34 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_35 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csr__DOT__csrRegFile__DOT___GEN_36 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecEx = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__hazard_DecMem = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_4 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT___hazard_DecWb_T_7 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecEx = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__csrController__DOT__csrHazard_DecMem = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__hdu__DOT___T_14 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__control__DOT___signals_T_36 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_0 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_2 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_3 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_4 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_5 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_6 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_7 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_8 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_9 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_10 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_11 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_12 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_13 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_14 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_15 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_16 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_17 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_18 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_19 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_20 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_21 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_22 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_23 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_24 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_25 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_26 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_27 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_28 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_29 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_30 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT__reg_31 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__InstructionDecode__DOT__registers__DOT___GEN_90 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__alu_io_input2 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__aluCtl_io_out = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardA = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__Execute__DOT__ForwardingUnit_io_forwardB = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__Execute__DOT___inputMux2_T_4 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(95, vlSelf->Top__DOT__core__DOT__Execute__DOT__alu__DOT___io_result_T_40);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__offset = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_0 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_1 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_2 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_3 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_4 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_5 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_6 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__wdata_7 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__core__DOT__MEM__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__core__DOT__pc__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__Realigner__DOT__lhw_reg = VL_RAND_RESET_I(16);
    vlSelf->Top__DOT__core__DOT__Realigner__DOT__stateReg = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_7 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_37 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__core__DOT__CompressedDecoder__DOT___GEN_62 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__dmem__DOT__sram1_addr_i = VL_RAND_RESET_I(21);
    vlSelf->Top__DOT__dmem__DOT__sram1_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__dmem__DOT__sram2_csb_i = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram2_we_i = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram2_addr_i = VL_RAND_RESET_I(21);
    vlSelf->Top__DOT__dmem__DOT__sram2_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__dmem__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT___rdata64_T = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__csb = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__addr_o = VL_RAND_RESET_I(21);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__wdata_o = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__wmask_o = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__we_o = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__rdata_i = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__dout1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__web0_reg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__wmask0_reg = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__addr0_reg = VL_RAND_RESET_I(21);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__addr1_reg = VL_RAND_RESET_I(21);
    vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2097152; ++__Vi0) {
        vlSelf->Top__DOT__dmem__DOT__sram1__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__csb = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__addr_o = VL_RAND_RESET_I(21);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__wdata_o = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__wmask_o = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__we_o = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__rdata_i = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__dout1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__web0_reg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__wmask0_reg = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__addr0_reg = VL_RAND_RESET_I(21);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__addr1_reg = VL_RAND_RESET_I(21);
    vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2097152; ++__Vi0) {
        vlSelf->Top__DOT__dmem__DOT__sram2__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__imem__DOT__sram_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__imem__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__csb = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__addr_o = VL_RAND_RESET_I(21);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__wdata_o = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__wmask_o = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__we_o = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__rdata_i = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__dout1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb0_reg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__web0_reg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__wmask0_reg = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr0_reg = VL_RAND_RESET_I(21);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__din0_reg = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__csb1_reg = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__addr1_reg = VL_RAND_RESET_I(21);
    vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2097152; ++__Vi0) {
        vlSelf->Top__DOT__imem__DOT__sram__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__tracer__DOT__clkCycle = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__tracer__DOT___clkCycle_T_1 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

VL_ATTR_COLD void VTop___024root___configure_coverage(VTop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
