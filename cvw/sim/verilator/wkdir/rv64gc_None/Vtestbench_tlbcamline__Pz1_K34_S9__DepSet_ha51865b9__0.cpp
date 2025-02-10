// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_tlbcamline__Pz1_K34_S9.h"

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
             >> 0x1fU)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if (((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
             | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                >> 0x1fU))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1fU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1fU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x40000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x1eU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1eU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1eU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x20000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x1dU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1dU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1dU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x10000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x1cU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1cU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1cU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x8000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x1bU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1bU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1bU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x4000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x1aU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1aU) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1aU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x2000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x19U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x19U) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x19U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x1000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x18U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x18U) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x18U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x800000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x17U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x17U) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x17U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x400000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x16U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x16U) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x16U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x200000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x15U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x15U) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x15U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x100000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x14U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x14U) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x14U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x80000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x13U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x13U) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x13U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x40000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x12U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x12U) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x12U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x20000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x11U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x11U) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x11U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x10000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x10U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x10U) & ((0x1fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x10U))) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x10U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x8000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0xfU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0xfU) & ((0x1fU & (IData)(
                                                            (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__Key 
                                                          >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xfU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x4000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0xeU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0xeU) & ((0x1fU & (IData)(
                                                            (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__Key 
                                                          >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xeU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x2000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0xdU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0xdU) & ((0x1fU & (IData)(
                                                            (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__Key 
                                                          >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xdU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x1000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0xcU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0xcU) & ((0x1fU & (IData)(
                                                            (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__Key 
                                                          >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xcU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x800U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0xbU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0xbU) & ((0x1fU & (IData)(
                                                            (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__Key 
                                                          >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xbU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x400U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0xaU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0xaU) & ((0x1fU & (IData)(
                                                            (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x10U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__Key 
                                                          >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xaU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x200U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 9U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 9U) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                           >> 0x10U))) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 9U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x100U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 8U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 8U) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                           >> 0x10U))) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 8U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x80U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 7U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 7U) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                           >> 0x10U))) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 7U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x40U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 6U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 6U) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                           >> 0x10U))) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 6U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x20U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 5U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 5U) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                           >> 0x10U))) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 5U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x10U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 4U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 4U) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                           >> 0x10U))) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 4U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((8U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 3U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 3U) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                           >> 0x10U))) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 3U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((4U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 2U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 2U) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                           >> 0x10U))) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 2U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((2U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 1U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 1U) & ((0x1fU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                           >> 0x10U))) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 1U)) & (IData)(vlSelfRef.__PVT__Valid))))));
    vlSelfRef.PageTypeRead = ((IData)(vlSelfRef.__PVT__PageType) 
                              & (- (IData)((IData)(vlSelfRef.Match))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((1U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0xcU)));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush) 
                   | vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                            >> 0xcU))) 
                         == (0x1ffU & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                              & ((0x1fU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0x10U))) 
                                 == (0x1fU & (IData)(
                                                     (vlSelfRef.__PVT__Key 
                                                      >> 4U))))))) 
                       & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0x15U))) 
                            == (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                                  >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & (IData)((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                  >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x27U))) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs) 
                                   & (IData)(vlSelfRef.__PVT__Valid))))));
    vlSelfRef.PageTypeRead = ((IData)(vlSelfRef.__PVT__PageType) 
                              & (- (IData)((IData)(vlSelfRef.Match))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
             >> 0x1fU)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if (((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
             | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                >> 0x1fU))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1fU) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1fU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x40000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x1eU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1eU) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1eU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x20000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x1dU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1dU) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1dU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x10000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x1cU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1cU) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1cU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x8000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x1bU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1bU) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1bU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x4000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x1aU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x1aU) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x1aU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x2000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x19U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x19U) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x19U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x1000000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x18U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x18U) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x18U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x800000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x17U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x17U) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x17U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x400000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x16U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x16U) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x16U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x200000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x15U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x15U) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x15U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x100000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x14U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x14U) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x14U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x80000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x13U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x13U) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x13U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x40000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x12U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x12U) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x12U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x20000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x11U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x11U) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x11U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x10000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0x10U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0x10U) & ((0x1fU 
                                             & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Key 
                                                           >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0x10U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x8000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0xfU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0xfU) & ((0x1fU & 
                                            (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x10U)) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__Key 
                                                          >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xfU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x4000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0xeU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0xeU) & ((0x1fU & 
                                            (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x10U)) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__Key 
                                                          >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xeU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x2000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0xdU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0xdU) & ((0x1fU & 
                                            (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x10U)) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__Key 
                                                          >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xdU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x1000U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0xcU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0xcU) & ((0x1fU & 
                                            (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x10U)) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__Key 
                                                          >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xcU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x800U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0xbU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0xbU) & ((0x1fU & 
                                            (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x10U)) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__Key 
                                                          >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xbU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x400U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 0xaU)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 0xaU) & ((0x1fU & 
                                            (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                             >> 0x10U)) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__Key 
                                                          >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 0xaU)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x200U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 9U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 9U) & ((0x1fU & (
                                                   vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 9U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x100U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 8U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 8U) & ((0x1fU & (
                                                   vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 8U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x80U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 7U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 7U) & ((0x1fU & (
                                                   vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 7U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x40U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 6U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 6U) & ((0x1fU & (
                                                   vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 6U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x20U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 5U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 5U) & ((0x1fU & (
                                                   vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 5U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((0x10U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 4U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 4U) & ((0x1fU & (
                                                   vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 4U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((8U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 3U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 3U) & ((0x1fU & (
                                                   vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 3U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((4U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 2U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 2U) & ((0x1fU & (
                                                   vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 2U)) & (IData)(vlSelfRef.__PVT__Valid))))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((2U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
                      >> 1U)))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                               >> 1U) & ((0x1fU & (
                                                   vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                   >> 0x10U)) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs 
                                       >> 1U)) & (IData)(vlSelfRef.__PVT__Valid))))));
    vlSelfRef.PageTypeRead = ((IData)(vlSelfRef.__PVT__PageType) 
                              & (- (IData)((IData)(vlSelfRef.Match))));
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET____0(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET____0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.testbench__DOT__reset) {
        vlSelfRef.__PVT__PageType = 0U;
        vlSelfRef.__PVT__Valid = 0U;
        vlSelfRef.__PVT__Key = 0ULL;
    } else {
        if ((1U & vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables)) {
            vlSelfRef.__PVT__PageType = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PageType;
            vlSelfRef.__PVT__Key = (((QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                                 >> 0x2cU))))) 
                                     << 0x24U) | (0xfffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                        >> 0xcU))));
        }
        if ((1U & ((IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM) 
                   | vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables))) {
            vlSelfRef.__PVT__Valid = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)));
        }
    }
}

