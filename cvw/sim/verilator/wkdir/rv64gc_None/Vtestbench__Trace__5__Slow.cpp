// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_3(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0_sub_3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    // Body
    bufp->fullBit(oldp+26975,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x1aU)))));
    bufp->fullBit(oldp+26976,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x19U))));
    bufp->fullBit(oldp+26977,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x19U))));
    bufp->fullCData(oldp+26978,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.Match))))),2);
    bufp->fullBit(oldp+26979,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.Match));
    bufp->fullBit(oldp+26980,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Valid));
    bufp->fullQData(oldp+26981,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+26983,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+26984,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+26985,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+26986,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+26987,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x19U)))));
    bufp->fullBit(oldp+26988,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+26989,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+26990,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+26991,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+26992,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+26993,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+26994,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x19U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+26995,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x19U)))));
    bufp->fullBit(oldp+26996,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x18U))));
    bufp->fullBit(oldp+26997,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x18U))));
    bufp->fullCData(oldp+26998,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.Match))))),2);
    bufp->fullBit(oldp+26999,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.Match));
    bufp->fullBit(oldp+27000,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27001,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27003,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27004,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27005,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27006,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27007,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x18U)))));
    bufp->fullBit(oldp+27008,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27009,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27010,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27011,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27012,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27013,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27014,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x18U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27015,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x18U)))));
    bufp->fullBit(oldp+27016,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x17U))));
    bufp->fullBit(oldp+27017,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x17U))));
    bufp->fullCData(oldp+27018,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.Match))))),2);
    bufp->fullBit(oldp+27019,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.Match));
    bufp->fullBit(oldp+27020,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27021,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27023,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27024,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27025,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27026,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27027,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x17U)))));
    bufp->fullBit(oldp+27028,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27029,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27030,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27031,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27032,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27033,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27034,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x17U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27035,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x17U)))));
    bufp->fullBit(oldp+27036,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x16U))));
    bufp->fullBit(oldp+27037,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x16U))));
    bufp->fullCData(oldp+27038,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.Match))))),2);
    bufp->fullBit(oldp+27039,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.Match));
    bufp->fullBit(oldp+27040,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27041,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27043,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27044,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27045,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27046,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27047,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x16U)))));
    bufp->fullBit(oldp+27048,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27049,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27050,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27051,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27052,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27053,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27054,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x16U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27055,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x16U)))));
    bufp->fullBit(oldp+27056,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x15U))));
    bufp->fullBit(oldp+27057,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x15U))));
    bufp->fullCData(oldp+27058,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.Match))))),2);
    bufp->fullBit(oldp+27059,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.Match));
    bufp->fullBit(oldp+27060,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27061,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27063,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27064,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27065,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27066,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27067,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x15U)))));
    bufp->fullBit(oldp+27068,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27069,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27070,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27071,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27072,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27073,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27074,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x15U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27075,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x15U)))));
    bufp->fullBit(oldp+27076,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x14U))));
    bufp->fullBit(oldp+27077,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x14U))));
    bufp->fullCData(oldp+27078,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.Match))))),2);
    bufp->fullBit(oldp+27079,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.Match));
    bufp->fullBit(oldp+27080,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27081,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27083,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27084,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27085,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27086,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27087,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x14U)))));
    bufp->fullBit(oldp+27088,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x14U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27089,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27090,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27091,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27092,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27093,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27094,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x14U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27095,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x14U)))));
    bufp->fullBit(oldp+27096,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x13U))));
    bufp->fullBit(oldp+27097,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x13U))));
    bufp->fullCData(oldp+27098,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.Match))))),2);
    bufp->fullBit(oldp+27099,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.Match));
    bufp->fullBit(oldp+27100,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27101,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27103,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27104,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27105,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27106,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27107,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x13U)))));
    bufp->fullBit(oldp+27108,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x13U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27109,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27110,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27111,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27112,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27113,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27114,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x13U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27115,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x13U)))));
    bufp->fullBit(oldp+27116,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x12U))));
    bufp->fullBit(oldp+27117,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x12U))));
    bufp->fullCData(oldp+27118,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.Match))))),2);
    bufp->fullBit(oldp+27119,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.Match));
    bufp->fullBit(oldp+27120,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27121,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27123,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27124,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27125,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27126,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27127,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x12U)))));
    bufp->fullBit(oldp+27128,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x12U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27129,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27130,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27131,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27132,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27133,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27134,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x12U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27135,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x12U)))));
    bufp->fullBit(oldp+27136,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x11U))));
    bufp->fullBit(oldp+27137,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x11U))));
    bufp->fullCData(oldp+27138,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.Match))))),2);
    bufp->fullBit(oldp+27139,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.Match));
    bufp->fullBit(oldp+27140,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27141,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27143,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27144,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27145,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27146,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27147,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x11U)))));
    bufp->fullBit(oldp+27148,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x11U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27149,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27150,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27151,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27152,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27153,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27154,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x11U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27155,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x11U)))));
    bufp->fullBit(oldp+27156,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x10U))));
    bufp->fullBit(oldp+27157,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x10U))));
    bufp->fullCData(oldp+27158,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.Match))))),2);
    bufp->fullBit(oldp+27159,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.Match));
    bufp->fullBit(oldp+27160,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27161,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27163,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27164,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27165,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27166,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27167,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x10U)))));
    bufp->fullBit(oldp+27168,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x10U) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 0x10U))) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27169,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27170,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27171,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27172,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27173,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27174,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x10U) & ((0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                         >> 0x10U))) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27175,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x10U)))));
    bufp->fullBit(oldp+27176,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xfU))));
    bufp->fullBit(oldp+27177,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xfU))));
    bufp->fullCData(oldp+27178,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.Match))))),2);
    bufp->fullBit(oldp+27179,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.Match));
    bufp->fullBit(oldp+27180,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27181,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27183,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27184,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27185,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27186,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27187,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xfU)))));
    bufp->fullBit(oldp+27188,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xfU) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 0x10U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27189,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27190,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27191,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27192,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27193,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27194,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xfU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27195,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xfU)))));
    bufp->fullBit(oldp+27196,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xeU))));
    bufp->fullBit(oldp+27197,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xeU))));
    bufp->fullCData(oldp+27198,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.Match))))),2);
    bufp->fullBit(oldp+27199,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.Match));
    bufp->fullBit(oldp+27200,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27201,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27203,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27204,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27205,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27206,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27207,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xeU)))));
    bufp->fullBit(oldp+27208,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xeU) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 0x10U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27209,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27210,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27211,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27212,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27213,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27214,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xeU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27215,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xeU)))));
    bufp->fullBit(oldp+27216,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xdU))));
    bufp->fullBit(oldp+27217,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xdU))));
    bufp->fullCData(oldp+27218,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.Match))))),2);
    bufp->fullBit(oldp+27219,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.Match));
    bufp->fullBit(oldp+27220,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27221,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27223,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27224,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27225,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27226,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27227,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xdU)))));
    bufp->fullBit(oldp+27228,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xdU) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 0x10U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27229,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27230,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27231,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27232,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27233,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27234,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xdU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27235,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xdU)))));
    bufp->fullBit(oldp+27236,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xcU))));
    bufp->fullBit(oldp+27237,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xcU))));
    bufp->fullCData(oldp+27238,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.Match))))),2);
    bufp->fullBit(oldp+27239,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.Match));
    bufp->fullBit(oldp+27240,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27241,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27243,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27244,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27245,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27246,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27247,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+27248,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xcU) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 0x10U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27249,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27250,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27251,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27252,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27253,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27254,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xcU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27255,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+27256,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xbU))));
    bufp->fullBit(oldp+27257,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xbU))));
    bufp->fullCData(oldp+27258,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.Match))))),2);
    bufp->fullBit(oldp+27259,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.Match));
    bufp->fullBit(oldp+27260,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27261,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27263,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27264,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27265,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27266,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27267,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+27268,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xbU) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 0x10U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27269,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27270,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27271,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27272,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27273,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27274,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xbU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27275,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+27276,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xaU))));
    bufp->fullBit(oldp+27277,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xaU))));
    bufp->fullCData(oldp+27278,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.Match))))),2);
    bufp->fullBit(oldp+27279,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.Match));
    bufp->fullBit(oldp+27280,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27281,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27283,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27284,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27285,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27286,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27287,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+27288,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xaU) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 0x10U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27289,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27290,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27291,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27292,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27293,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27294,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xaU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27295,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+27296,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 9U))));
    bufp->fullBit(oldp+27297,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 9U))));
    bufp->fullCData(oldp+27298,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.Match))))),2);
    bufp->fullBit(oldp+27299,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.Match));
    bufp->fullBit(oldp+27300,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27301,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27303,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27304,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27305,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27306,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27307,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 9U)))));
    bufp->fullBit(oldp+27308,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27309,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27310,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27311,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27312,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27313,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27314,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 9U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27315,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 9U)))));
    bufp->fullBit(oldp+27316,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 8U))));
    bufp->fullBit(oldp+27317,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 8U))));
    bufp->fullCData(oldp+27318,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.Match))))),2);
    bufp->fullBit(oldp+27319,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.Match));
    bufp->fullBit(oldp+27320,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27321,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27323,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27324,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27325,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27326,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27327,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 8U)))));
    bufp->fullBit(oldp+27328,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27329,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27330,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27331,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27332,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27333,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27334,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 8U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27335,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 8U)))));
    bufp->fullBit(oldp+27336,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 7U))));
    bufp->fullBit(oldp+27337,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 7U))));
    bufp->fullCData(oldp+27338,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.Match))))),2);
    bufp->fullBit(oldp+27339,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.Match));
    bufp->fullBit(oldp+27340,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27341,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27343,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27344,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27345,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27346,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27347,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 7U)))));
    bufp->fullBit(oldp+27348,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27349,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27350,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27351,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27352,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27353,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27354,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 7U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27355,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 7U)))));
    bufp->fullBit(oldp+27356,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 6U))));
    bufp->fullBit(oldp+27357,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 6U))));
    bufp->fullCData(oldp+27358,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.Match))))),2);
    bufp->fullBit(oldp+27359,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.Match));
    bufp->fullBit(oldp+27360,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27361,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27363,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27364,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27365,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27366,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27367,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 6U)))));
    bufp->fullBit(oldp+27368,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27369,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27370,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27371,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27372,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27373,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27374,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 6U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27375,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 6U)))));
    bufp->fullBit(oldp+27376,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 5U))));
    bufp->fullBit(oldp+27377,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 5U))));
    bufp->fullCData(oldp+27378,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.Match))))),2);
    bufp->fullBit(oldp+27379,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.Match));
    bufp->fullBit(oldp+27380,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27381,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27383,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27384,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27385,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27386,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27387,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 5U)))));
    bufp->fullBit(oldp+27388,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27389,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27390,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27391,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27392,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27393,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27394,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 5U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27395,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 5U)))));
    bufp->fullBit(oldp+27396,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 4U))));
    bufp->fullBit(oldp+27397,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 4U))));
    bufp->fullCData(oldp+27398,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.Match))))),2);
    bufp->fullBit(oldp+27399,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.Match));
    bufp->fullBit(oldp+27400,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27401,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27403,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27404,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27405,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27406,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27407,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 4U)))));
    bufp->fullBit(oldp+27408,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27409,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27410,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27411,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27412,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27413,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27414,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 4U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27415,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 4U)))));
    bufp->fullBit(oldp+27416,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 3U))));
    bufp->fullBit(oldp+27417,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 3U))));
    bufp->fullCData(oldp+27418,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.Match))))),2);
    bufp->fullBit(oldp+27419,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.Match));
    bufp->fullBit(oldp+27420,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27421,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27423,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27424,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27425,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27426,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27427,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 3U)))));
    bufp->fullBit(oldp+27428,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27429,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27430,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27431,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27432,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27433,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27434,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 3U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27435,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 3U)))));
    bufp->fullBit(oldp+27436,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 2U))));
    bufp->fullBit(oldp+27437,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 2U))));
    bufp->fullCData(oldp+27438,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.Match))))),2);
    bufp->fullBit(oldp+27439,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.Match));
    bufp->fullBit(oldp+27440,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27441,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27443,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27444,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27445,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27446,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27447,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 2U)))));
    bufp->fullBit(oldp+27448,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27449,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27450,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27451,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27452,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27453,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27454,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 2U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27455,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 2U)))));
    bufp->fullBit(oldp+27456,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 1U))));
    bufp->fullBit(oldp+27457,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 1U))));
    bufp->fullCData(oldp+27458,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.PageTypeRead),2);
    bufp->fullBit(oldp+27459,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.Match));
    bufp->fullBit(oldp+27460,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27461,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27463,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27464,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27465,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27466,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27467,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 1U)))));
    bufp->fullBit(oldp+27468,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
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
    bufp->fullBit(oldp+27469,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27470,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27471,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27472,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27473,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27474,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 1U) & ((0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                            >> 0x10U))) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27475,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 1U)))));
    bufp->fullBit(oldp+27476,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs)));
    bufp->fullBit(oldp+27477,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs)));
    bufp->fullCData(oldp+27478,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.PageTypeRead),2);
    bufp->fullBit(oldp+27479,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.Match));
    bufp->fullBit(oldp+27480,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27481,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27483,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27484,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27485,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27486,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27487,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs))));
    bufp->fullBit(oldp+27488,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU))) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType)) 
                                  | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     & ((0x1fU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 0x10U))) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                             >> 4U)))))))));
    bufp->fullBit(oldp+27489,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x15U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27490,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27491,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27492,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27493,((((0x1ffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x27U))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27494,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               & ((0x1fU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                    >> 0x10U))) 
                                  == (0x1fU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                       >> 4U)))))));
    bufp->fullBit(oldp+27495,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                                     | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables))));
    bufp->fullBit(oldp+27496,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                               >> 0x1fU)));
    bufp->fullBit(oldp+27497,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1fU)));
    bufp->fullCData(oldp+27498,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.Match))))),2);
    bufp->fullBit(oldp+27499,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.Match));
    bufp->fullBit(oldp+27500,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27501,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27503,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27504,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27505,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27506,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullSData(oldp+27507,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU))),9);
    bufp->fullSData(oldp+27508,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U))),9);
    bufp->fullBit(oldp+27509,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                >> 0x1fU) | ((0xffffU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                             == (0xffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                            >> 0x24U)))))));
    bufp->fullBit(oldp+27510,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1fU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27511,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__PageType)))));
    bufp->fullQData(oldp+27512,((((QData)((IData)((0xffffU 
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
    bufp->fullSData(oldp+27514,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27515,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullSData(oldp+27516,((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU)))),9);
    bufp->fullSData(oldp+27517,((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U))),9);
    bufp->fullBit(oldp+27518,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27519,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27520,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1fU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27521,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                               | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                  >> 0x1fU))));
    bufp->fullBit(oldp+27522,((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)))));
    bufp->fullBit(oldp+27523,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+27524,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1eU))));
    bufp->fullCData(oldp+27525,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.Match))))),2);
    bufp->fullBit(oldp+27526,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.Match));
    bufp->fullBit(oldp+27527,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27528,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27530,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27531,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27532,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27533,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27534,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1eU)))));
    bufp->fullBit(oldp+27535,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1eU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27536,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27537,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27538,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27539,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27540,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27541,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1eU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27542,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x1eU)))));
    bufp->fullBit(oldp+27543,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+27544,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1dU))));
    bufp->fullCData(oldp+27545,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.Match))))),2);
    bufp->fullBit(oldp+27546,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.Match));
    bufp->fullBit(oldp+27547,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27548,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27550,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27551,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27552,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27553,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27554,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1dU)))));
    bufp->fullBit(oldp+27555,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1dU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27556,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27557,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27558,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27559,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27560,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27561,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1dU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27562,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x1dU)))));
    bufp->fullBit(oldp+27563,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+27564,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1cU))));
    bufp->fullCData(oldp+27565,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.Match))))),2);
    bufp->fullBit(oldp+27566,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.Match));
    bufp->fullBit(oldp+27567,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27568,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27570,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27571,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27572,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27573,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27574,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1cU)))));
    bufp->fullBit(oldp+27575,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1cU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27576,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27577,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27578,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27579,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27580,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27581,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1cU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27582,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x1cU)))));
    bufp->fullBit(oldp+27583,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+27584,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1bU))));
    bufp->fullCData(oldp+27585,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.Match))))),2);
    bufp->fullBit(oldp+27586,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.Match));
    bufp->fullBit(oldp+27587,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27588,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27590,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27591,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27592,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27593,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27594,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1bU)))));
    bufp->fullBit(oldp+27595,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1bU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27596,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27597,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27598,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27599,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27600,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27601,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1bU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27602,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x1bU)))));
    bufp->fullBit(oldp+27603,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+27604,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x1aU))));
    bufp->fullCData(oldp+27605,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.Match))))),2);
    bufp->fullBit(oldp+27606,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.Match));
    bufp->fullBit(oldp+27607,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27608,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27610,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27611,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27612,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27613,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27614,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x1aU)))));
    bufp->fullBit(oldp+27615,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x1aU) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27616,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27617,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27618,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27619,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27620,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27621,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x1aU) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27622,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x1aU)))));
    bufp->fullBit(oldp+27623,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x19U))));
    bufp->fullBit(oldp+27624,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x19U))));
    bufp->fullCData(oldp+27625,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.Match))))),2);
    bufp->fullBit(oldp+27626,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.Match));
    bufp->fullBit(oldp+27627,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27628,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27630,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27631,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27632,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27633,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27634,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x19U)))));
    bufp->fullBit(oldp+27635,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x19U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27636,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27637,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27638,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27639,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27640,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27641,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x19U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27642,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x19U)))));
    bufp->fullBit(oldp+27643,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x18U))));
    bufp->fullBit(oldp+27644,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x18U))));
    bufp->fullCData(oldp+27645,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.Match))))),2);
    bufp->fullBit(oldp+27646,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.Match));
    bufp->fullBit(oldp+27647,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27648,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27650,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27651,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27652,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27653,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27654,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x18U)))));
    bufp->fullBit(oldp+27655,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x18U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27656,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27657,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27658,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27659,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27660,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27661,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x18U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27662,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x18U)))));
    bufp->fullBit(oldp+27663,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x17U))));
    bufp->fullBit(oldp+27664,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x17U))));
    bufp->fullCData(oldp+27665,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.Match))))),2);
    bufp->fullBit(oldp+27666,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.Match));
    bufp->fullBit(oldp+27667,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27668,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27670,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27671,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27672,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27673,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27674,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x17U)))));
    bufp->fullBit(oldp+27675,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x17U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27676,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27677,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27678,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27679,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27680,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27681,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x17U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27682,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x17U)))));
    bufp->fullBit(oldp+27683,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x16U))));
    bufp->fullBit(oldp+27684,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x16U))));
    bufp->fullCData(oldp+27685,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.Match))))),2);
    bufp->fullBit(oldp+27686,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.Match));
    bufp->fullBit(oldp+27687,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27688,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27690,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27691,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27692,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27693,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27694,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x16U)))));
    bufp->fullBit(oldp+27695,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x16U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27696,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27697,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27698,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27699,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27700,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27701,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x16U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27702,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x16U)))));
    bufp->fullBit(oldp+27703,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x15U))));
    bufp->fullBit(oldp+27704,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x15U))));
    bufp->fullCData(oldp+27705,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.Match))))),2);
    bufp->fullBit(oldp+27706,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.Match));
    bufp->fullBit(oldp+27707,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27708,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27710,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27711,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27712,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27713,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27714,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x15U)))));
    bufp->fullBit(oldp+27715,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x15U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27716,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27717,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27718,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27719,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27720,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27721,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x15U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27722,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x15U)))));
    bufp->fullBit(oldp+27723,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x14U))));
    bufp->fullBit(oldp+27724,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x14U))));
    bufp->fullCData(oldp+27725,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.Match))))),2);
    bufp->fullBit(oldp+27726,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.Match));
    bufp->fullBit(oldp+27727,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27728,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27730,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27731,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27732,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27733,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27734,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x14U)))));
    bufp->fullBit(oldp+27735,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x14U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27736,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27737,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27738,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27739,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27740,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27741,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x14U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27742,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x14U)))));
    bufp->fullBit(oldp+27743,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x13U))));
    bufp->fullBit(oldp+27744,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x13U))));
    bufp->fullCData(oldp+27745,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.Match))))),2);
    bufp->fullBit(oldp+27746,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.Match));
    bufp->fullBit(oldp+27747,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27748,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27750,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27751,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27752,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27753,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27754,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x13U)))));
    bufp->fullBit(oldp+27755,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x13U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27756,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27757,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27758,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27759,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27760,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27761,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x13U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27762,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x13U)))));
    bufp->fullBit(oldp+27763,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x12U))));
    bufp->fullBit(oldp+27764,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x12U))));
    bufp->fullCData(oldp+27765,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.Match))))),2);
    bufp->fullBit(oldp+27766,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.Match));
    bufp->fullBit(oldp+27767,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27768,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27770,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27771,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27772,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27773,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27774,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x12U)))));
    bufp->fullBit(oldp+27775,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x12U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27776,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27777,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27778,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27779,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27780,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27781,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x12U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27782,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x12U)))));
    bufp->fullBit(oldp+27783,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x11U))));
    bufp->fullBit(oldp+27784,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x11U))));
    bufp->fullCData(oldp+27785,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.Match))))),2);
    bufp->fullBit(oldp+27786,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.Match));
    bufp->fullBit(oldp+27787,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27788,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27790,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27791,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27792,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27793,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27794,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x11U)))));
    bufp->fullBit(oldp+27795,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x11U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27796,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27797,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27798,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27799,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27800,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27801,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x11U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27802,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x11U)))));
    bufp->fullBit(oldp+27803,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0x10U))));
    bufp->fullBit(oldp+27804,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0x10U))));
    bufp->fullCData(oldp+27805,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.Match))))),2);
    bufp->fullBit(oldp+27806,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.Match));
    bufp->fullBit(oldp+27807,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27808,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27810,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27811,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27812,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27813,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27814,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0x10U)))));
    bufp->fullBit(oldp+27815,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0x10U) & (
                                                   (0x1fU 
                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                               >> 4U)))))))));
    bufp->fullBit(oldp+27816,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27817,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27818,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27819,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27820,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27821,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0x10U) & ((0x1fU 
                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                 >> 0x10U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__Key 
                                                            >> 4U)))))));
    bufp->fullBit(oldp+27822,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0x10U)))));
    bufp->fullBit(oldp+27823,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xfU))));
    bufp->fullBit(oldp+27824,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xfU))));
    bufp->fullCData(oldp+27825,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.Match))))),2);
    bufp->fullBit(oldp+27826,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.Match));
    bufp->fullBit(oldp+27827,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27828,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27830,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27831,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27832,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27833,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27834,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xfU)))));
    bufp->fullBit(oldp+27835,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xfU) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27836,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27837,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27838,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27839,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27840,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27841,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xfU) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27842,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xfU)))));
    bufp->fullBit(oldp+27843,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xeU))));
    bufp->fullBit(oldp+27844,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xeU))));
    bufp->fullCData(oldp+27845,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.Match))))),2);
    bufp->fullBit(oldp+27846,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.Match));
    bufp->fullBit(oldp+27847,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27848,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27850,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27851,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27852,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27853,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27854,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xeU)))));
    bufp->fullBit(oldp+27855,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xeU) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27856,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27857,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27858,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27859,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27860,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27861,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xeU) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27862,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xeU)))));
    bufp->fullBit(oldp+27863,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xdU))));
    bufp->fullBit(oldp+27864,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xdU))));
    bufp->fullCData(oldp+27865,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.Match))))),2);
    bufp->fullBit(oldp+27866,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.Match));
    bufp->fullBit(oldp+27867,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27868,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27870,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27871,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27872,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27873,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27874,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xdU)))));
    bufp->fullBit(oldp+27875,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xdU) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27876,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27877,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27878,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27879,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27880,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27881,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xdU) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27882,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xdU)))));
    bufp->fullBit(oldp+27883,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xcU))));
    bufp->fullBit(oldp+27884,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xcU))));
    bufp->fullCData(oldp+27885,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.Match))))),2);
    bufp->fullBit(oldp+27886,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.Match));
    bufp->fullBit(oldp+27887,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27888,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27890,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27891,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27892,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27893,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27894,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+27895,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xcU) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27896,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27897,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27898,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27899,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27900,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27901,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xcU) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27902,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+27903,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xbU))));
    bufp->fullBit(oldp+27904,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xbU))));
    bufp->fullCData(oldp+27905,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.Match))))),2);
    bufp->fullBit(oldp+27906,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.Match));
    bufp->fullBit(oldp+27907,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27908,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27910,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27911,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27912,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27913,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27914,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+27915,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xbU) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27916,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27917,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27918,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27919,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27920,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27921,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xbU) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27922,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+27923,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 0xaU))));
    bufp->fullBit(oldp+27924,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 0xaU))));
    bufp->fullCData(oldp+27925,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.Match))))),2);
    bufp->fullBit(oldp+27926,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.Match));
    bufp->fullBit(oldp+27927,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27928,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27930,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27931,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27932,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27933,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27934,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+27935,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType)) 
                                  | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                      >> 0xaU) & ((0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                      >> 0x10U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                              >> 4U)))))))));
    bufp->fullBit(oldp+27936,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27937,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27938,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27939,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27940,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27941,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 0xaU) & ((0x1fU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__Key 
                                                           >> 4U)))))));
    bufp->fullBit(oldp+27942,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+27943,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 9U))));
    bufp->fullBit(oldp+27944,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 9U))));
    bufp->fullCData(oldp+27945,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.Match))))),2);
    bufp->fullBit(oldp+27946,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.Match));
    bufp->fullBit(oldp+27947,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27948,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27950,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27951,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27952,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27953,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27954,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 9U)))));
    bufp->fullBit(oldp+27955,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+27956,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27957,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27958,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27959,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27960,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27961,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 9U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27962,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 9U)))));
    bufp->fullBit(oldp+27963,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 8U))));
    bufp->fullBit(oldp+27964,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 8U))));
    bufp->fullCData(oldp+27965,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.Match))))),2);
    bufp->fullBit(oldp+27966,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.Match));
    bufp->fullBit(oldp+27967,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27968,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27970,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27971,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27972,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27973,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27974,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 8U)))));
    bufp->fullBit(oldp+27975,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+27976,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27977,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27978,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27979,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+27980,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+27981,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 8U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+27982,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 8U)))));
    bufp->fullBit(oldp+27983,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 7U))));
    bufp->fullBit(oldp+27984,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 7U))));
    bufp->fullCData(oldp+27985,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.Match))))),2);
    bufp->fullBit(oldp+27986,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.Match));
    bufp->fullBit(oldp+27987,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Valid));
    bufp->fullQData(oldp+27988,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+27990,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+27991,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+27992,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+27993,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+27994,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 7U)))));
    bufp->fullBit(oldp+27995,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+27996,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+27997,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+27998,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+27999,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28000,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+28001,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 7U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28002,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 7U)))));
    bufp->fullBit(oldp+28003,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 6U))));
    bufp->fullBit(oldp+28004,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 6U))));
    bufp->fullCData(oldp+28005,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.Match))))),2);
    bufp->fullBit(oldp+28006,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.Match));
    bufp->fullBit(oldp+28007,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28008,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+28010,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+28011,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+28012,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28013,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28014,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 6U)))));
    bufp->fullBit(oldp+28015,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28016,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+28017,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28018,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+28019,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28020,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+28021,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 6U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28022,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 6U)))));
    bufp->fullBit(oldp+28023,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 5U))));
    bufp->fullBit(oldp+28024,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 5U))));
    bufp->fullCData(oldp+28025,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.Match))))),2);
    bufp->fullBit(oldp+28026,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.Match));
    bufp->fullBit(oldp+28027,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28028,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+28030,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+28031,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+28032,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28033,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28034,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 5U)))));
    bufp->fullBit(oldp+28035,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28036,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+28037,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28038,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+28039,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28040,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+28041,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 5U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28042,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 5U)))));
    bufp->fullBit(oldp+28043,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 4U))));
    bufp->fullBit(oldp+28044,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 4U))));
    bufp->fullCData(oldp+28045,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.Match))))),2);
    bufp->fullBit(oldp+28046,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.Match));
    bufp->fullBit(oldp+28047,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28048,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+28050,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+28051,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+28052,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28053,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28054,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 4U)))));
    bufp->fullBit(oldp+28055,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28056,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+28057,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28058,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+28059,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28060,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+28061,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 4U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28062,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 4U)))));
    bufp->fullBit(oldp+28063,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 3U))));
    bufp->fullBit(oldp+28064,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 3U))));
    bufp->fullCData(oldp+28065,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.Match))))),2);
    bufp->fullBit(oldp+28066,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.Match));
    bufp->fullBit(oldp+28067,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28068,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+28070,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+28071,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+28072,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28073,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28074,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 3U)))));
    bufp->fullBit(oldp+28075,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28076,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+28077,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28078,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+28079,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28080,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+28081,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 3U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28082,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 3U)))));
    bufp->fullBit(oldp+28083,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 2U))));
    bufp->fullBit(oldp+28084,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 2U))));
    bufp->fullCData(oldp+28085,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType) 
                                 & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.Match))))),2);
    bufp->fullBit(oldp+28086,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.Match));
    bufp->fullBit(oldp+28087,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28088,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+28090,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+28091,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+28092,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28093,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28094,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 2U)))));
    bufp->fullBit(oldp+28095,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28096,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+28097,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28098,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+28099,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28100,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+28101,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 2U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28102,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 2U)))));
    bufp->fullBit(oldp+28103,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                     >> 1U))));
    bufp->fullBit(oldp+28104,((1U & (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     >> 1U))));
    bufp->fullCData(oldp+28105,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.PageTypeRead),2);
    bufp->fullBit(oldp+28106,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.Match));
    bufp->fullBit(oldp+28107,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28108,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+28110,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+28111,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+28112,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28113,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28114,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                        >> 1U)))));
    bufp->fullBit(oldp+28115,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
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
    bufp->fullBit(oldp+28116,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+28117,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28118,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+28119,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28120,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+28121,(((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                >> 1U) & ((0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.__PVT__Key 
                                                         >> 4U)))))));
    bufp->fullBit(oldp+28122,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                                        >> 1U)))));
    bufp->fullBit(oldp+28123,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs)));
    bufp->fullBit(oldp+28124,((1U & vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs)));
    bufp->fullCData(oldp+28125,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.PageTypeRead),2);
    bufp->fullBit(oldp+28126,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.Match));
    bufp->fullBit(oldp+28127,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Valid));
    bufp->fullQData(oldp+28128,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key),52);
    bufp->fullCData(oldp+28130,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType),2);
    bufp->fullSData(oldp+28131,((0xffffU & (IData)(
                                                   (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                    >> 0x24U)))),16);
    bufp->fullSData(oldp+28132,((0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key))),9);
    bufp->fullSData(oldp+28133,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 9U)))),9);
    bufp->fullBit(oldp+28134,((1U & (((0xffffU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                          >> 0x2cU))) 
                                      == (0xffffU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                             >> 0x24U)))) 
                                     | vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs))));
    bufp->fullBit(oldp+28135,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0xcU)) 
                                == (0x1ffU & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key))) 
                               | ((0U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType)) 
                                  | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                                     & ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 0x10U)) 
                                        == (0x1fU & (IData)(
                                                            (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                             >> 4U)))))))));
    bufp->fullBit(oldp+28136,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x15U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 9U)))) 
                               | (1U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType)))));
    bufp->fullSData(oldp+28137,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 0x12U)))),9);
    bufp->fullSData(oldp+28138,((0x1ffU & (IData)((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                   >> 0x1bU)))),9);
    bufp->fullBit(oldp+28139,((((0x1ffU & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                            << 2U) 
                                           | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              >> 0x1eU))) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 0x12U)))) 
                               | (2U < (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__PageType)))));
    bufp->fullBit(oldp+28140,((((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           >> 7U)) 
                                == (0x1ffU & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                      >> 0x1bU)))) 
                               | (8U == (0xfU & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x3cU)))))));
    bufp->fullBit(oldp+28141,((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               & ((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                            >> 0x10U)) 
                                  == (0x1fU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.__PVT__Key 
                                                       >> 4U)))))));
    bufp->fullBit(oldp+28142,((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                                     | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables))));
    bufp->fullCData(oldp+28143,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox0.y),8);
    bufp->fullCData(oldp+28144,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                  >> 0x28U)))),8);
    bufp->fullCData(oldp+28145,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox1.y),8);
    bufp->fullCData(oldp+28146,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                  >> 0x10U)))),8);
    bufp->fullCData(oldp+28147,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox2.y),8);
    bufp->fullCData(oldp+28148,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                  >> 0x38U)))),8);
    bufp->fullCData(oldp+28149,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox3.y),8);
    bufp->fullCData(oldp+28150,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                  >> 0x20U)))),8);
    bufp->fullCData(oldp+28151,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox4.y),8);
    bufp->fullCData(oldp+28152,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                  >> 8U)))),8);
    bufp->fullCData(oldp+28153,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox5.y),8);
    bufp->fullCData(oldp+28154,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                  >> 0x30U)))),8);
    bufp->fullCData(oldp+28155,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox6.y),8);
    bufp->fullCData(oldp+28156,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                  >> 0x18U)))),8);
    bufp->fullCData(oldp+28157,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox7.y),8);
    bufp->fullCData(oldp+28158,((0xffU & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In)),8);
    bufp->fullCData(oldp+28159,((0xffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In 
                                          >> 8U))),8);
    bufp->fullCData(oldp+28160,((0xffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In 
                                          >> 0x10U))),8);
    bufp->fullCData(oldp+28161,((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0In 
                                 >> 0x18U)),8);
    bufp->fullCData(oldp+28162,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__BBMU 
                                                  >> 8U)))),8);
    bufp->fullCData(oldp+28163,((0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU 
                                                  >> 0x18U)))),8);
    bufp->fullQData(oldp+28164,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf
                                [(0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0xfU)))]),64);
    bufp->fullQData(oldp+28166,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf
                                [(0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x14U)))]),64);
    bufp->fullQData(oldp+28168,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf
                                [(0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x1bU)))]),64);
    bufp->fullQData(oldp+28170,(((0U == (0x1fU & (IData)(
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
    bufp->fullQData(oldp+28172,(((0U == (0x1fU & (IData)(
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
    bufp->fullQData(oldp+28174,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0]),64);
    bufp->fullQData(oldp+28176,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[1]),64);
    bufp->fullQData(oldp+28178,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[2]),64);
    bufp->fullQData(oldp+28180,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[3]),64);
    bufp->fullQData(oldp+28182,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[4]),64);
    bufp->fullQData(oldp+28184,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[5]),64);
    bufp->fullQData(oldp+28186,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[6]),64);
    bufp->fullQData(oldp+28188,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[7]),64);
    bufp->fullQData(oldp+28190,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[8]),64);
    bufp->fullQData(oldp+28192,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[9]),64);
    bufp->fullQData(oldp+28194,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[10]),64);
    bufp->fullQData(oldp+28196,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[11]),64);
    bufp->fullQData(oldp+28198,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[12]),64);
    bufp->fullQData(oldp+28200,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[13]),64);
    bufp->fullQData(oldp+28202,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[14]),64);
    bufp->fullQData(oldp+28204,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[15]),64);
    bufp->fullQData(oldp+28206,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[16]),64);
    bufp->fullQData(oldp+28208,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[17]),64);
    bufp->fullQData(oldp+28210,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[18]),64);
    bufp->fullQData(oldp+28212,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[19]),64);
    bufp->fullQData(oldp+28214,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[20]),64);
    bufp->fullQData(oldp+28216,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[21]),64);
    bufp->fullQData(oldp+28218,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[22]),64);
    bufp->fullQData(oldp+28220,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[23]),64);
    bufp->fullQData(oldp+28222,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[24]),64);
    bufp->fullQData(oldp+28224,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[25]),64);
    bufp->fullQData(oldp+28226,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[26]),64);
    bufp->fullQData(oldp+28228,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[27]),64);
    bufp->fullQData(oldp+28230,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[28]),64);
    bufp->fullQData(oldp+28232,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[29]),64);
    bufp->fullQData(oldp+28234,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[30]),64);
    bufp->fullQData(oldp+28236,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[31]),64);
    bufp->fullIData(oldp+28238,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__i),32);
    bufp->fullQData(oldp+28239,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0]),64);
    bufp->fullQData(oldp+28241,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[1]),64);
    bufp->fullQData(oldp+28243,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[2]),64);
    bufp->fullQData(oldp+28245,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[3]),64);
    bufp->fullQData(oldp+28247,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[4]),64);
    bufp->fullQData(oldp+28249,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[5]),64);
    bufp->fullQData(oldp+28251,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[6]),64);
    bufp->fullQData(oldp+28253,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[7]),64);
    bufp->fullQData(oldp+28255,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[8]),64);
    bufp->fullQData(oldp+28257,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[9]),64);
    bufp->fullQData(oldp+28259,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[10]),64);
    bufp->fullQData(oldp+28261,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[11]),64);
    bufp->fullQData(oldp+28263,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[12]),64);
    bufp->fullQData(oldp+28265,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[13]),64);
    bufp->fullQData(oldp+28267,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[14]),64);
    bufp->fullQData(oldp+28269,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[15]),64);
    bufp->fullQData(oldp+28271,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[16]),64);
    bufp->fullQData(oldp+28273,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[17]),64);
    bufp->fullQData(oldp+28275,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[18]),64);
    bufp->fullQData(oldp+28277,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[19]),64);
    bufp->fullQData(oldp+28279,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[20]),64);
    bufp->fullQData(oldp+28281,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[21]),64);
    bufp->fullQData(oldp+28283,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[22]),64);
    bufp->fullQData(oldp+28285,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[23]),64);
    bufp->fullQData(oldp+28287,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[24]),64);
    bufp->fullQData(oldp+28289,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[25]),64);
    bufp->fullQData(oldp+28291,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[26]),64);
    bufp->fullQData(oldp+28293,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[27]),64);
    bufp->fullQData(oldp+28295,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[28]),64);
    bufp->fullQData(oldp+28297,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[29]),64);
    bufp->fullQData(oldp+28299,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[30]),64);
    bufp->fullIData(oldp+28301,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__i),32);
    bufp->fullBit(oldp+28302,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__EndOfFrame));
    bufp->fullBit(oldp+28303,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__ShiftEdge));
    bufp->fullBit(oldp+28304,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__SampleEdge));
    bufp->fullBit(oldp+28305,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitLoad));
    bufp->fullCData(oldp+28306,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__NextState),3);
    bufp->fullBit(oldp+28307,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__ContinueTransmit));
    bufp->fullBit(oldp+28308,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EndTransmission));
    bufp->fullBit(oldp+28309,(vlSelfRef.testbench__DOT__clk));
    bufp->fullCData(oldp+28310,((7U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUSelect)
                                        ? ((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW))) 
                                            | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_10))
                                            ? 5U : 0U)
                                        : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUSelect)
                                            ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                << 6U) 
                                               | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__IFUInput__DOT____Vcellout__genblk1__DOT__RestorMux____pinNumber4[1U] 
                                                  >> 0x1aU))
                                            : 0U)))),3);
    bufp->fullBit(oldp+28311,(vlSelfRef.testbench__DOT__TestBenchReset));
    bufp->fullBit(oldp+28312,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__IFUCacheBusStallF) 
                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelSpillNextF))));
    bufp->fullQData(oldp+28313,((0xffffffffffffffULL 
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
    bufp->fullCData(oldp+28315,(((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                                   & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__CacheBusRW))) 
                                  | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_9))
                                  ? 5U : 0U)),3);
    bufp->fullCData(oldp+28316,(((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
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
    bufp->fullQData(oldp+28317,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHADDROut),56);
    bufp->fullBit(oldp+28319,((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusAtomic)) 
                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11)) 
                               | (((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                   & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__BusWrite)) 
                                  | (((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusAtomic)) 
                                     | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                        & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BeatCount))))))));
    bufp->fullBit(oldp+28320,((1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__ITLBMissF)) 
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
    bufp->fullCData(oldp+28321,(((((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                                   & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW))) 
                                  | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_10))
                                  ? 5U : 0U)),3);
    bufp->fullBit(oldp+28322,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__ebufsmarb__DOT__CurrState)) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__ebufsmarb__DOT__both))));
    bufp->fullCData(oldp+28323,(((0U == (3U & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUSelect)
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
    bufp->fullQData(oldp+28324,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BPWrongE)
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
                                               + (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                                  >> 2U)) 
                                              << 2U) 
                                             | (QData)((IData)(
                                                               (3U 
                                                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF))))))))),64);
    bufp->fullQData(oldp+28326,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__CSRWriteFenceM)
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
                                          ? ((4U & 
                                              vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U])
                                              ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__RASPCF
                                              : (((QData)((IData)(
                                                                  vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[0U]))))
                                          : ((3U != 
                                              (3U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PostSpillInstrRawF))
                                              ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__PCPlus2NextF
                                              : (((1ULL 
                                                   + 
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                                    >> 2U)) 
                                                  << 2U) 
                                                 | (QData)((IData)(
                                                                   (3U 
                                                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF)))))))))),64);
    bufp->fullQData(oldp+28328,(((3U != (3U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PostSpillInstrRawF))
                                  ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__PCPlus2NextF
                                  : (((1ULL + (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                               >> 2U)) 
                                      << 2U) | (QData)((IData)(
                                                               (3U 
                                                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF))))))),64);
    bufp->fullIData(oldp+28330,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets
                                [(0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 1U)))]),32);
    bufp->fullBit(oldp+28331,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelSpillNextF));
    bufp->fullBit(oldp+28332,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_12)) 
                               | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                  | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                     | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                        | ((7U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed)) 
                                           & ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                                              | (6U 
                                                 == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState))))))))));
    bufp->fullBit(oldp+28333,(((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                   >> 6U)) & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h6a8520a7_0_0) 
                                              & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__TLBPageFault)) 
                                                 & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                            >> 0x3dU)))))));
    bufp->fullCData(oldp+28334,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__CurrState))
                                  ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__TakeSpillF)
                                      ? 1U : 0U) : 
                                 ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__CurrState))
                                   ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StallF)
                                       ? 1U : 0U) : 0U))),2);
    bufp->fullBit(oldp+28335,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__TakeSpillF));
    bufp->fullBit(oldp+28336,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT____VdfgRegularize_h60e56e31_0_1))));
    bufp->fullBit(oldp+28337,((1U & (~ (IData)((3U 
                                                == 
                                                ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM)
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & vlSelfRef.__VdfgRegularize_hd87f99a1_4_114))))))));
    bufp->fullBit(oldp+28338,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelSpillNextF))));
    bufp->fullIData(oldp+28339,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT____Vcellinp__SpillInstrReg____pinNumber4) 
                                  << 0x10U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__InstrFirstHalfF))),32);
    bufp->fullQData(oldp+28340,(((1U & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
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
                                      : (((1ULL + (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF 
                                                   >> 2U)) 
                                          << 2U) | (QData)((IData)(
                                                                   (3U 
                                                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF)))))))),64);
    bufp->fullQData(oldp+28342,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_8)
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
                                                                     << 6U))))))),56);
    bufp->fullCData(oldp+28344,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF))))),2);
    bufp->fullQData(oldp+28345,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF)
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
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (0xfc0U 
                                                            & ((IData)(
                                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                        >> 6U)) 
                                                               << 6U))))))
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)),56);
    bufp->fullCData(oldp+28347,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__SelAdrData))),2);
    bufp->fullCData(oldp+28348,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
                                 & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__SelAdrData) 
                                    | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__GatedStallD)))),2);
    bufp->fullQData(oldp+28349,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                [2U]),44);
    bufp->fullBit(oldp+28351,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__LRUWriteEn));
    bufp->fullQData(oldp+28352,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                  [2U] << 0xcU) | (QData)((IData)(
                                                                  (0xfc0U 
                                                                   & ((IData)(
                                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                               >> 6U)) 
                                                                      << 6U)))))),56);
    bufp->fullQData(oldp+28354,((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                 [2U] << 0xcU)),56);
    bufp->fullBit(oldp+28356,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__0__KET____DOT__SelectedWriteWordEn));
    bufp->fullBit(oldp+28357,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__1__KET____DOT__SelectedWriteWordEn));
    bufp->fullBit(oldp+28358,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__2__KET____DOT__SelectedWriteWordEn));
    bufp->fullBit(oldp+28359,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__3__KET____DOT__SelectedWriteWordEn));
    bufp->fullQData(oldp+28360,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid[0]),44);
    bufp->fullQData(oldp+28362,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid[1]),44);
    bufp->fullQData(oldp+28364,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__TagAOMux__DOT__genblk1__DOT__mid[2]),44);
    bufp->fullBit(oldp+28366,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT____VdfgRegularize_hb604bb0f_0_1) 
                               & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__HitWay)))));
    bufp->fullCData(oldp+28367,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__LRUWriteEn) 
                                  & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheSetLRU) 
                                     == (0x3fU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                          >> 6U)))))
                                  ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__NextLRU)
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__LRUMemory
                                 [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheSetLRU])),3);
    bufp->fullBit(oldp+28368,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__LRUWriteEn) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheSetLRU) 
                                  == (0x3fU & (IData)(
                                                      (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                       >> 6U)))))));
    bufp->fullCData(oldp+28369,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate[0]),2);
    bufp->fullCData(oldp+28370,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate[1]),2);
    bufp->fullCData(oldp+28371,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate[2]),2);
    bufp->fullCData(oldp+28372,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__Intermediate
                                [2U]),2);
    bufp->fullBit(oldp+28373,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__PBMemoryType))
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM) 
                                   | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__CacheableRegion))
                                : (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__PBMemoryType)))));
    bufp->fullQData(oldp+28374,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__CAMHit)
                                  ? ((0xffffffffff0000ULL 
                                      & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed 
                                         << 0xcU)) 
                                     | (QData)((IData)(
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
    bufp->fullBit(oldp+28376,((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__SelRegions))));
    bufp->fullBit(oldp+28377,((((3U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                | (0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__L) 
                                          & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch)))) 
                               & (~ (((0xffffffffffffffULL 
                                       & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
                                          + (QData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__SizeBytesMinus1)))) 
                                      <= vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                      [0xeU]) & (0U 
                                                 != 
                                                 ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__X) 
                                                  & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch))))))));
    bufp->fullCData(oldp+28378,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__PBMemoryType),2);
    bufp->fullQData(oldp+28379,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__CAMHit)
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
    bufp->fullSData(oldp+28381,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__SelRegions),12);
    bufp->fullBit(oldp+28382,((IData)((0U != (0x2aU 
                                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__SelRegions))))));
    bufp->fullBit(oldp+28383,((((3U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                 [0x1eU]) & (0U != 
                                             (0x7ffffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                         [0x1eU] 
                                                         >> 0xaU))))) 
                               | (((2U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                    [0x1eU]) & (0U 
                                                != 
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
    bufp->fullQData(oldp+28384,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed),44);
    bufp->fullQData(oldp+28386,(((0xffffffffff0ULL 
                                  & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed) 
                                 | (QData)((IData)(
                                                   (0xfU 
                                                    & ((0x800U 
                                                        & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                                        ? (IData)(
                                                                  (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                   >> 0xcU))
                                                        : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))))))),44);
    bufp->fullCData(oldp+28388,((0xfU & ((0x800U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                          ? (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU))
                                          : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed)))),4);
    bufp->fullCData(oldp+28389,((0xfU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))),4);
    bufp->fullBit(oldp+28390,((((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                    >> 4U)) & (0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))) 
                               | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                  & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                     >> 4U)))));
    bufp->fullBit(oldp+28391,((1U & ((~ ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                  >> 0x3eU)) 
                                         | (0U == (3U 
                                                   & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                      >> 9U))))) 
                                     | (3U == (3U & 
                                               ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                >> 9U)))))));
    bufp->fullBit(oldp+28392,((1U & ((1U != (0x101U 
                                             & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))) 
                                     | ((((((((((~ 
                                                 ((8U 
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
                                             | ((~ 
                                                 ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                  >> 4U)) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)))) 
                                            | ((1U 
                                                == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
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
                                          | (3U == 
                                             (3U & 
                                              ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                               >> 9U)))) 
                                         | ((8U != 
                                             (0xfU 
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
    bufp->fullBit(oldp+28393,((((9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                & (0xbU != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))) 
                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__StartWalk))));
    bufp->fullSData(oldp+28394,(((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
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
    bufp->fullQData(oldp+28395,((((QData)((IData)(__Vtemp_4[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_4[0U])))),64);
    bufp->fullBit(oldp+28397,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__StartWalk) 
                               | ((9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__HPTWFaultM)))));
    bufp->fullQData(oldp+28398,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
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
                                      : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0))),56);
    bufp->fullBit(oldp+28400,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
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
    bufp->fullCData(oldp+28401,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_21)
                                  ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)
                                      ? 0U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM))
                                  : 0U)),2);
    bufp->fullCData(oldp+28402,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_22)
                                  ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)
                                      ? 0U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM))
                                  : 0U)),2);
    bufp->fullCData(oldp+28403,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelDTIM) 
                                  << 1U) | (1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM))))),2);
    bufp->fullQData(oldp+28404,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM)
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
                                             & (0U 
                                                != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay))))
                                          ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                              [2U] 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (0xfc0U 
                                                                & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))))
                                          : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0))
                                  : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusCMOZero)
                                      ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0
                                      : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM))),56);
    bufp->fullQData(oldp+28406,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM)
                                  ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__CacheReadDataWordAHB
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUWriteDataM)),64);
    bufp->fullQData(oldp+28408,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusCMOZero)
                                  ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)),56);
    bufp->fullCData(oldp+28410,((0xffU & ((VL_SHIFTL_III(8,32,32, (IData)(1U), 
                                                         ((IData)(1U) 
                                                          << (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHSIZEOut))) 
                                           - (IData)(1U)) 
                                          << (7U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHADDROut))))),8);
    bufp->fullCData(oldp+28411,((7U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHADDROut))),3);
    bufp->fullBit(oldp+28412,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0) 
                                   | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22))) 
                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23))));
    bufp->fullBit(oldp+28413,((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22)) 
                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23))));
    bufp->fullCData(oldp+28414,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                  << 1U) | ((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                              & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0) 
                                                 | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22))) 
                                             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23)) 
                                            | (9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))))),2);
    bufp->fullCData(oldp+28415,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                  << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____VdfgRegularize_h1936c9d4_1_0))),2);
    bufp->fullCData(oldp+28416,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                  << 1U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____VdfgRegularize_h1936c9d4_1_0) 
                                            | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__bus__DOT__dcache__DOT__dcache__Stall)))),2);
    bufp->fullQData(oldp+28417,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                [2U]),44);
    bufp->fullBit(oldp+28419,((((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                & ((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))) 
                                   & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__FlushFlag))) 
                               | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                  & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__FlushFlag) 
                                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck))))));
    bufp->fullBit(oldp+28420,((((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))) 
                                & (5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState))) 
                               | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)))));
    bufp->fullBit(oldp+28421,((((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                                   | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6))) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_20) 
                                  & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay))))));
    bufp->fullQData(oldp+28422,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                  [2U] << 0xcU) | (QData)((IData)(
                                                                  (0xfc0U 
                                                                   & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))))),56);
    bufp->fullQData(oldp+28424,(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid
                                  [2U] << 0xcU) | (QData)((IData)(
                                                                  ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushAdr) 
                                                                   << 6U))))),56);
    bufp->fullCData(oldp+28426,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
                                  << 1U) | (((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                             & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                                                | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6))) 
                                            | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_20) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))))),2);
    bufp->fullQData(oldp+28427,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid[0]),44);
    bufp->fullQData(oldp+28429,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid[1]),44);
    bufp->fullQData(oldp+28431,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__TagAOMux__DOT__genblk1__DOT__mid[2]),44);
    bufp->fullQData(oldp+28433,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetDirty)
                                  ? (~ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WriteSelLogic__DOT__DemuxedByteMask)
                                  : 0xffffffffffffffffULL)),64);
    bufp->fullQData(oldp+28435,((QData)((IData)(((1U 
                                                  == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                                  ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskExtendedM)
                                                  : 
                                                 ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelSpillE)
                                                   ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM)
                                                   : 
                                                  (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskExtendedM) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM))))))),64);
    bufp->fullBit(oldp+28437,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyUpdateHit));
    bufp->fullBit(oldp+28438,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyUpdateHit) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_1) 
                                  & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay))))));
    bufp->fullBit(oldp+28439,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyMiss));
    bufp->fullBit(oldp+28440,(((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay)))) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_1))));
    bufp->fullCData(oldp+28441,((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LRUWriteEn) 
                                  & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetLRU) 
                                     == (0x3fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                  >> 6U))))
                                  ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__NextLRU)
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__LRUMemory
                                 [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheSetLRU])),3);
    bufp->fullBit(oldp+28442,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__PreUpdateDA) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_0) 
                                  & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__TLBPageFault)) 
                                     & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                >> 0x3dU)))))));
    bufp->fullBit(oldp+28443,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__PBMemoryType))
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelDTIM) 
                                   | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__CacheableRegion))
                                : (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__PBMemoryType)))));
    bufp->fullQData(oldp+28444,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit)
                                  ? ((0xffffffffff0000ULL 
                                      & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed 
                                         << 0xcU)) 
                                     | (QData)((IData)(
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
    bufp->fullBit(oldp+28446,((IData)(((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault)))));
    bufp->fullBit(oldp+28447,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EnforcePMP) 
                               & (IData)(((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                                          & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR)))))));
    bufp->fullBit(oldp+28448,(((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_24) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault))));
    bufp->fullBit(oldp+28449,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EnforcePMP) 
                               & (((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW)) 
                                   & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                                  | (((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW)) 
                                      & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                         >> 4U)) | 
                                     ((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR)) 
                                      & (0U != (7U 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                                   >> 1U)))))))));
    bufp->fullQData(oldp+28450,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit)
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
    bufp->fullBit(oldp+28452,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault));
    bufp->fullSData(oldp+28453,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__SelRegions),12);
    bufp->fullBit(oldp+28454,((IData)((0U != (0x2aU 
                                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__SelRegions))))));
    bufp->fullBit(oldp+28455,((((3U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                 [0x1eU]) & (0U != 
                                             (0x7ffffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                         [0x1eU] 
                                                         >> 0xaU))))) 
                               | (((2U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                    [0x1eU]) & (0U 
                                                != 
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
    bufp->fullQData(oldp+28456,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed),44);
    bufp->fullQData(oldp+28458,(((0xffffffffff0ULL 
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
                                                        : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))))))),44);
    bufp->fullCData(oldp+28460,((0xfU & ((0x800U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))
                                          ? ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                              << 0x14U) 
                                             | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0xcU))
                                          : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed)))),4);
    bufp->fullCData(oldp+28461,((0xfU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed))),4);
    bufp->fullBit(oldp+28462,((1U & ((1U != (0x101U 
                                             & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))) 
                                     | ((((((((((~ 
                                                 ((8U 
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
                                             | ((~ 
                                                 ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                  >> 4U)) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__EffectivePrivilegeMode)))) 
                                            | ((1U 
                                                == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__EffectivePrivilegeMode)) 
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
                                          | (3U == 
                                             (3U & 
                                              ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                               >> 9U)))) 
                                         | ((8U != 
                                             (0xfU 
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
    bufp->fullBit(oldp+28463,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__StartWalk));
    bufp->fullBit(oldp+28464,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__TLBMissOrUpdateDA));
    bufp->fullCData(oldp+28465,(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState),4);
    bufp->fullBit(oldp+28466,(((IData)(vlSelfRef.testbench__DOT__reset) 
                               | (9U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)))));
    bufp->fullBit(oldp+28467,(((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                               | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                                  | ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)) 
                                     | (7U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextWalkerState)))))));
    bufp->fullCData(oldp+28468,(((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                  ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__ValidSpillM)
                                      ? 1U : 0U) : 
                                 ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState))
                                   ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StallM)
                                       ? 1U : 0U) : 0U))),2);
    bufp->fullBit(oldp+28469,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushM)) 
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
    bufp->fullWData(oldp+28470,(__Vtemp_7),128);
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
    bufp->fullWData(oldp+28474,(__Vtemp_11),128);
    bufp->fullCData(oldp+28478,((((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__align__DOT__CurrState)) 
                                  << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelSpillE))),2);
    bufp->fullBit(oldp+28479,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMWriteM) 
                                  & (0x341U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+28480,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMWriteM) 
                                  & (0x342U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+28481,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMWriteM) 
                                  & (0x343U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+28482,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSWriteM) 
                                  & (0x141U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+28483,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSWriteM) 
                                  & (0x142U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+28484,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM) 
                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSWriteM) 
                                  & (0x143U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))))));
    bufp->fullCData(oldp+28485,(((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__TLBPageFault) 
                                   << 3U) | (4U & (
                                                   ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__ITLBMissF)) 
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
                                 | ((0x3ffffffeU & 
                                     (((9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                       << 1U) & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____Vcellout__HPTWAccesFaultReg____pinNumber4) 
                                                 >> 2U))) 
                                    | ((9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____Vcellout__HPTWAccesFaultReg____pinNumber4))))),4);
    bufp->fullBit(oldp+28486,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0xfffULL | (~ 
                                                   (0x1000ULL 
                                                    ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (0xfU >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+28487,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0xffffULL | 
                                       (~ (0x2000000ULL 
                                           ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (0xfU >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+28488,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0xffULL | (~ 
                                                  (0x10060000ULL 
                                                   ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+28489,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0x3ffffffULL 
                                       | (~ (0xc000000ULL 
                                             ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+28490,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0xfffULL | (~ 
                                                   (0x10040000ULL 
                                                    ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (4U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+28491,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (7ULL | (~ (0x10000000ULL 
                                                  ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (1U >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+28492,(((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0x7ffffffULL 
                                       | (~ (0x80000000ULL 
                                             ^ vlSelfRef.testbench__DOT__HADDR))))) 
                               & (0xfU >> (3U & (IData)(vlSelfRef.testbench__DOT__HSIZE))))));
    bufp->fullBit(oldp+28493,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ahbapbbridge__DOT__initTrans) 
                               & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT____Vcellinp__ahbapbbridge__HSEL)))));
    bufp->fullCData(oldp+28494,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT____Vcellinp__ahbapbbridge__HSEL) 
                                 & (- (IData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ahbapbbridge__DOT__initTrans))))),6);
    bufp->fullBit(oldp+28495,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__initTrans) 
                               & (IData)(vlSelfRef.testbench__DOT__HWRITE))));
    bufp->fullBit(oldp+28496,(((~ (IData)(vlSelfRef.testbench__DOT__HWRITE)) 
                               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__initTrans))));
    bufp->fullBit(oldp+28497,((1U & (~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__memwriteD) 
                                        & ((~ (IData)(vlSelfRef.testbench__DOT__HWRITE)) 
                                           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__ram__DOT__ram__DOT__initTrans)))))));
    bufp->fullBit(oldp+28498,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EdgePulse) 
                               & (2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__NextState)))));
    bufp->fullBit(oldp+28499,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitStartD) 
                               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__ContinueTransmit))));
    bufp->fullBit(oldp+28500,((0U != ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__uartgen__DOT__uart__DOT__uartPC__DOT__RXerrbit) 
                                      & (vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__uartgen__DOT__uart__DOT__uartPC__DOT__rxfullbitunwrapped 
                                         | (vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__uartgen__DOT__uart__DOT__uartPC__DOT__rxfullbitunwrapped 
                                            >> 0x10U))))));
    bufp->fullSData(oldp+28501,((0xffffU & (vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__uartgen__DOT__uart__DOT__uartPC__DOT__rxfullbitunwrapped 
                                            | (vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__uartgen__DOT__uart__DOT__uartPC__DOT__rxfullbitunwrapped 
                                               >> 0x10U)))),16);
    bufp->fullIData(oldp+28502,(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__uartgen__DOT__uart__DOT__uartPC__DOT__rxfullbitunwrapped),32);
    bufp->fullBit(oldp+28503,((((0xffffffffffffffULL 
                                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
                                    + (QData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__SizeBytesMinus1)))) 
                                <= vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                [0xeU]) & (0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__R) 
                                                  & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch))))));
    bufp->fullBit(oldp+28504,((((0xffffffffffffffULL 
                                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
                                    + (QData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__SizeBytesMinus1)))) 
                                <= vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                [0xeU]) & (0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__W) 
                                                  & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch))))));
    bufp->fullBit(oldp+28505,((((0xffffffffffffffULL 
                                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
                                    + (QData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__SizeBytesMinus1)))) 
                                <= vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                [0xeU]) & (0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__X) 
                                                  & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch))))));
    bufp->fullBit(oldp+28506,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EnforcePMP) 
                               & (((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW)) 
                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                      >> 4U)) | ((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR)) 
                                                 & (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                                        >> 1U))))))));
    bufp->fullBit(oldp+28507,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EnforcePMP) 
                               & ((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR)) 
                                  & (0U != (7U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+28508,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EnforcePMP) 
                               & ((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW)) 
                                  & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                     >> 4U)))));
    bufp->fullBit(oldp+28509,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR));
    bufp->fullBit(oldp+28510,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW));
    bufp->fullBit(oldp+28511,(((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__TooBig)) 
                               & (0U != ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__X) 
                                         & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__FirstMatch))))));
    bufp->fullBit(oldp+28512,(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__TooBig));
    bufp->fullQData(oldp+28513,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.__PVT__SetValidWay)
                                  ? 0xffffffffffffffffULL
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->fullBit(oldp+28515,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                  & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.__PVT__SelectedWay)))));
    bufp->fullBit(oldp+28516,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.__PVT__SelectedWay))));
    bufp->fullQData(oldp+28517,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.__PVT__SetValidWay)
                                  ? 0xffffffffffffffffULL
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->fullBit(oldp+28519,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                  & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.__PVT__SelectedWay)))));
    bufp->fullBit(oldp+28520,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.__PVT__SelectedWay))));
    bufp->fullQData(oldp+28521,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.__PVT__SetValidWay)
                                  ? 0xffffffffffffffffULL
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->fullBit(oldp+28523,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                  & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.__PVT__SelectedWay)))));
    bufp->fullBit(oldp+28524,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.__PVT__SelectedWay))));
    bufp->fullQData(oldp+28525,(((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.__PVT__SetValidWay)
                                  ? 0xffffffffffffffffULL
                                  : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__LineByteMask)),64);
    bufp->fullBit(oldp+28527,(((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFlushW)) 
                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                                  & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.__PVT__SelectedWay)))));
    bufp->fullBit(oldp+28528,(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid) 
                               & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.__PVT__SelectedWay))));
}
