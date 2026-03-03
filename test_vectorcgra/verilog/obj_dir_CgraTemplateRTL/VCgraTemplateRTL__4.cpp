// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCgraTemplateRTL.h for the primary calling header

#include "VCgraTemplateRTL.h"
#include "VCgraTemplateRTL__Syms.h"

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__160(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__160\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx52;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx52 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg52[__Vtableidx52])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable52_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx52];
    }
    if ((2U & vlTOPp->__Vtablechg52[__Vtableidx52])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable52_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx52];
    }
    if ((4U & vlTOPp->__Vtablechg52[__Vtableidx52])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable52_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx52];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__161(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__161\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx53;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx53 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg53[__Vtableidx53])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable53_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx53];
    }
    if ((2U & vlTOPp->__Vtablechg53[__Vtableidx53])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable53_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx53];
    }
    if ((4U & vlTOPp->__Vtablechg53[__Vtableidx53])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable53_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx53];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__162(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__162\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx54;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx54 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg54[__Vtableidx54])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable54_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx54];
    }
    if ((2U & vlTOPp->__Vtablechg54[__Vtableidx54])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable54_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx54];
    }
    if ((4U & vlTOPp->__Vtablechg54[__Vtableidx54])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable54_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx54];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__163(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__163\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx55;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx55 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg55[__Vtableidx55])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable55_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx55];
    }
    if ((2U & vlTOPp->__Vtablechg55[__Vtableidx55])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable55_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx55];
    }
    if ((4U & vlTOPp->__Vtablechg55[__Vtableidx55])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable55_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx55];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__164(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__164\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx56;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx56 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg56[__Vtableidx56])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable56_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx56];
    }
    if ((2U & vlTOPp->__Vtablechg56[__Vtableidx56])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable56_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx56];
    }
    if ((4U & vlTOPp->__Vtablechg56[__Vtableidx56])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable56_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx56];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__165(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__165\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx57;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx57 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg57[__Vtableidx57])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable57_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx57];
    }
    if ((2U & vlTOPp->__Vtablechg57[__Vtableidx57])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable57_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx57];
    }
    if ((4U & vlTOPp->__Vtablechg57[__Vtableidx57])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable57_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx57];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__169(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__169\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [0U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [0U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__170(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__170\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [2U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [2U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [2U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [2U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [2U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [2U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [2U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [2U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__171(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__171\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [6U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [6U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [6U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [6U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [6U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [6U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [6U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [6U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__172(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__172\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [0xaU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xaU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xaU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xaU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xaU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xaU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xaU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xaU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__173(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__173\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [0xbU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xbU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xbU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xbU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xbU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xbU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xbU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xbU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__174(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__174\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [0xdU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xdU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xdU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xdU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xdU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xdU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xdU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xdU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__175(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__175\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [0xeU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xeU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xeU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xeU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xeU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xeU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xeU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xeU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F14__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__176(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__176\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter;
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
         [0xcU] | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fclear
         [0xcU])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__first = 1U;
    }
    if ((((0x20U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [0xcU][4U] >> 4U))) | 
          (0x54U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [0xcU][4U] >> 4U)))) 
         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__first = 0U;
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [0xcU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xcU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xcU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xcU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xcU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xcU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xcU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xcU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__177(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__177\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__already_grt_once 
        = ((~ (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
               [9U] | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fclear
               [9U])) & (((((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__already_grt_once)) 
                            & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fval
                            [0U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F9__send_out___05Frdy
                           [0U]) & (0x2fU == (0x7fU 
                                              & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [9U][4U] 
                                                 >> 4U)))) 
                         | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__already_grt_once)));
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [9U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [9U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [9U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [9U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [9U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [9U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [9U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [9U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__178(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__178\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__already_sent_raddr 
        = ((~ vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
            [7U]) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
                     [7U] & ((~ (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fval
                                 [7U] & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy))) 
                             & (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F7__to_mem_raddr___05Fval) 
                                 & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fto_mem_raddr___05Frdy
                                 [7U]) | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__already_sent_raddr)))));
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [7U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [7U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [7U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [7U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [7U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [7U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [7U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [7U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__179(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__179\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2;
    QData/*32:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0;
    QData/*32:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1;
    QData/*32:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [5U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0 = 0ULL;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1 = 0ULL;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2 = 0ULL;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2 = 0U;
    } else {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
            [2U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
            [2U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
            [2U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
            [2U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [5U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [5U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [5U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [5U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [5U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [5U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__cur_cycle 
        = (((3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__cur_cycle)) 
            & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F5__send_out___05Frdy
            [0U]) ? 0U : (7U & ((3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__cur_cycle))
                                 ? (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__cur_cycle)
                                 : ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
                                     [5U] & ((0x1aU 
                                              == (0x7fU 
                                                  & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                     [5U][4U] 
                                                     >> 4U))) 
                                             | (0x2cU 
                                                == 
                                                (0x7fU 
                                                 & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                    [5U][4U] 
                                                    >> 4U)))))
                                     ? ((IData)(1U) 
                                        + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__cur_cycle))
                                     : (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__recv_all_val) 
                                         & (0x1aU == 
                                            (0x7fU 
                                             & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [5U][4U] 
                                                >> 4U))))
                                         ? 1U : 0U)))));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__180(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__180\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg;
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter;
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [3U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [3U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [3U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [3U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [3U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [3U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [3U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [3U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [3U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__current_index = 0U;
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg = 0U;
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in0_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__in0));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in1_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__in1));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in2_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__in2));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in3_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__in3));
        if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
             [3U] & (0x53U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [3U][4U] >> 4U))))) {
            if ((0U != (7U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 8U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x18U))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in0_idx_ff 
                    = (3U & (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 8U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x18U)) 
                             - (IData)(1U)));
            }
            if ((0U != (7U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 5U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1bU))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in1_idx_ff 
                    = (3U & (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 5U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1bU)) 
                             - (IData)(1U)));
            }
            if ((0U != (7U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 2U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1eU))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in2_idx_ff 
                    = (3U & (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 2U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1eU)) 
                             - (IData)(1U)));
            }
            if ((0U != (7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [3U][4U] >> 1U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in3_idx_ff 
                    = (3U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [3U][4U] >> 1U) - (IData)(1U)));
            }
        }
        if (((((((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
                  [3U] & (0x53U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [3U][4U] 
                                             >> 4U)))) 
                 & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
                 [vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in0_idx_ff]) 
                & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
                [vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in1_idx_ff]) 
               & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
               [vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in2_idx_ff]) 
              & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
              [vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in3_idx_ff]) 
             & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
             [0U])) {
            if ((1U & (~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg = 1U;
            }
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__current_index 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__next_index;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__181(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__181\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v0;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v8;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v8;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v9;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v10;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v11;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v12;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v13;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v14;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v15;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v16;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v16;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v17;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v18;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v19;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v20;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v21;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v22;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v23;
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter;
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v0 = 0U;
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v8 = 0U;
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v16 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
        [4U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [4U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [4U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [4U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [4U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [4U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [4U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [4U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Freset
         [4U] | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fclear
         [4U])) {
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v0 = 1U;
    } else {
        if (((((((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fval
                  [4U] & ((0x23U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][4U] 
                                              >> 4U))) 
                          | (0x40U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [4U][4U] 
                                                >> 4U))))) 
                 & (~ vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                    [vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]])) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__recv_all_val)) 
               & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__in0))] 
                          >> 2U))) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fval)) 
             & vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Frdy
             [4U])) {
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v8 
                = ((0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                   [0U]);
            __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v8 = 1U;
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v9 
                = ((1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                   [1U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v10 
                = ((2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                   [2U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v11 
                = ((3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                   [3U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v12 
                = ((4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                   [4U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v13 
                = ((5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                   [5U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v14 
                = ((6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                   [6U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v15 
                = ((7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                   [7U]);
        } else {
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v16 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                [0U];
            __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v16 = 1U;
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v17 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                [1U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v18 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                [2U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v19 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                [3U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v20 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                [4U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v21 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                [5U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v22 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                [6U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v23 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done
                [7U];
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter;
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[6U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[7U] = 0U;
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v8) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v8;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v9;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v10;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v11;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v12;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v13;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v14;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[7U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v15;
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v16) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v16;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v17;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v18;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v19;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v20;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v21;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v22;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done[7U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__element__DOT__fu___05F4__DOT__already_done__v23;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__182(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__182\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__183(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__183\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__184(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__184\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__185(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__185\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__189(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__189\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [0U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [0U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__190(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__190\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [2U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [2U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [2U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [2U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [2U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [2U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [2U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [2U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__191(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__191\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [6U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [6U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [6U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [6U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [6U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [6U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [6U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [6U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__192(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__192\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [0xaU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xaU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xaU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xaU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xaU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xaU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xaU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xaU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__193(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__193\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [0xbU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xbU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xbU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xbU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xbU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xbU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xbU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xbU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__194(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__194\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [0xdU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xdU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xdU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xdU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xdU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xdU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xdU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xdU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__195(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__195\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [0xeU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xeU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xeU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xeU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xeU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xeU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xeU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xeU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F14__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__196(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__196\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter;
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
         [0xcU] | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fclear
         [0xcU])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__first = 1U;
    }
    if ((((0x20U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [0xcU][4U] >> 4U))) | 
          (0x54U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [0xcU][4U] >> 4U)))) 
         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__first = 0U;
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [0xcU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xcU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xcU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xcU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xcU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xcU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xcU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xcU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__197(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__197\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__already_grt_once 
        = ((~ (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
               [9U] | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fclear
               [9U])) & (((((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__already_grt_once)) 
                            & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fval
                            [0U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F9__send_out___05Frdy
                           [0U]) & (0x2fU == (0x7fU 
                                              & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [9U][4U] 
                                                 >> 4U)))) 
                         | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__already_grt_once)));
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [9U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [9U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [9U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [9U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [9U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [9U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [9U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [9U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__198(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__198\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__already_sent_raddr 
        = ((~ vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
            [7U]) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
                     [7U] & ((~ (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fval
                                 [7U] & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy))) 
                             & (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F7__to_mem_raddr___05Fval) 
                                 & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fto_mem_raddr___05Frdy
                                 [7U]) | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__already_sent_raddr)))));
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [7U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [7U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [7U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [7U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [7U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [7U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [7U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [7U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__199(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__199\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2;
    QData/*32:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0;
    QData/*32:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1;
    QData/*32:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [5U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0 = 0ULL;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1 = 0ULL;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2 = 0ULL;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2 = 0U;
    } else {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
            [2U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
            [2U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
            [2U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
            [2U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [5U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [5U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [5U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [5U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [5U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [5U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__cur_cycle 
        = (((3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__cur_cycle)) 
            & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F5__send_out___05Frdy
            [0U]) ? 0U : (7U & ((3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__cur_cycle))
                                 ? (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__cur_cycle)
                                 : ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
                                     [5U] & ((0x1aU 
                                              == (0x7fU 
                                                  & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                     [5U][4U] 
                                                     >> 4U))) 
                                             | (0x2cU 
                                                == 
                                                (0x7fU 
                                                 & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                    [5U][4U] 
                                                    >> 4U)))))
                                     ? ((IData)(1U) 
                                        + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__cur_cycle))
                                     : (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__recv_all_val) 
                                         & (0x1aU == 
                                            (0x7fU 
                                             & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [5U][4U] 
                                                >> 4U))))
                                         ? 1U : 0U)))));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__200(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__200\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg;
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter;
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [3U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [3U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [3U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [3U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [3U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [3U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [3U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [3U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [3U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__current_index = 0U;
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg = 0U;
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in0_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__in0));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in1_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__in1));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in2_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__in2));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in3_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__in3));
        if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
             [3U] & (0x53U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [3U][4U] >> 4U))))) {
            if ((0U != (7U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 8U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x18U))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in0_idx_ff 
                    = (3U & (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 8U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x18U)) 
                             - (IData)(1U)));
            }
            if ((0U != (7U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 5U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1bU))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in1_idx_ff 
                    = (3U & (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 5U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1bU)) 
                             - (IData)(1U)));
            }
            if ((0U != (7U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 2U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1eU))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in2_idx_ff 
                    = (3U & (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 2U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1eU)) 
                             - (IData)(1U)));
            }
            if ((0U != (7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [3U][4U] >> 1U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in3_idx_ff 
                    = (3U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [3U][4U] >> 1U) - (IData)(1U)));
            }
        }
        if (((((((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
                  [3U] & (0x53U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [3U][4U] 
                                             >> 4U)))) 
                 & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
                 [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in0_idx_ff]) 
                & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
                [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in1_idx_ff]) 
               & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
               [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in2_idx_ff]) 
              & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
              [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in3_idx_ff]) 
             & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
             [0U])) {
            if ((1U & (~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg = 1U;
            }
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__current_index 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__next_index;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__201(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__201\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v0;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v8;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v8;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v9;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v10;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v11;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v12;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v13;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v14;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v15;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v16;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v16;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v17;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v18;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v19;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v20;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v21;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v22;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v23;
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter;
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v0 = 0U;
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v8 = 0U;
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v16 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
        [4U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [4U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [4U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [4U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [4U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [4U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [4U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [4U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Freset
         [4U] | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fclear
         [4U])) {
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v0 = 1U;
    } else {
        if (((((((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fval
                  [4U] & ((0x23U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][4U] 
                                              >> 4U))) 
                          | (0x40U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [4U][4U] 
                                                >> 4U))))) 
                 & (~ vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                    [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]])) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__recv_all_val)) 
               & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__in0))] 
                          >> 2U))) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fval)) 
             & vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Frdy
             [4U])) {
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v8 
                = ((0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                   [0U]);
            __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v8 = 1U;
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v9 
                = ((1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                   [1U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v10 
                = ((2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                   [2U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v11 
                = ((3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                   [3U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v12 
                = ((4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                   [4U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v13 
                = ((5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                   [5U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v14 
                = ((6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                   [6U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v15 
                = ((7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                   [7U]);
        } else {
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v16 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                [0U];
            __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v16 = 1U;
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v17 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                [1U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v18 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                [2U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v19 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                [3U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v20 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                [4U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v21 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                [5U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v22 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                [6U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v23 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done
                [7U];
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter;
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[6U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[7U] = 0U;
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v8) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v8;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v9;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v10;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v11;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v12;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v13;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v14;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[7U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v15;
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v16) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v16;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v17;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v18;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v19;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v20;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v21;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v22;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done[7U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05F4__DOT__already_done__v23;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__202(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__202\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__203(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__203\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__204(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__204\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__205(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__205\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__209(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__209\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [0U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [0U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__210(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__210\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [2U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [2U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [2U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [2U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [2U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [2U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [2U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [2U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__211(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__211\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [6U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [6U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [6U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [6U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [6U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [6U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [6U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [6U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__212(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__212\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [0xaU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xaU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xaU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xaU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xaU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xaU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xaU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xaU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__213(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__213\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [0xbU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xbU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xbU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xbU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xbU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xbU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xbU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xbU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__214(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__214\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [0xdU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xdU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xdU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xdU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xdU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xdU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xdU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xdU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__215(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__215\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [0xeU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xeU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xeU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xeU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xeU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xeU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xeU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xeU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F14__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__216(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__216\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter;
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
         [0xcU] | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fclear
         [0xcU])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__first = 1U;
    }
    if ((((0x20U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [0xcU][4U] >> 4U))) | 
          (0x54U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [0xcU][4U] >> 4U)))) 
         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__first = 0U;
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [0xcU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xcU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xcU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xcU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xcU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xcU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xcU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xcU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__217(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__217\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__already_grt_once 
        = ((~ (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
               [9U] | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fclear
               [9U])) & (((((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__already_grt_once)) 
                            & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fval
                            [0U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F9__send_out___05Frdy
                           [0U]) & (0x2fU == (0x7fU 
                                              & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [9U][4U] 
                                                 >> 4U)))) 
                         | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__already_grt_once)));
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [9U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [9U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [9U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [9U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [9U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [9U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [9U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [9U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__218(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__218\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__already_sent_raddr 
        = ((~ vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
            [7U]) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
                     [7U] & ((~ (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fval
                                 [7U] & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy))) 
                             & (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F7__to_mem_raddr___05Fval) 
                                 & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fto_mem_raddr___05Frdy
                                 [7U]) | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__already_sent_raddr)))));
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [7U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [7U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [7U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [7U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [7U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [7U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [7U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [7U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__219(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__219\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2;
    QData/*32:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0;
    QData/*32:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1;
    QData/*32:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [5U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0 = 0ULL;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1 = 0ULL;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2 = 0ULL;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2 = 0U;
    } else {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
            [2U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
            [2U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
            [2U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
            [2U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [5U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [5U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [5U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [5U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [5U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [5U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__cur_cycle 
        = (((3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__cur_cycle)) 
            & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F5__send_out___05Frdy
            [0U]) ? 0U : (7U & ((3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__cur_cycle))
                                 ? (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__cur_cycle)
                                 : ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
                                     [5U] & ((0x1aU 
                                              == (0x7fU 
                                                  & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                     [5U][4U] 
                                                     >> 4U))) 
                                             | (0x2cU 
                                                == 
                                                (0x7fU 
                                                 & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                    [5U][4U] 
                                                    >> 4U)))))
                                     ? ((IData)(1U) 
                                        + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__cur_cycle))
                                     : (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__recv_all_val) 
                                         & (0x1aU == 
                                            (0x7fU 
                                             & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [5U][4U] 
                                                >> 4U))))
                                         ? 1U : 0U)))));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__220(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__220\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg;
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter;
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [3U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [3U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [3U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [3U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [3U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [3U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [3U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [3U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [3U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__current_index = 0U;
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg = 0U;
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in0_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__in0));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in1_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__in1));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in2_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__in2));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in3_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__in3));
        if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
             [3U] & (0x53U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [3U][4U] >> 4U))))) {
            if ((0U != (7U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 8U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x18U))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in0_idx_ff 
                    = (3U & (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 8U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x18U)) 
                             - (IData)(1U)));
            }
            if ((0U != (7U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 5U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1bU))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in1_idx_ff 
                    = (3U & (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 5U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1bU)) 
                             - (IData)(1U)));
            }
            if ((0U != (7U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 2U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1eU))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in2_idx_ff 
                    = (3U & (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 2U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1eU)) 
                             - (IData)(1U)));
            }
            if ((0U != (7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [3U][4U] >> 1U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in3_idx_ff 
                    = (3U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [3U][4U] >> 1U) - (IData)(1U)));
            }
        }
        if (((((((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
                  [3U] & (0x53U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [3U][4U] 
                                             >> 4U)))) 
                 & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
                 [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in0_idx_ff]) 
                & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
                [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in1_idx_ff]) 
               & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
               [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in2_idx_ff]) 
              & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
              [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in3_idx_ff]) 
             & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
             [0U])) {
            if ((1U & (~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg = 1U;
            }
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__current_index 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__next_index;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__221(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__221\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v0;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v8;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v8;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v9;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v10;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v11;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v12;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v13;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v14;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v15;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v16;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v16;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v17;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v18;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v19;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v20;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v21;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v22;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v23;
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter;
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v0 = 0U;
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v8 = 0U;
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v16 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
        [4U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [4U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [4U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [4U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [4U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [4U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [4U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [4U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Freset
         [4U] | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fclear
         [4U])) {
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v0 = 1U;
    } else {
        if (((((((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fval
                  [4U] & ((0x23U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][4U] 
                                              >> 4U))) 
                          | (0x40U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [4U][4U] 
                                                >> 4U))))) 
                 & (~ vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                    [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]])) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__recv_all_val)) 
               & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__in0))] 
                          >> 2U))) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fval)) 
             & vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Frdy
             [4U])) {
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v8 
                = ((0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                   [0U]);
            __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v8 = 1U;
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v9 
                = ((1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                   [1U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v10 
                = ((2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                   [2U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v11 
                = ((3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                   [3U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v12 
                = ((4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                   [4U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v13 
                = ((5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                   [5U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v14 
                = ((6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                   [6U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v15 
                = ((7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                   [7U]);
        } else {
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v16 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                [0U];
            __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v16 = 1U;
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v17 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                [1U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v18 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                [2U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v19 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                [3U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v20 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                [4U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v21 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                [5U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v22 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                [6U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v23 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done
                [7U];
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter;
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[6U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[7U] = 0U;
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v8) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v8;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v9;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v10;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v11;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v12;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v13;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v14;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[7U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v15;
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v16) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v16;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v17;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v18;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v19;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v20;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v21;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v22;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done[7U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05F4__DOT__already_done__v23;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__222(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__222\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__223(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__223\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__224(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__224\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__225(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__225\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__229(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__229\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [0U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [0U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F0__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__230(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__230\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [2U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [2U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [2U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [2U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [2U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [2U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [2U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [2U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F2__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__231(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__231\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [6U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [6U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [6U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [6U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [6U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [6U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [6U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [6U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F6__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__232(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__232\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [0xaU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xaU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xaU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xaU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xaU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xaU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xaU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xaU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F10__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__233(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__233\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [0xbU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xbU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xbU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xbU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xbU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xbU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xbU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xbU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F11__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__234(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__234\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [0xdU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xdU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xdU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xdU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xdU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xdU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xdU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xdU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F13__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__235(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__235\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [0xeU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xeU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xeU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xeU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xeU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xeU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xeU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xeU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F14__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F14__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__236(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__236\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter;
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
         [0xcU] | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fclear
         [0xcU])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__first = 1U;
    }
    if ((((0x20U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [0xcU][4U] >> 4U))) | 
          (0x54U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [0xcU][4U] >> 4U)))) 
         & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__first = 0U;
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [0xcU]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [0xcU]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [0xcU][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter))) 
                                         < ((7U >= 
                                             (7U & 
                                              ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [0xcU][2U] 
                                                << 0x13U) 
                                               | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [0xcU][1U] 
                                                  >> 0xdU))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [0xcU][2U] 
                                                        << 0x13U) 
                                                       | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                          [0xcU][1U] 
                                                          >> 0xdU)))))
                                             : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [0xcU][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F12__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__237(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__237\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__already_grt_once 
        = ((~ (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
               [9U] | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fclear
               [9U])) & (((((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__already_grt_once)) 
                            & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F9__send_out___05Fval
                            [0U]) & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F9__send_out___05Frdy
                           [0U]) & (0x2fU == (0x7fU 
                                              & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                 [9U][4U] 
                                                 >> 4U)))) 
                         | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__already_grt_once)));
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [9U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [9U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [9U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [9U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [9U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [9U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [9U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [9U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F9__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__238(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__238\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__already_sent_raddr 
        = ((~ vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
            [7U]) & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
                     [7U] & ((~ (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Ffrom_mem_rdata___05Fval
                                 [7U] & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__from_mem_rdata___05Frdy))) 
                             & (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F7__to_mem_raddr___05Fval) 
                                 & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fto_mem_raddr___05Frdy
                                 [7U]) | (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__already_sent_raddr)))));
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [7U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [7U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [7U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [7U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [7U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [7U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [7U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [7U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F7__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__239(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__239\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2;
    IData/*31:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2;
    QData/*32:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0;
    QData/*32:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1;
    QData/*32:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [5U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0 = 0ULL;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1 = 0ULL;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2 = 0ULL;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1 = 0U;
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2 = 0U;
    } else {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_o
            [2U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_o
            [2U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg
            [2U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
            [0U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
            [1U];
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg
            [2U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [5U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [5U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [5U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [5U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [5U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [5U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [5U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__cur_cycle 
        = (((3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__cur_cycle)) 
            & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F5__send_out___05Frdy
            [0U]) ? 0U : (7U & ((3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__cur_cycle))
                                 ? (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__cur_cycle)
                                 : ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
                                     [5U] & ((0x1aU 
                                              == (0x7fU 
                                                  & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                     [5U][4U] 
                                                     >> 4U))) 
                                             | (0x2cU 
                                                == 
                                                (0x7fU 
                                                 & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                    [5U][4U] 
                                                    >> 4U)))))
                                     ? ((IData)(1U) 
                                        + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__cur_cycle))
                                     : (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__recv_all_val) 
                                         & (0x1aU == 
                                            (0x7fU 
                                             & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [5U][4U] 
                                                >> 4U))))
                                         ? 1U : 0U)))));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__r_i__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__q_i__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__divisor_reg__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg[1U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v0;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg[2U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg[3U] 
        = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__div__DOT__v__DOT__dividend_reg__v2;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F5__DOT__vector_factor_counter;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__240(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__240\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg;
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter;
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [3U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [3U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [3U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [3U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [3U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [3U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [3U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [3U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [3U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__current_index = 0U;
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg = 0U;
    } else {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in0_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__in0));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in1_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__in1));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in2_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__in2));
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in3_idx_ff 
            = (3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__in3));
        if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
             [3U] & (0x53U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                        [3U][4U] >> 4U))))) {
            if ((0U != (7U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 8U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x18U))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in0_idx_ff 
                    = (3U & (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 8U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x18U)) 
                             - (IData)(1U)));
            }
            if ((0U != (7U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 5U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1bU))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in1_idx_ff 
                    = (3U & (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 5U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1bU)) 
                             - (IData)(1U)));
            }
            if ((0U != (7U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 2U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1eU))))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in2_idx_ff 
                    = (3U & (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                               [3U][4U] << 2U) | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                  [3U][3U] 
                                                  >> 0x1eU)) 
                             - (IData)(1U)));
            }
            if ((0U != (7U & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [3U][4U] >> 1U)))) {
                vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in3_idx_ff 
                    = (3U & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                              [3U][4U] >> 1U) - (IData)(1U)));
            }
        }
        if (((((((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
                  [3U] & (0x53U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                             [3U][4U] 
                                             >> 4U)))) 
                 & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
                 [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in0_idx_ff]) 
                & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
                [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in1_idx_ff]) 
               & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
               [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in2_idx_ff]) 
              & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__recv_in___05Fval
              [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT_____05Ftmpvar___05Fupdate_index_in3_idx_ff]) 
             & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F3__send_out___05Frdy
             [0U])) {
            if ((1U & (~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg = 1U;
            }
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__current_index 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__next_index;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__vector_factor_counter;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F3__DOT__loop_initialized_reg;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__241(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__241\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v0;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v8;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v8;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v9;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v10;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v11;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v12;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v13;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v14;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v15;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v16;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v16;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v17;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v18;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v19;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v20;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v21;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v22;
    CData/*0:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v23;
    CData/*7:0*/ __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter;
    // Body
    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter;
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v0 = 0U;
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v8 = 0U;
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v16 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
        [4U]) {
        __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter = 0U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
            [4U]) {
            if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                  [4U][1U] >> 0xcU) & ((0xffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter))) 
                                       < ((7U >= (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [4U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [4U][1U] 
                                                        >> 0xdU))))
                                           ? (0xffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                      [4U][2U] 
                                                      << 0x13U) 
                                                     | (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                        [4U][1U] 
                                                        >> 0xdU)))))
                                           : 0U)))) {
                __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter)));
            } else {
                if (((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                      [4U][1U] >> 0xcU) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__reached_vector_factor))) {
                    __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter = 0U;
                }
            }
        }
    }
    if ((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Freset
         [4U] | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fclear
         [4U])) {
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v0 = 1U;
    } else {
        if (((((((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fval
                  [4U] & ((0x23U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                              [4U][4U] 
                                              >> 4U))) 
                          | (0x40U == (0x7fU & (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Frecv_opt___05Fmsg
                                                [4U][4U] 
                                                >> 4U))))) 
                 & (~ vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                    [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]])) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__recv_all_val)) 
               & (IData)((vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F4__recv_in___05Fmsg
                          [(3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__in0))] 
                          >> 2U))) & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT____Vcellout__fu___05F4__send_to_ctrl_mem___05Fval)) 
             & vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Frdy
             [4U])) {
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v8 
                = ((0U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                   [0U]);
            __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v8 = 1U;
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v9 
                = ((1U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                   [1U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v10 
                = ((2U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                   [2U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v11 
                = ((3U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                   [3U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v12 
                = ((4U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                   [4U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v13 
                = ((5U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                   [5U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v14 
                = ((6U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                   [6U]);
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v15 
                = ((7U == vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fctrl_addr_inport
                    [4U]) | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                   [7U]);
        } else {
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v16 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                [0U];
            __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v16 = 1U;
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v17 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                [1U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v18 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                [2U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v19 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                [3U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v20 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                [4U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v21 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                [5U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v22 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                [6U];
            __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v23 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done
                [7U];
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter 
        = __Vdly__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__vector_factor_counter;
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[6U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[7U] = 0U;
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v8) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v8;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v9;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v10;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v11;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v12;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v13;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v14;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[7U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v15;
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v16) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v16;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v17;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v18;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v19;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v20;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v21;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v22;
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done[7U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05F4__DOT__already_done__v23;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__242(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__242\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F0__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__243(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__243\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F1__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__244(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__244\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F2__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__245(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__245\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT____Vcellinp__reg_file__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT____Vcellinp__reg_file__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT____Vcellinp__reg_file__waddr
            [0U];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__register_cluster__DOT__reg_bank___05F3__DOT__reg_file__DOT__regs__v0;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__246(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__246\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx98;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx98 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg98[__Vtableidx98])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable98_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx98];
    }
    if ((2U & vlTOPp->__Vtablechg98[__Vtableidx98])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable98_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx98];
    }
    if ((4U & vlTOPp->__Vtablechg98[__Vtableidx98])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable98_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx98];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Frecv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fval[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__247(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__247\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx99;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx99 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg99[__Vtableidx99])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable99_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx99];
    }
    if ((2U & vlTOPp->__Vtablechg99[__Vtableidx99])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable99_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx99];
    }
    if ((4U & vlTOPp->__Vtablechg99[__Vtableidx99])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable99_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx99];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Frecv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fval[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__248(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__248\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx100;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx100 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg100[__Vtableidx100])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable100_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx100];
    }
    if ((2U & vlTOPp->__Vtablechg100[__Vtableidx100])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable100_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx100];
    }
    if ((4U & vlTOPp->__Vtablechg100[__Vtableidx100])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable100_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx100];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Frecv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fval[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__249(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__249\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx101;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx101 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg101[__Vtableidx101])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable101_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx101];
    }
    if ((2U & vlTOPp->__Vtablechg101[__Vtableidx101])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable101_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx101];
    }
    if ((4U & vlTOPp->__Vtablechg101[__Vtableidx101])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable101_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx101];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Frecv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fval[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__250(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__250\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx102;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx102 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg102[__Vtableidx102])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable102_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx102];
    }
    if ((2U & vlTOPp->__Vtablechg102[__Vtableidx102])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable102_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx102];
    }
    if ((4U & vlTOPp->__Vtablechg102[__Vtableidx102])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable102_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx102];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Frecv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fval[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fmsg[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__251(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__251\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx103;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx103 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg103[__Vtableidx103])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable103_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx103];
    }
    if ((2U & vlTOPp->__Vtablechg103[__Vtableidx103])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable103_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx103];
    }
    if ((4U & vlTOPp->__Vtablechg103[__Vtableidx103])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable103_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx103];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Frecv___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fval[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fmsg[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__252(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__252\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx104;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx104 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg104[__Vtableidx104])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable104_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx104];
    }
    if ((2U & vlTOPp->__Vtablechg104[__Vtableidx104])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable104_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx104];
    }
    if ((4U & vlTOPp->__Vtablechg104[__Vtableidx104])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable104_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx104];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Frecv___05Frdy[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fval[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fmsg[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__253(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__253\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx105;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx105 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg105[__Vtableidx105])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable105_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx105];
    }
    if ((2U & vlTOPp->__Vtablechg105[__Vtableidx105])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable105_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx105];
    }
    if ((4U & vlTOPp->__Vtablechg105[__Vtableidx105])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable105_CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx105];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Frecv___05Frdy[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fval[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05Fsend___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__254(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__254\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx108;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx108 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg108[__Vtableidx108])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable108_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx108];
    }
    if ((2U & vlTOPp->__Vtablechg108[__Vtableidx108])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable108_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx108];
    }
    if ((4U & vlTOPp->__Vtablechg108[__Vtableidx108])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable108_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx108];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Frecv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fval[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__255(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__255\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx109;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx109 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg109[__Vtableidx109])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable109_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx109];
    }
    if ((2U & vlTOPp->__Vtablechg109[__Vtableidx109])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable109_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx109];
    }
    if ((4U & vlTOPp->__Vtablechg109[__Vtableidx109])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable109_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx109];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Frecv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fval[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__256(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__256\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx110;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx110 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg110[__Vtableidx110])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable110_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx110];
    }
    if ((2U & vlTOPp->__Vtablechg110[__Vtableidx110])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable110_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx110];
    }
    if ((4U & vlTOPp->__Vtablechg110[__Vtableidx110])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable110_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx110];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Frecv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fval[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__257(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__257\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx111;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx111 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg111[__Vtableidx111])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable111_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx111];
    }
    if ((2U & vlTOPp->__Vtablechg111[__Vtableidx111])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable111_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx111];
    }
    if ((4U & vlTOPp->__Vtablechg111[__Vtableidx111])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable111_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx111];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Frecv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fval[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__258(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__258\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx112;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx112 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg112[__Vtableidx112])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable112_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx112];
    }
    if ((2U & vlTOPp->__Vtablechg112[__Vtableidx112])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable112_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx112];
    }
    if ((4U & vlTOPp->__Vtablechg112[__Vtableidx112])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable112_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx112];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Frecv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fval[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fmsg[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__259(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__259\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx113;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx113 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg113[__Vtableidx113])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable113_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx113];
    }
    if ((2U & vlTOPp->__Vtablechg113[__Vtableidx113])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable113_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx113];
    }
    if ((4U & vlTOPp->__Vtablechg113[__Vtableidx113])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable113_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx113];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Frecv___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fval[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fmsg[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__260(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__260\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx114;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx114 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg114[__Vtableidx114])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable114_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx114];
    }
    if ((2U & vlTOPp->__Vtablechg114[__Vtableidx114])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable114_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx114];
    }
    if ((4U & vlTOPp->__Vtablechg114[__Vtableidx114])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable114_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx114];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Frecv___05Frdy[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fval[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fmsg[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__261(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__261\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx115;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx115 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg115[__Vtableidx115])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable115_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx115];
    }
    if ((2U & vlTOPp->__Vtablechg115[__Vtableidx115])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable115_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx115];
    }
    if ((4U & vlTOPp->__Vtablechg115[__Vtableidx115])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable115_CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx115];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Frecv___05Frdy[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fval[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05Fsend___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__262(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__262\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx118;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx118 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg118[__Vtableidx118])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable118_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx118];
    }
    if ((2U & vlTOPp->__Vtablechg118[__Vtableidx118])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable118_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx118];
    }
    if ((4U & vlTOPp->__Vtablechg118[__Vtableidx118])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable118_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx118];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Frecv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fval[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__263(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__263\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx119;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx119 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg119[__Vtableidx119])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable119_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx119];
    }
    if ((2U & vlTOPp->__Vtablechg119[__Vtableidx119])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable119_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx119];
    }
    if ((4U & vlTOPp->__Vtablechg119[__Vtableidx119])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable119_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx119];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Frecv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fval[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__264(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__264\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx120;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx120 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg120[__Vtableidx120])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable120_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx120];
    }
    if ((2U & vlTOPp->__Vtablechg120[__Vtableidx120])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable120_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx120];
    }
    if ((4U & vlTOPp->__Vtablechg120[__Vtableidx120])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable120_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx120];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Frecv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fval[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__265(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__265\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx121;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx121 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg121[__Vtableidx121])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable121_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx121];
    }
    if ((2U & vlTOPp->__Vtablechg121[__Vtableidx121])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable121_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx121];
    }
    if ((4U & vlTOPp->__Vtablechg121[__Vtableidx121])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable121_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx121];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Frecv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fval[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__266(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__266\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx122;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx122 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg122[__Vtableidx122])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable122_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx122];
    }
    if ((2U & vlTOPp->__Vtablechg122[__Vtableidx122])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable122_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx122];
    }
    if ((4U & vlTOPp->__Vtablechg122[__Vtableidx122])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable122_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx122];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Frecv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fval[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fmsg[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__267(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__267\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx123;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx123 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg123[__Vtableidx123])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable123_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx123];
    }
    if ((2U & vlTOPp->__Vtablechg123[__Vtableidx123])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable123_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx123];
    }
    if ((4U & vlTOPp->__Vtablechg123[__Vtableidx123])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable123_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx123];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Frecv___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fval[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fmsg[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__268(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__268\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx124;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx124 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg124[__Vtableidx124])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable124_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx124];
    }
    if ((2U & vlTOPp->__Vtablechg124[__Vtableidx124])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable124_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx124];
    }
    if ((4U & vlTOPp->__Vtablechg124[__Vtableidx124])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable124_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx124];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Frecv___05Frdy[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fval[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fmsg[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__269(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__269\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx125;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx125 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg125[__Vtableidx125])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable125_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx125];
    }
    if ((2U & vlTOPp->__Vtablechg125[__Vtableidx125])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable125_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx125];
    }
    if ((4U & vlTOPp->__Vtablechg125[__Vtableidx125])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable125_CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx125];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Frecv___05Frdy[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fval[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05Fsend___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__270(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__270\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx128;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx128 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg128[__Vtableidx128])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable128_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx128];
    }
    if ((2U & vlTOPp->__Vtablechg128[__Vtableidx128])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable128_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx128];
    }
    if ((4U & vlTOPp->__Vtablechg128[__Vtableidx128])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable128_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx128];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Frecv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fval[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F0__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__271(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__271\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx129;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx129 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg129[__Vtableidx129])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable129_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx129];
    }
    if ((2U & vlTOPp->__Vtablechg129[__Vtableidx129])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable129_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx129];
    }
    if ((4U & vlTOPp->__Vtablechg129[__Vtableidx129])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable129_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx129];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Frecv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fval[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F1__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__272(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__272\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx130;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx130 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg130[__Vtableidx130])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable130_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx130];
    }
    if ((2U & vlTOPp->__Vtablechg130[__Vtableidx130])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable130_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx130];
    }
    if ((4U & vlTOPp->__Vtablechg130[__Vtableidx130])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable130_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx130];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Frecv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fval[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F2__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__273(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__273\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx131;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx131 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg131[__Vtableidx131])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable131_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx131];
    }
    if ((2U & vlTOPp->__Vtablechg131[__Vtableidx131])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable131_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx131];
    }
    if ((4U & vlTOPp->__Vtablechg131[__Vtableidx131])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable131_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx131];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Frecv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fval[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F3__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__274(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__274\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx132;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx132 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg132[__Vtableidx132])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable132_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx132];
    }
    if ((2U & vlTOPp->__Vtablechg132[__Vtableidx132])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable132_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx132];
    }
    if ((4U & vlTOPp->__Vtablechg132[__Vtableidx132])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable132_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx132];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Frecv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fval[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fmsg[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F4__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__275(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__275\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx133;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx133 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg133[__Vtableidx133])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable133_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx133];
    }
    if ((2U & vlTOPp->__Vtablechg133[__Vtableidx133])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable133_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx133];
    }
    if ((4U & vlTOPp->__Vtablechg133[__Vtableidx133])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable133_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx133];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Frecv___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fval[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fmsg[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F5__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__276(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__276\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx134;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx134 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg134[__Vtableidx134])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable134_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx134];
    }
    if ((2U & vlTOPp->__Vtablechg134[__Vtableidx134])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable134_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx134];
    }
    if ((4U & vlTOPp->__Vtablechg134[__Vtableidx134])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable134_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx134];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Frecv___05Frdy[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fval[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fmsg[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F6__DOT__queues___05Fsend___05Fmsg
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__277(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__277\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx135;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*34:0*/ __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx135 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                  << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                                << 2U) 
                                               | (((IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                   << 1U) 
                                                  | vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg135[__Vtableidx135])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable135_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx135];
    }
    if ((2U & vlTOPp->__Vtablechg135[__Vtableidx135])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable135_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx135];
    }
    if ((4U & vlTOPp->__Vtablechg135[__Vtableidx135])) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable135_CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx135];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Frecv___05Frdy[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fval[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05Fsend___05Fmsg[7U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__tile_in_channel___05F7__DOT__queues___05Fsend___05Fmsg
        [0U];
}
