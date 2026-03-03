// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCgraTemplateRTL.h for the primary calling header

#include "VCgraTemplateRTL.h"
#include "VCgraTemplateRTL__Syms.h"

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__405(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__405\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__recv_xfer 
        = (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fval
           [0U] & (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fval
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Fsend___05Fval[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fsend_val;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__406(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__406\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__recv_xfer 
        = (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fval
           [1U] & (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fval
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Fsend___05Fval[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fsend_val;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__407(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__407\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__recv_xfer 
        = (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fval
           [2U] & (2U > (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount)) 
           | vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fval
           [2U]);
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl__DOT__recv_xfer;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Fsend___05Fval[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fsend_val;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__408(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__408\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__response_crossbar__recv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__response_crossbar__recv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__response_crossbar__recv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__response_crossbar__recv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__response_crossbar__recv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__response_crossbar__recv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
        [0U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__409(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__409\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx22 = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout 
        = vlTOPp->__Vtable22_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx22];
    if ((5U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout][0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout][1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout][2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout][3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout][4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout][5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout][6U];
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[0U][6U] = 0U;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__410(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__410\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx23 = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout 
        = vlTOPp->__Vtable23_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx23];
    if ((5U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout][0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout][1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout][2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout][3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout][4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout][5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout][6U];
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[1U][6U] = 0U;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__411(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__411\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fval[2U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx24 = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout 
        = vlTOPp->__Vtable24_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx24];
    if ((5U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout][0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout][1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout][2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout][3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout][4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout][5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout][6U];
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Fmsg[2U][6U] = 0U;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__412(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__412\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx31 = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout 
        = vlTOPp->__Vtable31_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx31];
    if ((5U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout][0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout][1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout][2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout][3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout][4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout][5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout][6U];
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[0U][6U] = 0U;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__413(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__413\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx32 = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout 
        = vlTOPp->__Vtable32_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx32];
    if ((5U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout][0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout][1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout][2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout][3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout][4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout][5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout][6U];
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[1U][6U] = 0U;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__414(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__414\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fval[2U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx33 = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout 
        = vlTOPp->__Vtable33_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx33];
    if ((5U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout][0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout][1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout][2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout][3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout][4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout][5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout][6U];
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Fmsg[2U][6U] = 0U;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__415(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__415\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx40 = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout 
        = vlTOPp->__Vtable40_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx40];
    if ((5U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout][0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout][1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout][2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout][3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout][4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout][5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout][6U];
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[0U][6U] = 0U;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__416(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__416\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx41 = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout 
        = vlTOPp->__Vtable41_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx41];
    if ((5U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout][0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout][1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout][2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout][3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout][4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout][5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout][6U];
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[1U][6U] = 0U;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__417(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__417\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fval[2U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx42 = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout 
        = vlTOPp->__Vtable42_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx42];
    if ((5U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout][0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout][1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout][2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout][3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout][4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout][5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout][6U];
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Fmsg[2U][6U] = 0U;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__418(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__418\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx49 = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout 
        = vlTOPp->__Vtable49_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx49];
    if ((5U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout][0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout][1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout][2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout][3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout][4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout][5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F0__DOT__encoder___05Fout][6U];
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[0U][6U] = 0U;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__419(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__419\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx50 = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout 
        = vlTOPp->__Vtable50_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx50];
    if ((5U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout][0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout][1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout][2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout][3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout][4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout][5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F1__DOT__encoder___05Fout][6U];
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[1U][6U] = 0U;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__420(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__420\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fval[2U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx51 = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout 
        = vlTOPp->__Vtable51_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx51];
    if ((5U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout][0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout][1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout][2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout][3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout][4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout][5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05F2__DOT__encoder___05Fout][6U];
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__switch_units___05Fsend___05Fmsg[2U][6U] = 0U;
    }
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__421(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__421\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1ff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1fbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 6U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 6U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1f7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 7U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 7U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 7U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1effU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 8U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 8U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 8U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1dffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 9U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 9U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 9U))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x1bffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xaU));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xaU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xaU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x17ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xbU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 0xcU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 0xbU) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                      >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                                   >> 0xbU))));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0xfffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 0xcU));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffeU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffdU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xffbU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xff7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfefU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfdfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    if ((0x40U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 6U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 6U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 6U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xfbfU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 6U));
    }
    if ((0x80U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 7U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 7U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 7U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 7U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xf7fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 7U));
    }
    if ((0x100U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 8U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 8U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 8U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 8U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xeffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 8U));
    }
    if ((0x200U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 9U));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 9U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 9U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 9U)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xdffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 9U));
    }
    if ((0x400U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xaU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xaU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xaU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xaU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0xbffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xaU));
    }
    if ((0x800U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 0xbU));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 0xbU));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 0xbU)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                      >> 0xbU)));
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x7ffU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 0xbU));
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                    >> 6U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 7U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 8U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 3U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 9U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 4U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xaU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 5U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 0xbU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 5U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((0x3eU & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                     << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                      >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx58 = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout 
        = vlTOPp->__Vtable58_CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx58];
    if ((5U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout))) {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][0U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout][0U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][1U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout][1U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][2U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout][2U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][3U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout][3U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][4U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout][4U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][5U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout][5U];
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][6U] 
            = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
            [vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05F0__DOT__encoder___05Fout][6U];
    } else {
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][0U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][1U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][2U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][3U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][4U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][5U] = 0U;
        vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__switch_units___05Fsend___05Fmsg[0U][6U] = 0U;
    }
}
