// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_0_sub_3(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0_sub_3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 26975);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x21U])) {
        bufp->chgBit(oldp+0,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                    | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                       >> 0x1aU)))));
        bufp->chgBit(oldp+1,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                    >> 0x19U))));
        bufp->chgBit(oldp+2,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                    >> 0x19U))));
        bufp->chgCData(oldp+3,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType) 
                                & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.Match))))),2);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.Match));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Valid));
        bufp->chgQData(oldp+6,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+9,((0xffffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 0x24U)))),16);
        bufp->chgSData(oldp+10,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+11,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 9U)))),9);
        bufp->chgBit(oldp+12,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x19U)))));
        bufp->chgBit(oldp+13,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x19U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+14,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+15,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
        bufp->chgSData(oldp+16,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
        bufp->chgBit(oldp+17,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+18,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
        bufp->chgBit(oldp+19,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x19U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x19U)))));
        bufp->chgBit(oldp+21,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x18U))));
        bufp->chgBit(oldp+22,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x18U))));
        bufp->chgCData(oldp+23,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.Match))))),2);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.Match));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Valid));
        bufp->chgQData(oldp+26,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+28,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+29,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
        bufp->chgSData(oldp+30,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+31,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 9U)))),9);
        bufp->chgBit(oldp+32,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x18U)))));
        bufp->chgBit(oldp+33,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x18U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+34,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+35,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
        bufp->chgSData(oldp+36,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
        bufp->chgBit(oldp+37,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+38,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
        bufp->chgBit(oldp+39,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x18U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+40,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x18U)))));
        bufp->chgBit(oldp+41,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x17U))));
        bufp->chgBit(oldp+42,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x17U))));
        bufp->chgCData(oldp+43,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.Match))))),2);
        bufp->chgBit(oldp+44,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.Match));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Valid));
        bufp->chgQData(oldp+46,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+48,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+49,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
        bufp->chgSData(oldp+50,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+51,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 9U)))),9);
        bufp->chgBit(oldp+52,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x17U)))));
        bufp->chgBit(oldp+53,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x17U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+54,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+55,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
        bufp->chgSData(oldp+56,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
        bufp->chgBit(oldp+57,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+58,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
        bufp->chgBit(oldp+59,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x17U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x17U)))));
        bufp->chgBit(oldp+61,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x16U))));
        bufp->chgBit(oldp+62,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x16U))));
        bufp->chgCData(oldp+63,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.Match))))),2);
        bufp->chgBit(oldp+64,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.Match));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Valid));
        bufp->chgQData(oldp+66,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+68,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+69,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
        bufp->chgSData(oldp+70,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+71,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 9U)))),9);
        bufp->chgBit(oldp+72,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x16U)))));
        bufp->chgBit(oldp+73,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x16U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+74,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+75,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
        bufp->chgSData(oldp+76,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
        bufp->chgBit(oldp+77,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+78,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
        bufp->chgBit(oldp+79,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x16U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x16U)))));
        bufp->chgBit(oldp+81,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x15U))));
        bufp->chgBit(oldp+82,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x15U))));
        bufp->chgCData(oldp+83,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.Match))))),2);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.Match));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Valid));
        bufp->chgQData(oldp+86,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+88,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+89,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
        bufp->chgSData(oldp+90,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+91,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 9U)))),9);
        bufp->chgBit(oldp+92,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x15U)))));
        bufp->chgBit(oldp+93,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x15U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+94,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+95,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
        bufp->chgSData(oldp+96,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
        bufp->chgBit(oldp+97,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+98,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
        bufp->chgBit(oldp+99,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x15U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+100,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+101,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x14U))));
        bufp->chgBit(oldp+102,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x14U))));
        bufp->chgCData(oldp+103,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.Match))))),2);
        bufp->chgBit(oldp+104,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.Match));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Valid));
        bufp->chgQData(oldp+106,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+108,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+109,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+110,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+111,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+112,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+113,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x14U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+114,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+115,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+116,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+117,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+118,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+119,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x14U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+120,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+121,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x13U))));
        bufp->chgBit(oldp+122,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x13U))));
        bufp->chgCData(oldp+123,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.Match))))),2);
        bufp->chgBit(oldp+124,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.Match));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Valid));
        bufp->chgQData(oldp+126,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+128,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+129,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+130,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+131,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+132,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+133,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x13U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+134,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+135,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+136,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+137,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+138,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+139,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x13U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+141,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x12U))));
        bufp->chgBit(oldp+142,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x12U))));
        bufp->chgCData(oldp+143,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.Match))))),2);
        bufp->chgBit(oldp+144,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.Match));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Valid));
        bufp->chgQData(oldp+146,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+148,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+149,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+150,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+151,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+152,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+153,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x12U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+154,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+155,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+156,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+157,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+158,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+159,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x12U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+160,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+161,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x11U))));
        bufp->chgBit(oldp+162,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x11U))));
        bufp->chgCData(oldp+163,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.Match))))),2);
        bufp->chgBit(oldp+164,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.Match));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Valid));
        bufp->chgQData(oldp+166,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+168,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+169,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+170,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+171,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+172,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+173,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x11U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+174,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+175,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+176,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+177,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+178,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+179,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x11U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+180,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+181,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x10U))));
        bufp->chgBit(oldp+182,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x10U))));
        bufp->chgCData(oldp+183,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.Match))))),2);
        bufp->chgBit(oldp+184,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.Match));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Valid));
        bufp->chgQData(oldp+186,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+188,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+189,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+190,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+191,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+192,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+193,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x10U) & 
                                      ((0x1fU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+194,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+195,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+196,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+197,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+198,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+199,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x10U) & ((0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+200,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+201,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xfU))));
        bufp->chgBit(oldp+202,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xfU))));
        bufp->chgCData(oldp+203,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.Match))))),2);
        bufp->chgBit(oldp+204,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.Match));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Valid));
        bufp->chgQData(oldp+206,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+208,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+209,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+210,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+211,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+212,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+213,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xfU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+214,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+215,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+216,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+217,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+218,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+219,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xfU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+220,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+221,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xeU))));
        bufp->chgBit(oldp+222,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xeU))));
        bufp->chgCData(oldp+223,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.Match))))),2);
        bufp->chgBit(oldp+224,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.Match));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Valid));
        bufp->chgQData(oldp+226,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+228,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+229,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+230,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+231,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+232,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+233,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xeU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+234,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+235,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+236,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+237,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+238,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+239,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xeU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+240,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+241,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xdU))));
        bufp->chgBit(oldp+242,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xdU))));
        bufp->chgCData(oldp+243,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.Match))))),2);
        bufp->chgBit(oldp+244,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.Match));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Valid));
        bufp->chgQData(oldp+246,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+248,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+249,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+250,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+251,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+252,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+253,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xdU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+254,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+255,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+256,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+257,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+258,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+259,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xdU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+260,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+261,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xcU))));
        bufp->chgBit(oldp+262,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xcU))));
        bufp->chgCData(oldp+263,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.Match))))),2);
        bufp->chgBit(oldp+264,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.Match));
        bufp->chgBit(oldp+265,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Valid));
        bufp->chgQData(oldp+266,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+268,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+269,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+270,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+271,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+272,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+273,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xcU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+274,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+275,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+276,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+277,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+278,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+279,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xcU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+280,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+281,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xbU))));
        bufp->chgBit(oldp+282,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xbU))));
        bufp->chgCData(oldp+283,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.Match))))),2);
        bufp->chgBit(oldp+284,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.Match));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Valid));
        bufp->chgQData(oldp+286,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+288,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+289,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+290,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+291,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+292,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+293,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xbU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+294,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+295,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+296,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+297,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+298,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+299,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xbU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+300,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+301,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xaU))));
        bufp->chgBit(oldp+302,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xaU))));
        bufp->chgCData(oldp+303,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.Match))))),2);
        bufp->chgBit(oldp+304,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.Match));
        bufp->chgBit(oldp+305,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Valid));
        bufp->chgQData(oldp+306,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+308,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+309,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+310,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+311,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+312,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+313,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xaU) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+314,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+315,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+316,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+317,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+318,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+319,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xaU) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+320,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+321,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 9U))));
        bufp->chgBit(oldp+322,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 9U))));
        bufp->chgCData(oldp+323,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.Match))))),2);
        bufp->chgBit(oldp+324,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.Match));
        bufp->chgBit(oldp+325,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Valid));
        bufp->chgQData(oldp+326,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+328,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+329,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+330,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+331,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+332,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 9U)))));
        bufp->chgBit(oldp+333,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 9U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+334,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+335,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+336,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+337,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+338,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+339,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 9U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+340,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 9U)))));
        bufp->chgBit(oldp+341,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 8U))));
        bufp->chgBit(oldp+342,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 8U))));
        bufp->chgCData(oldp+343,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.Match))))),2);
        bufp->chgBit(oldp+344,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.Match));
        bufp->chgBit(oldp+345,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Valid));
        bufp->chgQData(oldp+346,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+348,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+349,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+350,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+351,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+352,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 8U)))));
        bufp->chgBit(oldp+353,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 8U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+354,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+355,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+356,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+357,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+358,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+359,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 8U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+360,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 8U)))));
        bufp->chgBit(oldp+361,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 7U))));
        bufp->chgBit(oldp+362,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 7U))));
        bufp->chgCData(oldp+363,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.Match))))),2);
        bufp->chgBit(oldp+364,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.Match));
        bufp->chgBit(oldp+365,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Valid));
        bufp->chgQData(oldp+366,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+368,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+369,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+370,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+371,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+372,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 7U)))));
        bufp->chgBit(oldp+373,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 7U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+374,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+375,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+376,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+377,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+378,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+379,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 7U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+380,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 7U)))));
        bufp->chgBit(oldp+381,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 6U))));
        bufp->chgBit(oldp+382,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 6U))));
        bufp->chgCData(oldp+383,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.Match))))),2);
        bufp->chgBit(oldp+384,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.Match));
        bufp->chgBit(oldp+385,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Valid));
        bufp->chgQData(oldp+386,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+388,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+389,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+390,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+391,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+392,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 6U)))));
        bufp->chgBit(oldp+393,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 6U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+394,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+395,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+396,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+397,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+398,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+399,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 6U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+400,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 6U)))));
        bufp->chgBit(oldp+401,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 5U))));
        bufp->chgBit(oldp+402,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 5U))));
        bufp->chgCData(oldp+403,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.Match))))),2);
        bufp->chgBit(oldp+404,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.Match));
        bufp->chgBit(oldp+405,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Valid));
        bufp->chgQData(oldp+406,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+408,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+409,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+410,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+411,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+412,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 5U)))));
        bufp->chgBit(oldp+413,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 5U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+414,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+415,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+416,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+417,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+418,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+419,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 5U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+420,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 5U)))));
        bufp->chgBit(oldp+421,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 4U))));
        bufp->chgBit(oldp+422,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 4U))));
        bufp->chgCData(oldp+423,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.Match))))),2);
        bufp->chgBit(oldp+424,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.Match));
        bufp->chgBit(oldp+425,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Valid));
        bufp->chgQData(oldp+426,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+428,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+429,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+430,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+431,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+432,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 4U)))));
        bufp->chgBit(oldp+433,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 4U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+434,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+435,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+436,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+437,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+438,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+439,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 4U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+440,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 4U)))));
        bufp->chgBit(oldp+441,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 3U))));
        bufp->chgBit(oldp+442,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 3U))));
        bufp->chgCData(oldp+443,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.Match))))),2);
        bufp->chgBit(oldp+444,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.Match));
        bufp->chgBit(oldp+445,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Valid));
        bufp->chgQData(oldp+446,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+448,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+449,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+450,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+451,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+452,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 3U)))));
        bufp->chgBit(oldp+453,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 3U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+454,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+455,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+456,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+457,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+458,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+459,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 3U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+460,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 3U)))));
        bufp->chgBit(oldp+461,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 2U))));
        bufp->chgBit(oldp+462,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 2U))));
        bufp->chgCData(oldp+463,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.Match))))),2);
        bufp->chgBit(oldp+464,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.Match));
        bufp->chgBit(oldp+465,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Valid));
        bufp->chgQData(oldp+466,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+468,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+469,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+470,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+471,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+472,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 2U)))));
        bufp->chgBit(oldp+473,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 2U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+474,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+475,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+476,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+477,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+478,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+479,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 2U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+480,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 2U)))));
        bufp->chgBit(oldp+481,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 1U))));
        bufp->chgBit(oldp+482,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 1U))));
        bufp->chgCData(oldp+483,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.PageTypeRead),2);
        bufp->chgBit(oldp+484,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.Match));
        bufp->chgBit(oldp+485,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Valid));
        bufp->chgQData(oldp+486,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+488,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+489,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+490,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+491,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+492,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 1U)))));
        bufp->chgBit(oldp+493,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 1U) & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+494,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+495,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+496,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+497,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+498,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+499,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 1U) & ((0x1fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+500,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 1U)))));
        bufp->chgBit(oldp+501,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs)));
        bufp->chgBit(oldp+502,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs)));
        bufp->chgCData(oldp+503,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.PageTypeRead),2);
        bufp->chgBit(oldp+504,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.Match));
        bufp->chgBit(oldp+505,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Valid));
        bufp->chgQData(oldp+506,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+508,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+509,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+510,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+511,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+512,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs))));
        bufp->chgBit(oldp+513,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0xcU))) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType)) 
                                   | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      & ((0x1fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                           >> 0x10U))) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                        >> 4U)))))))));
        bufp->chgBit(oldp+514,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x15U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+515,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+516,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+517,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+518,((((0x1ffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x27U))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+519,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                & ((0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x10U))) 
                                   == (0x1fU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                        >> 4U)))))));
        bufp->chgBit(oldp+520,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                      | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables))));
        bufp->chgBit(oldp+521,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                >> 0x1fU)));
        bufp->chgBit(oldp+522,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1fU)));
        bufp->chgCData(oldp+523,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.Match))))),2);
        bufp->chgBit(oldp+524,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.Match));
        bufp->chgBit(oldp+525,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Valid));
        bufp->chgQData(oldp+526,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+528,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+529,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+530,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+531,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgSData(oldp+532,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU))),9);
        bufp->chgSData(oldp+533,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U))),9);
        bufp->chgBit(oldp+534,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                 >> 0x1fU) | ((0xffffU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                              == (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                             >> 0x24U)))))));
        bufp->chgBit(oldp+535,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1fU) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+536,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__PageType)))));
        bufp->chgQData(oldp+537,((((QData)((IData)(
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                               >> 0x2cU))))) 
                                   << 0x24U) | (0xfffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                    << 0x14U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                      >> 0xcU))))),52);
        bufp->chgSData(oldp+539,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+540,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgSData(oldp+541,((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU)))),9);
        bufp->chgSData(oldp+542,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U))),9);
        bufp->chgBit(oldp+543,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+544,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+545,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x1fU) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+546,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                   >> 0x1fU))));
        bufp->chgBit(oldp+547,((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)))));
        bufp->chgBit(oldp+548,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+549,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+550,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.Match))))),2);
        bufp->chgBit(oldp+551,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.Match));
        bufp->chgBit(oldp+552,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Valid));
        bufp->chgQData(oldp+553,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+555,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+556,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+557,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+558,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+559,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+560,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1eU) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+561,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+562,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+563,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+564,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+565,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+566,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x1eU) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+567,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+568,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+569,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1dU))));
        bufp->chgCData(oldp+570,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.Match))))),2);
        bufp->chgBit(oldp+571,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.Match));
        bufp->chgBit(oldp+572,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Valid));
        bufp->chgQData(oldp+573,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+575,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+576,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+577,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+578,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+579,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+580,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1dU) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+581,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+582,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+583,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+584,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+585,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+586,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x1dU) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+587,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+588,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+589,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1cU))));
        bufp->chgCData(oldp+590,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.Match))))),2);
        bufp->chgBit(oldp+591,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.Match));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Valid));
        bufp->chgQData(oldp+593,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+595,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+596,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+597,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+598,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+599,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+600,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1cU) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+601,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+602,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+603,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+604,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+605,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+606,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x1cU) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+607,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+608,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+609,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1bU))));
        bufp->chgCData(oldp+610,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.Match))))),2);
        bufp->chgBit(oldp+611,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.Match));
        bufp->chgBit(oldp+612,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Valid));
        bufp->chgQData(oldp+613,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+615,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+616,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+617,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+618,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+619,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+620,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1bU) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+621,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+622,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+623,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+624,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+625,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+626,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x1bU) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+627,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+628,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+629,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1aU))));
        bufp->chgCData(oldp+630,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.Match))))),2);
        bufp->chgBit(oldp+631,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.Match));
        bufp->chgBit(oldp+632,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Valid));
        bufp->chgQData(oldp+633,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+635,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+636,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+637,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+638,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+639,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+640,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x1aU) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+641,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+642,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+643,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+644,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+645,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+646,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x1aU) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+647,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+648,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x19U))));
        bufp->chgBit(oldp+649,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x19U))));
        bufp->chgCData(oldp+650,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.Match))))),2);
        bufp->chgBit(oldp+651,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.Match));
        bufp->chgBit(oldp+652,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Valid));
        bufp->chgQData(oldp+653,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+655,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+656,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+657,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+658,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+659,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+660,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x19U) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+661,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+662,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+663,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+664,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+665,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+666,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x19U) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+667,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+668,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x18U))));
        bufp->chgBit(oldp+669,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x18U))));
        bufp->chgCData(oldp+670,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.Match))))),2);
        bufp->chgBit(oldp+671,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.Match));
        bufp->chgBit(oldp+672,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Valid));
        bufp->chgQData(oldp+673,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+675,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+676,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+677,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+678,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+679,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+680,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x18U) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+681,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+682,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+683,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+684,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+685,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+686,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x18U) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+687,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+688,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x17U))));
        bufp->chgBit(oldp+689,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x17U))));
        bufp->chgCData(oldp+690,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.Match))))),2);
        bufp->chgBit(oldp+691,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.Match));
        bufp->chgBit(oldp+692,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Valid));
        bufp->chgQData(oldp+693,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+695,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+696,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+697,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+698,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+699,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+700,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x17U) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+701,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+702,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+703,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+704,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+705,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+706,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x17U) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+707,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+708,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x16U))));
        bufp->chgBit(oldp+709,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x16U))));
        bufp->chgCData(oldp+710,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.Match))))),2);
        bufp->chgBit(oldp+711,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.Match));
        bufp->chgBit(oldp+712,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Valid));
        bufp->chgQData(oldp+713,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+715,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+716,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+717,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+718,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+719,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+720,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x16U) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+721,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+722,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+723,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+724,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+725,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+726,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x16U) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+727,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+728,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x15U))));
        bufp->chgBit(oldp+729,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x15U))));
        bufp->chgCData(oldp+730,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.Match))))),2);
        bufp->chgBit(oldp+731,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.Match));
        bufp->chgBit(oldp+732,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Valid));
        bufp->chgQData(oldp+733,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+735,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+736,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+737,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+738,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+739,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+740,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x15U) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+741,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+742,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+743,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+744,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+745,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+746,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x15U) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+747,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+748,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x14U))));
        bufp->chgBit(oldp+749,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x14U))));
        bufp->chgCData(oldp+750,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.Match))))),2);
        bufp->chgBit(oldp+751,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.Match));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Valid));
        bufp->chgQData(oldp+753,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+755,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+756,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+757,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+758,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+759,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+760,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x14U) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+761,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+762,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+763,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+764,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+765,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+766,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x14U) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+767,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+768,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x13U))));
        bufp->chgBit(oldp+769,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x13U))));
        bufp->chgCData(oldp+770,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.Match))))),2);
        bufp->chgBit(oldp+771,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.Match));
        bufp->chgBit(oldp+772,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Valid));
        bufp->chgQData(oldp+773,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+775,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+776,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+777,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+778,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+779,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+780,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x13U) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+781,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+782,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+783,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+784,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+785,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+786,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x13U) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+787,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+788,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x12U))));
        bufp->chgBit(oldp+789,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x12U))));
        bufp->chgCData(oldp+790,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.Match))))),2);
        bufp->chgBit(oldp+791,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.Match));
        bufp->chgBit(oldp+792,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Valid));
        bufp->chgQData(oldp+793,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+795,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+796,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+797,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+798,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+799,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+800,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x12U) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+801,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+802,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+803,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+804,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+805,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+806,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x12U) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+807,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+808,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x11U))));
        bufp->chgBit(oldp+809,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x11U))));
        bufp->chgCData(oldp+810,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.Match))))),2);
        bufp->chgBit(oldp+811,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.Match));
        bufp->chgBit(oldp+812,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Valid));
        bufp->chgQData(oldp+813,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+815,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+816,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+817,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+818,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+819,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+820,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x11U) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+821,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+822,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+823,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+824,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+825,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+826,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x11U) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+827,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+828,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0x10U))));
        bufp->chgBit(oldp+829,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x10U))));
        bufp->chgCData(oldp+830,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.Match))))),2);
        bufp->chgBit(oldp+831,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.Match));
        bufp->chgBit(oldp+832,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Valid));
        bufp->chgQData(oldp+833,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+835,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+836,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+837,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+838,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+839,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+840,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0x10U) & 
                                      ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                       == (0x1fU & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                            >> 4U)))))))));
        bufp->chgBit(oldp+841,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+842,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+843,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+844,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+845,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+846,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0x10U) & ((0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+847,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+848,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xfU))));
        bufp->chgBit(oldp+849,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xfU))));
        bufp->chgCData(oldp+850,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.Match))))),2);
        bufp->chgBit(oldp+851,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.Match));
        bufp->chgBit(oldp+852,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Valid));
        bufp->chgQData(oldp+853,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+855,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+856,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+857,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+858,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+859,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+860,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xfU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+861,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+862,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+863,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+864,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+865,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+866,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xfU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+867,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+868,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xeU))));
        bufp->chgBit(oldp+869,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xeU))));
        bufp->chgCData(oldp+870,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.Match))))),2);
        bufp->chgBit(oldp+871,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.Match));
        bufp->chgBit(oldp+872,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Valid));
        bufp->chgQData(oldp+873,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+875,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+876,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+877,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+878,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+879,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+880,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xeU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+881,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+882,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+883,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+884,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+885,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+886,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xeU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+887,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+888,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xdU))));
        bufp->chgBit(oldp+889,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xdU))));
        bufp->chgCData(oldp+890,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.Match))))),2);
        bufp->chgBit(oldp+891,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.Match));
        bufp->chgBit(oldp+892,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Valid));
        bufp->chgQData(oldp+893,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+895,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+896,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+897,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+898,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+899,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+900,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xdU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+901,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+902,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+903,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+904,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+905,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+906,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xdU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+907,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+908,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xcU))));
        bufp->chgBit(oldp+909,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xcU))));
        bufp->chgCData(oldp+910,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.Match))))),2);
        bufp->chgBit(oldp+911,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.Match));
        bufp->chgBit(oldp+912,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Valid));
        bufp->chgQData(oldp+913,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+915,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+916,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+917,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+918,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+919,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+920,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xcU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+921,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+922,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+923,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+924,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+925,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+926,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xcU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+927,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+928,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xbU))));
        bufp->chgBit(oldp+929,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xbU))));
        bufp->chgCData(oldp+930,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.Match))))),2);
        bufp->chgBit(oldp+931,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.Match));
        bufp->chgBit(oldp+932,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Valid));
        bufp->chgQData(oldp+933,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+935,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+936,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+937,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+938,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+939,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+940,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xbU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+941,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+942,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+943,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+944,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+945,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+946,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xbU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+947,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+948,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 0xaU))));
        bufp->chgBit(oldp+949,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xaU))));
        bufp->chgCData(oldp+950,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.Match))))),2);
        bufp->chgBit(oldp+951,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.Match));
        bufp->chgBit(oldp+952,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Valid));
        bufp->chgQData(oldp+953,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+955,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+956,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+957,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+958,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+959,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+960,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 0xaU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                               >> 4U)))))))));
        bufp->chgBit(oldp+961,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+962,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+963,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+964,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+965,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+966,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 0xaU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                            >> 4U)))))));
        bufp->chgBit(oldp+967,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+968,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 9U))));
        bufp->chgBit(oldp+969,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 9U))));
        bufp->chgCData(oldp+970,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.Match))))),2);
        bufp->chgBit(oldp+971,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.Match));
        bufp->chgBit(oldp+972,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Valid));
        bufp->chgQData(oldp+973,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+975,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+976,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+977,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+978,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+979,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 9U)))));
        bufp->chgBit(oldp+980,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0xcU)) 
                                 == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key))) 
                                | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType)) 
                                   | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 9U) & ((0x1fU 
                                                  & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                     >> 0x10U)) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                             >> 4U)))))))));
        bufp->chgBit(oldp+981,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x15U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                       >> 9U)))) 
                                | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+982,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 0x12U)))),9);
        bufp->chgSData(oldp+983,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 0x1bU)))),9);
        bufp->chgBit(oldp+984,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             << 2U) 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                               >> 0x1eU))) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                       >> 0x12U)))) 
                                | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+985,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            >> 7U)) 
                                 == (0x1ffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                       >> 0x1bU)))) 
                                | (8U == (0xfU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x3cU)))))));
        bufp->chgBit(oldp+986,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 >> 9U) & ((0x1fU & 
                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x10U)) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                          >> 4U)))))));
        bufp->chgBit(oldp+987,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                         >> 9U)))));
        bufp->chgBit(oldp+988,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                      >> 8U))));
        bufp->chgBit(oldp+989,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 8U))));
        bufp->chgCData(oldp+990,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType) 
                                  & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.Match))))),2);
        bufp->chgBit(oldp+991,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.Match));
        bufp->chgBit(oldp+992,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Valid));
        bufp->chgQData(oldp+993,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+995,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+996,((0xffffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                     >> 0x24U)))),16);
        bufp->chgSData(oldp+997,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+998,((0x1ffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                    >> 9U)))),9);
        bufp->chgBit(oldp+999,((1U & (((0xffffU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x2cU))) 
                                       == (0xffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 0x24U)))) 
                                      | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                         >> 8U)))));
        bufp->chgBit(oldp+1000,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 8U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1001,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+1002,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1003,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgBit(oldp+1004,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1005,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))))));
        bufp->chgBit(oldp+1006,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 8U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1007,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                       | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                          >> 8U)))));
        bufp->chgBit(oldp+1008,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 7U))));
        bufp->chgBit(oldp+1009,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 7U))));
        bufp->chgCData(oldp+1010,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.Match))))),2);
        bufp->chgBit(oldp+1011,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.Match));
        bufp->chgBit(oldp+1012,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1013,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+1015,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+1016,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 0x24U)))),16);
        bufp->chgSData(oldp+1017,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1018,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1019,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 7U)))));
        bufp->chgBit(oldp+1020,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 7U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1021,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+1022,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1023,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgBit(oldp+1024,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1025,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))))));
        bufp->chgBit(oldp+1026,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 7U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1027,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                       | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                          >> 7U)))));
        bufp->chgBit(oldp+1028,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 6U))));
        bufp->chgBit(oldp+1029,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 6U))));
        bufp->chgCData(oldp+1030,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.Match))))),2);
        bufp->chgBit(oldp+1031,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.Match));
        bufp->chgBit(oldp+1032,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1033,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+1035,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+1036,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 0x24U)))),16);
        bufp->chgSData(oldp+1037,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1038,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1039,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 6U)))));
        bufp->chgBit(oldp+1040,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 6U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1041,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+1042,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1043,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgBit(oldp+1044,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1045,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))))));
        bufp->chgBit(oldp+1046,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 6U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1047,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                       | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                          >> 6U)))));
        bufp->chgBit(oldp+1048,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 5U))));
        bufp->chgBit(oldp+1049,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 5U))));
        bufp->chgCData(oldp+1050,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.Match))))),2);
        bufp->chgBit(oldp+1051,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.Match));
        bufp->chgBit(oldp+1052,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1053,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+1055,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+1056,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 0x24U)))),16);
        bufp->chgSData(oldp+1057,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1058,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1059,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 5U)))));
        bufp->chgBit(oldp+1060,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 5U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1061,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+1062,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1063,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgBit(oldp+1064,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1065,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))))));
        bufp->chgBit(oldp+1066,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 5U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1067,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                       | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                          >> 5U)))));
        bufp->chgBit(oldp+1068,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 4U))));
        bufp->chgBit(oldp+1069,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 4U))));
        bufp->chgCData(oldp+1070,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.Match))))),2);
        bufp->chgBit(oldp+1071,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.Match));
        bufp->chgBit(oldp+1072,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1073,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+1075,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+1076,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 0x24U)))),16);
        bufp->chgSData(oldp+1077,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1078,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1079,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 4U)))));
        bufp->chgBit(oldp+1080,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 4U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1081,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+1082,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1083,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgBit(oldp+1084,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1085,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))))));
        bufp->chgBit(oldp+1086,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 4U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1087,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                       | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                          >> 4U)))));
        bufp->chgBit(oldp+1088,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 3U))));
        bufp->chgBit(oldp+1089,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 3U))));
        bufp->chgCData(oldp+1090,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.Match))))),2);
        bufp->chgBit(oldp+1091,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.Match));
        bufp->chgBit(oldp+1092,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1093,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+1095,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+1096,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 0x24U)))),16);
        bufp->chgSData(oldp+1097,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1098,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1099,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 3U)))));
        bufp->chgBit(oldp+1100,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 3U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1101,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+1102,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1103,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgBit(oldp+1104,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1105,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))))));
        bufp->chgBit(oldp+1106,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 3U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1107,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                       | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                          >> 3U)))));
        bufp->chgBit(oldp+1108,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 2U))));
        bufp->chgBit(oldp+1109,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 2U))));
        bufp->chgCData(oldp+1110,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType) 
                                   & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.Match))))),2);
        bufp->chgBit(oldp+1111,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.Match));
        bufp->chgBit(oldp+1112,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1113,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+1115,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+1116,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 0x24U)))),16);
        bufp->chgSData(oldp+1117,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1118,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1119,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 2U)))));
        bufp->chgBit(oldp+1120,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 2U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1121,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+1122,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1123,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgBit(oldp+1124,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1125,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))))));
        bufp->chgBit(oldp+1126,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 2U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1127,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                       | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                          >> 2U)))));
        bufp->chgBit(oldp+1128,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 1U))));
        bufp->chgBit(oldp+1129,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       >> 1U))));
        bufp->chgCData(oldp+1130,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.PageTypeRead),2);
        bufp->chgBit(oldp+1131,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.Match));
        bufp->chgBit(oldp+1132,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1133,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+1135,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+1136,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 0x24U)))),16);
        bufp->chgSData(oldp+1137,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1138,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1139,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                       | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                          >> 1U)))));
        bufp->chgBit(oldp+1140,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType)) 
                                    | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                        >> 1U) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                              >> 4U)))))))));
        bufp->chgBit(oldp+1141,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+1142,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1143,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgBit(oldp+1144,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1145,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))))));
        bufp->chgBit(oldp+1146,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                  >> 1U) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                           >> 4U)))))));
        bufp->chgBit(oldp+1147,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                       | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                          >> 1U)))));
        bufp->chgBit(oldp+1148,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs)));
        bufp->chgBit(oldp+1149,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs)));
        bufp->chgCData(oldp+1150,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.PageTypeRead),2);
        bufp->chgBit(oldp+1151,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.Match));
        bufp->chgBit(oldp+1152,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Valid));
        bufp->chgQData(oldp+1153,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key),52);
        bufp->chgCData(oldp+1155,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType),2);
        bufp->chgSData(oldp+1156,((0xffffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 0x24U)))),16);
        bufp->chgSData(oldp+1157,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key))),9);
        bufp->chgSData(oldp+1158,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                     >> 9U)))),9);
        bufp->chgBit(oldp+1159,((1U & (((0xffffU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                            >> 0x2cU))) 
                                        == (0xffffU 
                                            & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                       >> 0x24U)))) 
                                       | vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs))));
        bufp->chgBit(oldp+1160,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0xcU)) 
                                  == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key))) 
                                 | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType)) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                       & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                         >> 4U)))))))));
        bufp->chgBit(oldp+1161,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x15U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                        >> 9U)))) 
                                 | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType)))));
        bufp->chgSData(oldp+1162,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+1163,((0x1ffU & (IData)(
                                                    (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                     >> 0x1bU)))),9);
        bufp->chgBit(oldp+1164,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x1eU))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                        >> 0x12U)))) 
                                 | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType)))));
        bufp->chgBit(oldp+1165,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU)))))));
        bufp->chgBit(oldp+1166,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                 & ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x10U)) 
                                    == (0x1fU & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                         >> 4U)))))));
        bufp->chgBit(oldp+1167,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                       | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables))));
        bufp->chgCData(oldp+1168,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox0.y),8);
        bufp->chgCData(oldp+1169,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1170,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox1.y),8);
        bufp->chgCData(oldp+1171,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1172,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox2.y),8);
        bufp->chgCData(oldp+1173,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+1174,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox3.y),8);
        bufp->chgCData(oldp+1175,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1176,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox4.y),8);
        bufp->chgCData(oldp+1177,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1178,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox5.y),8);
        bufp->chgCData(oldp+1179,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+1180,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox6.y),8);
        bufp->chgCData(oldp+1181,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1182,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox7.y),8);
        bufp->chgCData(oldp+1183,((0xffU & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In)),8);
        bufp->chgCData(oldp+1184,((0xffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1185,((0xffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1186,((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1187,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1188,((0xffU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                    >> 0x18U)))),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x21U] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x22U]))) {
        bufp->chgQData(oldp+1189,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf
                                  [(0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0xfU)))]),64);
        bufp->chgQData(oldp+1191,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf
                                  [(0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U)))]),64);
        bufp->chgQData(oldp+1193,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf
                                  [(0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x1bU)))]),64);
        bufp->chgQData(oldp+1195,(((0U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xfU))))
                                    ? 0ULL : ((0x1eU 
                                               >= (0x1fU 
                                                   & ((IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                               >> 0xfU)) 
                                                      - (IData)(1U))))
                                               ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf
                                              [(0x1fU 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xfU)) 
                                                   - (IData)(1U)))]
                                               : 0ULL))),64);
        bufp->chgQData(oldp+1197,(((0U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))
                                    ? 0ULL : ((0x1eU 
                                               >= (0x1fU 
                                                   & ((IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                               >> 0x14U)) 
                                                      - (IData)(1U))))
                                               ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf
                                              [(0x1fU 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U)) 
                                                   - (IData)(1U)))]
                                               : 0ULL))),64);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x22U])) {
        bufp->chgQData(oldp+1199,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0]),64);
        bufp->chgQData(oldp+1201,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[1]),64);
        bufp->chgQData(oldp+1203,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[2]),64);
        bufp->chgQData(oldp+1205,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[3]),64);
        bufp->chgQData(oldp+1207,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[4]),64);
        bufp->chgQData(oldp+1209,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[5]),64);
        bufp->chgQData(oldp+1211,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[6]),64);
        bufp->chgQData(oldp+1213,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[7]),64);
        bufp->chgQData(oldp+1215,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[8]),64);
        bufp->chgQData(oldp+1217,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[9]),64);
        bufp->chgQData(oldp+1219,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[10]),64);
        bufp->chgQData(oldp+1221,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[11]),64);
        bufp->chgQData(oldp+1223,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[12]),64);
        bufp->chgQData(oldp+1225,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[13]),64);
        bufp->chgQData(oldp+1227,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[14]),64);
        bufp->chgQData(oldp+1229,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[15]),64);
        bufp->chgQData(oldp+1231,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[16]),64);
        bufp->chgQData(oldp+1233,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[17]),64);
        bufp->chgQData(oldp+1235,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[18]),64);
        bufp->chgQData(oldp+1237,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[19]),64);
        bufp->chgQData(oldp+1239,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[20]),64);
        bufp->chgQData(oldp+1241,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[21]),64);
        bufp->chgQData(oldp+1243,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[22]),64);
        bufp->chgQData(oldp+1245,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[23]),64);
        bufp->chgQData(oldp+1247,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[24]),64);
        bufp->chgQData(oldp+1249,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[25]),64);
        bufp->chgQData(oldp+1251,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[26]),64);
        bufp->chgQData(oldp+1253,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[27]),64);
        bufp->chgQData(oldp+1255,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[28]),64);
        bufp->chgQData(oldp+1257,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[29]),64);
        bufp->chgQData(oldp+1259,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[30]),64);
        bufp->chgQData(oldp+1261,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[31]),64);
        bufp->chgIData(oldp+1263,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__i),32);
        bufp->chgQData(oldp+1264,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0]),64);
        bufp->chgQData(oldp+1266,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[1]),64);
        bufp->chgQData(oldp+1268,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[2]),64);
        bufp->chgQData(oldp+1270,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[3]),64);
        bufp->chgQData(oldp+1272,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[4]),64);
        bufp->chgQData(oldp+1274,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[5]),64);
        bufp->chgQData(oldp+1276,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[6]),64);
        bufp->chgQData(oldp+1278,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[7]),64);
        bufp->chgQData(oldp+1280,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[8]),64);
        bufp->chgQData(oldp+1282,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[9]),64);
        bufp->chgQData(oldp+1284,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[10]),64);
        bufp->chgQData(oldp+1286,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[11]),64);
        bufp->chgQData(oldp+1288,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[12]),64);
        bufp->chgQData(oldp+1290,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[13]),64);
        bufp->chgQData(oldp+1292,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[14]),64);
        bufp->chgQData(oldp+1294,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[15]),64);
        bufp->chgQData(oldp+1296,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[16]),64);
        bufp->chgQData(oldp+1298,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[17]),64);
        bufp->chgQData(oldp+1300,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[18]),64);
        bufp->chgQData(oldp+1302,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[19]),64);
        bufp->chgQData(oldp+1304,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[20]),64);
        bufp->chgQData(oldp+1306,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[21]),64);
        bufp->chgQData(oldp+1308,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[22]),64);
        bufp->chgQData(oldp+1310,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[23]),64);
        bufp->chgQData(oldp+1312,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[24]),64);
        bufp->chgQData(oldp+1314,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[25]),64);
        bufp->chgQData(oldp+1316,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[26]),64);
        bufp->chgQData(oldp+1318,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[27]),64);
        bufp->chgQData(oldp+1320,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[28]),64);
        bufp->chgQData(oldp+1322,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[29]),64);
        bufp->chgQData(oldp+1324,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[30]),64);
        bufp->chgIData(oldp+1326,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__i),32);
        bufp->chgBit(oldp+1327,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__EndOfFrame));
        bufp->chgBit(oldp+1328,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__ShiftEdge));
        bufp->chgBit(oldp+1329,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__SampleEdge));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x2cU])) {
        bufp->chgBit(oldp+1330,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitLoad));
        bufp->chgCData(oldp+1331,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__NextState),3);
        bufp->chgBit(oldp+1332,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__ContinueTransmit));
        bufp->chgBit(oldp+1333,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EndTransmission));
    }
    bufp->chgBit(oldp+1334,(vlSelfRef.testbench__DOT__clk));
    bufp->chgCData(oldp+1335,((7U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUSelect)
                                      ? ((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                           & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW))) 
                                          | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_10))
                                          ? 5U : 0U)
                                      : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUSelect)
                                          ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                              << 6U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                >> 0x1aU))
                                          : 0U)))),3);
    bufp->chgBit(oldp+1336,(vlSelfRef.testbench__DOT__TestBenchReset));
    bufp->chgBit(oldp+1337,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__IFUCacheBusStallF) 
                             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelSpillNextF))));
    bufp->chgQData(oldp+1338,((0xffffffffffffffULL 
                               & (VL_SHIFTL_QQI(56,56,32, (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCount)), 3U) 
                                  + ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF)
                                      ? ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_8)
                                          ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                              [2U] 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfc0U 
                                                                & ((IData)(
                                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                            >> 6U)) 
                                                                   << 6U)))))
                                          : ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT____Vcellout__addressmux____pinNumber4 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfc0U 
                                                                & ((IData)(
                                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                            >> 6U)) 
                                                                   << 6U))))))
                                      : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)))),56);
    bufp->chgCData(oldp+1340,(((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                                 & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__CacheBusRW))) 
                                | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_9))
                                ? 5U : 0U)),3);
    bufp->chgCData(oldp+1341,(((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                 & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IFUHREADY) 
                                    & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_12)))) 
                                | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                   | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CacheAccess) 
                                      & ((7U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed)) 
                                         & ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__CacheBusRW)) 
                                            & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_11))))))
                                ? 2U : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_9)
                                         ? 3U : 0U))),2);
    bufp->chgQData(oldp+1342,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHADDROut),56);
    bufp->chgBit(oldp+1344,((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusAtomic)) 
                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11)) 
                             | (((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__BusWrite)) 
                                | (((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusAtomic)) 
                                   | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                      & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BeatCount))))))));
    bufp->chgBit(oldp+1345,((1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__ITLBMissF)) 
                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__SelRegions) 
                                      | (((3U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                          | (0U != 
                                             ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__L) 
                                              & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch)))) 
                                         & (~ (((0xffffffffffffffULL 
                                                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
                                                    + (QData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__SizeBytesMinus1)))) 
                                                <= 
                                                vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                [0xeU]) 
                                               & (0U 
                                                  != 
                                                  ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__X) 
                                                   & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch)))))))))));
    bufp->chgCData(oldp+1346,(((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                 & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW))) 
                                | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_10))
                                ? 5U : 0U)),3);
    bufp->chgBit(oldp+1347,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__ebufsmarb__DOT__CurrState)) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__ebufsmarb__DOT__both))));
    bufp->chgCData(oldp+1348,(((0U == (3U & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUSelect)
                                               ? ((
                                                   ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW))) 
                                                   | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_10))
                                                   ? 5U
                                                   : 0U)
                                               : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUSelect)
                                                   ? 
                                                  ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                    << 6U) 
                                                   | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                      >> 0x1aU))
                                                   : 0U)) 
                                             >> 1U)))
                                ? 0U : (0xfU & (((IData)(2U) 
                                                 << 
                                                 (3U 
                                                  & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUSelect)
                                                       ? 
                                                      ((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                                         & (0U 
                                                            != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW))) 
                                                        | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_10))
                                                        ? 5U
                                                        : 0U)
                                                       : 
                                                      ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUSelect)
                                                        ? 
                                                       ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                         << 6U) 
                                                        | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                           >> 0x1aU))
                                                        : 0U)) 
                                                     >> 1U))) 
                                                - (IData)(1U))))),4);
    bufp->chgQData(oldp+1349,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BPWrongE)
                                ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__PCCorrectE
                                : ((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                                           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__BPDirF) 
                                              >> 1U)) 
                                          | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                                             >> 1U)))
                                    ? ((4U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U])
                                        ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__RASPCF
                                        : (((QData)((IData)(
                                                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[0U]))))
                                    : ((3U != (3U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PostSpillInstrRawF))
                                        ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__PCPlus2NextF
                                        : (((1ULL + 
                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                              >> 2U)) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (3U 
                                                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF))))))))),64);
    bufp->chgQData(oldp+1351,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__CSRWriteFenceM)
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BPWrongM)
                                    ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF
                                    : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCE)
                                : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BPWrongE)
                                    ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__PCCorrectE
                                    : ((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__BPDirF) 
                                                  >> 1U)) 
                                              | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                                                 >> 1U)))
                                        ? ((4U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U])
                                            ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__RASPCF
                                            : (((QData)((IData)(
                                                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[0U]))))
                                        : ((3U != (3U 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PostSpillInstrRawF))
                                            ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__PCPlus2NextF
                                            : (((1ULL 
                                                 + 
                                                 (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                                  >> 2U)) 
                                                << 2U) 
                                               | (QData)((IData)(
                                                                 (3U 
                                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF)))))))))),64);
    bufp->chgQData(oldp+1353,(((3U != (3U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PostSpillInstrRawF))
                                ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__PCPlus2NextF
                                : (((1ULL + (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                             >> 2U)) 
                                    << 2U) | (QData)((IData)(
                                                             (3U 
                                                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF))))))),64);
    bufp->chgIData(oldp+1355,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets
                              [(0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                 >> 1U)))]),32);
    bufp->chgBit(oldp+1356,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelSpillNextF));
    bufp->chgBit(oldp+1357,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_12)) 
                             | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                   | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                      | ((7U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed)) 
                                         & ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                            | (6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState))))))))));
    bufp->chgBit(oldp+1358,(((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                 >> 6U)) & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h6a8520a7_0_0) 
                                            & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__TLBPageFault)) 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                          >> 0x3dU)))))));
    bufp->chgCData(oldp+1359,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__CurrState))
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__TakeSpillF)
                                    ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__CurrState))
                                                   ? 
                                                  ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StallF)
                                                    ? 1U
                                                    : 0U)
                                                   : 0U))),2);
    bufp->chgBit(oldp+1360,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__TakeSpillF));
    bufp->chgBit(oldp+1361,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT____VdfgRegularize_h60e56e31_0_1))));
    bufp->chgBit(oldp+1362,((1U & (~ (IData)((3U == 
                                              ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM)
                                                ? 0U
                                                : (3U 
                                                   & vlSelfRef.__VdfgRegularize_hd87f99a1_4_114))))))));
    bufp->chgBit(oldp+1363,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelSpillNextF))));
    bufp->chgIData(oldp+1364,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT____Vcellinp__SpillInstrReg____pinNumber4) 
                                << 0x10U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__InstrFirstHalfF))),32);
    bufp->chgQData(oldp+1365,(((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                                       & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__BPDirF) 
                                          >> 1U)) | 
                                      (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                                       >> 1U))) ? (
                                                   (4U 
                                                    & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U])
                                                    ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__RASPCF
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[0U]))))
                                : ((3U != (3U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PostSpillInstrRawF))
                                    ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__PCPlus2NextF
                                    : (((1ULL + (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                                 >> 2U)) 
                                        << 2U) | (QData)((IData)(
                                                                 (3U 
                                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF)))))))),64);
    bufp->chgQData(oldp+1367,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_8)
                                ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                    [2U] << 0xcU) | (QData)((IData)(
                                                                    (0xfc0U 
                                                                     & ((IData)(
                                                                                (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                                >> 6U)) 
                                                                        << 6U)))))
                                : ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT____Vcellout__addressmux____pinNumber4 
                                    << 0xcU) | (QData)((IData)(
                                                               (0xfc0U 
                                                                & ((IData)(
                                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                            >> 6U)) 
                                                                   << 6U))))))),56);
    bufp->chgCData(oldp+1369,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM) 
                                << 1U) | (1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF))))),2);
    bufp->chgQData(oldp+1370,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF)
                                ? ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_8)
                                    ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                        [2U] << 0xcU) 
                                       | (QData)((IData)(
                                                         (0xfc0U 
                                                          & ((IData)(
                                                                     (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                      >> 6U)) 
                                                             << 6U)))))
                                    : ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT____Vcellout__addressmux____pinNumber4 
                                        << 0xcU) | (QData)((IData)(
                                                                   (0xfc0U 
                                                                    & ((IData)(
                                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                                >> 6U)) 
                                                                       << 6U))))))
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)),56);
    bufp->chgCData(oldp+1372,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__SelAdrData))),2);
    bufp->chgCData(oldp+1373,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__SelAdrData) 
                                  | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__GatedStallD)))),2);
    bufp->chgQData(oldp+1374,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                              [2U]),44);
    bufp->chgBit(oldp+1376,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__LRUWriteEn));
    bufp->chgQData(oldp+1377,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                [2U] << 0xcU) | (QData)((IData)(
                                                                (0xfc0U 
                                                                 & ((IData)(
                                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                             >> 6U)) 
                                                                    << 6U)))))),56);
    bufp->chgQData(oldp+1379,((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                               [2U] << 0xcU)),56);
    bufp->chgBit(oldp+1381,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__0__KET____DOT__SelectedWriteWordEn));
    bufp->chgBit(oldp+1382,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__1__KET____DOT__SelectedWriteWordEn));
    bufp->chgBit(oldp+1383,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__2__KET____DOT__SelectedWriteWordEn));
    bufp->chgBit(oldp+1384,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__3__KET____DOT__SelectedWriteWordEn));
    bufp->chgQData(oldp+1385,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid[0]),44);
    bufp->chgQData(oldp+1387,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid[1]),44);
    bufp->chgQData(oldp+1389,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid[2]),44);
    bufp->chgBit(oldp+1391,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT____VdfgRegularize_hb604bb0f_0_1) 
                             & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__HitWay)))));
    bufp->chgCData(oldp+1392,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__LRUWriteEn) 
                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheSetLRU) 
                                   == (0x3fU & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 6U)))))
                                ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__NextLRU)
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__LRUMemory
                               [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheSetLRU])),3);
    bufp->chgBit(oldp+1393,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__LRUWriteEn) 
                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheSetLRU) 
                                == (0x3fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 6U)))))));
    bufp->chgCData(oldp+1394,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate[0]),2);
    bufp->chgCData(oldp+1395,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate[1]),2);
    bufp->chgCData(oldp+1396,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate[2]),2);
    bufp->chgCData(oldp+1397,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate
                              [2U]),2);
    bufp->chgBit(oldp+1398,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__PBMemoryType))
                              ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM) 
                                 | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__CacheableRegion))
                              : (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__PBMemoryType)))));
    bufp->chgQData(oldp+1399,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__CAMHit)
                                ? ((0xffffffffff0000ULL 
                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed 
                                       << 0xcU)) | (QData)((IData)(
                                                                   ((0xf000U 
                                                                     & (((0x800U 
                                                                          & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                                          ? (IData)(
                                                                                (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                                >> 0xcU))
                                                                          : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed)) 
                                                                        << 0xcU)) 
                                                                    | (0xfffU 
                                                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF))))))
                                : 0ULL)),56);
    bufp->chgBit(oldp+1401,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__SelRegions))));
    bufp->chgBit(oldp+1402,((((3U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                              | (0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__L) 
                                        & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch)))) 
                             & (~ (((0xffffffffffffffULL 
                                     & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
                                        + (QData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__SizeBytesMinus1)))) 
                                    <= vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                    [0xeU]) & (0U != 
                                               ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__X) 
                                                & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch))))))));
    bufp->chgCData(oldp+1403,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__PBMemoryType),2);
    bufp->chgQData(oldp+1404,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__CAMHit)
                                ? ((0xffffffffff0ULL 
                                    & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed) 
                                   | (QData)((IData)(
                                                     (0xfU 
                                                      & ((0x800U 
                                                          & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                          ? (IData)(
                                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                     >> 0xcU))
                                                          : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))))))
                                : 0ULL)),44);
    bufp->chgSData(oldp+1406,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__SelRegions),12);
    bufp->chgBit(oldp+1407,((IData)((0U != (0x2aU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__SelRegions))))));
    bufp->chgBit(oldp+1408,((((3U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                               [0x1eU]) & (0U != (0x7ffffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                             [0x1eU] 
                                                             >> 0xaU))))) 
                             | (((2U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                  [0x1eU]) & (0U != 
                                              (0x3ffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                          [0x1eU] 
                                                          >> 0xaU))))) 
                                | ((1U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                    [0x1eU]) & (0U 
                                                != 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                            [0x1eU] 
                                                            >> 0xaU)))))))));
    bufp->chgQData(oldp+1409,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed),44);
    bufp->chgQData(oldp+1411,(((0xffffffffff0ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed) 
                               | (QData)((IData)((0xfU 
                                                  & ((0x800U 
                                                      & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                      ? (IData)(
                                                                (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                 >> 0xcU))
                                                      : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))))))),44);
    bufp->chgCData(oldp+1413,((0xfU & ((0x800U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                        ? (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))
                                        : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed)))),4);
    bufp->chgCData(oldp+1414,((0xfU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))),4);
    bufp->chgBit(oldp+1415,((((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                  >> 4U)) & (0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))) 
                             | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                   >> 4U)))));
    bufp->chgBit(oldp+1416,((1U & ((~ ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                >> 0x3eU)) 
                                       | (0U == (3U 
                                                 & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                    >> 9U))))) 
                                   | (3U == (3U & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                   >> 9U)))))));
    bufp->chgBit(oldp+1417,((1U & ((1U != (0x101U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))) 
                                   | ((((((((((~ ((8U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                               >> 0x3cU))))
                                                   ? 
                                                  ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT__genblk1__DOT__eq_63_47) 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                              >> 0x26U)))))) 
                                                      | (0x1ffU 
                                                         == 
                                                         (0x1ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                     >> 0x26U))))))
                                                   : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT__genblk1__DOT__eq_63_47))) 
                                              | ((3U 
                                                  == 
                                                  vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                                  [0x1eU]) 
                                                 & (0U 
                                                    != 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                                [0x1eU] 
                                                                >> 0xaU)))))) 
                                             | ((2U 
                                                 == 
                                                 vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                                 [0x1eU]) 
                                                & (0U 
                                                   != 
                                                   (0x3ffffU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                               [0x1eU] 
                                                               >> 0xaU)))))) 
                                            | ((1U 
                                                == 
                                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                                [0x1eU]) 
                                               & (0U 
                                                  != 
                                                  (0x1ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                              [0x1eU] 
                                                              >> 0xaU)))))) 
                                           | ((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                  >> 4U)) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)))) 
                                          | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                             & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                >> 4U))) 
                                         | (~ ((IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                        >> 0x3eU)) 
                                               | (0U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                      >> 9U)))))) 
                                        | (3U == (3U 
                                                  & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                     >> 9U)))) 
                                       | ((8U != (0xfU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                             [0x1eU] 
                                                             >> 0xaU)))) 
                                          & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                             >> 0xbU))) 
                                      | ((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                             >> 6U)) 
                                         & (~ (IData)(
                                                      (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                       >> 0x3dU)))))))));
    bufp->chgBit(oldp+1418,((((9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                              & (0xbU != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))) 
                             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__StartWalk))));
    bufp->chgSData(oldp+1419,(((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskExtendedM)
                                : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelSpillE)
                                    ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM)
                                    : (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskExtendedM) 
                                        << 8U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM))))),16);
    if ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))) {
        __Vtemp_3[0U] = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__ReadDataWordFirstHalfM);
        __Vtemp_3[1U] = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__ReadDataWordFirstHalfM 
                                 >> 0x20U));
        __Vtemp_3[2U] = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__CacheReadDataWordAHB);
        __Vtemp_3[3U] = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__CacheReadDataWordAHB 
                                 >> 0x20U));
    } else {
        __Vtemp_3[0U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__subcachelineread__DOT__ReadDataLineSets
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WordOffsetAddr][0U];
        __Vtemp_3[1U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__subcachelineread__DOT__ReadDataLineSets
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WordOffsetAddr][1U];
        __Vtemp_3[2U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__subcachelineread__DOT__ReadDataLineSets
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WordOffsetAddr][2U];
        __Vtemp_3[3U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__subcachelineread__DOT__ReadDataLineSets
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WordOffsetAddr][3U];
    }
    VL_SHIFTR_WWI(128,128,6, __Vtemp_4, __Vtemp_3, (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__ShiftAmount));
    bufp->chgQData(oldp+1420,((((QData)((IData)(__Vtemp_4[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            __Vtemp_4[0U])))),64);
    bufp->chgBit(oldp+1422,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__StartWalk) 
                             | ((9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__HPTWFaultM)))));
    bufp->chgQData(oldp+1423,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
                                ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                    [2U] << 0xcU) | (QData)((IData)(
                                                                    ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushAdr) 
                                                                     << 6U))))
                                : ((((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                     & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                                        | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6))) 
                                    | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_20) 
                                       & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay))))
                                    ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                        [2U] << 0xcU) 
                                       | (QData)((IData)(
                                                         (0xfc0U 
                                                          & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))))
                                    : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0))),56);
    bufp->chgBit(oldp+1425,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                              & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11) 
                                 | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__BusWrite))) 
                             | (((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11)) 
                                | (((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11)) 
                                   | (((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11)) 
                                      | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                         | (5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)))))))));
    bufp->chgCData(oldp+1426,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_21)
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)
                                    ? 0U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM))
                                : 0U)),2);
    bufp->chgCData(oldp+1427,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_22)
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)
                                    ? 0U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM))
                                : 0U)),2);
    bufp->chgCData(oldp+1428,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelDTIM) 
                                << 1U) | (1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM))))),2);
    bufp->chgQData(oldp+1429,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM)
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
                                    ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                        [2U] << 0xcU) 
                                       | (QData)((IData)(
                                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushAdr) 
                                                          << 6U))))
                                    : ((((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                         & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                                            | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6))) 
                                        | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_20) 
                                           & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay))))
                                        ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                            [2U] << 0xcU) 
                                           | (QData)((IData)(
                                                             (0xfc0U 
                                                              & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))))
                                        : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0))
                                : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusCMOZero)
                                    ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0
                                    : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM))),56);
    bufp->chgQData(oldp+1431,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM)
                                ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__CacheReadDataWordAHB
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUWriteDataM)),64);
    bufp->chgQData(oldp+1433,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusCMOZero)
                                ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)),56);
    bufp->chgCData(oldp+1435,((0xffU & ((VL_SHIFTL_III(8,32,32, (IData)(1U), 
                                                       ((IData)(1U) 
                                                        << (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHSIZEOut))) 
                                         - (IData)(1U)) 
                                        << (7U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHADDROut))))),8);
    bufp->chgCData(oldp+1436,((7U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHADDROut))),3);
    bufp->chgBit(oldp+1437,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                              & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0) 
                                 | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22))) 
                             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23))));
    bufp->chgBit(oldp+1438,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22)) 
                             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23))));
    bufp->chgCData(oldp+1439,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                << 1U) | ((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0) 
                                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22))) 
                                           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23)) 
                                          | (9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))))),2);
    bufp->chgCData(oldp+1440,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____VdfgRegularize_h1936c9d4_1_0))),2);
    bufp->chgCData(oldp+1441,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                << 1U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____VdfgRegularize_h1936c9d4_1_0) 
                                          | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__bus__DOT__dcache__DOT__dcache__Stall)))),2);
    bufp->chgQData(oldp+1442,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                              [2U]),44);
    bufp->chgBit(oldp+1444,((((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                              & ((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))) 
                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__FlushFlag))) 
                             | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__FlushFlag) 
                                   & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck))))));
    bufp->chgBit(oldp+1445,((((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))) 
                              & (5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState))) 
                             | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)))));
    bufp->chgBit(oldp+1446,((((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                              & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                                 | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6))) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_20) 
                                & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay))))));
    bufp->chgQData(oldp+1447,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                [2U] << 0xcU) | (QData)((IData)(
                                                                (0xfc0U 
                                                                 & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))))),56);
    bufp->chgQData(oldp+1449,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                [2U] << 0xcU) | (QData)((IData)(
                                                                ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushAdr) 
                                                                 << 6U))))),56);
    bufp->chgCData(oldp+1451,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                << 1U) | (((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                           & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                                              | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6))) 
                                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_20) 
                                             & (0U 
                                                != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))))),2);
    bufp->chgQData(oldp+1452,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid[0]),44);
    bufp->chgQData(oldp+1454,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid[1]),44);
    bufp->chgQData(oldp+1456,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid[2]),44);
    bufp->chgQData(oldp+1458,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetDirty)
                                ? (~ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WriteSelLogic__DOT__DemuxedByteMask)
                                : 0xffffffffffffffffULL)),64);
    bufp->chgQData(oldp+1460,((QData)((IData)(((1U 
                                                == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                                ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskExtendedM)
                                                : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelSpillE)
                                                    ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM)
                                                    : 
                                                   (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskExtendedM) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM))))))),64);
    bufp->chgBit(oldp+1462,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyUpdateHit));
    bufp->chgBit(oldp+1463,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyUpdateHit) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_1) 
                                & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay))))));
    bufp->chgBit(oldp+1464,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyMiss));
    bufp->chgBit(oldp+1465,(((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay)))) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_1))));
    bufp->chgCData(oldp+1466,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LRUWriteEn) 
                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetLRU) 
                                   == (0x3fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 6U))))
                                ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__NextLRU)
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__LRUMemory
                               [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetLRU])),3);
    bufp->chgBit(oldp+1467,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__PreUpdateDA) 
                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_0) 
                                & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__TLBPageFault)) 
                                   & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                              >> 0x3dU)))))));
    bufp->chgBit(oldp+1468,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__PBMemoryType))
                              ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelDTIM) 
                                 | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__CacheableRegion))
                              : (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__PBMemoryType)))));
    bufp->chgQData(oldp+1469,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit)
                                ? ((0xffffffffff0000ULL 
                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed 
                                       << 0xcU)) | (QData)((IData)(
                                                                   ((0xf000U 
                                                                     & (((0x800U 
                                                                          & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                                          ? 
                                                                         ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                                           << 0x14U) 
                                                                          | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                                             >> 0xcU))
                                                                          : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed)) 
                                                                        << 0xcU)) 
                                                                    | (0xfffU 
                                                                       & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])))))
                                : 0ULL)),56);
    bufp->chgBit(oldp+1471,((IData)(((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault)))));
    bufp->chgBit(oldp+1472,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EnforcePMP) 
                             & (IData)(((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                                        & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR)))))));
    bufp->chgBit(oldp+1473,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_24) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault))));
    bufp->chgBit(oldp+1474,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EnforcePMP) 
                             & (((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW)) 
                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                                | (((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW)) 
                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                       >> 4U)) | ((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR)) 
                                                  & (0U 
                                                     != 
                                                     (7U 
                                                      & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                                         >> 1U)))))))));
    bufp->chgQData(oldp+1475,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit)
                                ? ((0xffffffffff0ULL 
                                    & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed) 
                                   | (QData)((IData)(
                                                     (0xfU 
                                                      & ((0x800U 
                                                          & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                          ? 
                                                         ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                           << 0x14U) 
                                                          | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                             >> 0xcU))
                                                          : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))))))
                                : 0ULL)),44);
    bufp->chgBit(oldp+1477,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault));
    bufp->chgSData(oldp+1478,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__SelRegions),12);
    bufp->chgBit(oldp+1479,((IData)((0U != (0x2aU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__SelRegions))))));
    bufp->chgBit(oldp+1480,((((3U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                               [0x1eU]) & (0U != (0x7ffffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                             [0x1eU] 
                                                             >> 0xaU))))) 
                             | (((2U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                  [0x1eU]) & (0U != 
                                              (0x3ffffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                          [0x1eU] 
                                                          >> 0xaU))))) 
                                | ((1U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                    [0x1eU]) & (0U 
                                                != 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                            [0x1eU] 
                                                            >> 0xaU)))))))));
    bufp->chgQData(oldp+1481,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed),44);
    bufp->chgQData(oldp+1483,(((0xffffffffff0ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed) 
                               | (QData)((IData)((0xfU 
                                                  & ((0x800U 
                                                      & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                      ? 
                                                     ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       << 0x14U) 
                                                      | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                         >> 0xcU))
                                                      : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))))))),44);
    bufp->chgCData(oldp+1485,((0xfU & ((0x800U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                        ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            << 0x14U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0xcU))
                                        : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed)))),4);
    bufp->chgCData(oldp+1486,((0xfU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))),4);
    bufp->chgBit(oldp+1487,((1U & ((1U != (0x101U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))) 
                                   | ((((((((((~ ((8U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                               >> 0x3cU))))
                                                   ? 
                                                  ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT__genblk1__DOT__eq_63_47) 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x1ffU 
                                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                                                      >> 6U))))) 
                                                      | (0x1ffU 
                                                         == 
                                                         (0x1ffU 
                                                          & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                                             >> 6U)))))
                                                   : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT__genblk1__DOT__eq_63_47))) 
                                              | ((3U 
                                                  == 
                                                  vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                                  [0x1eU]) 
                                                 & (0U 
                                                    != 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                                [0x1eU] 
                                                                >> 0xaU)))))) 
                                             | ((2U 
                                                 == 
                                                 vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                                 [0x1eU]) 
                                                & (0U 
                                                   != 
                                                   (0x3ffffU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                               [0x1eU] 
                                                               >> 0xaU)))))) 
                                            | ((1U 
                                                == 
                                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                                [0x1eU]) 
                                               & (0U 
                                                  != 
                                                  (0x1ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                              [0x1eU] 
                                                              >> 0xaU)))))) 
                                           | ((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                  >> 4U)) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__EffectivePrivilegeMode)))) 
                                          | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__EffectivePrivilegeMode)) 
                                             & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_SUM_INT)) 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                   >> 4U)))) 
                                         | (~ ((IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                        >> 0x3eU)) 
                                               | (0U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                      >> 9U)))))) 
                                        | (3U == (3U 
                                                  & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                     >> 9U)))) 
                                       | ((8U != (0xfU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                             [0x1eU] 
                                                             >> 0xaU)))) 
                                          & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                             >> 0xbU))) 
                                      | ((~ (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                     >> 0x3dU))) 
                                         & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__PreUpdateDA)))))));
    bufp->chgBit(oldp+1488,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__StartWalk));
    bufp->chgBit(oldp+1489,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__TLBMissOrUpdateDA));
    bufp->chgCData(oldp+1490,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState),4);
    bufp->chgBit(oldp+1491,(((IData)(vlSelfRef.testbench__DOT__reset) 
                             | (9U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)))));
    bufp->chgBit(oldp+1492,(((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                             | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                                | ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                                   | (7U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)))))));
    bufp->chgCData(oldp+1493,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__ValidSpillM)
                                    ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                                   ? 
                                                  ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StallM)
                                                    ? 1U
                                                    : 0U)
                                                   : 0U))),2);
    bufp->chgBit(oldp+1494,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushM)) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT____VdfgRegularize_h1c9cfb2e_0_0))));
    if ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))) {
        __Vtemp_7[0U] = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__ReadDataWordFirstHalfM);
        __Vtemp_7[1U] = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__ReadDataWordFirstHalfM 
                                 >> 0x20U));
        __Vtemp_7[2U] = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__CacheReadDataWordAHB);
        __Vtemp_7[3U] = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__CacheReadDataWordAHB 
                                 >> 0x20U));
    } else {
        __Vtemp_7[0U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__subcachelineread__DOT__ReadDataLineSets
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WordOffsetAddr][0U];
        __Vtemp_7[1U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__subcachelineread__DOT__ReadDataLineSets
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WordOffsetAddr][1U];
        __Vtemp_7[2U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__subcachelineread__DOT__ReadDataLineSets
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WordOffsetAddr][2U];
        __Vtemp_7[3U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__subcachelineread__DOT__ReadDataLineSets
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WordOffsetAddr][3U];
    }
    bufp->chgWData(oldp+1495,(__Vtemp_7),128);
    if ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))) {
        __Vtemp_10[0U] = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__ReadDataWordFirstHalfM);
        __Vtemp_10[1U] = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__ReadDataWordFirstHalfM 
                                  >> 0x20U));
        __Vtemp_10[2U] = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__CacheReadDataWordAHB);
        __Vtemp_10[3U] = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__CacheReadDataWordAHB 
                                  >> 0x20U));
    } else {
        __Vtemp_10[0U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__subcachelineread__DOT__ReadDataLineSets
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WordOffsetAddr][0U];
        __Vtemp_10[1U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__subcachelineread__DOT__ReadDataLineSets
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WordOffsetAddr][1U];
        __Vtemp_10[2U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__subcachelineread__DOT__ReadDataLineSets
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WordOffsetAddr][2U];
        __Vtemp_10[3U] = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__subcachelineread__DOT__ReadDataLineSets
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WordOffsetAddr][3U];
    }
    VL_SHIFTR_WWI(128,128,6, __Vtemp_11, __Vtemp_10, (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__ShiftAmount));
    bufp->chgWData(oldp+1499,(__Vtemp_11),128);
    bufp->chgCData(oldp+1503,((((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState)) 
                                << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelSpillE))),2);
    bufp->chgBit(oldp+1504,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMWriteM) 
                                & (0x341U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x14U))))));
    bufp->chgBit(oldp+1505,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMWriteM) 
                                & (0x342U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x14U))))));
    bufp->chgBit(oldp+1506,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMWriteM) 
                                & (0x343U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x14U))))));
    bufp->chgBit(oldp+1507,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSWriteM) 
                                & (0x141U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x14U))))));
    bufp->chgBit(oldp+1508,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSWriteM) 
                                & (0x142U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x14U))))));
    bufp->chgBit(oldp+1509,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSWriteM) 
                                & (0x143U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x14U))))));
    bufp->chgCData(oldp+1510,(((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__TLBPageFault) 
                                 << 3U) | (4U & (((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__ITLBMissF)) 
                                                  & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__SelRegions) 
                                                     | (((3U 
                                                          != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                                         | (0U 
                                                            != 
                                                            ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__L) 
                                                             & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch)))) 
                                                        & (~ 
                                                           (((0xffffffffffffffULL 
                                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
                                                                 + (QData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__SizeBytesMinus1)))) 
                                                             <= 
                                                             vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                             [0xeU]) 
                                                            & (0U 
                                                               != 
                                                               ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__X) 
                                                                & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch)))))))) 
                                                 << 2U))) 
                               | ((0x3ffffffeU & ((
                                                   (9U 
                                                    != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                                   << 1U) 
                                                  & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____Vcellout__HPTWAccesFaultReg____pinNumber4) 
                                                     >> 2U))) 
                                  | ((9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____Vcellout__HPTWAccesFaultReg____pinNumber4))))),4);
    bufp->chgBit(oldp+1511,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (0xfffULL | (~ (0x1000ULL 
                                                 ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (0xfU >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+1512,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (0xffffULL | (~ (0x2000000ULL 
                                                  ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (0xfU >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+1513,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (0xffULL | (~ (0x10060000ULL 
                                                ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+1514,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (0x3ffffffULL | (~ 
                                                  (0xc000000ULL 
                                                   ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+1515,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (0xfffULL | (~ (0x10040000ULL 
                                                 ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+1516,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (7ULL | (~ (0x10000000ULL 
                                             ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (1U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+1517,(((0xffffffffffffffULL == 
                              (0xffffffffffffffULL 
                               & (0x7ffffffULL | (~ 
                                                  (0x80000000ULL 
                                                   ^ vlSelfRef.testbench__DOT__HADDR))))) 
                             & (0xfU >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->chgBit(oldp+1518,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ahbapbbridge__DOT__initTrans) 
                             & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT____Vcellinp__ahbapbbridge__HSEL)))));
    bufp->chgCData(oldp+1519,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT____Vcellinp__ahbapbbridge__HSEL) 
                               & (- (IData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ahbapbbridge__DOT__initTrans))))),6);
    bufp->chgBit(oldp+1520,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__initTrans) 
                             & (IData)(vlSelfRef.testbench__DOT__HWRITE))));
    bufp->chgBit(oldp+1521,(((~ (IData)(vlSelfRef.testbench__DOT__HWRITE)) 
                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__initTrans))));
    bufp->chgBit(oldp+1522,((1U & (~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__memwriteD) 
                                      & ((~ (IData)(vlSelfRef.testbench__DOT__HWRITE)) 
                                         & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__initTrans)))))));
    bufp->chgBit(oldp+1523,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EdgePulse) 
                             & (2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__NextState)))));
    bufp->chgBit(oldp+1524,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitStartD) 
                             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__ContinueTransmit))));
    bufp->chgBit(oldp+1525,((0U != ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__uartgen__DOT__uart__DOT__uartPC__DOT__RXerrbit) 
                                    & (vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__uartgen__DOT__uart__DOT__uartPC__DOT__rxfullbitunwrapped 
                                       | (vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__uartgen__DOT__uart__DOT__uartPC__DOT__rxfullbitunwrapped 
                                          >> 0x10U))))));
    bufp->chgSData(oldp+1526,((0xffffU & (vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__uartgen__DOT__uart__DOT__uartPC__DOT__rxfullbitunwrapped 
                                          | (vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__uartgen__DOT__uart__DOT__uartPC__DOT__rxfullbitunwrapped 
                                             >> 0x10U)))),16);
    bufp->chgIData(oldp+1527,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__uartgen__DOT__uart__DOT__uartPC__DOT__rxfullbitunwrapped),32);
    bufp->chgBit(oldp+1528,((((0xffffffffffffffULL 
                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
                                  + (QData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__SizeBytesMinus1)))) 
                              <= vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__PTEOr__DOT__genblk1__DOT__mid
                              [0xeU]) & (0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__R) 
                                                & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch))))));
    bufp->chgBit(oldp+1529,((((0xffffffffffffffULL 
                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
                                  + (QData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__SizeBytesMinus1)))) 
                              <= vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__PTEOr__DOT__genblk1__DOT__mid
                              [0xeU]) & (0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__W) 
                                                & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch))))));
    bufp->chgBit(oldp+1530,((((0xffffffffffffffULL 
                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
                                  + (QData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__SizeBytesMinus1)))) 
                              <= vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__PTEOr__DOT__genblk1__DOT__mid
                              [0xeU]) & (0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__X) 
                                                & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch))))));
    bufp->chgBit(oldp+1531,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EnforcePMP) 
                             & (((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW)) 
                                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                    >> 4U)) | ((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR)) 
                                               & (0U 
                                                  != 
                                                  (7U 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                                      >> 1U))))))));
    bufp->chgBit(oldp+1532,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EnforcePMP) 
                             & ((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR)) 
                                & (0U != (7U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                                >> 1U)))))));
    bufp->chgBit(oldp+1533,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EnforcePMP) 
                             & ((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW)) 
                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                   >> 4U)))));
    bufp->chgBit(oldp+1534,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR));
    bufp->chgBit(oldp+1535,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW));
    bufp->chgBit(oldp+1536,(((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__TooBig)) 
                             & (0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__X) 
                                       & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch))))));
    bufp->chgBit(oldp+1537,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__TooBig));
    bufp->chgQData(oldp+1538,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.__PVT__SetValidWay)
                                ? 0xffffffffffffffffULL
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->chgBit(oldp+1540,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.__PVT__SelectedWay)))));
    bufp->chgBit(oldp+1541,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                             & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.__PVT__SelectedWay))));
    bufp->chgQData(oldp+1542,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.__PVT__SetValidWay)
                                ? 0xffffffffffffffffULL
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->chgBit(oldp+1544,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.__PVT__SelectedWay)))));
    bufp->chgBit(oldp+1545,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                             & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.__PVT__SelectedWay))));
    bufp->chgQData(oldp+1546,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.__PVT__SetValidWay)
                                ? 0xffffffffffffffffULL
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->chgBit(oldp+1548,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.__PVT__SelectedWay)))));
    bufp->chgBit(oldp+1549,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                             & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.__PVT__SelectedWay))));
    bufp->chgQData(oldp+1550,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.__PVT__SetValidWay)
                                ? 0xffffffffffffffffULL
                                : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->chgBit(oldp+1552,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.__PVT__SelectedWay)))));
    bufp->chgBit(oldp+1553,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                             & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.__PVT__SelectedWay))));
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3aU)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
