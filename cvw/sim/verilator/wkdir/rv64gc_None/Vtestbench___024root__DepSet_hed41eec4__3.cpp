// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__11(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__11\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v0;
    __VdlySet__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v0 = 0;
    QData/*63:0*/ __VdlyVal__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v31;
    __VdlyVal__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v31 = 0;
    CData/*4:0*/ __VdlyDim0__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v31;
    __VdlyDim0__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v31 = 0;
    CData/*0:0*/ __VdlySet__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v31;
    __VdlySet__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v31 = 0;
    CData/*0:0*/ __VdlySet__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v0;
    __VdlySet__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v0 = 0;
    QData/*63:0*/ __VdlyVal__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v32;
    __VdlyVal__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v32 = 0;
    CData/*4:0*/ __VdlyDim0__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v32;
    __VdlyDim0__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v32 = 0;
    CData/*0:0*/ __VdlySet__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v32;
    __VdlySet__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v32 = 0;
    // Body
    if (VL_LTS_III(32, 0U, vlSelfRef.testbench__DOT__INSTR_LIMIT)) {
        if (VL_UNLIKELY(((0ULL != vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTER_REGW
                          [2U]) & (0ULL == VL_MODDIV_QQQ(64, 
                                                         vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTER_REGW
                                                         [2U], 0x186a0ULL))))) {
            VL_WRITEF_NX("Reached %20# instructions\n",0,
                         64,vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTER_REGW
                         [2U]);
        }
        if (VL_UNLIKELY(((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTER_REGW
                          [2U] == (QData)((IData)(vlSelfRef.testbench__DOT__INSTR_LIMIT))) 
                         & (0U != vlSelfRef.testbench__DOT__INSTR_LIMIT)))) {
            VL_FINISH_MT("/home/04-comp-arch-m/Downloads/cvw/testbench/testbench.sv", 729, "");
        }
    }
    __VdlySet__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v0 = 0U;
    __VdlySet__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v32 = 0U;
    __VdlySet__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v0 = 0U;
    __VdlySet__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v31 = 0U;
    if (vlSelfRef.testbench__DOT__reset) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__i = 0x20U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__i = 0x20U;
        __VdlySet__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v0 = 1U;
        __VdlySet__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v0 = 1U;
    } else {
        if ((8U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT____Vcellout__MWCtrlReg____pinNumber6))) {
            __VdlyVal__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v32 
                = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__FResultW;
            __VdlyDim0__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v32 
                = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__RdW;
            __VdlySet__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v32 = 1U;
        }
        if ((0x10U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregW____pinNumber6))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT____Vlvbound_h25db5f1b__0 
                = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__ResultW;
            if ((0x1eU >= (0x1fU & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__RdW) 
                                    - (IData)(1U))))) {
                __VdlyVal__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v31 
                    = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT____Vlvbound_h25db5f1b__0;
                __VdlyDim0__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v31 
                    = (0x1fU & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__RdW) 
                                - (IData)(1U)));
                __VdlySet__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v31 = 1U;
            }
        }
    }
    vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__SampleEdge 
        = ((1U & (~ ((IData)(vlSelfRef.testbench__DOT__reset) 
                     | (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__CurrState))))) 
           && ((VL_REDXOR_2(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__SckMode) 
                ^ (~ (IData)(vlSelfRef.testbench__DOT__SPICLK))) 
               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EdgePulse) 
                  & (2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__NextState)))));
    vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__ShiftEdge 
        = ((1U & (~ ((IData)(vlSelfRef.testbench__DOT__reset) 
                     | (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__CurrState))))) 
           && ((VL_REDXOR_2(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__SckMode) 
                ^ (IData)(vlSelfRef.testbench__DOT__SPICLK)) 
               & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__LastBit)) 
                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EdgePulse))));
    vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__EndOfFrame 
        = ((1U & (~ ((IData)(vlSelfRef.testbench__DOT__reset) 
                     | (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__CurrState))))) 
           && ((VL_REDXOR_2(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__SckMode) 
                ^ (IData)(vlSelfRef.testbench__DOT__SPICLK)) 
               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EdgePulse) 
                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__LastBit))));
    if (__VdlySet__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v0) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[1U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[2U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[3U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[4U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[5U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[6U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[7U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[8U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[9U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0xaU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0xbU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0xcU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0xdU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0xeU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0xfU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x10U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x11U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x12U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x13U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x14U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x15U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x16U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x17U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x18U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x19U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x1aU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x1bU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x1cU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x1dU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x1eU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[0x1fU] = 0ULL;
    }
    if (__VdlySet__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v32) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf[__VdlyDim0__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v32] 
            = __VdlyVal__testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fregfile__DOT__rf__v32;
    }
    if (__VdlySet__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v0) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[1U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[2U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[3U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[4U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[5U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[6U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[7U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[8U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[9U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0xaU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0xbU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0xcU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0xdU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0xeU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0xfU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x10U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x11U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x12U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x13U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x14U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x15U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x16U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x17U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x18U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x19U] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x1aU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x1bU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x1cU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x1dU] = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[0x1eU] = 0ULL;
    }
    if (__VdlySet__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v31) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf[__VdlyDim0__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v31] 
            = __VdlyVal__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__regf__DOT__rf__v31;
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__3(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState)) 
         | (4U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState)))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__0__KET____DOT____Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__din[0U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[1U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__0__KET____DOT____Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__din[1U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[2U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__0__KET____DOT____Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__din[2U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[3U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__0__KET____DOT____Vcellinp__word__BRA__0__KET____DOT__wordram__DOT__CacheDataMem__din[3U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[4U] 
            = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__2__KET____DOT__fb__q);
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[5U] 
            = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__2__KET____DOT__fb__q 
                       >> 0x20U));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[6U] 
            = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__3__KET____DOT__fb__q);
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[7U] 
            = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__3__KET____DOT__fb__q 
                       >> 0x20U));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[8U] 
            = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__4__KET____DOT__fb__q);
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[9U] 
            = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__4__KET____DOT__fb__q 
                       >> 0x20U));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xaU] 
            = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__5__KET____DOT__fb__q);
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xbU] 
            = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__5__KET____DOT__fb__q 
                       >> 0x20U));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xcU] 
            = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__6__KET____DOT__fb__q);
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xdU] 
            = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__6__KET____DOT__fb__q 
                       >> 0x20U));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xeU] 
            = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__7__KET____DOT__fb__q);
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xfU] 
            = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__7__KET____DOT__fb__q 
                       >> 0x20U));
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][0U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[1U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][1U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[2U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][2U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[3U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][3U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[4U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][4U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[5U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][5U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[6U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][6U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[7U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][7U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[8U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][8U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[9U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][9U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xaU] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][0xaU];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xbU] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][0xbU];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xcU] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][0xcU];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xdU] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][0xdU];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xeU] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][0xeU];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xfU] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataAOMux__DOT__genblk1__DOT__mid
            [2U][0xfU];
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0U];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[1U] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[1U] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0U] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[2U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[1U];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[3U] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[2U] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[1U] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[4U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[2U];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[5U] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[3U] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[2U] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[6U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[3U];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[7U] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[4U] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[3U] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[8U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[4U];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[9U] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[5U] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[4U] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0xaU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[5U];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0xbU] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[6U] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[5U] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0xcU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[6U];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0xdU] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[7U] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[6U] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0xeU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[7U];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0xfU] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[8U] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[7U] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x10U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[8U];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x11U] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[9U] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[8U] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x12U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[9U];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x13U] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xaU] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[9U] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x14U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xaU];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x15U] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xbU] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xaU] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x16U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xbU];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x17U] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xcU] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xbU] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x18U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xcU];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x19U] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xdU] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xcU] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x1aU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xdU];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x1bU] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xeU] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xdU] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x1cU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xeU];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x1dU] 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xfU] 
            << 0x10U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xeU] 
                         >> 0x10U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x1eU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xfU];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets[0x1fU] 
        = (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__ReadDataLine[0xfU] 
           >> 0x10U);
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_114 = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF)
                                                   ? 
                                                  vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__subcachelineread__DOT__ReadDataLineSets
                                                  [
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 1U)))]
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                >> 1U)))
                                                     ? 
                                                    (0xffffU 
                                                     & (IData)(
                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__0__KET____DOT__fb__q 
                                                                >> 0x30U)))
                                                     : (IData)(
                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__0__KET____DOT__fb__q 
                                                                >> 0x20U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                                >> 1U)))
                                                     ? (IData)(
                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__0__KET____DOT__fb__q 
                                                                >> 0x10U))
                                                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT____Vcellout__fetchbuffer__BRA__0__KET____DOT__fb__q))));
    if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawF = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT____Vcellinp__SpillInstrReg____pinNumber4 = 0U;
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawF 
            = vlSelfRef.__VdfgRegularize_hd87f99a1_4_114;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT____Vcellinp__SpillInstrReg____pinNumber4 
            = (0xffffU & vlSelfRef.__VdfgRegularize_hd87f99a1_4_114);
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PostSpillInstrRawF 
        = ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__CurrState))
            ? (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT____Vcellinp__SpillInstrReg____pinNumber4) 
                << 0x10U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__InstrFirstHalfF))
            : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawF);
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__4(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__SelRegions) 
            & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__AccessRWXC)) 
           | ((~ (IData)((0U != (0x2aU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__SelRegions))))) 
              & ((9U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                 & (0U != (3U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                 >> 0xaU))))));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__10(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__10\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__ContinueTransmit 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitFIFOEmpty)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__EndOfFrame));
    vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EndTransmission 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__EndOfFrame) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitFIFOEmpty));
    vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitLoad 
        = ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__CurrState)) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__ContinueTransmit));
    vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__NextState 
        = ((4U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__CurrState))
            ? ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__CurrState))
                ? ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__CurrState))
                    ? 0U : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EndOfINTERXFR)
                             ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitRegLoaded)
                                 ? 2U : 4U) : 6U)) : 
               ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__CurrState))
                 ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EndOfINTERCS)
                     ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitRegLoaded)
                         ? ((0U < (0xffU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__Delay0)))
                             ? 1U : 2U) : 0U) : 5U)
                 : ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__ChipSelectMode))
                     ? 0U : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitRegLoaded)
                              ? 2U : 4U)))) : ((2U 
                                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__CurrState))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__CurrState))
                                                    ? 
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EndOfSCKCS)
                                                     ? 5U
                                                     : 3U)
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__ChipSelectMode))
                                                     ? 
                                                    (((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EndTransmission) 
                                                      & (0U 
                                                         >= 
                                                         (0xffU 
                                                          & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__Delay0) 
                                                             >> 8U))))
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__EndOfFrame) 
                                                       & (0U 
                                                          < 
                                                          (0xffU 
                                                           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__Delay0) 
                                                              >> 8U))))
                                                       ? 3U
                                                       : 
                                                      (((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__EndOfFrame) 
                                                        & (0U 
                                                           >= 
                                                           (0xffU 
                                                            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__Delay0) 
                                                               >> 8U))))
                                                        ? 5U
                                                        : 2U)))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__ChipSelectMode))
                                                      ? 
                                                     (((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__EndOfFrame) 
                                                       & (0U 
                                                          < 
                                                          (0xffU 
                                                           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__Delay1) 
                                                              >> 8U))))
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EndTransmission)
                                                        ? 4U
                                                        : 2U))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__ChipSelectMode))
                                                       ? 
                                                      (((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__EndOfFrame) 
                                                        & (0U 
                                                           < 
                                                           (0xffU 
                                                            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__Delay1) 
                                                               >> 8U))))
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EndTransmission)
                                                         ? 4U
                                                         : 2U))
                                                       : 2U))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__CurrState))
                                                    ? 
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__controller__DOT__EndOfCSSCK)
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__TransmitRegLoaded)
                                                     ? 
                                                    ((0U 
                                                      < 
                                                      (0xffU 
                                                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__uncoregen__DOT__uncore__DOT__spi__DOT__spi__DOT__Delay0)))
                                                      ? 1U
                                                      : 2U)
                                                     : 0U))));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__12(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__12\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__SelRegions 
        = (((IData)((0xffffffffffffffULL == (0xffffffffffffffULL 
                                             & (0x7ffffffULL 
                                                | (~ 
                                                   (0x80000000ULL 
                                                    ^ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)))))) 
            << 5U) | (((IData)((0xffffffffffffffULL 
                                == (0xffffffffffffffULL 
                                    & (0xfffULL | (~ 
                                                   (0x1000ULL 
                                                    ^ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero)))))) 
                       << 4U) | (1U & (~ (IData)((0U 
                                                  != 
                                                  (0x7ffU 
                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__SelRegions) 
                                                      >> 1U))))))));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__15(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__15\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((0xffffffffffffffULL == (0xffffffffffffffULL 
                                            & (0xfffULL 
                                               | (~ 
                                                  (0x10040000ULL 
                                                   ^ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM))))) 
                   & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_27)) 
                  << 0xbU) | ((((((0xffffffffffffffULL 
                                   == (0xffffffffffffffULL 
                                       & (0x3ffffffULL 
                                          | (~ (0xc000000ULL 
                                                ^ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM))))) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_27)) 
                                 << 9U) | ((((0xffffffffffffffULL 
                                              == (0xffffffffffffffULL 
                                                  & (7ULL 
                                                     | (~ 
                                                        (0x10000000ULL 
                                                         ^ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM))))) 
                                             & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__AccessRW) 
                                                & (1U 
                                                   >> (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__dmmu__DOT__dmmu__Size)))) 
                                            << 8U) 
                                           | (((0xffffffffffffffULL 
                                                == 
                                                (0xffffffffffffffULL 
                                                 & (0xffULL 
                                                    | (~ 
                                                       (0x10060000ULL 
                                                        ^ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM))))) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_27)) 
                                              << 7U))) 
                               | ((((0xffffffffffffffULL 
                                     == (0xffffffffffffffULL 
                                         & (0xffffULL 
                                            | (~ (0x2000000ULL 
                                                  ^ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM))))) 
                                    & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__AccessRW) 
                                       & (0xfU >> (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__dmmu__DOT__dmmu__Size)))) 
                                   << 6U) | (((0xffffffffffffffULL 
                                               == (0xffffffffffffffULL 
                                                   & (0x7ffffffULL 
                                                      | (~ 
                                                         (0x80000000ULL 
                                                          ^ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM))))) 
                                              & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__AccessRWXC) 
                                                 & (0xfU 
                                                    >> (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__dmmu__DOT__dmmu__Size)))) 
                                             << 5U))) 
                              | ((((0xffffffffffffffULL 
                                    == (0xffffffffffffffULL 
                                        & (0xfffULL 
                                           | (~ (0x1000ULL 
                                                 ^ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM))))) 
                                   & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM) 
                                       >> 1U) & (0xfU 
                                                 >> (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__dmmu__DOT__dmmu__Size)))) 
                                  << 4U) | (1U & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7ffU 
                                                              & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__SelRegions) 
                                                                 >> 1U)))))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__SelRegions 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__16(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__16\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_4_112;
    __VdfgRegularize_hd87f99a1_4_112 = 0;
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearDirty 
        = (((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0)) 
            & (3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState))) 
           | (((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
               & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay))) 
              | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_18) 
                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CMOWriteback 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6) 
            & ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay)) 
               & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitDirtyWay)))) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_3) 
              & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay))));
    __VdfgRegularize_hd87f99a1_4_112 = (((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                         & (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay)))) 
                                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_1)) 
                                            & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))) 
                                        | ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                                           & ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                              | ((6U 
                                                  == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                                                 | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_18)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__Way 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetValid)
            ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__VictimWayEnc)
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__HitWayEncoded));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetDirty 
        = (((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyUpdateHit) 
               | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CMOZeroNoEviction))) 
           | (((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0)) 
              | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_17)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SelVictim 
        = (((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
            & (((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6))) 
               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck) 
                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_3)))) 
           | (((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
               & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyMiss) 
                   & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay))) 
                  | ((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay)))) 
                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CMOZeroNoEviction)))) 
              | (3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__StallConditions 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyMiss) 
              | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CMOWriteback)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__BusWrite 
        = ((IData)(__VdfgRegularize_hd87f99a1_4_112) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusCMOZero));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW 
        = (((((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_20)) 
             | (((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)) 
                 & (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState))) 
                | ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_21)) 
                   & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_16)))) 
            << 1U) | (IData)(__VdfgRegularize_hd87f99a1_4_112));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__NextLRU 
        = ((3U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__NextLRU)) 
           | (4U & ((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__Way) 
                        >> 1U)) << 2U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__NextLRU 
        = ((4U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__NextLRU)) 
           | ((2U & (((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__Way))
                       ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__CurrLRU) 
                          >> 1U) : (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__Way))) 
                     << 1U)) | (1U & ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__Way))
                                       ? (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__Way))
                                       : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__CurrLRU)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__DCacheStallM 
        = (((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
            & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__StallConditions)) 
           | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
              | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                 | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                    | ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                       | (6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__WordOffsetAddr 
        = (7U & ((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11) 
                      | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__BusWrite))) 
                  | (((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11)) 
                     | (((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                         & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11)) 
                        | (((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                            & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11)) 
                           | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                              | (5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)))))))
                  ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BeatCount)
                  : ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                      << 0x1dU) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                   >> 3U))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_13 
        = (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_21) 
            & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_109)) 
           | ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheBusRW)) 
              | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusCMOZero)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT____VdfgRegularize_h961e3454_2_39 
        = (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTER_REGW
           [0xfU] + (QData)((IData)(((~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MCOUNTINHIBIT_REGW 
                                         >> 0xfU)) 
                                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__DCacheStallM)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DCacheBusStallM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__DCacheStallM) 
           | (((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_13)) 
              | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                 | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                    | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                       | ((7U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__BeatCountDelayed)) 
                          & ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                             | (6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)))))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTERPlusM[0xfU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT____VdfgRegularize_h961e3454_2_39;
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);
void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf);

bool Vtestbench___024root___eval_phase__act(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<19> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestbench___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtestbench___024root___timing_resume(vlSelf);
        Vtestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf);

bool Vtestbench___024root___eval_phase__nba(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestbench___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/04-comp-arch-m/Downloads/cvw/testbench/testbench.sv", 38, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/04-comp-arch-m/Downloads/cvw/testbench/testbench.sv", 38, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtestbench___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
