// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCgraTemplateRTL.h for the primary calling header

#include "VCgraTemplateRTL.h"
#include "VCgraTemplateRTL__Syms.h"

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__81(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__81\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx65;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx65 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Frdy
                                             [0U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg65[__Vtableidx65])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable65_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx65];
    }
    if ((2U & vlTOPp->__Vtablechg65[__Vtableidx65])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable65_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx65];
    }
    if ((4U & vlTOPp->__Vtablechg65[__Vtableidx65])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable65_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx65];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__82(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__82\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx66;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx66 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Fsend___05Frdy
                                             [1U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg66[__Vtableidx66])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable66_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx66];
    }
    if ((2U & vlTOPp->__Vtablechg66[__Vtableidx66])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable66_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx66];
    }
    if ((4U & vlTOPp->__Vtablechg66[__Vtableidx66])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable66_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx66];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__83(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__83\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx67;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx67 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Frdy
                                             [0U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg67[__Vtableidx67])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable67_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx67];
    }
    if ((2U & vlTOPp->__Vtablechg67[__Vtableidx67])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable67_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx67];
    }
    if ((4U & vlTOPp->__Vtablechg67[__Vtableidx67])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable67_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx67];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__84(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__84\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx68;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx68 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Fsend___05Frdy
                                             [1U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg68[__Vtableidx68])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable68_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx68];
    }
    if ((2U & vlTOPp->__Vtablechg68[__Vtableidx68])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable68_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx68];
    }
    if ((4U & vlTOPp->__Vtablechg68[__Vtableidx68])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable68_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx68];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__85(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__85\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx69;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx69 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Frdy
                                             [0U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg69[__Vtableidx69])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable69_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx69];
    }
    if ((2U & vlTOPp->__Vtablechg69[__Vtableidx69])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable69_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx69];
    }
    if ((4U & vlTOPp->__Vtablechg69[__Vtableidx69])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable69_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx69];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__86(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__86\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx70;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx70 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | ((((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fsend_val) 
                                             & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Fsend___05Frdy
                                             [1U]) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg70[__Vtableidx70])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable70_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx70];
    }
    if ((2U & vlTOPp->__Vtablechg70[__Vtableidx70])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable70_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx70];
    }
    if ((4U & vlTOPp->__Vtablechg70[__Vtableidx70])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable70_CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx70];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__87(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__87\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Freset
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__88(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__88\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Freset
        [1U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__89(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__89\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Freset
        [2U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__90(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__90\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Freset
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__91(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__91\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Freset
        [1U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__92(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__92\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Freset
        [2U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__93(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__93\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Freset
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__94(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__94\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Freset
        [1U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__95(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__95\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Freset
        [2U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__96(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__96\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Freset
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__97(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__97\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Freset
        [1U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__98(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__98\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Freset
        [2U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__99(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__99\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Freset
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__100(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__100\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Freset
        [1U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__101(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__101\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Freset
        [2U]) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter___05Fgrants))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = ((0xfc0U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fout));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int 
        = (0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int));
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__102(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__102\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx72;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*54:0*/ __Vdlyvval__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx72 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg72[__Vtableidx72])) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable72_CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx72];
    }
    if ((2U & vlTOPp->__Vtablechg72[__Vtableidx72])) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable72_CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx72];
    }
    if ((4U & vlTOPp->__Vtablechg72[__Vtableidx72])) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable72_CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx72];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwen[0U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05Fsend___05Fval
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwen[0U] = 1U;
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05Frecv_wr___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT____Vcellinp__memory__wen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwen
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05Fsend___05Fval
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata[0U] 
            = (0x7ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05Fsend___05Fmsg
                                 [0U] >> 7U));
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwaddr[0U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05Fsend___05Fval
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwaddr[0U] 
            = (0x1fU & (IData)((vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_wr__DOT__queues___05Fsend___05Fmsg
                                [0U] >> 0x2aU)));
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT____Vcellinp__memory__wdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT____Vcellinp__memory__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fwaddr
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__103(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__103\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx74;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*54:0*/ __Vdlyvval__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx74 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg74[__Vtableidx74])) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable74_CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx74];
    }
    if ((2U & vlTOPp->__Vtablechg74[__Vtableidx74])) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable74_CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx74];
    }
    if ((4U & vlTOPp->__Vtablechg74[__Vtableidx74])) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable74_CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx74];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwen[0U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05Fsend___05Fval
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwen[0U] = 1U;
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05Frecv_wr___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT____Vcellinp__memory__wen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwen
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U] = 0ULL;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05Fsend___05Fval
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata[0U] 
            = (0x7ffffffffULL & (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05Fsend___05Fmsg
                                 [0U] >> 7U));
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwaddr[0U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05Fsend___05Fval
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwaddr[0U] 
            = (0x1fU & (IData)((vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_wr__DOT__queues___05Fsend___05Fmsg
                                [0U] >> 0x2aU)));
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT____Vcellinp__memory__wdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT____Vcellinp__memory__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fwaddr
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__104(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__104\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx71;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*54:0*/ __Vdlyvval__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx71 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg71[__Vtableidx71])) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable71_CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx71];
    }
    if ((2U & vlTOPp->__Vtablechg71[__Vtableidx71])) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable71_CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx71];
    }
    if ((4U & vlTOPp->__Vtablechg71[__Vtableidx71])) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable71_CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx71];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05Frecv_rd___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05Fsend___05Fval[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fraddr[0U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05Fsend___05Fval
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fraddr[0U] 
            = (0x1fU & (IData)((vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__channel_rd__DOT__queues___05Fsend___05Fmsg
                                [0U] >> 0x2aU)));
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT____Vcellinp__memory__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F0__DOT__memory___05Fraddr
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__105(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__105\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx73;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*54:0*/ __Vdlyvval__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx73 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg73[__Vtableidx73])) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable73_CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx73];
    }
    if ((2U & vlTOPp->__Vtablechg73[__Vtableidx73])) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable73_CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx73];
    }
    if ((4U & vlTOPp->__Vtablechg73[__Vtableidx73])) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable73_CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx73];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05Frecv___05Frdy[0U] 
        = (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05Frecv_rd___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05Fsend___05Fval[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05Fsend___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fraddr[0U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05Fsend___05Fval
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fraddr[0U] 
            = (0x1fU & (IData)((vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__channel_rd__DOT__queues___05Fsend___05Fmsg
                                [0U] >> 0x2aU)));
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT____Vcellinp__memory__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__memory_wrapper___05F1__DOT__memory___05Fraddr
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__106(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__106\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__107(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__107\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__108(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__108\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__109(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__109\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__110(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__110\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__111(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__111\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__112(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__112\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__113(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__113\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__114(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__114\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__115(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__115\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__116(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__116\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__117(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__117\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__118(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__118\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__119(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__119\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__120(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__120\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__121(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__121\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__122(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__122\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__123(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__123\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__124(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__124\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__125(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__125\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__126(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__126\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__127(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__127\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__128(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__128\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__129(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__129\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__130(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__130\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__131(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__131\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__132(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__132\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__133(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__133\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__134(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__134\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Freset
        [0U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fload
            [0U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fload_value
                [0U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fincr
                 [0U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [0U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fincr
                      [0U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [0U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fcount[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F0__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__135(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__135\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    // Body
    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Freset
        [1U]) {
        __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count = 2U;
    } else {
        if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fload
            [1U]) {
            __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fload_value
                [1U];
        } else {
            if ((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fincr
                 [1U] & (~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fdecr
                         [1U]))) {
                __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                    = (3U & ((IData)(1U) + (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count)));
            } else {
                if (((~ vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fincr
                      [1U]) & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fdecr
                     [1U])) {
                    __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
                        = (3U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count 
        = __Vdly__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fcount[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT____Vcellout__credit___05F1__count;
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__136(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__136\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx16;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx16 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg16[__Vtableidx16])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable16_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx16];
    }
    if ((2U & vlTOPp->__Vtablechg16[__Vtableidx16])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable16_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx16];
    }
    if ((4U & vlTOPp->__Vtablechg16[__Vtableidx16])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable16_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx16];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__137(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__137\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx17;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx17 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg17[__Vtableidx17])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable17_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx17];
    }
    if ((2U & vlTOPp->__Vtablechg17[__Vtableidx17])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable17_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx17];
    }
    if ((4U & vlTOPp->__Vtablechg17[__Vtableidx17])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable17_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx17];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__138(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__138\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx18;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx18 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg18[__Vtableidx18])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable18_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx18];
    }
    if ((2U & vlTOPp->__Vtablechg18[__Vtableidx18])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable18_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx18];
    }
    if ((4U & vlTOPp->__Vtablechg18[__Vtableidx18])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable18_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx18];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__139(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__139\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx19;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx19 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg19[__Vtableidx19])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable19_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx19];
    }
    if ((2U & vlTOPp->__Vtablechg19[__Vtableidx19])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable19_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx19];
    }
    if ((4U & vlTOPp->__Vtablechg19[__Vtableidx19])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable19_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx19];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__140(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__140\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx20;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx20 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg20[__Vtableidx20])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable20_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx20];
    }
    if ((2U & vlTOPp->__Vtablechg20[__Vtableidx20])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable20_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx20];
    }
    if ((4U & vlTOPp->__Vtablechg20[__Vtableidx20])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable20_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx20];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__141(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__141\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx21;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx21 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg21[__Vtableidx21])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable21_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx21];
    }
    if ((2U & vlTOPp->__Vtablechg21[__Vtableidx21])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable21_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx21];
    }
    if ((4U & vlTOPp->__Vtablechg21[__Vtableidx21])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable21_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx21];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__142(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__142\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx25;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx25 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg25[__Vtableidx25])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable25_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx25];
    }
    if ((2U & vlTOPp->__Vtablechg25[__Vtableidx25])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable25_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx25];
    }
    if ((4U & vlTOPp->__Vtablechg25[__Vtableidx25])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable25_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx25];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__143(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__143\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx26;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx26 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg26[__Vtableidx26])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable26_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx26];
    }
    if ((2U & vlTOPp->__Vtablechg26[__Vtableidx26])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable26_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx26];
    }
    if ((4U & vlTOPp->__Vtablechg26[__Vtableidx26])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable26_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx26];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__144(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__144\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx27;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx27 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg27[__Vtableidx27])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable27_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx27];
    }
    if ((2U & vlTOPp->__Vtablechg27[__Vtableidx27])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable27_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx27];
    }
    if ((4U & vlTOPp->__Vtablechg27[__Vtableidx27])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable27_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx27];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__145(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__145\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx28;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx28 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg28[__Vtableidx28])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable28_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx28];
    }
    if ((2U & vlTOPp->__Vtablechg28[__Vtableidx28])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable28_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx28];
    }
    if ((4U & vlTOPp->__Vtablechg28[__Vtableidx28])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable28_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx28];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__146(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__146\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx29;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx29 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg29[__Vtableidx29])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable29_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx29];
    }
    if ((2U & vlTOPp->__Vtablechg29[__Vtableidx29])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable29_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx29];
    }
    if ((4U & vlTOPp->__Vtablechg29[__Vtableidx29])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable29_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx29];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__147(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__147\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx30;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx30 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg30[__Vtableidx30])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable30_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx30];
    }
    if ((2U & vlTOPp->__Vtablechg30[__Vtableidx30])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable30_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx30];
    }
    if ((4U & vlTOPp->__Vtablechg30[__Vtableidx30])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable30_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx30];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__148(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__148\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx34;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx34 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg34[__Vtableidx34])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable34_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx34];
    }
    if ((2U & vlTOPp->__Vtablechg34[__Vtableidx34])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable34_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx34];
    }
    if ((4U & vlTOPp->__Vtablechg34[__Vtableidx34])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable34_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx34];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__149(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__149\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx35;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx35 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg35[__Vtableidx35])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable35_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx35];
    }
    if ((2U & vlTOPp->__Vtablechg35[__Vtableidx35])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable35_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx35];
    }
    if ((4U & vlTOPp->__Vtablechg35[__Vtableidx35])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable35_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx35];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__150(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__150\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx36;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx36 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg36[__Vtableidx36])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable36_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx36];
    }
    if ((2U & vlTOPp->__Vtablechg36[__Vtableidx36])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable36_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx36];
    }
    if ((4U & vlTOPp->__Vtablechg36[__Vtableidx36])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable36_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx36];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__151(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__151\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx37;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx37 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg37[__Vtableidx37])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable37_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx37];
    }
    if ((2U & vlTOPp->__Vtablechg37[__Vtableidx37])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable37_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx37];
    }
    if ((4U & vlTOPp->__Vtablechg37[__Vtableidx37])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable37_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx37];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__152(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__152\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx38;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx38 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg38[__Vtableidx38])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable38_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx38];
    }
    if ((2U & vlTOPp->__Vtablechg38[__Vtableidx38])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable38_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx38];
    }
    if ((4U & vlTOPp->__Vtablechg38[__Vtableidx38])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable38_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx38];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__153(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__153\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx39;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx39 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg39[__Vtableidx39])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable39_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx39];
    }
    if ((2U & vlTOPp->__Vtablechg39[__Vtableidx39])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable39_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx39];
    }
    if ((4U & vlTOPp->__Vtablechg39[__Vtableidx39])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable39_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx39];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__154(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__154\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx43;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx43 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg43[__Vtableidx43])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable43_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx43];
    }
    if ((2U & vlTOPp->__Vtablechg43[__Vtableidx43])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable43_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx43];
    }
    if ((4U & vlTOPp->__Vtablechg43[__Vtableidx43])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable43_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx43];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__155(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__155\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx44;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx44 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg44[__Vtableidx44])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable44_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx44];
    }
    if ((2U & vlTOPp->__Vtablechg44[__Vtableidx44])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable44_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx44];
    }
    if ((4U & vlTOPp->__Vtablechg44[__Vtableidx44])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable44_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx44];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__156(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__156\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx45;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx45 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg45[__Vtableidx45])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable45_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx45];
    }
    if ((2U & vlTOPp->__Vtablechg45[__Vtableidx45])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable45_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx45];
    }
    if ((4U & vlTOPp->__Vtablechg45[__Vtableidx45])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable45_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx45];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__157(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__157\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx46;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx46 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg46[__Vtableidx46])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable46_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx46];
    }
    if ((2U & vlTOPp->__Vtablechg46[__Vtableidx46])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable46_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx46];
    }
    if ((4U & vlTOPp->__Vtablechg46[__Vtableidx46])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable46_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx46];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__158(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__158\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx47;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx47 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg47[__Vtableidx47])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable47_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head
            [__Vtableidx47];
    }
    if ((2U & vlTOPp->__Vtablechg47[__Vtableidx47])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable47_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx47];
    }
    if ((4U & vlTOPp->__Vtablechg47[__Vtableidx47])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable47_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount
            [__Vtableidx47];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_sequent__TOP__159(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_sequent__TOP__159\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx48;
    CData/*0:0*/ __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0;
    WData/*215:0*/ __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[7];
    // Body
    __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][0U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][1U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][2U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][3U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][4U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][5U];
        __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U][6U];
        __Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx48 = (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head) 
                                 << 4U) | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__recv_xfer) 
                                                  << 1U) 
                                                 | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Freset
                                                 [1U])))));
    if ((1U & vlTOPp->__Vtablechg48[__Vtableidx48])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable48_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head
            [__Vtableidx48];
    }
    if ((2U & vlTOPp->__Vtablechg48[__Vtableidx48])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable48_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail
            [__Vtableidx48];
    }
    if ((4U & vlTOPp->__Vtablechg48[__Vtableidx48])) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable48_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount
            [__Vtableidx48];
    }
    if (__Vdlyvset__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][0U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][1U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][2U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][3U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][4U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][5U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0][6U] 
            = __Vdlyvval__CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs__v0[6U];
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__tail;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__head;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf__DOT____Vlvbound1[6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05Fsend___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__input_units___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Frdata
        [0U][6U];
}
