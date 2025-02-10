// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench_pmpchecker__Pz1.h"

VL_ATTR_COLD void Vtestbench_pmpchecker__Pz1___stl_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker__0(Vtestbench_pmpchecker__Pz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pmpchecker__Pz1___stl_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SizeBytesMinus1 = 3U;
    vlSelfRef.__PVT__R = (((((0x8000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                         [0xfU] << 0xfU)) 
                             | (0x4000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [0xeU] << 0xeU))) 
                            | ((0x2000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [0xdU] << 0xdU)) 
                               | (0x1000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                             [0xcU] 
                                             << 0xcU)))) 
                           | (((0x800U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                          [0xbU] << 0xbU)) 
                               | (0x400U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                            [0xaU] 
                                            << 0xaU))) 
                              | ((0x200U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                            [9U] << 9U)) 
                                 | (0x100U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                              [8U] 
                                              << 8U))))) 
                          | ((((0x80U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                         [7U] << 7U)) 
                               | (0x40U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [6U] << 6U))) 
                              | ((0x20U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [5U] << 5U)) 
                                 | (0x10U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                             [4U] << 4U)))) 
                             | (((8U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                        [3U] << 3U)) 
                                 | (4U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                          [2U] << 2U))) 
                                | ((2U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                          [1U] << 1U)) 
                                   | (1U & vlSelfRef.PMPCFG_ARRAY_REGW
                                      [0U])))));
    vlSelfRef.__PVT__W = (((((0x8000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                         [0xfU] << 0xeU)) 
                             | (0x4000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [0xeU] << 0xdU))) 
                            | ((0x2000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [0xdU] << 0xcU)) 
                               | (0x1000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                             [0xcU] 
                                             << 0xbU)))) 
                           | (((0x800U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                          [0xbU] << 0xaU)) 
                               | (0x400U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                            [0xaU] 
                                            << 9U))) 
                              | ((0x200U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                            [9U] << 8U)) 
                                 | (0x100U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                              [8U] 
                                              << 7U))))) 
                          | ((((0x80U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                         [7U] << 6U)) 
                               | (0x40U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [6U] << 5U))) 
                              | ((0x20U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [5U] << 4U)) 
                                 | (0x10U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                             [4U] << 3U)))) 
                             | (((8U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                        [3U] << 2U)) 
                                 | (4U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                          [2U] << 1U))) 
                                | ((2U & vlSelfRef.PMPCFG_ARRAY_REGW
                                    [1U]) | (1U & (
                                                   vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [0U] 
                                                   >> 1U))))));
    vlSelfRef.__PVT__X = (((((0x8000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                         [0xfU] << 0xdU)) 
                             | (0x4000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [0xeU] << 0xcU))) 
                            | ((0x2000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [0xdU] << 0xbU)) 
                               | (0x1000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                             [0xcU] 
                                             << 0xaU)))) 
                           | (((0x800U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                          [0xbU] << 9U)) 
                               | (0x400U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                            [0xaU] 
                                            << 8U))) 
                              | ((0x200U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                            [9U] << 7U)) 
                                 | (0x100U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                              [8U] 
                                              << 6U))))) 
                          | ((((0x80U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                         [7U] << 5U)) 
                               | (0x40U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [6U] << 4U))) 
                              | ((0x20U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [5U] << 3U)) 
                                 | (0x10U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                             [4U] << 2U)))) 
                             | (((8U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                        [3U] << 1U)) 
                                 | (4U & vlSelfRef.PMPCFG_ARRAY_REGW
                                    [2U])) | ((2U & 
                                               (vlSelfRef.PMPCFG_ARRAY_REGW
                                                [1U] 
                                                >> 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                    [0U] 
                                                    >> 2U))))));
    vlSelfRef.__PVT__L = (((((0x8000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                         [0xfU] << 8U)) 
                             | (0x4000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [0xeU] << 7U))) 
                            | ((0x2000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [0xdU] << 6U)) 
                               | (0x1000U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                             [0xcU] 
                                             << 5U)))) 
                           | (((0x800U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                          [0xbU] << 4U)) 
                               | (0x400U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                            [0xaU] 
                                            << 3U))) 
                              | ((0x200U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                            [9U] << 2U)) 
                                 | (0x100U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                              [8U] 
                                              << 1U))))) 
                          | ((((0x80U & vlSelfRef.PMPCFG_ARRAY_REGW
                                [7U]) | (0x40U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                  [6U] 
                                                  >> 1U))) 
                              | ((0x20U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                           [5U] >> 2U)) 
                                 | (0x10U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                             [4U] >> 3U)))) 
                             | (((8U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                        [3U] >> 4U)) 
                                 | (4U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                          [2U] >> 5U))) 
                                | ((2U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                          [1U] >> 6U)) 
                                   | (1U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                            [0U] >> 7U))))));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [0xfU] + (QData)((IData)(
                                                            (3U 
                                                             == 
                                                             (3U 
                                                              & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                                 [0xfU] 
                                                                 >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [0xfU]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [0xeU] + (QData)((IData)(
                                                            (3U 
                                                             == 
                                                             (3U 
                                                              & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                                 [0xeU] 
                                                                 >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [0xeU]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [0xdU] + (QData)((IData)(
                                                            (3U 
                                                             == 
                                                             (3U 
                                                              & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                                 [0xdU] 
                                                                 >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [0xdU]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [0xcU] + (QData)((IData)(
                                                            (3U 
                                                             == 
                                                             (3U 
                                                              & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                                 [0xcU] 
                                                                 >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [0xcU]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [0xbU] + (QData)((IData)(
                                                            (3U 
                                                             == 
                                                             (3U 
                                                              & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                                 [0xbU] 
                                                                 >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [0xbU]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [0xaU] + (QData)((IData)(
                                                            (3U 
                                                             == 
                                                             (3U 
                                                              & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                                 [0xaU] 
                                                                 >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [0xaU]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [9U] + (QData)((IData)(
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                               [9U] 
                                                               >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [9U]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [8U] + (QData)((IData)(
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                               [8U] 
                                                               >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [8U]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [7U] + (QData)((IData)(
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                               [7U] 
                                                               >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [7U]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [6U] + (QData)((IData)(
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                               [6U] 
                                                               >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [6U]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [5U] + (QData)((IData)(
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                               [5U] 
                                                               >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [5U]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [4U] + (QData)((IData)(
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                               [4U] 
                                                               >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [4U]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [3U] + (QData)((IData)(
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                               [3U] 
                                                               >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [3U]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [2U] + (QData)((IData)(
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                               [2U] 
                                                               >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [2U]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [1U] + (QData)((IData)(
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                               [1U] 
                                                               >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [1U]));
    vlSelfRef.pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
        = (0x3fffffffffffffULL & ((vlSelfRef.PMPADDR_ARRAY_REGW
                                   [0U] + (QData)((IData)(
                                                          (3U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                               [0U] 
                                                               >> 3U)))))) 
                                  ^ vlSelfRef.PMPADDR_ARRAY_REGW
                                  [0U]));
}

VL_ATTR_COLD void Vtestbench_pmpchecker__Pz1___ctor_var_reset(Vtestbench_pmpchecker__Pz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pmpchecker__Pz1___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->PhysicalAddress = VL_RAND_RESET_Q(56);
    vlSelf->PrivilegeModeW = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->PMPCFG_ARRAY_REGW[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->PMPADDR_ARRAY_REGW[__Vi0] = VL_RAND_RESET_Q(54);
    }
    vlSelf->ExecuteAccessF = VL_RAND_RESET_I(1);
    vlSelf->WriteAccessM = VL_RAND_RESET_I(1);
    vlSelf->ReadAccessM = VL_RAND_RESET_I(1);
    vlSelf->Size = VL_RAND_RESET_I(2);
    vlSelf->CMOpM = VL_RAND_RESET_I(4);
    vlSelf->PMPInstrAccessFaultF = VL_RAND_RESET_I(1);
    vlSelf->PMPLoadAccessFaultM = VL_RAND_RESET_I(1);
    vlSelf->PMPStoreAmoAccessFaultM = VL_RAND_RESET_I(1);
    vlSelf->__PVT__EnforcePMP = VL_RAND_RESET_I(1);
    vlSelf->__PVT__FirstMatch = VL_RAND_RESET_I(16);
    vlSelf->__PVT__L = VL_RAND_RESET_I(16);
    vlSelf->__PVT__X = VL_RAND_RESET_I(16);
    vlSelf->__PVT__W = VL_RAND_RESET_I(16);
    vlSelf->__PVT__R = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__PMPTop[__Vi0] = VL_RAND_RESET_Q(56);
    }
    vlSelf->__PVT__SizeBytesMinus1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__MatchingR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__MatchingW = VL_RAND_RESET_I(1);
    vlSelf->__PVT__TooBig = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__15__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__14__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__13__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__12__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__11__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__10__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__9__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__8__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__7__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__6__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__5__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__4__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__3__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__2__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____PMPTop = VL_RAND_RESET_Q(56);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__1__KET____FirstMatch = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__pmp__DOT__pmpadrdecs__BRA__0__KET____PMPTop = VL_RAND_RESET_Q(56);
    vlSelf->__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->__PVT__PTEOr__DOT__genblk1__DOT__mid[__Vi0] = VL_RAND_RESET_Q(56);
    }
    vlSelf->pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch = VL_RAND_RESET_I(1);
    vlSelf->pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 = VL_RAND_RESET_Q(54);
    vlSelf->__VdfgRegularize_hd0c7ee50_0_13 = VL_RAND_RESET_I(14);
}
