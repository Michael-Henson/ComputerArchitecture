// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_pmpchecker__Pz1.h"

VL_INLINE_OPT void Vtestbench_pmpchecker__Pz1___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker__0(Vtestbench_pmpchecker__Pz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pmpchecker__Pz1___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmp__DOT__pmpchecker__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __VdfgRegularize_hd0c7ee50_0_1;
    __VdfgRegularize_hd0c7ee50_0_1 = 0;
    CData/*2:0*/ __VdfgRegularize_hd0c7ee50_0_2;
    __VdfgRegularize_hd0c7ee50_0_2 = 0;
    CData/*3:0*/ __VdfgRegularize_hd0c7ee50_0_3;
    __VdfgRegularize_hd0c7ee50_0_3 = 0;
    CData/*4:0*/ __VdfgRegularize_hd0c7ee50_0_4;
    __VdfgRegularize_hd0c7ee50_0_4 = 0;
    CData/*5:0*/ __VdfgRegularize_hd0c7ee50_0_5;
    __VdfgRegularize_hd0c7ee50_0_5 = 0;
    CData/*6:0*/ __VdfgRegularize_hd0c7ee50_0_6;
    __VdfgRegularize_hd0c7ee50_0_6 = 0;
    CData/*7:0*/ __VdfgRegularize_hd0c7ee50_0_7;
    __VdfgRegularize_hd0c7ee50_0_7 = 0;
    SData/*8:0*/ __VdfgRegularize_hd0c7ee50_0_8;
    __VdfgRegularize_hd0c7ee50_0_8 = 0;
    SData/*9:0*/ __VdfgRegularize_hd0c7ee50_0_9;
    __VdfgRegularize_hd0c7ee50_0_9 = 0;
    SData/*10:0*/ __VdfgRegularize_hd0c7ee50_0_10;
    __VdfgRegularize_hd0c7ee50_0_10 = 0;
    SData/*11:0*/ __VdfgRegularize_hd0c7ee50_0_11;
    __VdfgRegularize_hd0c7ee50_0_11 = 0;
    SData/*12:0*/ __VdfgRegularize_hd0c7ee50_0_12;
    __VdfgRegularize_hd0c7ee50_0_12 = 0;
    // Body
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xeU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xdU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xcU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xbU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xaU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[9U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[8U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[7U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[6U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[5U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[4U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[3U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[2U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[1U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0U] << 2U));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [0xeU] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr)) 
                                            & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [0xeU] >> 3U))) | (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                     [0xeU] 
                                                     >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [0xeU]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [0xdU] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr)) 
                                            & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [0xdU] >> 3U))) | (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                     [0xdU] 
                                                     >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [0xdU]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [0xcU] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr)) 
                                            & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [0xcU] >> 3U))) | (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                     [0xcU] 
                                                     >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [0xcU]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [0xbU] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr)) 
                                            & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [0xbU] >> 3U))) | (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                     [0xbU] 
                                                     >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [0xbU]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [0xaU] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr)) 
                                            & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [0xaU] >> 3U))) | (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                     [0xaU] 
                                                     >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [0xaU]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [9U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [9U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [9U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [9U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [8U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [8U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [8U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [8U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [7U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [7U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [7U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [7U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [6U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [6U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [6U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [6U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [5U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [5U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [5U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [5U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [4U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [4U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [4U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [4U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [3U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [3U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [3U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [3U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [2U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [2U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [2U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [2U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [1U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [1U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [1U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [1U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [0U] >> 3U))) ? (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch)
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [0U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [0U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [0U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__0__KET____PMPTop 
        = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch)
            ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                        [0U] | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                       << 2U)) : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__1__KET____FirstMatch 
        = ((~ (IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch)) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_1 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match) 
                                       << 1U) | (IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch));
    vlSelfRef.__PVT__PMPTop[0U] = vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__0__KET____PMPTop;
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____PMPTop 
        = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__1__KET____FirstMatch)
            ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                        [1U] | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                       << 2U)) : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__2__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_1)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_2 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match) 
                                       << 2U) | (IData)(__VdfgRegularize_hd0c7ee50_0_1));
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0U] 
        = (vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__0__KET____PMPTop 
           | vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____PMPTop);
    vlSelfRef.__PVT__PMPTop[1U] = vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____PMPTop;
    vlSelfRef.__PVT__PMPTop[2U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__2__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [2U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__3__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_2)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_3 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match) 
                                       << 3U) | (IData)(__VdfgRegularize_hd0c7ee50_0_2));
    vlSelfRef.__PVT__PMPTop[3U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__3__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [3U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__4__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_3)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_4 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match) 
                                       << 4U) | (IData)(__VdfgRegularize_hd0c7ee50_0_3));
    vlSelfRef.__PVT__PMPTop[4U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__4__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [4U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__5__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_4)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_5 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match) 
                                       << 5U) | (IData)(__VdfgRegularize_hd0c7ee50_0_4));
    vlSelfRef.__PVT__PMPTop[5U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__5__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [5U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__6__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_5)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_6 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match) 
                                       << 6U) | (IData)(__VdfgRegularize_hd0c7ee50_0_5));
    vlSelfRef.__PVT__PMPTop[6U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__6__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [6U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__7__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_6)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_7 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match) 
                                       << 7U) | (IData)(__VdfgRegularize_hd0c7ee50_0_6));
    vlSelfRef.__PVT__PMPTop[7U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__7__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [7U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__8__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_7)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_8 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match) 
                                       << 8U) | (IData)(__VdfgRegularize_hd0c7ee50_0_7));
    vlSelfRef.__PVT__PMPTop[8U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__8__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [8U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__9__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_8)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_9 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match) 
                                       << 9U) | (IData)(__VdfgRegularize_hd0c7ee50_0_8));
    vlSelfRef.__PVT__PMPTop[9U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__9__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [9U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__10__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_9)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_10 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match) 
                                        << 0xaU) | (IData)(__VdfgRegularize_hd0c7ee50_0_9));
    vlSelfRef.__PVT__PMPTop[0xaU] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__10__KET____FirstMatch)
                                      ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                  [0xaU] 
                                                  | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                 << 2U))
                                      : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__11__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_10)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_11 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match) 
                                        << 0xbU) | (IData)(__VdfgRegularize_hd0c7ee50_0_10));
    vlSelfRef.__PVT__PMPTop[0xbU] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__11__KET____FirstMatch)
                                      ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                  [0xbU] 
                                                  | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                 << 2U))
                                      : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__12__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_11)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_12 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match) 
                                        << 0xcU) | (IData)(__VdfgRegularize_hd0c7ee50_0_11));
    vlSelfRef.__PVT__PMPTop[0xcU] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__12__KET____FirstMatch)
                                      ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                  [0xcU] 
                                                  | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                 << 2U))
                                      : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__13__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_12)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_13 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match) 
                                                  << 0xdU) 
                                                 | (IData)(__VdfgRegularize_hd0c7ee50_0_12));
    vlSelfRef.__PVT__PMPTop[0xdU] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__13__KET____FirstMatch)
                                      ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                  [0xdU] 
                                                  | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                 << 2U))
                                      : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__14__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_13)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match));
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__15__KET____FirstMatch 
        = ((~ ((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match) 
               | (0U != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_13)))) 
           & ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                            [0xfU] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr)) 
                                               & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
                                                  < 
                                                  (vlSelfRef.PMPADDR_ARRAY_REGW
                                                   [0xfU] 
                                                   << 2U)))
               : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                 [0xfU] >> 3U))) | 
                   (3U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                 [0xfU] >> 3U)))) & 
                  (0xffffffffffffffULL == (0xffffffffffffffULL 
                                           & (3ULL 
                                              | ((~ 
                                                  ((((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                     & vlSelfRef.PMPADDR_ARRAY_REGW
                                                     [0xfU]) 
                                                    << 2U) 
                                                   ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)) 
                                                 | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                    << 2U))))))));
    vlSelfRef.__PVT__PMPTop[0xeU] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__14__KET____FirstMatch)
                                      ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                  [0xeU] 
                                                  | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                 << 2U))
                                      : 0ULL);
    vlSelfRef.__PVT__FirstMatch = ((((((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__15__KET____FirstMatch) 
                                       << 0xfU) | ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__14__KET____FirstMatch) 
                                                   << 0xeU)) 
                                     | (((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__13__KET____FirstMatch) 
                                         << 0xdU) | 
                                        ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__12__KET____FirstMatch) 
                                         << 0xcU))) 
                                    | ((((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__11__KET____FirstMatch) 
                                         << 0xbU) | 
                                        ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__10__KET____FirstMatch) 
                                         << 0xaU)) 
                                       | (((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__9__KET____FirstMatch) 
                                           << 9U) | 
                                          ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__8__KET____FirstMatch) 
                                           << 8U)))) 
                                   | (((((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__7__KET____FirstMatch) 
                                         << 7U) | ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__6__KET____FirstMatch) 
                                                   << 6U)) 
                                       | (((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__5__KET____FirstMatch) 
                                           << 5U) | 
                                          ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__4__KET____FirstMatch) 
                                           << 4U))) 
                                      | ((((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__3__KET____FirstMatch) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__2__KET____FirstMatch) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__1__KET____FirstMatch) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch)))));
    vlSelfRef.__PVT__PMPTop[0xfU] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__15__KET____FirstMatch)
                                      ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                  [0xfU] 
                                                  | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                 << 2U))
                                      : 0ULL);
}