VL_INLINE_OPT void Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET____1(Vtestbench_tlbcamline__Pz1_K34_S9* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_tlbcamline__Pz1_K34_S9___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET____1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Match = ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                    >> 0xcU)) == (0x1ffU 
                                                  & (IData)(vlSelfRef.__PVT__Key))) 
                        | ((0U < (IData)(vlSelfRef.__PVT__PageType)) 
                           | (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_NAPOTs 
                              & ((0x1fU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x10U)) 
                                 == (0x1fU & (IData)(
                                                     (vlSelfRef.__PVT__Key 
                                                      >> 4U))))))) 
                       & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                       >> 0x15U)) == 
                            (0x1ffU & (IData)((vlSelfRef.__PVT__Key 
                                               >> 9U)))) 
                           | (1U < (IData)(vlSelfRef.__PVT__PageType))) 
                          & ((((0x1ffU & ((vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                           << 2U) | 
                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                           >> 0x1eU))) 
                               == (0x1ffU & (IData)(
                                                    (vlSelfRef.__PVT__Key 
                                                     >> 0x12U)))) 
                              | (2U < (IData)(vlSelfRef.__PVT__PageType))) 
                             & ((((0x1ffU & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                             >> 7U)) 
                                  == (0x1ffU & (IData)(
                                                       (vlSelfRef.__PVT__Key 
                                                        >> 0x1bU)))) 
                                 | (8U == (0xfU & (IData)(
                                                          (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                           >> 0x3cU))))) 
                                & ((((0xffffU & (IData)(
                                                        (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                         >> 0x2cU))) 
                                     == (0xffffU & (IData)(
                                                           (vlSelfRef.__PVT__Key 
                                                            >> 0x24U)))) 
                                    | vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTE_Gs) 
                                   & (IData)(vlSelfRef.__PVT__Valid))))));
    vlSelfRef.PageTypeRead = ((IData)(vlSelfRef.__PVT__PageType) 
                              & (- (IData)((IData)(vlSelfRef.Match))));
}
