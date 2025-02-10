// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

extern const VlUnpacked<CData/*1:0*/, 16> Vtestbench__ConstPool__TABLE_h14a5b4b3_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vtestbench__ConstPool__TABLE_h55a8fd5c_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtestbench__ConstPool__TABLE_hf55068a6_0;

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__9(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__9\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT____VdfgExtracted_hd61ddf76__0;
    testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT____VdfgExtracted_hd61ddf76__0 = 0;
    CData/*0:0*/ testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____VdfgRegularize_h1afdae1e_1_10;
    testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____VdfgRegularize_h1afdae1e_1_10 = 0;
    CData/*1:0*/ testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_1;
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_1 = 0;
    CData/*1:0*/ testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_3;
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_3 = 0;
    CData/*1:0*/ testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_5;
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_5 = 0;
    CData/*1:0*/ testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_7;
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_7 = 0;
    CData/*1:0*/ testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_9;
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_9 = 0;
    CData/*1:0*/ testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_11;
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_11 = 0;
    CData/*1:0*/ testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_13;
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_13 = 0;
    CData/*1:0*/ testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_15;
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_15 = 0;
    CData/*0:0*/ testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT____VdfgExtracted_h7c419e86__0;
    testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT____VdfgExtracted_h7c419e86__0 = 0;
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ValidWay 
        = ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.ValidWay) 
             << 3U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.ValidWay) 
                       << 2U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.ValidWay) 
                                   << 1U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.ValidWay)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitDirtyWay 
        = ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.HitDirtyWay) 
             << 3U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.HitDirtyWay) 
                       << 2U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.HitDirtyWay) 
                                   << 1U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.HitDirtyWay)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
        = ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__CurrState))
            ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__Spill__DOT__spill__DOT__PCPlus2F
            : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__PCF);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT____Vcellinp__gm3____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox0.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox3.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT____Vcellinp__gm2____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox0.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox1.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT____Vcellinp__gm1____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox1.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox2.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT____Vcellinp__gm0____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox2.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__sbox1__DOT__sbox3.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__SboxOut 
        = (((QData)((IData)(((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox7.y) 
                               << 0x18U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox6.y) 
                                            << 0x10U)) 
                             | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox5.y) 
                                 << 8U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox4.y))))) 
            << 0x20U) | (QData)((IData)(((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox3.y) 
                                           << 0x18U) 
                                          | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox2.y) 
                                             << 0x10U)) 
                                         | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox1.y) 
                                             << 8U) 
                                            | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invsbox__DOT__sbox0.y))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT____Vcellinp__gm2____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox0.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox1.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT____Vcellinp__gm1____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox1.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox2.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT____Vcellinp__gm3____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox0.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox3.y));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__Sbox0Out 
        = ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox3.y) 
             << 0x18U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox2.y) 
                          << 0x10U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox1.y) 
                                         << 8U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox0.y)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT____Vcellinp__gm0____pinNumber1 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox2.y) 
           ^ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__sbox__DOT__sbox3.y));
    __Vtableidx9 = (((8U & (((~ (IData)((0U != (7U 
                                                & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ValidWay)))))) 
                             & (~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ValidWay) 
                                   >> 3U))) << 3U)) 
                     | (4U & (((~ (IData)((0U != (3U 
                                                  & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ValidWay)))))) 
                               & (~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ValidWay) 
                                     >> 2U))) << 2U))) 
                    | (((IData)((1U == (3U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ValidWay)))) 
                        << 1U) | (1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ValidWay)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__FirstZeroWay 
        = Vtestbench__ConstPool__TABLE_h14a5b4b3_0[__Vtableidx9];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__FirstZeroWayEncoder__DOT__index 
        = Vtestbench__ConstPool__TABLE_h55a8fd5c_0[__Vtableidx9];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT__genblk1__DOT__eq_63_47 
        = (1U & ((~ (IData)((0U != (0x1ffffU & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                        >> 0x2fU)))))) 
                 | (0x1ffffU == (0x1ffffU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                     >> 0x2fU))))));
    if (vlSelfRef.testbench__DOT__reset) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PageType = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_TVM_INT = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW = 3U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM = 0U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrE = 0U;
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PageType 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextPageType;
        if (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSWriteM) 
             & ((0x180U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                            >> 0x14U)) & (((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_TVM_INT)) 
                                           | (3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))) 
                                          & ((0U == 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                                          >> 0x3cU)))) 
                                             | ((8U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                                             >> 0x3cU)))) 
                                                | (9U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                                               >> 0x3cU)))))))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM;
        }
        if ((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StallW)))) {
            if ((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__TrapM)))) {
                if ((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__mretM)))) {
                    if ((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__sretM)))) {
                        if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__WriteMSTATUSM) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_TVM_INT 
                                = (1U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                                 >> 0x14U)));
                        }
                    }
                }
            }
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW 
                = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__NextPrivilegeModeM;
        }
        if ((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StallM)))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushM)
                    ? 0x13U : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrE);
        }
        if ((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StallE)))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrE 
                = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushE)
                    ? 0x13U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD));
        }
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT__temp 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT____Vcellinp__gm0____pinNumber1) 
           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw1__DOT____Vcellinp__gm2____pinNumber1));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
        = ((0x80U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT____Vcellout__controlregBMU____pinNumber6))
            ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__ABMU
            : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__SboxOut);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT__temp 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT____Vcellinp__gm0____pinNumber1) 
           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk2__DOT__aes64e__DOT__mw0__DOT____Vcellinp__gm2____pinNumber1));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__TranslationVAdr 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__DTLBWalk)
            ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__IEUAdrSpillM
            : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__hptwwrites__DOT__vm64check__DOT__genblk1__DOT__eq_63_47 
        = (1U & ((~ (IData)((0U != (0x1ffffU & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__TranslationVAdr 
                                                        >> 0x2fU)))))) 
                 | (0x1ffffU == (0x1ffffU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__TranslationVAdr 
                                                     >> 0x2fU))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp 
        = (0xffU & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                             >> 0x18U)) ^ ((IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                    >> 0x10U)) 
                                           ^ ((IData)(
                                                      (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                       >> 8U)) 
                                              ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp 
        = (0xffU & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                             >> 0x38U)) ^ ((IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                    >> 0x30U)) 
                                           ^ ((IData)(
                                                      (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                       >> 0x28U)) 
                                              ^ (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                         >> 0x20U))))));
    __Vtableidx7 = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PageType) 
                     << 4U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__NextPageType 
        = Vtestbench__ConstPool__TABLE_hf55068a6_0[__Vtableidx7];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__HPTWReadAdr 
        = ((0xfffffffffff000ULL & ((((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                     | ((7U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                        | ((9U != (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                              >> 0x3cU)))) 
                                           & ((4U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                              | (5U 
                                                 == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))))))
                                     ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW
                                     : (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE 
                                        >> 0xaU)) << 0xcU)) 
           | (QData)((IData)((0xff8U & (((8U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))
                                          ? (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__TranslationVAdr 
                                                     >> 0xcU))
                                          : ((4U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))
                                                  ? (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__TranslationVAdr 
                                                             >> 0x27U))
                                                  : (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__TranslationVAdr 
                                                             >> 0x1eU)))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))
                                                  ? (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__TranslationVAdr 
                                                             >> 0x15U))
                                                  : (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__TranslationVAdr 
                                                             >> 0xcU))))) 
                                        << 3U)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor0 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 0x10U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 8U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor1 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 8U)) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 0x18U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 8U)) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 0x10U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 8U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor2 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 0x10U)) 
                                  ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn)) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 0x10U)) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 0x18U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 0x10U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor3 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 0x18U)) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 8U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 0x18U)) 
                                                 ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn)) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 0x18U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor0 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 0x20U)) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 0x30U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 0x20U)) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 0x28U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 0x20U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor1 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 0x28U)) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 0x38U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 0x28U)) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 0x30U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 0x28U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor2 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 0x30U)) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 0x20U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 0x30U)) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 0x38U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 0x30U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor3 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
            << 3U) ^ ((0x3fcU & (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                           >> 0x38U)) 
                                  ^ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                             >> 0x28U))) 
                                 << 2U)) ^ ((0x1feU 
                                             & (((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                          >> 0x38U)) 
                                                 ^ (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                            >> 0x20U))) 
                                                << 1U)) 
                                            ^ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__temp) 
                                               ^ (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__MixcolsIn 
                                                             >> 0x38U)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm0__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor0))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor0))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor0)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm1__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor1))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor1))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor1)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm2__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor2))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor2))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor2)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm3__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor3))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor3))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor3)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm0__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor0))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor0))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor0)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm1__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor1))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor1))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor1)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm2__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor2))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor2))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor2)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm3__DOT__temp0 
        = (0xffU & ((0x100U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor3))
                     ? (0x1bU ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor3))
                     : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor3)));
    if ((9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__endianmux__DOT__EndiannessPrivMode = 1U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFunct7M = 0U;
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__endianmux__DOT__EndiannessPrivMode 
            = (((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_MPRV_INT))
                ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__STATUS_MPP)
                : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFunct7M 
            = (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
               >> 0x19U);
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BigEndianM 
        = ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__endianmux__DOT__EndiannessPrivMode))
            ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_MBE)
            : ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__endianmux__DOT__EndiannessPrivMode))
                ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_SBE)
                : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_UBE)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_35 = (0xfU 
                                                 & ((1U 
                                                     == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))
                                                     ? (IData)(
                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                                >> 4U))
                                                     : 
                                                    ((IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                              >> 4U)) 
                                                     & (IData)(
                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__SENVCFG_REGW 
                                                                >> 4U)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrs__DOT__STCE 
        = (1U & ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                 | ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MCOUNTEREN_REGW 
                     >> 1U) & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                       >> 0x3fU)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__Translate 
        = ((0U != (0xfU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                   >> 0x3cU)))) & (3U 
                                                   != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__EffectivePrivilegeMode 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_MPRV_INT)
            ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__STATUS_MPP)
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__hptwwrites__DOT__EffectivePrivilegeMode 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__DTLBWalk)
            ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__EffectivePrivilegeMode)
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__EnabledIntsM 
        = ((((3U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__STATUS_MIE))
             ? ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MIDELEG_REGW)) 
                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__PendingIntsM))
             : 0U) | (((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                       | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                          & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__STATUS_SIE)))
                       ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__PendingIntsM) 
                          & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MIDELEG_REGW))
                       : 0U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__UngatedCSRMWriteM 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
            >> 0x11U) & (3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk1__DOT__amoalu__DOT__sngd 
        = (1U & (~ ((9U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                       >> 0x1eU))));
    if ((1U & ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
               | ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MCOUNTEREN_REGW 
                   >> (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                >> 0x14U))) & ((1U 
                                                == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                               | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__SCOUNTEREN_REGW 
                                                  >> 
                                                  (0x1fU 
                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                      >> 0x14U)))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRCReadValM 
            = (((0x323U <= (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                            >> 0x14U)) & (0x33fU >= 
                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                           >> 0x14U)))
                ? 0ULL : (((0xc01U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                       >> 0x14U)) & 
                           (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                               >> 0x11U))) ? vlSelfRef.testbench__DOT__dut__DOT__MTIME_CLINT
                           : ((((0xb00U <= (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                            >> 0x14U)) 
                                & (0xb20U > (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                             >> 0x14U))) 
                               & (0xb01U != (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                             >> 0x14U)))
                               ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTER_REGW
                              [(0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                         >> 0x14U))]
                               : ((((0xc00U <= (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U)) 
                                    & (0xc20U > (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                 >> 0x14U))) 
                                   & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                         >> 0x11U)))
                                   ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTER_REGW
                                  [(0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                             >> 0x14U))]
                                   : 0ULL))));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRCAccessM = 0U;
        if ((1U & (~ ((0x323U <= (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                  >> 0x14U)) & (0x33fU 
                                                >= 
                                                (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                 >> 0x14U)))))) {
            if ((1U & (~ ((0xc01U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                      >> 0x14U)) & 
                          (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                              >> 0x11U)))))) {
                if ((1U & (~ (((0xb00U <= (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                           >> 0x14U)) 
                               & (0xb20U > (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                            >> 0x14U))) 
                              & (0xb01U != (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                            >> 0x14U)))))) {
                    if ((1U & (~ (((0xc00U <= (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                               >> 0x14U)) 
                                   & (0xc20U > (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))) 
                                  & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                        >> 0x11U)))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRCAccessM = 1U;
                    }
                }
            }
        }
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRCReadValM = 0ULL;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRCAccessM = 1U;
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__entry = 0U;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM = 0ULL;
    if (((0x3b0U <= (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                     >> 0x14U)) & (0x3c0U > (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                             >> 0x14U)))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PMPADDR_ARRAY_REGW
            [(0xfU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                      >> 0x14U))];
    } else if ((((0x3a0U <= (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                             >> 0x14U)) & (0x3a4U > 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                            >> 0x14U))) 
                & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                      >> 0x14U)))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__entry 
            = (0x3fU & VL_SHIFTL_III(6,32,32, ((0xffeU 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                   >> 0x14U)) 
                                               - (IData)(0x3a0U)), 2U));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM 
            = (((QData)((IData)((((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PMPCFG_ARRAY_REGW
                                   [(0xfU & ((IData)(7U) 
                                             + (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__entry)))] 
                                   << 0x18U) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PMPCFG_ARRAY_REGW
                                                [(0xfU 
                                                  & ((IData)(6U) 
                                                     + (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__entry)))] 
                                                << 0x10U)) 
                                 | ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PMPCFG_ARRAY_REGW
                                     [(0xfU & ((IData)(5U) 
                                               + (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__entry)))] 
                                     << 8U) | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PMPCFG_ARRAY_REGW
                                    [(0xfU & ((IData)(4U) 
                                              + (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__entry)))])))) 
                << 0x20U) | (QData)((IData)((((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PMPCFG_ARRAY_REGW
                                               [(0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__entry)))] 
                                               << 0x18U) 
                                              | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PMPCFG_ARRAY_REGW
                                                 [(0xfU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__entry)))] 
                                                 << 0x10U)) 
                                             | ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PMPCFG_ARRAY_REGW
                                                 [(0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__entry)))] 
                                                 << 8U) 
                                                | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PMPCFG_ARRAY_REGW
                                                [(0xfU 
                                                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__entry))])))));
    } else if ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                >> 0x1fU)) {
        if ((0x40000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
            if ((0x20000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                if ((0x10000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                    if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                          >> 0x19U)))) {
                                if ((0x1000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                    if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                  >> 0x17U)))) {
                                        if ((0x400000U 
                                             & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                     >> 0x15U)))) {
                                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM = 0ULL;
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM 
                                                = (
                                                   (0x100000U 
                                                    & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)
                                                    ? 0x100ULL
                                                    : 0x24ULL);
                                        } else if (
                                                   (0x100000U 
                                                    & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM = 0x602ULL;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                         >> 0x1eU)))) {
        if ((0x20000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
            if ((0x10000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                              >> 0x1bU)))) {
                    if ((0x4000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                        if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                      >> 0x19U)))) {
                            if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                          >> 0x18U)))) {
                                if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x17U)))) {
                                    if ((0x400000U 
                                         & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                    >> 0x15U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                     >> 0x14U)))) {
                                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM 
                                                    = (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MIP_REGW));
                                            }
                                        }
                                    } else {
                                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM 
                                            = ((0x200000U 
                                                & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)
                                                ? (
                                                   (0x100000U 
                                                    & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)
                                                    ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__MTVAL_REGW
                                                    : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__MCAUSE_REGW)
                                                : (
                                                   (0x100000U 
                                                    & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)
                                                    ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MEPC_REGW
                                                    : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__MSCRATCH_REGW));
                                    }
                                }
                            }
                        }
                    } else if ((0x2000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                        if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                      >> 0x18U)))) {
                            if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                          >> 0x17U)))) {
                                if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x16U)))) {
                                    if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                  >> 0x15U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                    >> 0x14U)))) {
                                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM 
                                                = (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MCOUNTINHIBIT_REGW));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                         >> 0x18U)))) {
                        if ((0x800000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                          >> 0x16U)))) {
                                if ((0x200000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                    if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                  >> 0x14U)))) {
                                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM 
                                            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW;
                                    }
                                }
                            }
                        } else if ((0x400000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            if ((0x200000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                              >> 0x14U)))) {
                                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM 
                                        = (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MCOUNTEREN_REGW));
                                }
                            } else {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM 
                                    = ((0x100000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)
                                        ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTVEC_REGW
                                        : (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MIE_REGW)));
                            }
                        } else {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM 
                                = ((0x200000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)
                                    ? ((0x100000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)
                                        ? (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MIDELEG_REGW))
                                        : (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MEDELEG_REGW)))
                                    : ((0x100000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)
                                        ? 0x800000000014112fULL
                                        : (0xa00000000ULL 
                                           | (((QData)((IData)(
                                                               (3U 
                                                                == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_FS_INT)))) 
                                               << 0x3fU) 
                                              | (((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_MBE)) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_SBE)) 
                                                     << 0x24U) 
                                                    | (QData)((IData)(
                                                                      ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_TSR_INT) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_TW_INT) 
                                                                            << 0x15U) 
                                                                           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_TVM_INT) 
                                                                              << 0x14U))) 
                                                                       | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_MXR_INT) 
                                                                           << 0x13U) 
                                                                          | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_SUM_INT) 
                                                                              << 0x12U) 
                                                                             | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_MPRV_INT) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_FS_INT) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__STATUS_MPP) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__STATUS_SPP) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_MPIE) 
                                                                                << 7U)) 
                                                                                | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_UBE) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_SPIE) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__STATUS_MIE) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__STATUS_SIE) 
                                                                                << 1U)))))))))))))))))));
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 0U;
    if ((1U & (~ ((0x3b0U <= (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                              >> 0x14U)) & (0x3c0U 
                                            > (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                               >> 0x14U)))))) {
        if ((1U & (~ (((0x3a0U <= (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                   >> 0x14U)) & (0x3a4U 
                                                 > 
                                                 (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                  >> 0x14U))) 
                      & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                            >> 0x14U)))))) {
            if ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                 >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                    if ((0x20000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                        if ((0x10000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            if ((0x8000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                            } else if ((0x4000000U 
                                        & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                            } else if ((0x2000000U 
                                        & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                            } else if ((0x1000000U 
                                        & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                if ((0x800000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                                } else if ((0x400000U 
                                            & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                    if ((0x200000U 
                                         & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                   >> 0x15U)))) {
                                    if ((1U & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                  >> 0x14U)))) {
                                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                                    }
                                }
                            } else {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                            }
                        } else {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                        }
                    } else {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                    }
                } else {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                }
            } else if ((0x40000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
            } else if ((0x20000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                if ((0x10000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                    if ((0x8000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                    } else if ((0x4000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                        if ((0x2000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                        } else if ((0x1000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                        } else if ((0x800000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                        } else if ((0x400000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            if ((0x200000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                            } else if ((0x100000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                            }
                        }
                    } else if ((0x2000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                        if ((0x1000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                        } else if ((0x800000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                        } else if ((0x400000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                        } else if ((0x200000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                        } else if ((0x100000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                        }
                    } else if ((0x1000000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                    } else if ((0x800000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                        if ((0x400000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                        } else if ((0x200000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            if ((0x100000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                            }
                        } else {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                        }
                    } else if ((0x400000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                        if ((0x200000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                            if ((0x100000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                            }
                        }
                    }
                } else {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
                }
            } else {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM = 1U;
            }
        }
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__sretM 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
            >> 0x10U) & (IData)(((0x10200000U == (0xffff8000U 
                                                  & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) 
                                 & ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                    | ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_TSR_INT)) 
                                       & (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__mretM 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
            >> 0x10U) & (IData)(((0x30200000U == (0xffff8000U 
                                                  & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) 
                                 & (3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__EcallFaultM 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
            >> 0x10U) & (IData)((0U == (0xffff8000U 
                                        & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__BreakpointFaultM 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
            >> 0x10U) & (IData)((0x100000U == (0xffff8000U 
                                               & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__wfiM 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
            >> 0x10U) & (IData)((0x10500000U == (0xffff8000U 
                                                 & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
            >> 0x10U) & (((9U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                  >> 0x19U)) | ((0xbU 
                                                 == 
                                                 (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                  >> 0x19U)) 
                                                | ((IData)(
                                                           (0x18000000U 
                                                            == 
                                                            (0xffff8000U 
                                                             & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM))) 
                                                   | (IData)(
                                                             (0x18100000U 
                                                              == 
                                                              (0xffff8000U 
                                                               & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)))))) 
                         & ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                            | ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_TVM_INT)) 
                               & (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm0__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor0))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm0__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm0__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm1__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor1))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm1__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm1__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm2__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor2))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm2__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm2__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm3__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__xor3))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm3__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw0__DOT__gm3__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm0__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor0))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm0__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm0__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm1__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor1))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm1__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm1__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm2__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor2))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm2__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm2__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm3__DOT__temp1 
        = ((0x200U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__xor3))
            ? (0x36U ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm3__DOT__temp0))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__alu__DOT__bitmanipalu__DOT__balu__DOT__zknde__DOT__genblk1__DOT__ZKN64__DOT__genblk1__DOT__aes64d__DOT__invmw1__DOT__gm3__DOT__temp0));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ENVCFG_CBE 
        = ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))
            ? 0xfU : (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_35));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSReadValM 
        = (((((((((0x100U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                              >> 0x14U)) | (0x105U 
                                            == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))) 
                 | (0x144U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                               >> 0x14U))) | (0x104U 
                                              == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                  >> 0x14U))) 
               | (0x140U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                             >> 0x14U))) | (0x141U 
                                            == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                >> 0x14U))) 
             | (0x142U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                           >> 0x14U))) | (0x143U == 
                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                           >> 0x14U)))
            ? ((0x100U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                           >> 0x14U)) ? (0x200000000ULL 
                                         | (((QData)((IData)(
                                                             (3U 
                                                              == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_FS_INT)))) 
                                             << 0x3fU) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_MXR_INT) 
                                                                << 0x13U) 
                                                               | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_SUM_INT) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_FS_INT) 
                                                                      << 0xdU) 
                                                                     | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__STATUS_SPP) 
                                                                         << 8U) 
                                                                        | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_UBE) 
                                                                            << 6U) 
                                                                           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_SPIE) 
                                                                               << 5U) 
                                                                              | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__STATUS_SIE) 
                                                                                << 1U)))))))))))
                : ((0x105U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                               >> 0x14U)) ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STVEC_REGW
                    : ((0x144U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                   >> 0x14U)) ? (QData)((IData)(
                                                                (0x222U 
                                                                 & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MIP_REGW) 
                                                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MIDELEG_REGW)))))
                        : ((0x104U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                       >> 0x14U)) ? (QData)((IData)(
                                                                    (0x222U 
                                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MIE_REGW) 
                                                                        & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MIDELEG_REGW)))))
                            : ((0x140U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                           >> 0x14U))
                                ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrs__DOT__csrs__DOT__SSCRATCH_REGW
                                : ((0x141U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                               >> 0x14U))
                                    ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__SEPC_REGW
                                    : ((0x142U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                   >> 0x14U))
                                        ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrs__DOT__csrs__DOT__SCAUSE_REGW
                                        : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrs__DOT__csrs__DOT__STVAL_REGW)))))))
            : ((0x180U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                           >> 0x14U)) ? ((1U & ((3U 
                                                 == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                                | (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_TVM_INT))))
                                          ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW
                                          : 0ULL) : 
               ((0x106U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                            >> 0x14U)) ? (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__SCOUNTEREN_REGW))
                 : ((0x10aU == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                >> 0x14U)) ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__SENVCFG_REGW
                     : ((0x14dU == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                    >> 0x14U)) ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrs__DOT__STCE)
                                                   ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrs__DOT__csrs__DOT__STIMECMP_REGW
                                                   : 0ULL)
                         : 0ULL)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRSAccessM = 0U;
    if ((1U & (~ ((((((((0x100U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                    >> 0x14U)) | (0x105U 
                                                  == 
                                                  (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                   >> 0x14U))) 
                       | (0x144U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                     >> 0x14U))) | 
                      (0x104U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                  >> 0x14U))) | (0x140U 
                                                 == 
                                                 (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                  >> 0x14U))) 
                    | (0x141U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                  >> 0x14U))) | (0x142U 
                                                 == 
                                                 (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                  >> 0x14U))) 
                  | (0x143U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                >> 0x14U)))))) {
        if ((0x180U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                        >> 0x14U))) {
            if ((1U & (~ ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                          | (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_TVM_INT)))))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRSAccessM = 1U;
            }
        } else if ((0x106U != (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                               >> 0x14U))) {
            if ((0x10aU != (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                            >> 0x14U))) {
                if ((0x14dU == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                >> 0x14U))) {
                    if ((1U & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrs__DOT__STCE)))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRSAccessM = 1U;
                    }
                } else {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRSAccessM = 1U;
                }
            }
        }
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__Translate 
        = ((~ (((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                 >> 8U) | (9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))) 
               | (3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__EffectivePrivilegeMode)))) 
           & (0U != (0xfU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                     >> 0x3cU)))));
    if ((3U == (3U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
            = (0x100000000ULL | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)));
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
            = (QData)((IData)((0xffffU & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)));
        if ((2U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
            if ((1U & (~ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD))) {
                if ((0x8000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                    if ((0x4000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                            = ((0x2000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)
                                ? (0x100000000ULL | (QData)((IData)(
                                                                    (0x13023U 
                                                                     | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_21) 
                                                                          << 0x19U) 
                                                                         | (0x1f00000U 
                                                                            & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                               << 0x12U))) 
                                                                        | (0xc00U 
                                                                           & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD))))))
                                : (0x100000000ULL | (QData)((IData)(
                                                                    (0x12023U 
                                                                     | (((0xc000000U 
                                                                          & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                             << 0x13U)) 
                                                                         | ((0x2000000U 
                                                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                                << 0xdU)) 
                                                                            | (0x1f00000U 
                                                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                                << 0x12U)))) 
                                                                        | (0xe00U 
                                                                           & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)))))));
                    } else if ((0x2000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                            = (0x100000000ULL | (QData)((IData)(
                                                                (0x13027U 
                                                                 | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_21) 
                                                                      << 0x19U) 
                                                                     | (0x1f00000U 
                                                                        & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                           << 0x12U))) 
                                                                    | (0xc00U 
                                                                       & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD))))));
                    } else if ((0x1000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                        if ((0U == (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                             >> 2U)))) {
                            if ((0U == (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                 >> 7U)))) {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD = 0x100100073ULL;
                            } else if ((0U != (0x1fU 
                                               & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                  >> 7U)))) {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                    = (0x100000000ULL 
                                       | (QData)((IData)(
                                                         (0xe7U 
                                                          | (0xf8000U 
                                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                << 8U))))));
                            }
                        } else {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                = ((0U != (0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                            >> 7U)))
                                    ? (((QData)((IData)(
                                                        (0x1000U 
                                                         | (0x1fU 
                                                            & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                               >> 2U))))) 
                                        << 0x14U) | (QData)((IData)(
                                                                    (0x33U 
                                                                     | ((0xf8000U 
                                                                         & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                            << 8U)) 
                                                                        | (0xf80U 
                                                                           & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD))))))
                                    : 0x100000013ULL);
                        }
                    } else if ((0U == (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                >> 2U)))) {
                        if ((0U != (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                             >> 7U)))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                = (0x100000000ULL | (QData)((IData)(
                                                                    (0x67U 
                                                                     | (0xf8000U 
                                                                        & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                           << 8U))))));
                        }
                    } else {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                            = ((0U != (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                >> 7U)))
                                ? (0x100000000ULL | (QData)((IData)(
                                                                    (0x33U 
                                                                     | ((0x1f00000U 
                                                                         & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                            << 0x12U)) 
                                                                        | (0xf80U 
                                                                           & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD))))))
                                : 0x100000013ULL);
                    }
                } else if ((0x4000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                    if ((0x2000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                        if ((0U != (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                             >> 7U)))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                = (0x100000000ULL | (QData)((IData)(
                                                                    (0x13003U 
                                                                     | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immCILSPD) 
                                                                         << 0x14U) 
                                                                        | (0xf80U 
                                                                           & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD))))));
                        }
                    } else if ((0U != (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                >> 7U)))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                            = (0x100000000ULL | (QData)((IData)(
                                                                (0x12003U 
                                                                 | ((((0xc000000U 
                                                                       & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                          << 0x18U)) 
                                                                      | (0x2000000U 
                                                                         & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                            << 0xdU))) 
                                                                     | (0x1c00000U 
                                                                        & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                           << 0x12U))) 
                                                                    | (0xf80U 
                                                                       & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD))))));
                    }
                } else {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = ((0x2000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)
                            ? (0x100000000ULL | (QData)((IData)(
                                                                (0x13007U 
                                                                 | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immCILSPD) 
                                                                     << 0x14U) 
                                                                    | (0xf80U 
                                                                       & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD))))))
                            : ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immSH))
                                ? ((0U != (0x1fU & 
                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                            >> 7U)))
                                    ? (((QData)((IData)(
                                                        (0x1000U 
                                                         | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immSH)))) 
                                        << 0x14U) | (QData)((IData)(
                                                                    (0x1013U 
                                                                     | ((0xf8000U 
                                                                         & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                            << 8U)) 
                                                                        | (0xf80U 
                                                                           & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD))))))
                                    : 0x100000013ULL)
                                : 0x100000013ULL));
                }
            }
        } else if ((1U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
            if ((0x8000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                if ((0x4000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = ((0x2000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)
                            ? (0x100000000ULL | (QData)((IData)(
                                                                (0x41063U 
                                                                 | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_22) 
                                                                     << 0x19U) 
                                                                    | ((0x38000U 
                                                                        & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                           << 8U)) 
                                                                       | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_11) 
                                                                          << 7U)))))))
                            : (0x100000000ULL | (QData)((IData)(
                                                                (0x40063U 
                                                                 | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_22) 
                                                                     << 0x19U) 
                                                                    | ((0x38000U 
                                                                        & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                           << 8U)) 
                                                                       | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_11) 
                                                                          << 7U))))))));
                } else if ((0x2000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x100000000ULL | (QData)((IData)(
                                                            (0x6fU 
                                                             | (((((0x80000000U 
                                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                       << 0x13U)) 
                                                                   | (0x40000000U 
                                                                      & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                         << 0x16U))) 
                                                                  | ((0x30000000U 
                                                                      & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                         << 0x13U)) 
                                                                     | ((0x8000000U 
                                                                         & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                            << 0x15U)) 
                                                                        | (0x4000000U 
                                                                           & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                              << 0x13U))))) 
                                                                 | ((0x2000000U 
                                                                     & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                        << 0x17U)) 
                                                                    | ((0x1000000U 
                                                                        & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                           << 0xdU)) 
                                                                       | (0xe00000U 
                                                                          & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                             << 0x12U))))) 
                                                                | (0x1ff000U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                                >> 0xcU)))) 
                                                                      << 0xcU)))))));
                } else if ((0U == (3U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                         >> 0xaU)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x100000000ULL | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_15)));
                } else if ((1U == (3U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                         >> 0xaU)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x140000000ULL | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_15)));
                } else if ((2U == (3U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                         >> 0xaU)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x100000000ULL | (QData)((IData)(
                                                            (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immCI) 
                                                              << 0x14U) 
                                                             | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_16))));
                } else if ((3U == (7U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                         >> 0xaU)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgExtracted_h8734d973__0;
                } else if ((0U == (3U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                         >> 5U)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x140000000ULL | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_18)));
                } else if ((1U == (3U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                         >> 5U)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x100000000ULL | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_18)));
                } else if ((0x18U == (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                               >> 2U)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x10ff00000ULL | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_16)));
                } else if ((0x19U == (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                               >> 2U)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x160400000ULL | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_19)));
                } else if ((0x1aU == (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                               >> 2U)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x108040000ULL | (QData)((IData)(
                                                            (0x443bU 
                                                             | ((0x38000U 
                                                                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                    << 8U)) 
                                                                | (0x380U 
                                                                   & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD))))));
                } else if ((0x1bU == (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                               >> 2U)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x160500000ULL | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_19)));
                } else if ((0x1dU == (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                               >> 2U)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x1fff40000ULL | (QData)((IData)(
                                                            (0x4413U 
                                                             | ((0x38000U 
                                                                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                    << 8U)) 
                                                                | (0x380U 
                                                                   & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD))))));
                } else if ((0x1cU == (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                               >> 2U)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x108000000ULL | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_17)));
                } else if ((2U == (3U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                         >> 5U)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x102000000ULL | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_5)));
                }
            } else if ((0x4000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                if ((0x2000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                    if ((2U == (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                         >> 7U)))) {
                        if ((0U != (0x3fU & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immCIASP) 
                                             >> 4U)))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                = (0x100000000ULL | (QData)((IData)(
                                                                    (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immCIASP) 
                                                                      << 0x14U) 
                                                                     | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_3))));
                        }
                    } else if ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immSH))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                            = ((0U != (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                >> 7U)))
                                ? (0x100000000ULL | (QData)((IData)(
                                                                    (0x37U 
                                                                     | (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                                >> 0xcU)))) 
                                                                         << 0x11U) 
                                                                        | ((0x1f000U 
                                                                            & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                               << 0xaU)) 
                                                                           | (0xf80U 
                                                                              & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)))))))
                                : 0x100000013ULL);
                    }
                } else {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = ((0U != (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                            >> 7U)))
                            ? (0x100000000ULL | (QData)((IData)(
                                                                (0x13U 
                                                                 | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immCI) 
                                                                     << 0x14U) 
                                                                    | (0xf80U 
                                                                       & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD))))))
                            : 0x100000013ULL);
                }
            } else if ((0x2000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                if ((0U != (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                     >> 7U)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                        = (0x100000000ULL | (QData)((IData)(
                                                            (0x1bU 
                                                             | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immCI) 
                                                                 << 0x14U) 
                                                                | ((0xf8000U 
                                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                       << 8U)) 
                                                                   | (0xf80U 
                                                                      & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)))))));
                }
            } else {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                    = ((0U != (0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                        >> 7U))) ? 
                       ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immSH))
                         ? 0x100000013ULL : (0x100000000ULL 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immCI) 
                                                                 << 0x14U) 
                                                                | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_3)))))
                        : 0x100000013ULL);
            }
        } else if ((0x8000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
            if ((0x4000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                    = ((0x2000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)
                        ? (0x100000000ULL | (QData)((IData)(
                                                            (0x843023U 
                                                             | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_24) 
                                                                  << 0x19U) 
                                                                 | (0x700000U 
                                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                       << 0x12U))) 
                                                                | ((0x38000U 
                                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                       << 8U)) 
                                                                   | (0xc00U 
                                                                      & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)))))))
                        : (0x100000000ULL | (QData)((IData)(
                                                            (0x842023U 
                                                             | ((((0x4000000U 
                                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                      << 0x15U)) 
                                                                  | (0x2000000U 
                                                                     & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                        << 0xdU))) 
                                                                 | (0x700000U 
                                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                       << 0x12U))) 
                                                                | ((0x38000U 
                                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                       << 8U)) 
                                                                   | ((0xc00U 
                                                                       & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD) 
                                                                      | (0x200U 
                                                                         & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                            << 3U))))))))));
            } else if ((0x2000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                    = (0x100000000ULL | (QData)((IData)(
                                                        (0x843027U 
                                                         | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT____VdfgRegularize_hf86ee08f_0_24) 
                                                              << 0x19U) 
                                                             | (0x700000U 
                                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                   << 0x12U))) 
                                                            | ((0x38000U 
                                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                   << 8U)) 
                                                               | (0xc00U 
                                                                  & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)))))));
            } else if ((0U == (7U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                     >> 0xaU)))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                    = (((QData)((IData)((0x4001U | 
                                         ((8U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                 >> 2U)) 
                                          | (4U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                   >> 4U)))))) 
                        << 0x12U) | (QData)((IData)(
                                                    (0x4403U 
                                                     | ((0x38000U 
                                                         & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                            << 8U)) 
                                                        | (0x380U 
                                                           & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                              << 5U)))))));
            } else if ((1U == (7U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                     >> 0xaU)))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                    = ((0x40U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)
                        ? (0x100000000ULL | (QData)((IData)(
                                                            (0x41403U 
                                                             | ((0x200000U 
                                                                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                    << 0x10U)) 
                                                                | ((0x38000U 
                                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                       << 8U)) 
                                                                   | (0x380U 
                                                                      & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                         << 5U))))))))
                        : (0x100000000ULL | (QData)((IData)(
                                                            (0x45403U 
                                                             | ((0x200000U 
                                                                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                    << 0x10U)) 
                                                                | ((0x38000U 
                                                                    & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                       << 8U)) 
                                                                   | (0x380U 
                                                                      & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                         << 5U)))))))));
            } else if ((2U == (7U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                     >> 0xaU)))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                    = (((QData)((IData)((0x4021U | 
                                         (0x1cU & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)))) 
                        << 0x12U) | (QData)((IData)(
                                                    (0x23U 
                                                     | ((0x38000U 
                                                         & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                            << 8U)) 
                                                        | ((0x100U 
                                                            & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                               << 3U)) 
                                                           | (0x80U 
                                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                 << 1U))))))));
            } else if ((IData)((0xc00U == (0x1c40U 
                                           & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                    = (((QData)((IData)((0x4021U | 
                                         (0x1cU & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)))) 
                        << 0x12U) | (QData)((IData)(
                                                    (0x1023U 
                                                     | ((0x38000U 
                                                         & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                            << 8U)) 
                                                        | (0x100U 
                                                           & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                              << 3U)))))));
            }
        } else if ((0x4000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                = ((0x2000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)
                    ? (0x100000000ULL | (QData)((IData)(
                                                        (0x43403U 
                                                         | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immCLD) 
                                                             << 0x14U) 
                                                            | ((0x38000U 
                                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                   << 8U)) 
                                                               | (0x380U 
                                                                  & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                     << 5U))))))))
                    : (0x100000000ULL | (QData)((IData)(
                                                        (0x42403U 
                                                         | (((0x4000000U 
                                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                 << 0x15U)) 
                                                             | ((0x3800000U 
                                                                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                    << 0xdU)) 
                                                                | (0x400000U 
                                                                   & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                      << 0x10U)))) 
                                                            | ((0x38000U 
                                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                   << 8U)) 
                                                               | (0x380U 
                                                                  & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                     << 5U)))))))));
        } else if ((0x2000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD)) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                = (0x100000000ULL | (QData)((IData)(
                                                    (0x43407U 
                                                     | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immCLD) 
                                                         << 0x14U) 
                                                        | ((0x38000U 
                                                            & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                               << 8U)) 
                                                           | (0x380U 
                                                              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                                 << 5U))))))));
        } else if ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immCIW))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                = (0x100000000ULL | (QData)((IData)(
                                                    (0x10413U 
                                                     | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__immCIW) 
                                                         << 0x14U) 
                                                        | (0x380U 
                                                           & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawD 
                                                              << 5U)))))));
        }
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk1__DOT__amoalu__DOT__sngd32 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk1__DOT__amoalu__DOT__sngd) 
           & (2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__dmmu__DOT__dmmu__Size)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__RetM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__sretM) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__mretM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__pmd__DOT__wfi__DOT__WFICountPlus1 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__wfiM)
            ? (0x1ffffU & ((IData)(1U) + vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__pmd__DOT__wfi__DOT__WFICount))
            : 0U);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__InterruptM 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__Committed)) 
           & ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__EnabledIntsM)) 
              & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                  >> 6U) & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__wfiM)) 
                            | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__wfiW)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__StallMQ)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRReadValM 
        = (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSReadValM 
           | (((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_FS_INT))
                ? 0ULL : ((1U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                  >> 0x14U)) ? (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csru__DOT__csru__DOT__FFLAGS_REGW))
                           : ((2U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                      >> 0x14U)) ? (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FRM_REGW))
                               : ((3U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                          >> 0x14U))
                                   ? (((QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FRM_REGW)) 
                                       << 5U) | (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csru__DOT__csru__DOT__FFLAGS_REGW)))
                                   : 0ULL)))) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRCReadValM 
                                                 | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRMReadValM)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__HPTWUpdateDA 
        = ((((~ (IData)((4ULL == (6ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE)))) 
             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE)) 
            & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__LeafPTE)) 
           & (((~ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE 
                           >> 6U))) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__hptwwrites__DOT__SetDirty)) 
              & ((~ ((((~ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE 
                                   >> 4U))) & (0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__hptwwrites__DOT__EffectivePrivilegeMode))) 
                      | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__hptwwrites__DOT__EffectivePrivilegeMode)) 
                         & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE 
                                     >> 4U)) & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_SUM_INT)) 
                                                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__DTLBWalk))))) 
                     | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__DTLBWalk)
                          ? (((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                               >> 0x14U) & ((~ (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE 
                                                        >> 1U))) 
                                            & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_MXR_INT)) 
                                               | (~ (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE 
                                                             >> 3U)))))) 
                             | ((~ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE 
                                            >> 2U))) 
                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                   >> 0x13U))) : (~ (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE 
                                                             >> 3U)))) 
                        | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__hptwwrites__DOT__UpperBitsUnequalD) 
                           | ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE)) 
                              | (((4U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                  & (0U != (0x7ffffffU 
                                            & (IData)(
                                                      (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE 
                                                       >> 0xaU))))) 
                                 | (((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                     & (0U != (0x3ffffU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE 
                                                          >> 0xaU))))) 
                                    | ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                       & (0U != (0x1ffU 
                                                 & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PTE 
                                                            >> 0xaU)))))))))))) 
                 & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                            >> 0x3dU)))));
    vlSelfRef.testbench__DOT__reset = vlSelfRef.testbench__DOT__dut__DOT__resetsync__DOT__mid;
    testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT____VdfgExtracted_hd61ddf76__0 
        = (IData)(((0ULL == (0x1c00000ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                   & (~ (IData)((0x300000ULL == (0x300000ULL 
                                                 & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_16 = ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xfU))) 
                                                 == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__RdE));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_17 = ((0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0x14U))) 
                                                 == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__RdE));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____VdfgRegularize_h29c76312_1_3 
        = (IData)(((0x40000000ULL == (0xfe000000ULL 
                                      & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                   & ((0U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                            >> 0xcU)))) 
                      | (5U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__FunctCZeroD 
        = (IData)(((0xe000000ULL == (0xfe000000ULL 
                                     & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                   & ((5U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                            >> 0xcU)))) 
                      | (7U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__legalcheck__DOT__Funct7ShiftZeroD 
        = ((1U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                          >> 3U))) ? (0U == (0x7fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U))))
            : (0U == (0x3fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                       >> 0x1aU)))));
    testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT____VdfgExtracted_h7c419e86__0 
        = ((0U == (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                 >> 0x19U)))) | ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                              >> 0x19U)))) 
                                                 | (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                >> 0x19U))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__SupportedFmt2 
        = ((0U == (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                 >> 0x14U)))) | ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                              >> 0x14U)))) 
                                                 | (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                >> 0x14U))))));
    if ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_FS_INT))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRUAccessM = 1U;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 8U;
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRUAccessM = 0U;
        if ((1U != (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                    >> 0x14U))) {
            if ((2U != (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                        >> 0x14U))) {
                if ((3U != (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                            >> 0x14U))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRUAccessM = 1U;
                }
            }
        }
        if ((((7U != (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD))) 
              & (0x27U != (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) 
             & ((~ ((0U == (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                          >> 0x19U)))) 
                    | ((1U == (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                             >> 0x19U)))) 
                       | (2U == (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                               >> 0x19U))))))) 
                | (~ ((~ ((5U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                >> 0xcU)))) 
                          | ((6U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0xcU)))) 
                             | (IData)(((0x7000ULL 
                                         == (0x7000ULL 
                                             & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                                        & ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FRM_REGW)) 
                                           | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FRM_REGW)) 
                                              | (7U 
                                                 == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FRM_REGW))))))))) 
                      | (IData)((0xa0005053ULL == (0xf800707fULL 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 8U;
        } else {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 8U;
            if ((7U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
                if ((2U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                          >> 0xcU))))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2800U;
                } else if ((3U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                 >> 0xcU))))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2800U;
                } else if ((4U != (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                 >> 0xcU))))) {
                    if ((1U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2800U;
                    }
                }
            } else if ((0x27U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
                if ((2U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                          >> 0xcU))))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x800U;
                } else if ((3U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                 >> 0xcU))))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x800U;
                } else if ((4U != (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                 >> 0xcU))))) {
                    if ((1U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x800U;
                    }
                }
            } else if ((0x43U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2600U;
            } else if ((0x47U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2620U;
            } else if ((0x4bU == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2640U;
            } else if ((0x4fU == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2660U;
            } else if ((0x53U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
                if (((((((((0U == (0x7cU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                    >> 0x19U)))) 
                           | (4U == (0x7cU & (IData)(
                                                     (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                      >> 0x19U))))) 
                          | (8U == (0x7cU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x19U))))) 
                         | (0xcU == (0x7cU & (IData)(
                                                     (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                      >> 0x19U))))) 
                        | (0x2cU == (0x7cU & (IData)(
                                                     (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                      >> 0x19U))))) 
                       | (0x10U == (0x7cU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x19U))))) 
                      | (0x14U == (0x7cU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                    >> 0x19U))))) 
                     | (0x50U == (0x7cU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)))))) {
                    if ((0U == (0x7cU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                 >> 0x19U))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x26c0U;
                    } else if ((4U == (0x7cU & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x26e0U;
                    } else if ((8U == (0x7cU & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2680U;
                    } else if ((0xcU == (0x7cU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                          >> 0x19U))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2510U;
                    } else if ((0x2cU == (0x7cU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if ((0U == (0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2530U;
                        }
                    } else if ((0x10U == (0x7cU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if ((0U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                  >> 0xcU))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2000U;
                        } else if ((1U == (7U & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                         >> 0xcU))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2020U;
                        } else if ((2U == (7U & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                         >> 0xcU))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2040U;
                        }
                    } else if ((0x14U == (0x7cU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if ((0U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                  >> 0xcU))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x20c0U;
                        } else if ((1U == (7U & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                         >> 0xcU))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x20a0U;
                        } else if ((2U == (7U & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                         >> 0xcU))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x20c2U;
                        } else if ((3U == (7U & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                         >> 0xcU))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x20a2U;
                        }
                    } else if ((0U == (7U & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0xcU))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1060U;
                    } else if ((1U == (7U & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0xcU))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1020U;
                    } else if ((2U == (7U & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0xcU))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1040U;
                    } else if ((4U == (7U & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0xcU))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1062U;
                    } else if ((5U == (7U & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0xcU))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1022U;
                    }
                } else if (((((((((0x70U == (0x7cU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U)))) 
                                  | (0x78U == (0x7cU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                          >> 0x19U))))) 
                                 | (0x20U == (0x7fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                         >> 0x19U))))) 
                                | (0x21U == (0x7fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U))))) 
                               | (0x22U == (0x7fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0x19U))))) 
                              | (0x23U == (0x7fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U))))) 
                             | (0x68U == (0x7fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) 
                            | (0x60U == (0x7fU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                          >> 0x19U)))))) {
                    if ((0x70U == (0x7cU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                    >> 0x19U))))) {
                        if ((IData)((0x1000ULL == (0x1f07000ULL 
                                                   & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1800U;
                        } else if ((IData)((0ULL == 
                                            (0x1f07000ULL 
                                             & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
                            if (testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT____VdfgExtracted_h7c419e86__0) {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1c00U;
                            }
                        }
                    } else if ((0x78U == (0x7cU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if ((IData)((0ULL == (0x1f07000ULL 
                                              & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
                            if (testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT____VdfgExtracted_h7c419e86__0) {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2060U;
                            }
                        } else if ((IData)((0x100000ULL 
                                            == (0x1f07000ULL 
                                                & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x20e2U;
                        }
                    } else if ((0x20U == (0x7fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if (((IData)(((0ULL == (0x1c00000ULL 
                                                & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__SupportedFmt2))) 
                             & (0U != (3U & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U)))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2400U;
                        } else if ((4U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2082U;
                        } else if ((5U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2083U;
                        }
                    } else if ((0x21U == (0x7fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if (((IData)(((0ULL == (0x1c00000ULL 
                                                & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__SupportedFmt2))) 
                             & (1U != (3U & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U)))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2420U;
                        } else if ((4U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2082U;
                        } else if ((5U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2083U;
                        }
                    } else if ((0x22U == (0x7fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if (((IData)(((0ULL == (0x1c00000ULL 
                                                & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__SupportedFmt2))) 
                             & (2U != (3U & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U)))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2440U;
                        } else if ((4U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2082U;
                        } else if ((5U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2083U;
                        }
                    } else if ((0x23U == (0x7fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if (((IData)(((0ULL == (0x1c00000ULL 
                                                & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__SupportedFmt2))) 
                             & (3U != (3U & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U)))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2460U;
                        } else if ((4U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2082U;
                        } else if ((5U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2083U;
                        }
                    } else if ((0x68U == (0x7fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if ((0U == (0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x24a0U;
                        } else if ((1U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2480U;
                        } else if ((2U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x24e0U;
                        } else if ((3U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x24c0U;
                        }
                    } else if ((0U == (0x1fU & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x14U))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1424U;
                    } else if ((1U == (0x1fU & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x14U))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1404U;
                    } else if ((2U == (0x1fU & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x14U))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1464U;
                    } else if ((3U == (0x1fU & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x14U))))) {
                        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1444U;
                    }
                } else if (((((((((0x69U == (0x7fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U)))) 
                                  | (0x61U == (0x7fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                          >> 0x19U))))) 
                                 | (0x6aU == (0x7fU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                         >> 0x19U))))) 
                                | (0x62U == (0x7fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U))))) 
                               | (0x6bU == (0x7fU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0x19U))))) 
                              | (0x63U == (0x7fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U))))) 
                             | (0x59U == (0x7fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) 
                            | (0x5bU == (0x7fU & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                          >> 0x19U)))))) {
                    if ((0x69U == (0x7fU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                    >> 0x19U))))) {
                        if ((0U == (0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x24a0U;
                        } else if ((1U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2480U;
                        } else if ((2U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x24e0U;
                        } else if ((3U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x24c0U;
                        }
                    } else if ((0x61U == (0x7fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if ((0U == (0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1424U;
                        } else if ((1U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1404U;
                        } else if ((2U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1464U;
                        } else if ((3U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1444U;
                        } else if ((8U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            if ((1U == (7U & (IData)(
                                                     (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                      >> 0xcU))))) {
                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1426U;
                            }
                        }
                    } else if ((0x6aU == (0x7fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if ((0U == (0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x24a0U;
                        } else if ((1U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2480U;
                        } else if ((2U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x24e0U;
                        } else if ((3U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x24c0U;
                        }
                    } else if ((0x62U == (0x7fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if ((0U == (0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1424U;
                        } else if ((1U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1404U;
                        } else if ((2U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1464U;
                        } else if ((3U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1444U;
                        }
                    } else if ((0x6bU == (0x7fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if ((0U == (0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x24a0U;
                        } else if ((1U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x2480U;
                        } else if ((2U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x24e0U;
                        } else if ((3U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x24c0U;
                        }
                    } else if ((0x63U == (0x7fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U))))) {
                        if ((0U == (0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1424U;
                        } else if ((1U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1404U;
                        } else if ((2U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1464U;
                        } else if ((3U == (0x1fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x14U))))) {
                            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD = 0x1444U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__AFunctD 
        = ((2U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                 >> 0xcU)))) | (3U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xcU)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__FenceFunctD 
        = ((0U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                 >> 0xcU)))) | (1U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xcU)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__IllegalInstrFaultM 
        = (1U & (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__ppr__DOT____Vcellout__faultregM____pinNumber6) 
                  >> 4U) | (((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__RetM) 
                                 | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__EcallFaultM) 
                                    | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__BreakpointFaultM) 
                                       | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__wfiM) 
                                          | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)))))) 
                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                >> 0x10U)) | ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRCAccessM) 
                                                  & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRMAccessM) 
                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRSAccessM) 
                                                        & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__IllegalCSRUAccessM)))) 
                                                 | ((IData)(
                                                            ((0x30000000U 
                                                              == 
                                                              (0x30000000U 
                                                               & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) 
                                                             & (3U 
                                                                != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)))) 
                                                    | (IData)(
                                                              ((0x10000000U 
                                                                == 
                                                                (0x30000000U 
                                                                 & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)) 
                                                               & (0U 
                                                                  == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)))))) 
                                                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                                   >> 0x12U)) 
                                               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__UngatedCSRMWriteM) 
                                                  & ((0xf11U 
                                                      == 
                                                      (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                       >> 0x14U)) 
                                                     | ((0xf12U 
                                                         == 
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                          >> 0x14U)) 
                                                        | ((0xf13U 
                                                            == 
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                             >> 0x14U)) 
                                                           | ((0xf14U 
                                                               == 
                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                                >> 0x14U)) 
                                                              | (0xf15U 
                                                                 == 
                                                                 (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                                  >> 0x14U)))))))) 
                                              | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_TW_INT) 
                                                   & (3U 
                                                      != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))) 
                                                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__pmd__DOT__wfi__DOT__WFICount 
                                                    >> 0x10U))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT____VdfgRegularize_h961e3454_2_53 
        = (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTER_REGW
           [0x16U] + (QData)((IData)(((~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MCOUNTINHIBIT_REGW 
                                          >> 0x16U)) 
                                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__InterruptM)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSrcM 
        = ((0x4000U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)
            ? (QData)((IData)((0x1fU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                        >> 0xfU))))
            : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SrcAM);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRReadVal2M 
        = (((0x344U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                        >> 0x14U)) | (0x144U == (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                                 >> 0x14U)))
            ? (QData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MIP_REGW_writeable))
            : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRReadValM);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRRWM 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSrcM;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRRSM 
        = (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRReadVal2M 
           | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSrcM);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRRCM 
        = (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRReadVal2M 
           & (~ vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRSrcM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
        = ((1U == (3U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                         >> 0xcU))) ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRRWM
            : ((2U == (3U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                             >> 0xcU))) ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRRSM
                : ((3U == (3U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM 
                                 >> 0xcU))) ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRRCM
                    : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRReadValM)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__UpdatePTE 
        = ((8U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__HPTWUpdateDA));
    testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____VdfgRegularize_h1afdae1e_1_10 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__HPTWUpdateDA)) 
           & (8U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 1U;
    if ((0xcc82U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x4222U;
    } else if ((0xcc84U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x4222U;
    } else if ((0xcc86U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x4222U;
    }
    if ((0xec82U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x4262U;
    } else if ((0xec84U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x4262U;
    } else if ((0xec86U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x4262U;
    } else if ((0xec20U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x4260U;
    } else if ((0x6c21U == (0x1fff7U & ((0x1fc00U & 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                          << 0xaU)) 
                                        | ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xcU)))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x44360U;
    }
    if ((0x4d81U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        if ((2U == (0xfU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                    >> 0x15U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x8720U;
        } else if (testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT____VdfgExtracted_hd61ddf76__0) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x8320U;
        }
    } else if ((0x4ca5U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        if ((7U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                     >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x8b20U;
        }
    } else if ((0xcc2eU == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x9e30U;
    } else if ((0xcc2fU == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x9e30U;
    } else if ((0xcc2cU == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x8e30U;
    } else if ((0xcc2dU == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x8e30U;
    }
    if ((0xec24U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x8620U;
    } else if ((0x6d81U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        if (testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT____VdfgExtracted_hd61ddf76__0) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x83c0U;
        }
    }
    if ((0xcc2aU == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0xc620U;
    } else if ((0xcc29U == (0x1fffdU & ((0x1fc00U & 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                          << 0xaU)) 
                                        | ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xcU)))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0xc220U;
    }
    if ((0xcc29U == (0x1fffdU & ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                              << 0xaU)) 
                                 | ((0x3f8U & ((IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                    | (7U & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0xcU)))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0xc220U;
    }
    if ((0xcd21U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x1c4234U;
    } else if ((0xcd25U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x144224U;
    } else if ((0xcda1U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x104224U;
    } else if ((0xcca1U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x184224U;
    }
    if ((0x4d21U == (0x1fff7U & ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                              << 0xaU)) 
                                 | ((0x3f8U & ((IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                    | (7U & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0xcU)))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x1c4334U;
    } else if ((0x4d25U == (0x1fff7U & ((0x1fc00U & 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                          << 0xaU)) 
                                        | ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xcU)))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x144324U;
    } else if ((0x4da1U == (0x1fff7U & ((0x1fc00U & 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                          << 0xaU)) 
                                        | ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xcU)))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x104324U;
    } else if ((0x4ca1U == (0x1fff7U & ((0x1fc00U & 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                          << 0xaU)) 
                                        | ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xcU)))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x184324U;
    }
    if (((((((((0xcc01U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU)))))) 
               | (0xcc05U == (0x1feffU & ((0x1fc00U 
                                           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                              << 0xaU)) 
                                          | ((0x3f8U 
                                              & ((IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                          >> 0x19U)) 
                                                 << 3U)) 
                                             | (7U 
                                                & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0xcU)))))))) 
              | (0x4c01U == (0x1fff7U & ((0x1fc00U 
                                          & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                             << 0xaU)) 
                                         | ((0x3f8U 
                                             & ((IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                         >> 0x19U)) 
                                                << 3U)) 
                                            | (7U & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU)))))))) 
             | (0x4c05U == (0x1fef7U & ((0x1fc00U & 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                          << 0xaU)) 
                                        | ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xcU)))))))) 
            | (0xec01U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                        << 0xaU)) | 
                           ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                >> 0x19U)) 
                                       << 3U)) | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) 
           | (0xec05U == (0x1feffU & ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                                   << 0xaU)) 
                                      | ((0x3f8U & 
                                          ((IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                    >> 0x19U)) 
                                           << 3U)) 
                                         | (7U & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                          >> 0xcU)))))))) 
          | (0x6c01U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                      << 0xaU)) | (
                                                   (0x3f8U 
                                                    & ((IData)(
                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                >> 0x19U)) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (IData)(
                                                                (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                 >> 0xcU))))))) 
         | (0x6c05U == (0x1feffU & ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                                 << 0xaU)) 
                                    | ((0x3f8U & ((IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x19U)) 
                                                  << 3U)) 
                                       | (7U & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0xcU))))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD 
            = ((0xcc01U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))
                ? 0x40220U : ((0xcc05U == (0x1feffU 
                                           & ((0x1fc00U 
                                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                                  << 0xaU)) 
                                              | ((0x3f8U 
                                                  & ((IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                              >> 0x19U)) 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                               >> 0xcU)))))))
                               ? 0x40220U : ((0x4c01U 
                                              == (0x1fff7U 
                                                  & ((0x1fc00U 
                                                      & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                                         << 0xaU)) 
                                                     | ((0x3f8U 
                                                         & ((IData)(
                                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                     >> 0x19U)) 
                                                            << 3U)) 
                                                        | (7U 
                                                           & (IData)(
                                                                     (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                      >> 0xcU)))))))
                                              ? 0x40320U
                                              : ((0x4c05U 
                                                  == 
                                                  (0x1fef7U 
                                                   & ((0x1fc00U 
                                                       & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                                          << 0xaU)) 
                                                      | ((0x3f8U 
                                                          & ((IData)(
                                                                     (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                      >> 0x19U)) 
                                                             << 3U)) 
                                                         | (7U 
                                                            & (IData)(
                                                                      (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                       >> 0xcU)))))))
                                                  ? 0x40320U
                                                  : 
                                                 ((0xec01U 
                                                   == 
                                                   ((0x1fc00U 
                                                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                                        << 0xaU)) 
                                                    | ((0x3f8U 
                                                        & ((IData)(
                                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                    >> 0x19U)) 
                                                           << 3U)) 
                                                       | (7U 
                                                          & (IData)(
                                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                     >> 0xcU))))))
                                                   ? 0x402a0U
                                                   : 
                                                  ((0xec05U 
                                                    == 
                                                    (0x1feffU 
                                                     & ((0x1fc00U 
                                                         & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                                            << 0xaU)) 
                                                        | ((0x3f8U 
                                                            & ((IData)(
                                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                        >> 0x19U)) 
                                                               << 3U)) 
                                                           | (7U 
                                                              & (IData)(
                                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                         >> 0xcU)))))))
                                                    ? 0x402a0U
                                                    : 0x403a0U))))));
    }
    if ((0xcc24U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x10620U;
    } else if ((0xcc27U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x10620U;
    } else if ((0x4da5U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        if ((7U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                     >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x10320U;
        }
    }
    if ((0xec24U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x116a0U;
    }
    if ((0xcd81U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x45e28U;
    } else if ((0xcd85U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x45e28U;
    } else if ((0xcd07U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x1c5e30U;
    } else if ((0xcd06U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x185e30U;
    } else if ((0xcd04U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x105e30U;
    } else if ((0x4da5U == (0x1fff7U & ((0x1fc00U & 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                          << 0xaU)) 
                                        | ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xcU)))))))) {
        if ((IData)((0x3800000ULL == (0x3f00000ULL 
                                      & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x8b20U;
        }
    }
    if ((0xed81U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x41ea8U;
    } else if ((0xed85U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x41ea8U;
    } else if ((0x4d85U == (0x1fff7U & ((0x1fc00U & 
                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                          << 0xaU)) 
                                        | ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xcU)))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x41f28U;
    } else if ((0x6d85U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x41fa8U;
    }
    if ((0xcca4U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x18220U;
    } else if ((0xcca2U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x18620U;
    }
    if ((0xcce8U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x1d220U;
    } else if ((0xccf8U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x1c220U;
    } else if ((0x4cc1U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        if ((0U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                     >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x1e320U;
        }
    }
    if ((0xccc8U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x1d620U;
    } else if ((0xccd8U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x1c620U;
    }
    if ((0x4cc1U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        if (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                      >> 0x18U)) & (0xaU >= (0xfU & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0x14U)))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x1ca20U;
        }
    } else if ((0xcdf8U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                         << 0xaU)) 
                            | ((0x3f8U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                   >> 0x19U)) 
                                          << 3U)) | 
                               (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                              >> 0xcU))))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x1ce20U;
    }
    if ((0x4c41U == ((0x1fc00U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD) 
                                  << 0xaU)) | ((0x3f8U 
                                                & ((IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U)) 
                                                   << 3U)) 
                                               | (7U 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0xcU))))))) {
        if ((2U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                     >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x20220U;
        } else if ((3U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                            >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x20620U;
        } else if ((0U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                            >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x20a20U;
        } else if ((1U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                            >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x20e20U;
        }
        if ((6U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                     >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x22220U;
        } else if ((7U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                            >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x22620U;
        } else if ((4U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                            >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x22a20U;
        } else if ((5U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                            >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD = 0x22e20U;
        }
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__MatchDE 
        = (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_16) 
            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_17)) 
           & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__RdE)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__Zicond__DOT__SomeCZeroD 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__FunctCZeroD) 
           & (0x33U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__IFunctD 
        = (((IData)(((0x1000ULL == (0x7000ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__legalcheck__DOT__Funct7ShiftZeroD))) 
            | (IData)(((0x5000ULL == (0x7000ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                       & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__legalcheck__DOT__Funct7ShiftZeroD) 
                          | ((1U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                            >> 3U)))
                              ? (0x20U == (0x7fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x19U))))
                              : (0x10U == (0x3fU & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0x1aU))))))))) 
           | ((1U != (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                    >> 0xcU)))) & (5U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                               >> 0xcU))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__FLSFunctD 
        = ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_FS_INT)) 
           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__AFunctD) 
              | (1U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                      >> 0xcU))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____VdfgRegularize_h29c76312_1_5 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__FenceFunctD) 
           | (2U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                   >> 0xcU)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__IWValidFunct3D 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__FenceFunctD) 
           | (5U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                   >> 0xcU)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTERPlusM[0x16U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT____VdfgRegularize_h961e3454_2_53;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__TVECWriteValM 
        = ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM))
            ? (1ULL | (0xffffffffffffffc0ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM))
            : (0xfffffffffffffffcULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_MPP_NEXT 
        = ((0U == (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                 >> 0xbU)))) ? 0U : 
           ((1U == (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                  >> 0xbU)))) ? 1U : 
            ((2U == (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                   >> 0xbU)))) ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__STATUS_MPP)
              : 3U)));
    if ((2U == (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                              >> 4U))))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__genblk4__DOT__LegalizedCBIE 
            = (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                             >> 4U)));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrs__DOT__csrs__DOT__LegalizedCBIE 
            = (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__SENVCFG_REGW 
                             >> 4U)));
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__genblk4__DOT__LegalizedCBIE 
            = (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                             >> 4U)));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrs__DOT__csrs__DOT__LegalizedCBIE 
            = (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                             >> 4U)));
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[0U] 
        = (0xffU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[1U] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 8U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[2U] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[3U] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 0x18U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[4U] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 0x20U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[5U] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 0x28U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[6U] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 0x30U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[7U] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 0x38U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[8U] 
        = (0xffU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[9U] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 8U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[0xaU] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 0x10U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[0xbU] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 0x18U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[0xcU] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 0x20U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[0xdU] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 0x28U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[0xeU] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 0x30U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWriteValM[0xfU] 
        = (0xffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                            >> 0x38U)));
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_1 
        = (((IData)((3ULL == (3ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM))) 
            << 1U) | (1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM)));
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_3 
        = (((IData)((0x300ULL == (0x300ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM))) 
            << 1U) | (1U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                    >> 8U))));
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_5 
        = (((IData)((0x30000ULL == (0x30000ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM))) 
            << 1U) | (1U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                    >> 0x10U))));
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_7 
        = (((IData)((0x3000000ULL == (0x3000000ULL 
                                      & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM))) 
            << 1U) | (1U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                    >> 0x18U))));
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_9 
        = (((IData)((0x300000000ULL == (0x300000000ULL 
                                        & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM))) 
            << 1U) | (1U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                    >> 0x20U))));
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_11 
        = (((IData)((0x30000000000ULL == (0x30000000000ULL 
                                          & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM))) 
            << 1U) | (1U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                    >> 0x28U))));
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_13 
        = (((IData)((0x3000000000000ULL == (0x3000000000000ULL 
                                            & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM))) 
            << 1U) | (1U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                    >> 0x30U))));
    testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_15 
        = (((IData)((0x300000000000000ULL == (0x300000000000000ULL 
                                              & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM))) 
            << 1U) | (1U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                    >> 0x38U))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ITLBWriteF 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__DTLBWalk)) 
           & (IData)(testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____VdfgRegularize_h1afdae1e_1_10));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBWriteM 
        = ((IData)(testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____VdfgRegularize_h1afdae1e_1_10) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__DTLBWalk));
    vlSelfRef.testbench__DOT__dut__DOT__resetsync__DOT__mid 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__CurrState)) 
           | ((1U == (IData)(vlSelfRef.testbench__DOT__CurrState)) 
              | ((2U == (IData)(vlSelfRef.testbench__DOT__CurrState)) 
                 | ((3U == (IData)(vlSelfRef.testbench__DOT__CurrState)) 
                    | ((4U == (IData)(vlSelfRef.testbench__DOT__CurrState)) 
                       | (5U == (IData)(vlSelfRef.testbench__DOT__CurrState)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadStallD 
        = (((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregE____pinNumber6 
                     >> 0x25U)) | (4U == (7U & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregE____pinNumber6 
                                                        >> 0x26U))))) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__MatchDE));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__ZEnD 
        = (IData)(((0x200U == (0x300U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD))) 
                   & (0x80U != (0xc0U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT____VdfgRegularize_h09464af3_3_9 
        = (IData)((0x2060U == (0x2ce0U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 1U;
    if (((((((((3U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD))) 
               | (7U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) 
              | (0xfU == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) 
             | (0x13U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) 
            | (0x17U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) 
           | (0x1bU == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) 
          | (0x23U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) 
         | (0x27U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD))))) {
        if ((3U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            if (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____VdfgRegularize_h29c76312_1_5) 
                 | ((4U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                          >> 0xcU)))) 
                    | ((5U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                             >> 0xcU)))) 
                       | ((3U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                >> 0xcU)))) 
                          | (6U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                  >> 0xcU))))))))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x862000U;
            }
        } else if ((7U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__FLSFunctD) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x62001U;
            }
        } else if ((0xfU == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__FenceFunctD) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x20U;
            } else if ((IData)(((0x2000ULL == (0x7f80ULL 
                                               & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                                & ((IData)(((0x400000ULL 
                                             == (0xfff00000ULL 
                                                 & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                                            & ((3U 
                                                == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_35) 
                                                  >> 3U)))) 
                                   | ((IData)(((0ULL 
                                                == 
                                                (0xfff00000ULL 
                                                 & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                                               & (0U 
                                                  != 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))
                                                    ? 3U
                                                    : 
                                                   (3U 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_35)))))) 
                                      | (((1U == (0xfffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                             >> 0x14U)))) 
                                          | (2U == 
                                             (0xfffU 
                                              & (IData)(
                                                        (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                         >> 0x14U))))) 
                                         & ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_35) 
                                               >> 2U)))))))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x540002U;
            }
        } else if ((0x13U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__IFunctD) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x840800U;
            }
        } else if ((0x17U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0xcc0000U;
        } else if ((0x1bU == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            if (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__IFunctD) 
                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__IWValidFunct3D))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x840900U;
            }
        } else if ((0x23U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            if (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____VdfgRegularize_h29c76312_1_5) 
                 | (3U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                         >> 0xcU)))))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x150000U;
            }
        } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__FLSFunctD) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x150001U;
        }
    } else if (((((((((0x2fU == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD))) 
                      | (0x33U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) 
                     | (0x37U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) 
                    | (0x3bU == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) 
                   | (0x63U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) 
                  | (0x67U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) 
                 | (0x6fU == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) 
                | (0x73U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD))))) {
        if ((0x2fU == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__AFunctD) {
                if ((IData)((0x10000000ULL == (0xf9f00000ULL 
                                               & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x822004U;
                } else if ((3U == (0x1fU & (IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                    >> 0x1bU))))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0xd58004U;
                } else if (((1U == (0x1fU & (IData)(
                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                     >> 0x1bU)))) 
                            | ((0U == (0x1fU & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x1bU)))) 
                               | ((4U == (0x1fU & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x1bU)))) 
                                  | ((0xcU == (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                          >> 0x1bU)))) 
                                     | ((8U == (0x1fU 
                                                & (IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                           >> 0x1bU)))) 
                                        | ((0x10U == 
                                            (0x1fU 
                                             & (IData)(
                                                       (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                        >> 0x1bU)))) 
                                           | ((0x14U 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                              >> 0x1bU)))) 
                                              | ((0x18U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                              >> 0x1bU)))) 
                                                 | (0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                >> 0x1bU))))))))))))) {
                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0xd72008U;
                }
            }
        } else if ((0x33U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            if (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____VdfgRegularize_h29c76312_1_3) 
                 | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__FunctCZeroD) 
                    | (0U == (0x7fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                               >> 0x19U))))))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x800800U;
            } else if ((1U == (0x7fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                >> 0x19U))))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x806010U;
            }
        } else if ((0x37U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0xc40200U;
        } else if ((0x3bU == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            if ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__IWValidFunct3D) 
                  & (0ULL == (0xfe000000ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD))) 
                 | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____VdfgRegularize_h29c76312_1_3))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x800900U;
            } else if ((IData)(((0x2000000ULL == (0xfe000000ULL 
                                                  & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                                & (~ ((1U == (7U & (IData)(
                                                           (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                            >> 0xcU)))) 
                                      | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__AFunctD)))))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x806110U;
            }
        } else if ((0x63U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            if ((1U != (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                      >> 0xdU))))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x2c1000U;
            }
        } else if ((0x67U == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            if ((0U == (7U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                      >> 0xcU))))) {
                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x840600U;
            }
        } else if ((0x6fU == (0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0xbc0600U;
        } else if ((IData)((0ULL == (0x7f80ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x40U;
        } else if ((0U != (3U & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                         >> 0xcU))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD = 0x804080U;
        }
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[0U] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_1;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[8U] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_1;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__0__KET____DOT__PMPCFGreg____pinNumber4 
        = ((0x80U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                              >> 7U)) << 7U)) | ((0x1cU 
                                                  & ((IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                                              >> 2U)) 
                                                     << 2U)) 
                                                 | (IData)(testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_1)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[1U] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_3;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[9U] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_3;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__1__KET____DOT__PMPCFGreg____pinNumber4 
        = ((0x80U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                              >> 0xfU)) << 7U)) | (
                                                   (0x1cU 
                                                    & ((IData)(
                                                               (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                                                >> 0xaU)) 
                                                       << 2U)) 
                                                   | (IData)(testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_3)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[2U] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_5;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[0xaU] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_5;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__10__KET____DOT__PMPCFGreg____pinNumber4 
        = ((0x80U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                              >> 0x17U)) << 7U)) | 
           ((0x1cU & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                               >> 0x12U)) << 2U)) | (IData)(testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_5)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[3U] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_7;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[0xbU] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_7;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__11__KET____DOT__PMPCFGreg____pinNumber4 
        = ((0x80U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                              >> 0x1fU)) << 7U)) | 
           ((0x1cU & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                               >> 0x1aU)) << 2U)) | (IData)(testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_7)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[4U] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_9;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[0xcU] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_9;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__12__KET____DOT__PMPCFGreg____pinNumber4 
        = ((0x80U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                              >> 0x27U)) << 7U)) | 
           ((0x1cU & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                               >> 0x22U)) << 2U)) | (IData)(testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_9)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[5U] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_11;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[0xdU] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_11;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__13__KET____DOT__PMPCFGreg____pinNumber4 
        = ((0x80U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                              >> 0x2fU)) << 7U)) | 
           ((0x1cU & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                               >> 0x2aU)) << 2U)) | (IData)(testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_11)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[6U] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_13;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[0xeU] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_13;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__14__KET____DOT__PMPCFGreg____pinNumber4 
        = ((0x80U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                              >> 0x37U)) << 7U)) | 
           ((0x1cU & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                               >> 0x32U)) << 2U)) | (IData)(testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_13)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[7U] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_15;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPWRLegalizedWriteValM[0xfU] 
        = testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_15;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__15__KET____DOT__PMPCFGreg____pinNumber4 
        = ((0x80U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                              >> 0x3fU)) << 7U)) | 
           ((0x1cU & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                               >> 0x3aU)) << 2U)) | (IData)(testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____VdfgRegularize_hddb6ca7f_2_15)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
        = (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__lru__DOT__WriteLines 
           & (- (IData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ITLBWriteF))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__WriteEnables 
        = (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__lru__DOT__WriteLines 
           & (- (IData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBWriteM))));
    if (((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBWriteM) 
             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ITLBWriteF))) 
         & (9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
            = (IData)((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__UpdatePTE) 
                        | (0xaU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)))
                        ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__hptwwrites__DOT__HPTWWriteAdr
                        : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__HPTWReadAdr));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
            = (IData)(((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__UpdatePTE) 
                         | (0xaU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)))
                         ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__hptwwrites__DOT__HPTWWriteAdr
                         : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__HPTWReadAdr) 
                       >> 0x20U));
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
            = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__IEUAdrSpillM);
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
            = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ziccslm_align__DOT__IEUAdrSpillM 
                       >> 0x20U));
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[2U] = 0U;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__XEnD 
        = (1U & (~ ((IData)((0x800U == (0x1c00U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD)))) 
                    | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT____VdfgRegularize_h09464af3_3_9) 
                       | (IData)((0x480U == (0xf80U 
                                             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD))))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__YEnD 
        = (1U & (~ ((IData)(((0x800U == (0xc00U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD))) 
                             & (0U != (0x3000U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD))))) 
                    | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT____VdfgRegularize_h09464af3_3_9) 
                       | ((IData)((0xc00U == (0xf00U 
                                              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD)))) 
                          | (IData)(((0x400U == (0xc00U 
                                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD))) 
                                     & ((0U == (3U 
                                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD) 
                                                   >> 8U))) 
                                        | (IData)((0x120U 
                                                   == 
                                                   (0x320U 
                                                    & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD))))))))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IllegalIEUFPUInstrD 
        = (1U & (((~ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                              >> 0x20U))) | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD 
                                             & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__bitmanipi__DOT__bmuctrl__DOT__BMUControlsD)) 
                 & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__fpu__DOT__fpu__DOT__fctrl__DOT__ControlsD) 
                    >> 3U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[0U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__0__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[8U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__0__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[1U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__1__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[9U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__1__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[2U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__10__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[0xaU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__10__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[3U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__11__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[0xbU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__11__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[4U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__12__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[0xcU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__12__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[5U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__13__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[0xdU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__13__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[6U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__14__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[0xeU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__14__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[7U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__15__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT__pmp__DOT__CSRPMPLegalizedWriteValM[0xfU] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__pmp__DOT__genblk1__BRA__15__KET____DOT__PMPCFGreg____pinNumber4;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskM 
        = (0xffU & ((VL_SHIFTL_III(8,32,32, (IData)(1U), 
                                   ((IData)(1U) << (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFunct3M))) 
                     - (IData)(1U)) << (7U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__ByteMaskExtendedM 
        = (0xffU & (((VL_SHIFTL_III(32,32,32, (IData)(1U), 
                                    ((IData)(1U) << (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFunct3M))) 
                      - (IData)(1U)) << (7U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                    >> 8U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__subwordread__DOT__PAdrSwapM 
        = (7U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                 ^ (- (IData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BigEndianM)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__DataMisalignedM 
        = (1U & ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__dmmu__DOT__dmmu__Size))
                  ? ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__dmmu__DOT__dmmu__Size))
                      ? (0U != (7U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))
                      : ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                          >> 1U) | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))
                  : ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT____Vcellinp__dmmu__DOT__dmmu__Size)) 
                     && (1U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT__genblk1__DOT__eq_63_47 
        = (1U & ((~ (IData)((0U != (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                    >> 0xfU)))) | (0x1ffffU 
                                                   == 
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                                    >> 0xfU))));
    vlSelfRef.testbench__DOT__CurrState = ((IData)(vlSelfRef.testbench__DOT__TestBenchReset)
                                            ? 0U : (IData)(vlSelfRef.testbench__DOT__NextState));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ALUOpD 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IllegalIEUFPUInstrD)) 
                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD 
                    >> 0xbU)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__CSRReadD 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IllegalIEUFPUInstrD)) 
                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD 
                    >> 7U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__PrivilegedD 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IllegalIEUFPUInstrD)) 
                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD 
                    >> 6U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__FenceXD 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IllegalIEUFPUInstrD)) 
                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD 
                    >> 5U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__CMOD 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IllegalIEUFPUInstrD)) 
                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD 
                    >> 1U)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__IFUPrefetchD = 0U;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__LSUPrefetchD = 0U;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__ImmSrcD 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IllegalIEUFPUInstrD)
            ? 0U : (7U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD 
                          >> 0x14U)));
    if ((0x6013U == (0x7fffU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)))) {
        if ((0U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                     >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__IFUPrefetchD = 1U;
        } else if ((1U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                            >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__LSUPrefetchD = 1U;
        } else if ((3U == (0x1fU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                            >> 0x14U))))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__LSUPrefetchD = 1U;
        }
        if (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__IFUPrefetchD) 
             | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__LSUPrefetchD))) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__ImmSrcD = 1U;
        }
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__JumpD 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IllegalIEUFPUInstrD)) 
                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD 
                    >> 0xaU)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BranchD 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IllegalIEUFPUInstrD)) 
                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD 
                    >> 0xcU)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreStallD 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IllegalIEUFPUInstrD)) 
                 & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__ControlsD 
                     >> 0x11U) & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregE____pinNumber6 
                                          >> 0x24U)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__InvalidateICacheD 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__FenceXD) 
           & (0x1000ULL == (0x7000ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__CMOpD = 0U;
    if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__CMOD) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__CMOpD 
            = ((7U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__CMOpD)) 
               | ((4U == (0xfffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                            >> 0x14U)))) 
                  << 3U));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__CMOpD 
            = ((0xbU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__CMOpD)) 
               | ((2U == (0xfffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                            >> 0x14U)))) 
                  << 2U));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__CMOpD 
            = ((0xdU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__CMOpD)) 
               | (((1U == (0xfffU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                             >> 0x14U)))) 
                   | (IData)(((0ULL == (0xfff00000ULL 
                                        & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                              & (1U == (3U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ENVCFG_CBE)))))) 
                  << 1U));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__CMOpD 
            = ((0xeU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT__CMOpD)) 
               | (IData)(((0ULL == (0xfff00000ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)) 
                          & (3U == (3U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ENVCFG_CBE))))));
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__dp__DOT__ImmExtD 
        = ((4U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__ImmSrcD))
            ? ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__ImmSrcD))
                ? 0ULL : ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__ImmSrcD))
                           ? 0ULL : (((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                     >> 0x1fU)))))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7ffff000U 
                                                                   & ((IData)(
                                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                               >> 0xcU)) 
                                                                      << 0xcU)))))))
            : ((2U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__ImmSrcD))
                ? ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__ImmSrcD))
                    ? (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                          >> 0x1fU)))))) 
                        << 0x14U) | (QData)((IData)(
                                                    (((0xff000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                   >> 0xcU)) 
                                                          << 0xcU)) 
                                                      | (0x800U 
                                                         & ((IData)(
                                                                    (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                     >> 0x14U)) 
                                                            << 0xbU))) 
                                                     | (0x7feU 
                                                        & ((IData)(
                                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                    >> 0x15U)) 
                                                           << 1U))))))
                    : (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                          >> 0x1fU)))))) 
                        << 0xcU) | (QData)((IData)(
                                                   ((0x800U 
                                                     & ((IData)(
                                                                (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                 >> 7U)) 
                                                        << 0xbU)) 
                                                    | ((0x7e0U 
                                                        & ((IData)(
                                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                    >> 0x19U)) 
                                                           << 5U)) 
                                                       | (0x1eU 
                                                          & ((IData)(
                                                                     (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                      >> 8U)) 
                                                             << 1U))))))))
                : ((1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__ImmSrcD))
                    ? (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                          >> 0x1fU)))))) 
                        << 0xcU) | (QData)((IData)(
                                                   ((0xfe0U 
                                                     & ((IData)(
                                                                (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                 >> 0x19U)) 
                                                        << 5U)) 
                                                    | (0x1fU 
                                                       & (IData)(
                                                                 (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                                  >> 7U)))))))
                    : (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                          >> 0x1fU)))))) 
                        << 0xcU) | (QData)((IData)(
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD 
                                                               >> 0x14U)))))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__CallD 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__JumpD) 
           & (0x80ULL == (0xd80ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__ReturnD 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__JumpD) 
           & (0x8000ULL == (0xd8000ULL & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__decomp__DOT__decomp__DOT__LInstrD)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__Predictor__DOT__DirPredictor__DOT__GHRF 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BranchD)
            ? ((0x200U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__Predictor__DOT__DirPredictor__DOT__BPDirD) 
                          << 8U)) | (0x1ffU & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__Predictor__DOT__DirPredictor__DOT__GHRD) 
                                               >> 1U)))
            : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__Predictor__DOT__DirPredictor__DOT__GHRD));
    vlSelfRef.testbench__DOT__CopyRAM = ((IData)(vlSelfRef.testbench__DOT__TestComplete) 
                                         & (6U == (IData)(vlSelfRef.testbench__DOT__CurrState)));
    vlSelfRef.testbench__DOT__NextState = ((8U & (IData)(vlSelfRef.testbench__DOT__CurrState))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.testbench__DOT__CurrState))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.testbench__DOT__CurrState))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.testbench__DOT__CurrState))
                                                     ? 
                                                    ((IData)(vlSelfRef.testbench__DOT__DCacheFlushDone)
                                                      ? 0xaU
                                                      : 9U)
                                                     : 
                                                    ((IData)(vlSelfRef.testbench__DOT__DCacheFlushDone)
                                                      ? 0xaU
                                                      : 9U))))
                                            : ((4U 
                                                & (IData)(vlSelfRef.testbench__DOT__CurrState))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.testbench__DOT__CurrState))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.testbench__DOT__CurrState))
                                                     ? 8U
                                                     : 
                                                    ((IData)(vlSelfRef.testbench__DOT__TestComplete)
                                                      ? 7U
                                                      : 6U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.testbench__DOT__CurrState))
                                                     ? 
                                                    ((5U 
                                                      > (IData)(vlSelfRef.testbench__DOT__ResetCount))
                                                      ? 5U
                                                      : 6U)
                                                     : 5U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.testbench__DOT__CurrState))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.testbench__DOT__CurrState))
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.testbench__DOT__CurrState))
                                                     ? 2U
                                                     : 1U))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT____Vcellinp__TargetPredictor__IClassD 
        = ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__CallD) 
             << 3U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__ReturnD) 
                       << 2U)) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__JumpD) 
                                   << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BranchD)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__Predictor__DOT__DirPredictor__DOT__IndexF 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__Predictor__DOT__DirPredictor__DOT__GHRF) 
           ^ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__PCFIndex));
    if (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__MatchD) 
         | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__MatchE) 
            | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__MatchM) 
               | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__PCFIndex) 
                  == ((0x200U & (VL_REDXOR_16((0x802ULL 
                                               & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__PCW)) 
                                 << 9U)) | (0x1ffU 
                                            & (IData)(
                                                      (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__PCW 
                                                       >> 2U))))))))) {
        if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__MatchD) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[0U] 
                = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__BPBTAD);
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[1U] 
                = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__BPBTAD 
                           >> 0x20U));
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT____Vcellinp__TargetPredictor__IClassD;
        } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__MatchE) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[0U] 
                = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IEUAdrE);
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[1U] 
                = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IEUAdrE 
                           >> 0x20U));
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__icpred__DOT____Vcellinp__InstrClassRegM____pinNumber5;
        } else if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__MatchM) {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[0U] 
                = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____Vcellinp__memory__wd2[0U];
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[1U] 
                = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____Vcellinp__memory__wd2[1U];
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____Vcellinp__memory__wd2[2U];
        } else {
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[0U] 
                = (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__IEUAdrW);
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[1U] 
                = (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__IEUAdrW 
                           >> 0x20U));
            vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
                = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__icpred__DOT____Vcellout__InstrClassRegW____pinNumber6;
        }
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[0U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__memory__DOT__ram__DOT__RAM
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__memory__DOT__ram__DOT__ra1d][0U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[1U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__memory__DOT__ram__DOT__RAM
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__memory__DOT__ram__DOT__ra1d][1U];
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT____VdfgRegularize_h6af4f13a_6_0[2U] 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__memory__DOT__ram__DOT__RAM
            [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bpred__DOT__bpred__DOT__TargetPredictor__DOT__memory__DOT__ram__DOT__ra1d][2U];
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__10(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__10\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT____VdfgRegularize_h9eef0bb7_2_1;
    testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT____VdfgRegularize_h9eef0bb7_2_1 = 0;
    CData/*0:0*/ testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_5;
    testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_5 = 0;
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x1fU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x1eU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x1dU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x1cU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x1bU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x1aU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x19U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x18U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x17U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x16U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x15U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x14U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x13U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x12U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x11U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x10U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0xfU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0xeU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0xdU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0xcU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0xbU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0xaU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[9U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[8U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[7U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[6U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[5U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[4U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[3U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[2U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[1U] 
        = vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.PageTypeRead;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Matches 
        = (((((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.Match) 
                << 0x1fU) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.Match) 
                             << 0x1eU)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.Match) 
                                            << 0x1dU) 
                                           | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.Match) 
                                              << 0x1cU))) 
             | ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.Match) 
                  << 0x1bU) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.Match) 
                               << 0x1aU)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.Match) 
                                              << 0x19U) 
                                             | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.Match) 
                                                << 0x18U)))) 
            | (((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.Match) 
                  << 0x17U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.Match) 
                               << 0x16U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.Match) 
                                              << 0x15U) 
                                             | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.Match) 
                                                << 0x14U))) 
               | ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.Match) 
                    << 0x13U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.Match) 
                                 << 0x12U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.Match) 
                                                << 0x11U) 
                                               | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.Match) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.Match) 
                  << 0xfU) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.Match) 
                              << 0xeU)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.Match) 
                                            << 0xdU) 
                                           | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.Match) 
                                              << 0xcU))) 
               | ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.Match) 
                    << 0xbU) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.Match) 
                                << 0xaU)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.Match) 
                                              << 9U) 
                                             | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.Match) 
                                                << 8U)))) 
              | (((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.Match) 
                    << 7U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.Match) 
                              << 6U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.Match) 
                                          << 5U) | 
                                         ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.Match) 
                                          << 4U))) 
                 | ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.Match) 
                      << 3U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.Match) 
                                << 2U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.Match) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.Match))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid[0U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.PageTypeRead) 
           | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.PageTypeRead));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0U] 
        = vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.PageTypeRead;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x1fU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x1eU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x1dU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x1cU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x1bU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x1aU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x19U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x18U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x17U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x16U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x15U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x14U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x13U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x12U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x11U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0x10U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0xfU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0xeU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0xdU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0xcU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0xbU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0xaU] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[9U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[8U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[7U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[6U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[5U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[4U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[3U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[2U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.__PVT__PageType) 
           & (- (IData)((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.Match))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[1U] 
        = vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.PageTypeRead;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Matches 
        = (((((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__31__KET__.Match) 
                << 0x1fU) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__30__KET__.Match) 
                             << 0x1eU)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__29__KET__.Match) 
                                            << 0x1dU) 
                                           | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__28__KET__.Match) 
                                              << 0x1cU))) 
             | ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__27__KET__.Match) 
                  << 0x1bU) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__26__KET__.Match) 
                               << 0x1aU)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__25__KET__.Match) 
                                              << 0x19U) 
                                             | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__24__KET__.Match) 
                                                << 0x18U)))) 
            | (((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__23__KET__.Match) 
                  << 0x17U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__22__KET__.Match) 
                               << 0x16U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__21__KET__.Match) 
                                              << 0x15U) 
                                             | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__20__KET__.Match) 
                                                << 0x14U))) 
               | ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__19__KET__.Match) 
                    << 0x13U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__18__KET__.Match) 
                                 << 0x12U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__17__KET__.Match) 
                                                << 0x11U) 
                                               | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__16__KET__.Match) 
                                                  << 0x10U))))) 
           | ((((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__15__KET__.Match) 
                  << 0xfU) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__14__KET__.Match) 
                              << 0xeU)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__13__KET__.Match) 
                                            << 0xdU) 
                                           | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__12__KET__.Match) 
                                              << 0xcU))) 
               | ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__11__KET__.Match) 
                    << 0xbU) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__10__KET__.Match) 
                                << 0xaU)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__9__KET__.Match) 
                                              << 9U) 
                                             | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__8__KET__.Match) 
                                                << 8U)))) 
              | (((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__7__KET__.Match) 
                    << 7U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__6__KET__.Match) 
                              << 6U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__5__KET__.Match) 
                                          << 5U) | 
                                         ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__4__KET__.Match) 
                                          << 4U))) 
                 | ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__3__KET__.Match) 
                      << 3U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__2__KET__.Match) 
                                << 2U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.Match) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.Match))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid[0U] 
        = ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.PageTypeRead) 
           | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__1__KET__.PageTypeRead));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeRead[0U] 
        = vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__camlines__BRA__0__KET__.PageTypeRead;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__lru__DOT__RUBitsAccessed 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ITLBWriteF)
             ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__lru__DOT__WriteLines
             : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Matches) 
           | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__lru__DOT__RUBits);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__CAMHit 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)) 
           & (0U != vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Matches));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__lru__DOT__RUBitsAccessed 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBWriteM)
             ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__lru__DOT__WriteLines
             : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Matches) 
           | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__lru__DOT__RUBits);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__CAMHit 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)) 
           & (0U != vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Matches));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__ITLBMissF 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__CAMHit)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__Translate));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h6a8520a7_0_0 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__Translate) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__CAMHit));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBMissM 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__CAMHit)) 
           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__TLBAccess) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__Translate)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__CAMHit) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__TLBAccess));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__PBMemoryType 
        = (3U & (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                  >> 9U) & (- (IData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h6a8520a7_0_0)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_0 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__Translate) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__PBMemoryType)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__pmachecker__DOT__CacheableRegion));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__PBMemoryType 
        = (3U & (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                  >> 9U) & (- (IData)((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_0)))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_0 = (1U 
                                                & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__ITLBMissF)) 
                                                   & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF)) 
                                                      & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT____VdfgRegularize_hb604bb0f_0_1 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__ITLBMissF)) 
           & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__SelIROM)) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__CacheableF)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__CacheableM 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__PBMemoryType)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__CacheableRegion));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusAtomic 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__CacheableM)) 
                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                    >> 0xbU)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM 
        = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__CacheableM) 
                 | (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                    >> 8U)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_21 = (1U 
                                                 & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__CacheableM)) 
                                                    & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelDTIM))));
    testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT____VdfgRegularize_h9eef0bb7_2_1 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__CacheableM)) 
                 & (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBMissM))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusCMOZero 
        = (1U & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__CacheableM)) 
                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                    >> 4U)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_22 = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__SelDTIM)) 
                                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__CacheableM));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_20 = ((9U 
                                                  == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)) 
                                                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__CacheableM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadMisalignedFaultM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__DataMisalignedM) 
           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__ReadNoAmoAccessM) 
              & (IData)(testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT____VdfgRegularize_h9eef0bb7_2_1)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoMisalignedFaultM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__DataMisalignedM) 
           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM) 
              & (IData)(testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT____VdfgRegularize_h9eef0bb7_2_1)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ebu__DOT__ebu__DOT__LSUHSIZEOut 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusCMOZero) 
            | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__CacheableOrFlushCacheM))
            ? 3U : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUFunct3M));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CacheAccess) 
           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LSUHREADY) 
              & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__BusCMOZero)) 
                 & (7U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__BeatCountDelayed)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_21 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_20) 
           & (0U != (0xfU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                             >> 1U))));
    testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_5 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_20) 
           & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
              >> 3U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_3 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_20) 
           & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
              >> 4U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_16 
        = ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ClearValid 
        = (((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
            & (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_20) 
                & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                   >> 1U)) | ((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitDirtyWay)))) 
                              & (IData)(testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_5)))) 
           | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
              & ((IData)(testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_5) 
                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6 
        = (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_20) 
            & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
               >> 2U)) | (IData)(testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_5));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_17 
        = ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_3) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_18 
        = ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_6));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__Intermediate[2U] 
        = ((4U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__CurrLRU))
            ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__Intermediate
           [0U] : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__Intermediate
           [1U]);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__VictimWayEnc 
        = ((0xfU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__ValidWay))
            ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__Intermediate
           [2U] : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__FirstZeroWay));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay 
        = ((((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushWay) 
                   >> 3U) : (1U & (((IData)(1U) << (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__VictimWayEnc)) 
                                   >> 3U))) & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.HitDirtyWay)) 
             << 3U) | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
                          ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushWay) 
                             >> 2U) : (3U & (((IData)(1U) 
                                              << (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__VictimWayEnc)) 
                                             >> 2U))) 
                        & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.HitDirtyWay)) 
                       << 2U)) | (((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
                                      ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushWay) 
                                         >> 1U) : (7U 
                                                   & (((IData)(1U) 
                                                       << (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__VictimWayEnc)) 
                                                      >> 1U))) 
                                    & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.HitDirtyWay)) 
                                   << 1U) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__FlushDCache)
                                               ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushWay)
                                               : ((IData)(1U) 
                                                  << (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__VictimWayEnc))) 
                                             & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.HitDirtyWay))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__flushlogic__DOT__ResetOrFlushCntRst 
        = ((((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
             & ((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))) 
                & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__FlushFlag))) 
            | ((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__FlushFlag) 
                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck)))) 
           | (IData)(vlSelfRef.testbench__DOT__reset));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushAdrCntEn 
        = (((6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
            & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__DCacheBusAck) 
               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushWay) 
                  >> 3U))) | ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
                              & ((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))) 
                                 & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushWay) 
                                    >> 3U))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CMOZeroNoEviction 
        = ((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__DirtyWay)))) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_3));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushAdr 
        = (0x3fU & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__flushlogic__DOT__NextFlushAdr) 
                    + (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__FlushAdrCntEn)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__SetValid 
        = ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
           | (((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CMOZeroNoEviction)) 
              | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_16) 
                 & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_3))));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__5(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT____VdfgRegularize_hb604bb0f_0_21;
    testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT____VdfgRegularize_hb604bb0f_0_21 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed 
        = (0xfffffffffffULL & ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                [0x1eU] >> 0xaU) | 
                               (0xfffffffffULL & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                   >> 0xcU) 
                                                  & ((2U 
                                                      & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                                      [0x1eU])
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                                       [0x1eU])
                                                       ? 0x7ffffffULL
                                                       : 0x3ffffULL)
                                                      : 
                                                     ((1U 
                                                       & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                                       [0x1eU])
                                                       ? 0x1ffULL
                                                       : 0ULL))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__TLBPageFault 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h6a8520a7_0_0) 
           & ((9U != (0x109U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))) 
              | (((((((((((~ ((8U == (0xfU & (IData)(
                                                     (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                                      >> 0x3cU))))
                               ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT__genblk1__DOT__eq_63_47) 
                                  & ((~ (IData)((0U 
                                                 != 
                                                 (0x1ffU 
                                                  & (IData)(
                                                            (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                             >> 0x26U)))))) 
                                     | (0x1ffU == (0x1ffU 
                                                   & (IData)(
                                                             (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                                              >> 0x26U))))))
                               : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT__genblk1__DOT__eq_63_47))) 
                          | ((3U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                              [0x1eU]) & (0U != (0x7ffffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                            [0x1eU] 
                                                            >> 0xaU)))))) 
                         | ((2U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                             [0x1eU]) & (0U != (0x3ffffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                           [0x1eU] 
                                                           >> 0xaU)))))) 
                        | ((1U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                            [0x1eU]) & (0U != (0x1ffU 
                                               & (IData)(
                                                         (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                          [0x1eU] 
                                                          >> 0xaU)))))) 
                       | ((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                              >> 4U)) & (0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)))) 
                      | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                         & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                            >> 4U))) | (~ ((IData)(
                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                    >> 0x3eU)) 
                                           | (0U == 
                                              (3U & 
                                               ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                >> 9U)))))) 
                    | (3U == (3U & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                    >> 9U)))) | ((8U 
                                                  != 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                              [0x1eU] 
                                                              >> 0xaU)))) 
                                                 & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                    >> 0xbU))) 
                  | ((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                         >> 6U)) & (~ (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                               >> 0x3dU))))) 
                 | (4U == (6U & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT____Vcellout__addressmux____pinNumber4 
        = (0xfffffffffffULL & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__Translate)
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__CAMHit)
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
                                    : 0ULL) : (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF 
                                               >> 0xcU)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ITLBMissOrUpdateAF 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__ITLBMissF) 
           | ((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                  >> 6U)) & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h6a8520a7_0_0) 
                             & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__TLBPageFault)) 
                                & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                           >> 0x3dU))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT____Vcellout__CacheWays__BRA__3__KET____HitWay 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT____Vcellout__CacheWays__BRA__3__KET____ValidWay) 
           & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__3__KET____DOT__InvalidateCacheDelay)) 
              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__3__KET____DOT__CacheTagMem__DOT__ram__DOT__RAM
                 [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__3__KET____DOT__CacheTagMem__DOT__ram__DOT__addrd] 
                 == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT____Vcellout__addressmux____pinNumber4)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT____Vcellout__CacheWays__BRA__2__KET____HitWay 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT____Vcellout__CacheWays__BRA__2__KET____ValidWay) 
           & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__2__KET____DOT__InvalidateCacheDelay)) 
              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__2__KET____DOT__CacheTagMem__DOT__ram__DOT__RAM
                 [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__2__KET____DOT__CacheTagMem__DOT__ram__DOT__addrd] 
                 == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT____Vcellout__addressmux____pinNumber4)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT____Vcellout__CacheWays__BRA__1__KET____HitWay 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT____Vcellout__CacheWays__BRA__1__KET____ValidWay) 
           & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__1__KET____DOT__InvalidateCacheDelay)) 
              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__1__KET____DOT__CacheTagMem__DOT__ram__DOT__RAM
                 [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__1__KET____DOT__CacheTagMem__DOT__ram__DOT__addrd] 
                 == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT____Vcellout__addressmux____pinNumber4)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT____Vcellout__CacheWays__BRA__0__KET____HitWay 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT____Vcellout__CacheWays__BRA__0__KET____ValidWay) 
           & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__0__KET____DOT__InvalidateCacheDelay)) 
              & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__0__KET____DOT__CacheTagMem__DOT__ram__DOT__RAM
                 [vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__CacheWays__BRA__0__KET____DOT__CacheTagMem__DOT__ram__DOT__addrd] 
                 == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT____Vcellout__addressmux____pinNumber4)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__PAdrZero 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT____Vcellout__addressmux____pinNumber4 
            << 0xcU) | (QData)((IData)((0xfffU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCSpillF)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__HitWay 
        = ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT____Vcellout__CacheWays__BRA__3__KET____HitWay) 
             << 3U) | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT____Vcellout__CacheWays__BRA__2__KET____HitWay) 
                       << 2U)) | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT____Vcellout__CacheWays__BRA__1__KET____HitWay) 
                                   << 1U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT____Vcellout__CacheWays__BRA__0__KET____HitWay)));
    __Vtableidx2 = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__HitWay;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__HitWayEncoded 
        = Vtestbench__ConstPool__TABLE_h14a5b4b3_0[__Vtableidx2];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__vict__DOT__cacheLRU__DOT__hitwayencoder__DOT__index 
        = Vtestbench__ConstPool__TABLE_h55a8fd5c_0[__Vtableidx2];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__AnyMiss 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT____VdfgRegularize_hb604bb0f_0_1) 
           & ((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__HitWay)))) 
              & (~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                    >> 9U))));
    testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT____VdfgRegularize_hb604bb0f_0_21 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__AnyMiss));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__SelAdrData 
        = ((IData)(testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT____VdfgRegularize_hb604bb0f_0_21) 
           | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState)) 
              | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState)) 
                 | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState)) 
                    | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__resetDelay)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ICacheStallF 
        = ((IData)(testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT____VdfgRegularize_hb604bb0f_0_21) 
           | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState)) 
              | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState)) 
                 | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState)) 
                    | ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState)) 
                       | (6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__CacheBusRW 
        = ((((IData)(testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT____VdfgRegularize_hb604bb0f_0_21) 
             | (((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ICacheBusAck)) 
                 & (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState))) 
                | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState)) 
                   & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ICacheBusAck)))) 
            << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_8) 
                      | ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ICacheBusAck)) 
                         & (6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__icache__DOT__cachefsm__DOT__CurrState)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT____VdfgRegularize_h961e3454_2_45 
        = (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTER_REGW
           [0x12U] + (QData)((IData)(((~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MCOUNTINHIBIT_REGW 
                                          >> 0x12U)) 
                                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ICacheStallF)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_12 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_0) 
           | (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__CacheBusRW)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTERPlusM[0x12U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT____VdfgRegularize_h961e3454_2_45;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__IFUCacheBusStallF 
        = ((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_12)) 
            | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
               | ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                  | ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                     | ((7U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed)) 
                        & ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
                           | (6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)))))))) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ICacheStallF));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__6(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Mixer__DOT__PPNMixed 
        = (0xfffffffffffULL & ((vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                [0x1eU] >> 0xaU) | 
                               (0xfffffffffULL & ((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                    << 0x14U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                      >> 0xcU)) 
                                                  & ((2U 
                                                      & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                                      [0x1eU])
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                                       [0x1eU])
                                                       ? 0x7ffffffULL
                                                       : 0x3ffffULL)
                                                      : 
                                                     ((1U 
                                                       & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                                                       [0x1eU])
                                                       ? 0x1ffULL
                                                       : 0ULL))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__TLBPageFault 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_0) 
           & (((~ ((8U == (0xfU & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__SATP_REGW 
                                           >> 0x3cU))))
                    ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT__genblk1__DOT__eq_63_47) 
                       & ((~ (IData)((0U != (0x1ffU 
                                             & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                                >> 6U))))) 
                          | (0x1ffU == (0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U] 
                                                  >> 6U)))))
                    : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__vm64check__DOT__genblk1__DOT__eq_63_47))) 
               | ((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits)) 
                  | ((((3U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                        [0x1eU]) & (0U != (0x7ffffffU 
                                           & (IData)(
                                                     (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                      [0x1eU] 
                                                      >> 0xaU))))) 
                      | (((2U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                           [0x1eU]) & (0U != (0x3ffffU 
                                              & (IData)(
                                                        (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                         [0x1eU] 
                                                         >> 0xaU))))) 
                         | ((1U == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcam__DOT__PageTypeOr__DOT__genblk1__DOT__mid
                             [0x1eU]) & (0U != (0x1ffU 
                                                & (IData)(
                                                          (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                           [0x1eU] 
                                                           >> 0xaU))))))) 
                     | ((((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                              >> 4U)) & (0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__EffectivePrivilegeMode))) 
                         | ((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__EffectivePrivilegeMode)) 
                            & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrsr__DOT__STATUS_SUM_INT)) 
                               & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                  >> 4U)))) | (((~ 
                                                 ((IData)(
                                                          (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                           >> 0x3eU)) 
                                                  | (0U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                         >> 9U))))) 
                                                | (3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                       >> 9U)))) 
                                               | (((8U 
                                                    != 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.__PVT__PTEOr__DOT__genblk1__DOT__mid
                                                                [0x1eU] 
                                                                >> 0xaU)))) 
                                                   & ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                      >> 0xbU)) 
                                                  | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                                                      >> 8U) 
                                                     | ((~ (IData)(
                                                                   (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                                                                    >> 0x3dU))) 
                                                        & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__PreUpdateDA))))))))) 
              | ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM) 
                   >> 1U) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_3)) 
                 | (((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                         >> 2U)) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                    | (((0U != (7U & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                      >> 1U))) & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_3)) 
                       | (((~ ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits) 
                               >> 2U)) & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                          >> 4U)) | (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbram.PTEAccessBits))))))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT____Vcellout__addressmux____pinNumber4 
        = (0xfffffffffffULL & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__Translate)
                                ? ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit)
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
                                    : 0ULL) : (((QData)((IData)(
                                                                vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[1U])) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U])) 
                                                     >> 0xcU)))));
    if ((9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadPageFaultM 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____Vcellout__HPTWAccesFaultReg____pinNumber4) 
                     >> 2U));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoPageFaultM 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____Vcellout__HPTWAccesFaultReg____pinNumber4) 
                     >> 1U));
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadPageFaultM 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__TLBPageFault) 
                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__ReadNoAmoAccessM)));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoPageFaultM 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__TLBPageFault) 
                     & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_24)));
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBMissOrUpdateDAM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBMissM) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT__PreUpdateDA) 
              & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_0) 
                 & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__TLBPageFault)) 
                    & (IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MENVCFG_REGW 
                               >> 0x3dU))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____Vcellinp__CacheBusAdrMux__d0 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT____Vcellout__addressmux____pinNumber4 
            << 0xcU) | (QData)((IData)((0xfc0U & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT____Vcellinp__resadrreg____pinNumber4 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT____Vcellout__addressmux____pinNumber4 
            << 9U) | (QData)((IData)((0x1ffU & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U] 
                                                >> 3U)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PAdrM 
        = ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT____Vcellout__addressmux____pinNumber4 
            << 0xcU) | (QData)((IData)((0xfffU & vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__IHAdrM[0U]))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM 
        = ((~ ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM) 
               & ((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT____Vcellinp__resadrreg____pinNumber4 
                   == vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT____Vcellout__resadrreg____pinNumber5) 
                  & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__ReservationValidW)))) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__scM));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_109 = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)) 
                                                  & (0U 
                                                     != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_110 = (1U 
                                                  & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)) 
                                                     & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_4_111 = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__atomic__DOT__atomic__DOT__genblk2__DOT__lrsc__DOT__SquashSCM)) 
                                                  & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM) 
                                                     >> 1U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h40865950_0_11 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_21) 
           & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_110));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_22) 
           & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_110));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_1 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_22) 
           & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_111));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__7(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay 
        = ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.HitWay) 
             << 3U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.HitWay) 
                       << 2U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.HitWay) 
                                   << 1U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.HitWay)));
    __Vtableidx8 = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay;
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__HitWayEncoded 
        = Vtestbench__ConstPool__TABLE_h14a5b4b3_0[__Vtableidx8];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__vict__DOT__cacheLRU__DOT__hitwayencoder__DOT__index 
        = Vtestbench__ConstPool__TABLE_h55a8fd5c_0[__Vtableidx8];
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyUpdateHit 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0) 
           & (0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyMiss 
        = ((~ (IData)((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitWay)))) 
           & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_0) 
              | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_1)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyMiss) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_21));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_20 
        = ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__AnyMiss));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT____VdfgRegularize_h1936c9d4_1_0 
        = ((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT__CurrState)) 
             & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_22)) 
            | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__cachefsm__DOT____VdfgRegularize_h6d5d1817_0_23)) 
           | (9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState)));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__21(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__21\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSULoadAccessFaultM 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBMissM)) 
           & ((IData)(((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault))) 
              | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EnforcePMP) 
                 & (IData)(((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                            & (~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR)))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUStoreAmoAccessFaultM 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBMissM)) 
           & (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_24) 
               & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmachecker__DOT__PMAAccessFault)) 
              | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__EnforcePMP) 
                  & (((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW)) 
                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM)) 
                     | (((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingW)) 
                         & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                            >> 4U)) | ((~ (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__pmp__DOT__pmpchecker.__PVT__MatchingR)) 
                                       & (0U != (7U 
                                                 & (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ieu__DOT__c__DOT____Vcellout__controlregM____pinNumber6 
                                                    >> 1U))))))) 
                 | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__DataMisalignedM) 
                    & ((IData)((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__PreLSURWM))) 
                       & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__CacheableM))))));
    if ((9U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__WalkerState))) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadAccessFaultM 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____Vcellout__HPTWAccesFaultReg____pinNumber4) 
                     >> 5U));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoAccessFaultM 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____Vcellout__HPTWAccesFaultReg____pinNumber4) 
                     >> 4U));
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadAccessFaultM 
            = (1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSULoadAccessFaultM));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoAccessFaultM 
            = (1U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUStoreAmoAccessFaultM));
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__LSUAccessFaultM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSULoadAccessFaultM) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__LSUStoreAmoAccessFaultM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT____VdfgRegularize_h1afdae1e_1_0 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__LSUAccessFaultM) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__DTLBWalk));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__HPTWFaultM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__LSUAccessFaultM) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__hptw__DOT__hptw__DOT__PBMTFaultM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM 
        = ((IData)(vlSelfRef.testbench__DOT__reset)
            ? 0U : (((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__Committed)) 
                     & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__EnabledIntsM) 
                        >> 0xbU)) ? 0xbU : ((1U & (
                                                   (~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__Committed)) 
                                                   & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__EnabledIntsM) 
                                                      >> 3U)))
                                             ? 3U : 
                                            ((1U & 
                                              ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__Committed)) 
                                               & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__EnabledIntsM) 
                                                  >> 7U)))
                                              ? 7U : 
                                             ((1U & 
                                               ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__Committed)) 
                                                & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__EnabledIntsM) 
                                                   >> 9U)))
                                               ? 9U
                                               : ((1U 
                                                   & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__Committed)) 
                                                      & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__EnabledIntsM) 
                                                         >> 1U)))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__Committed)) 
                                                       & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__EnabledIntsM) 
                                                          >> 5U)))
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__BothInstrPageFaultM)
                                                     ? 0xcU
                                                     : 
                                                    ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__BothInstrAccessFaultM)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__IllegalInstrFaultM)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrMisalignedFaultM)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__BreakpointFaultM)
                                                         ? 3U
                                                         : 
                                                        ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__EcallFaultM)
                                                          ? 
                                                         (8U 
                                                          | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))
                                                          : 
                                                         ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoPageFaultM)
                                                           ? 0xfU
                                                           : 
                                                          ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadPageFaultM)
                                                            ? 0xdU
                                                            : 
                                                           ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoAccessFaultM)
                                                             ? 7U
                                                             : 
                                                            ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadAccessFaultM)
                                                              ? 5U
                                                              : 
                                                             ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoMisalignedFaultM)
                                                               ? 6U
                                                               : 
                                                              ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadMisalignedFaultM)
                                                                ? 4U
                                                                : 0U)))))))))))))))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__ExceptionM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrMisalignedFaultM) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__BothInstrAccessFaultM) 
              | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__IllegalInstrFaultM) 
                 | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadMisalignedFaultM) 
                    | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoMisalignedFaultM) 
                       | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__BothInstrPageFaultM) 
                          | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadPageFaultM) 
                             | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoPageFaultM) 
                                | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__BreakpointFaultM) 
                                   | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__EcallFaultM) 
                                      | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__LoadAccessFaultM) 
                                         | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__StoreAmoAccessFaultM))))))))))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT____VdfgRegularize_h961e3454_2_55 
        = (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTER_REGW
           [0x17U] + (QData)((IData)(((~ (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MCOUNTINHIBIT_REGW 
                                          >> 0x17U)) 
                                      & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__ExceptionM)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__TrapM 
        = (((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__CommittedF)) 
            & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__ExceptionM)) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__InterruptM));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT__HPMCOUNTERPlusM[0x17U] 
        = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__counters__DOT__counters__DOT____VdfgRegularize_h961e3454_2_55;
    if (vlSelfRef.testbench__DOT__dut__DOT__core__DOT__TrapM) {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__UnalignedNextEPCM 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCM;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__NextCauseM 
            = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__InterruptM) 
                << 4U) | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__NextMtvalM 
            = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__InterruptM)
                ? 0ULL : ((((0xcU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM)) 
                            || (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))) 
                           || (3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM)))
                           ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PCM
                           : ((2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))
                               ? (QData)((IData)(((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__genblk12__DOT__CompressedM)
                                                   ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__InstrRawM)
                                                   : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__InstrM)))
                               : ((((((((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM)) 
                                        || (4U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))) 
                                       || (6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))) 
                                      || (0xdU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))) 
                                     || (0xfU == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))) 
                                    || (5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))) 
                                   || (7U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM)))
                                   ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IEUAdrM
                                   : 0ULL))));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__NextPrivilegeModeM 
            = ((((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__InterruptM)
                  ? ((0xbU >= (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM)) 
                     && (1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MIDELEG_REGW) 
                               >> (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))))
                  : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__MEDELEG_REGW) 
                     >> (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__CauseM))) 
                & ((0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)) 
                   | (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW))))
                ? 1U : 3U);
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__hzu__DOT__FlushWCause 
            = (1U & (~ ((0U != (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__trap__DOT__PendingIntsM)) 
                        & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__wfiM))));
    } else {
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__UnalignedNextEPCM 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__NextCauseM 
            = ((0x10U & ((IData)((vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM 
                                  >> 0x3fU)) << 4U)) 
               | (0xfU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM)));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__NextMtvalM 
            = vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__CSRWriteValM;
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__NextPrivilegeModeM 
            = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__mretM)
                ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__STATUS_MPP)
                : ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__sretM)
                    ? (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__STATUS_SPP)
                    : (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__PrivilegeModeW)));
        vlSelfRef.testbench__DOT__dut__DOT__core__DOT__hzu__DOT__FlushWCause = 0U;
    }
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__hzu__DOT__FlushMCause 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__TrapM) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__CSRWriteFenceM) 
              | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__RetM)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__csrm__DOT____Vcellinp__MCAUSEreg____pinNumber4 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__NextCauseM) 
                                   >> 4U)))) << 0x3fU) 
           | (QData)((IData)((0xfU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__NextCauseM)))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTrapM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__TrapM) 
           & (3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__NextPrivilegeModeM)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STrapM 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__TrapM) 
           & (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__NextPrivilegeModeM)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__TVecM 
        = ((3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__NextPrivilegeModeM))
            ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__MTVEC_REGW
            : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__priv__DOT__priv__DOT__csr__DOT__STVEC_REGW);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__hzu__DOT__FlushMCause) 
           | (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__BPWrongE));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__CaptureEn 
        = (((1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
            & ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
               & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_0))) 
           | ((5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT__CurrState)) 
              & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IFUHREADY)));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__AHBBuscachefsm__DOT____VdfgRegularize_h97605dfa_0_11 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__FlushD)) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__IFUHREADY));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__0__KET____DOT__CaptureBeat 
        = ((0xfeU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__0__KET____DOT__CaptureBeat)) 
           | ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__CaptureEn) 
              & (0U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed))));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__1__KET____DOT__CaptureBeat 
        = ((0xfdU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__1__KET____DOT__CaptureBeat)) 
           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__CaptureEn) 
               & (1U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed))) 
              << 1U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__2__KET____DOT__CaptureBeat 
        = ((0xfbU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__2__KET____DOT__CaptureBeat)) 
           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__CaptureEn) 
               & (2U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed))) 
              << 2U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__3__KET____DOT__CaptureBeat 
        = ((0xf7U & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__3__KET____DOT__CaptureBeat)) 
           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__CaptureEn) 
               & (3U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed))) 
              << 3U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__4__KET____DOT__CaptureBeat 
        = ((0xefU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__4__KET____DOT__CaptureBeat)) 
           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__CaptureEn) 
               & (4U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed))) 
              << 4U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__5__KET____DOT__CaptureBeat 
        = ((0xdfU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__5__KET____DOT__CaptureBeat)) 
           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__CaptureEn) 
               & (5U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed))) 
              << 5U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__6__KET____DOT__CaptureBeat 
        = ((0xbfU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__6__KET____DOT__CaptureBeat)) 
           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__CaptureEn) 
               & (6U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed))) 
              << 6U));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__7__KET____DOT__CaptureBeat 
        = ((0x7fU & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__fetchbuffer__BRA__7__KET____DOT__CaptureBeat)) 
           | (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__CaptureEn) 
               & (7U == (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__bus__DOT__icache__DOT__ahbcacheinterface__DOT__BeatCountDelayed))) 
              << 7U));
}