VL_INLINE_OPT void Vtestbench_pmpchecker__Pz1___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker__0(Vtestbench_pmpchecker__Pz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pmpchecker__Pz1___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __VdfgRegularize_hd0c7ee50_0_1;
    __VdfgRegularize_hd0c7ee50_0_1 = 0;
    CData/*2:0*/ __VdfgRegularize_hd0c7ee50_0_2;
    __VdfgRegularize_hd0c7ee50_0_2 = 0;
    CData/*3:0*/ __VdfgRegularize_hd0c7ee50_0_3;
    __VdfgRegularize_hd0c7ee50_0_3 = 0;
    CData/*4:0*/ __VdfgRegularize_hd0c7ee50_0_4;
    __VdfgRegularize_hd0c7ee50_0_4 = 0;
    CData/*5:0*/ __VdfgRegularize_hd0c7ee50_0_5;
    __VdfgRegularize_hd0c7ee50_0_5 = 0;
    CData/*6:0*/ __VdfgRegularize_hd0c7ee50_0_6;
    __VdfgRegularize_hd0c7ee50_0_6 = 0;
    CData/*7:0*/ __VdfgRegularize_hd0c7ee50_0_7;
    __VdfgRegularize_hd0c7ee50_0_7 = 0;
    SData/*8:0*/ __VdfgRegularize_hd0c7ee50_0_8;
    __VdfgRegularize_hd0c7ee50_0_8 = 0;
    SData/*9:0*/ __VdfgRegularize_hd0c7ee50_0_9;
    __VdfgRegularize_hd0c7ee50_0_9 = 0;
    SData/*10:0*/ __VdfgRegularize_hd0c7ee50_0_10;
    __VdfgRegularize_hd0c7ee50_0_10 = 0;
    SData/*11:0*/ __VdfgRegularize_hd0c7ee50_0_11;
    __VdfgRegularize_hd0c7ee50_0_11 = 0;
    SData/*12:0*/ __VdfgRegularize_hd0c7ee50_0_12;
    __VdfgRegularize_hd0c7ee50_0_12 = 0;
    // Body
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xeU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xdU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xcU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xbU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0xaU] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[9U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[8U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[7U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[6U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[5U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[4U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[3U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[2U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[1U] << 2U));
    vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch 
        = (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
           < (vlSelfRef.PMPADDR_ARRAY_REGW[0U] << 2U));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [0xeU] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr)) 
                                            & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [0xeU] >> 3U))) | (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                     [0xeU] 
                                                     >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [0xeU]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [0xdU] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr)) 
                                            & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [0xdU] >> 3U))) | (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                     [0xdU] 
                                                     >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [0xdU]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [0xcU] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr)) 
                                            & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [0xcU] >> 3U))) | (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                     [0xcU] 
                                                     >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [0xcU]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [0xbU] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr)) 
                                            & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [0xbU] >> 3U))) | (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                     [0xbU] 
                                                     >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [0xbU]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [0xaU] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr)) 
                                            & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [0xaU] >> 3U))) | (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                     [0xaU] 
                                                     >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [0xaU]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [9U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [9U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [9U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [9U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [8U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [8U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [8U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [8U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [7U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [7U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [7U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [7U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [6U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [6U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [6U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [6U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [5U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [5U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [5U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [5U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [4U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [4U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [4U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [4U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [3U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [3U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [3U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [3U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [2U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [2U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [2U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [2U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [1U] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch)) 
                                          & (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr))
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [1U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [1U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [1U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch 
        = ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                         [0U] >> 3U))) ? (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch)
            : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                              [0U] >> 3U))) | (3U == 
                                               (3U 
                                                & (vlSelfRef.PMPCFG_ARRAY_REGW
                                                   [0U] 
                                                   >> 3U)))) 
               & (0xffffffffffffffULL == (0xffffffffffffffULL 
                                          & (3ULL | 
                                             ((~ ((
                                                   ((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                    & vlSelfRef.PMPADDR_ARRAY_REGW
                                                    [0U]) 
                                                   << 2U) 
                                                  ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                              | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                 << 2U)))))));
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__0__KET____PMPTop 
        = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch)
            ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                        [0U] | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                       << 2U)) : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__1__KET____FirstMatch 
        = ((~ (IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch)) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_1 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match) 
                                       << 1U) | (IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch));
    vlSelfRef.__PVT__PMPTop[0U] = vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__0__KET____PMPTop;
    vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____PMPTop 
        = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__1__KET____FirstMatch)
            ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                        [1U] | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                       << 2U)) : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__2__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_1)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_2 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match) 
                                       << 2U) | (IData)(__VdfgRegularize_hd0c7ee50_0_1));
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0U] 
        = (vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__0__KET____PMPTop 
           | vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____PMPTop);
    vlSelfRef.__PVT__PMPTop[1U] = vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____PMPTop;
    vlSelfRef.__PVT__PMPTop[2U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__2__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [2U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__3__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_2)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_3 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match) 
                                       << 3U) | (IData)(__VdfgRegularize_hd0c7ee50_0_2));
    vlSelfRef.__PVT__PMPTop[3U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__3__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [3U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__4__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_3)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_4 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match) 
                                       << 4U) | (IData)(__VdfgRegularize_hd0c7ee50_0_3));
    vlSelfRef.__PVT__PMPTop[4U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__4__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [4U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__5__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_4)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_5 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match) 
                                       << 5U) | (IData)(__VdfgRegularize_hd0c7ee50_0_4));
    vlSelfRef.__PVT__PMPTop[5U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__5__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [5U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__6__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_5)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_6 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match) 
                                       << 6U) | (IData)(__VdfgRegularize_hd0c7ee50_0_5));
    vlSelfRef.__PVT__PMPTop[6U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__6__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [6U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__7__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_6)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_7 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match) 
                                       << 7U) | (IData)(__VdfgRegularize_hd0c7ee50_0_6));
    vlSelfRef.__PVT__PMPTop[7U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__7__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [7U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__8__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_7)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_8 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match) 
                                       << 8U) | (IData)(__VdfgRegularize_hd0c7ee50_0_7));
    vlSelfRef.__PVT__PMPTop[8U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__8__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [8U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__9__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_8)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_9 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match) 
                                       << 9U) | (IData)(__VdfgRegularize_hd0c7ee50_0_8));
    vlSelfRef.__PVT__PMPTop[9U] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__9__KET____FirstMatch)
                                    ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                [9U] 
                                                | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                               << 2U))
                                    : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__10__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_9)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_10 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match) 
                                        << 0xaU) | (IData)(__VdfgRegularize_hd0c7ee50_0_9));
    vlSelfRef.__PVT__PMPTop[0xaU] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__10__KET____FirstMatch)
                                      ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                  [0xaU] 
                                                  | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                 << 2U))
                                      : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__11__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_10)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_11 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match) 
                                        << 0xbU) | (IData)(__VdfgRegularize_hd0c7ee50_0_10));
    vlSelfRef.__PVT__PMPTop[0xbU] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__11__KET____FirstMatch)
                                      ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                  [0xbU] 
                                                  | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                 << 2U))
                                      : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__12__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_11)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match));
    __VdfgRegularize_hd0c7ee50_0_12 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match) 
                                        << 0xcU) | (IData)(__VdfgRegularize_hd0c7ee50_0_11));
    vlSelfRef.__PVT__PMPTop[0xcU] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__12__KET____FirstMatch)
                                      ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                  [0xcU] 
                                                  | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                 << 2U))
                                      : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__13__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(__VdfgRegularize_hd0c7ee50_0_12)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match));
    vlSelfRef.__VdfgRegularize_hd0c7ee50_0_13 = (((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match) 
                                                  << 0xdU) 
                                                 | (IData)(__VdfgRegularize_hd0c7ee50_0_12));
    vlSelfRef.__PVT__PMPTop[0xdU] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__13__KET____FirstMatch)
                                      ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                  [0xdU] 
                                                  | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                 << 2U))
                                      : 0ULL);
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__14__KET____FirstMatch 
        = ((~ (IData)((0U != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_13)))) 
           & (IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match));
    vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__15__KET____FirstMatch 
        = ((~ ((IData)(vlSelfRef.__Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match) 
               | (0U != (IData)(vlSelfRef.__VdfgRegularize_hd0c7ee50_0_13)))) 
           & ((1U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                            [0xfU] >> 3U))) ? ((~ (IData)(vlSelfRef.__PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr)) 
                                               & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
                                                  < 
                                                  (vlSelfRef.PMPADDR_ARRAY_REGW
                                                   [0xfU] 
                                                   << 2U)))
               : (((2U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                 [0xfU] >> 3U))) | 
                   (3U == (3U & (vlSelfRef.PMPCFG_ARRAY_REGW
                                 [0xfU] >> 3U)))) & 
                  (0xffffffffffffffULL == (0xffffffffffffffULL 
                                           & (3ULL 
                                              | ((~ 
                                                  ((((~ vlSelfRef.pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                     & vlSelfRef.PMPADDR_ARRAY_REGW
                                                     [0xfU]) 
                                                    << 2U) 
                                                   ^ vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM)) 
                                                 | (vlSelfRef.pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_1 
                                                    << 2U))))))));
    vlSelfRef.__PVT__PMPTop[0xeU] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__14__KET____FirstMatch)
                                      ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                  [0xeU] 
                                                  | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                 << 2U))
                                      : 0ULL);
    vlSelfRef.__PVT__PMPTop[0xfU] = ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__15__KET____FirstMatch)
                                      ? (3ULL | ((vlSelfRef.PMPADDR_ARRAY_REGW
                                                  [0xfU] 
                                                  | vlSelfRef.pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_1) 
                                                 << 2U))
                                      : 0ULL);
    vlSelfRef.__PVT__FirstMatch = ((((((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__15__KET____FirstMatch) 
                                       << 0xfU) | ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__14__KET____FirstMatch) 
                                                   << 0xeU)) 
                                     | (((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__13__KET____FirstMatch) 
                                         << 0xdU) | 
                                        ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__12__KET____FirstMatch) 
                                         << 0xcU))) 
                                    | ((((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__11__KET____FirstMatch) 
                                         << 0xbU) | 
                                        ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__10__KET____FirstMatch) 
                                         << 0xaU)) 
                                       | (((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__9__KET____FirstMatch) 
                                           << 9U) | 
                                          ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__8__KET____FirstMatch) 
                                           << 8U)))) 
                                   | (((((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__7__KET____FirstMatch) 
                                         << 7U) | ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__6__KET____FirstMatch) 
                                                   << 6U)) 
                                       | (((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__5__KET____FirstMatch) 
                                           << 5U) | 
                                          ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__4__KET____FirstMatch) 
                                           << 4U))) 
                                      | ((((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__3__KET____FirstMatch) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__2__KET____FirstMatch) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__1__KET____FirstMatch) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch)))));
    vlSelfRef.__PVT__EnforcePMP = ((3U != (IData)(vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                   | (0U != ((IData)(vlSelfRef.__PVT__L) 
                                             & (IData)(vlSelfRef.__PVT__FirstMatch))));
}

VL_INLINE_OPT void Vtestbench_pmpchecker__Pz1___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker__1(Vtestbench_pmpchecker__Pz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pmpchecker__Pz1___act_comb__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TooBig = ((0xffffffffffffffULL 
                                & (vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
                                   + (QData)((IData)(vlSelfRef.__PVT__SizeBytesMinus1)))) 
                               > vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
                               [0xeU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[1U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0U] | vlSelfRef.__PVT__PMPTop[2U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[2U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [1U] | vlSelfRef.__PVT__PMPTop[3U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[3U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [2U] | vlSelfRef.__PVT__PMPTop[4U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[4U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [3U] | vlSelfRef.__PVT__PMPTop[5U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[5U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [4U] | vlSelfRef.__PVT__PMPTop[6U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[6U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [5U] | vlSelfRef.__PVT__PMPTop[7U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[7U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [6U] | vlSelfRef.__PVT__PMPTop[8U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[8U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [7U] | vlSelfRef.__PVT__PMPTop[9U]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[9U] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [8U] | vlSelfRef.__PVT__PMPTop[0xaU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xaU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [9U] | vlSelfRef.__PVT__PMPTop[0xbU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xbU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xaU] | vlSelfRef.__PVT__PMPTop[0xcU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xcU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xbU] | vlSelfRef.__PVT__PMPTop[0xdU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xdU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xcU] | vlSelfRef.__PVT__PMPTop[0xeU]);
    vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid[0xeU] 
        = (vlSelfRef.__PVT__PTEOr__DOT__genblk1__DOT__mid
           [0xdU] | vlSelfRef.__PVT__PMPTop[0xfU]);
    vlSelfRef.__PVT__MatchingW = ((~ (IData)(vlSelfRef.__PVT__TooBig)) 
                                  & (0U != ((IData)(vlSelfRef.__PVT__W) 
                                            & (IData)(vlSelfRef.__PVT__FirstMatch))));
    vlSelfRef.__PVT__MatchingR = ((~ (IData)(vlSelfRef.__PVT__TooBig)) 
                                  & (0U != ((IData)(vlSelfRef.__PVT__R) 
                                            & (IData)(vlSelfRef.__PVT__FirstMatch))));
}

extern const VlUnpacked<CData/*2:0*/, 4> Vtestbench__ConstPool__TABLE_hbc1b2a27_0;

VL_INLINE_OPT void Vtestbench_pmpchecker__Pz1___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker__0(Vtestbench_pmpchecker__Pz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pmpchecker__Pz1___nba_sequent__TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
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
    __Vtableidx2 = vlSymsp->TOP.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__dmmu__DOT__dmmu__Size;
    vlSelfRef.__PVT__SizeBytesMinus1 = Vtestbench__ConstPool__TABLE_hbc1b2a27_0
        [__Vtableidx2];
}
