// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__6(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__HitDirtyWay 
        = ((((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__3__KET__.HitDirtyWay) 
             << 3U) | ((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__2__KET__.HitDirtyWay) 
                       << 2U)) | (((IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__1__KET__.HitDirtyWay) 
                                   << 1U) | (IData)(vlSymsp->TOP__testbench__DOT__dut__DOT__core__DOT__lsu__DOT__bus__DOT__dcache__DOT__dcache__DOT__CacheWays__BRA__0__KET__.HitDirtyWay)));
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
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__CAMHit 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__TLBFlush)) 
           & (0U != vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Matches));
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__lru__DOT__RUBitsAccessed 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ITLBWriteF)
             ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__lru__DOT__WriteLines
             : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__Matches) 
           | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__ifu__DOT__immu__DOT__immu__DOT__tlb__DOT__tlb__DOT__lru__DOT__RUBits);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__lru__DOT__RUBitsAccessed 
        = (((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__DTLBWriteM)
             ? vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__lru__DOT__WriteLines
             : vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Matches) 
           | vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__lru__DOT__RUBits);
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__CAMHit 
        = ((~ (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__sfencevmaM)) 
           & (0U != vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__Matches));
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
    vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__tlbcontrol__DOT____VdfgRegularize_h84efdca8_0_0 
        = ((IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__Translate) 
           & (IData)(vlSelfRef.testbench__DOT__dut__DOT__core__DOT__lsu__DOT__dmmu__DOT__dmmu__DOT__tlb__DOT__tlb__DOT__TLBHit));
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
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtestbench__ConstPool__TABLE_h14a5b4b3_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vtestbench__ConstPool__TABLE_h55a8fd5c_0;

VL_ATTR_COLD void Vtestbench___024root___stl_comb__TOP__4(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_comb__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
}

VL_ATTR_COLD void Vtestbench___024root___stl_comb__TOP__6(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_comb__TOP__6\n"); );
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
}

VL_ATTR_COLD void Vtestbench___024root___stl_comb__TOP__16(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_comb__TOP__16\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}
