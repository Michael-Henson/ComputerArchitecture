// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_PMPCHECKER__PZ1_H_
#define VERILATED_VTESTBENCH_PMPCHECKER__PZ1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_pmpchecker__Pz1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(PrivilegeModeW,1,0);
        VL_IN8(ExecuteAccessF,0,0);
        VL_IN8(WriteAccessM,0,0);
        VL_IN8(ReadAccessM,0,0);
        VL_IN8(Size,1,0);
        VL_IN8(CMOpM,3,0);
        VL_OUT8(PMPInstrAccessFaultF,0,0);
        VL_OUT8(PMPLoadAccessFaultM,0,0);
        VL_OUT8(PMPStoreAmoAccessFaultM,0,0);
        CData/*0:0*/ __PVT__EnforcePMP;
        CData/*2:0*/ __PVT__SizeBytesMinus1;
        CData/*0:0*/ __PVT__MatchingR;
        CData/*0:0*/ __PVT__MatchingW;
        CData/*0:0*/ __PVT__TooBig;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__15__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__14__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__14__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__13__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__13__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__12__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__12__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__11__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__11__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__10__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__10__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__9__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__9__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__8__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__8__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__7__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__7__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__6__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__6__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__5__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__5__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__4__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__4__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__3__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__3__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__2__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__2__KET____FirstMatch;
        CData/*0:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____Match;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__1__KET____FirstMatch;
        CData/*0:0*/ __Vcellinp__pmp__DOT__pmpadrdecs__BRA__0__KET____FirstMatch;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__14__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__13__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__12__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__11__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__10__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__9__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__8__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__7__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__6__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__5__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__4__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__3__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__2__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__1__KET____DOT__PAltPMPAdr;
        CData/*0:0*/ __PVT__pmp__DOT__pmpadrdecs__BRA__0__KET____DOT__TORMatch;
        SData/*15:0*/ __PVT__FirstMatch;
        SData/*15:0*/ __PVT__L;
        SData/*15:0*/ __PVT__X;
        SData/*15:0*/ __PVT__W;
        SData/*15:0*/ __PVT__R;
    };
    struct {
        SData/*13:0*/ __VdfgRegularize_hd0c7ee50_0_13;
        VL_IN64(PhysicalAddress,55,0);
        QData/*55:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__1__KET____PMPTop;
        QData/*55:0*/ __Vcellout__pmp__DOT__pmpadrdecs__BRA__0__KET____PMPTop;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__15__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__14__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__13__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__12__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__11__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__10__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__9__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__8__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__7__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__6__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__5__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__4__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__3__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__2__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__1__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        QData/*53:0*/ pmp__DOT__pmpadrdecs__BRA__0__KET____DOT____VdfgRegularize_h6c4c99a0_0_1;
        VL_IN8(PMPCFG_ARRAY_REGW[16],7,0);
        VL_IN64(PMPADDR_ARRAY_REGW[16],53,0);
        VlUnpacked<QData/*55:0*/, 16> __PVT__PMPTop;
        VlUnpacked<QData/*55:0*/, 15> __PVT__PTEOr__DOT__genblk1__DOT__mid;
    };

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_pmpchecker__Pz1(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_pmpchecker__Pz1();
    VL_UNCOPYABLE(Vtestbench_pmpchecker__Pz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
