// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCgraTemplateRTL.h for the primary calling header

#include "VCgraTemplateRTL.h"
#include "VCgraTemplateRTL__Syms.h"

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__495(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__495\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F3__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fval
        [3U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [3U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F3__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [3U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F3__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F3__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fval
        [3U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [3U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F3__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [3U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F3__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F3__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F3__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [3U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F3__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F3__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [3U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fen[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F3__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__496(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__496\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F4__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fval
        [4U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [4U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F4__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [4U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F4__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F4__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fval
        [4U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [4U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F4__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [4U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F4__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F4__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F4__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
                 [4U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05F4__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F4__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Fmsg
              [4U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fen[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__recv_adp___05F4__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__497(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__497\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Fsend___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Fsend___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__input_units___05Fsend___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05F0__DOT__out_dir 
        = (3U & (IData)((vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
                         [0U] >> 0x33U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fval[0U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fval[1U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fval[2U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fval[3U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fval
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fval[vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05F0__DOT__out_dir] = 1U;
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05F1__DOT__out_dir 
        = (3U & (IData)((vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
                         [1U] >> 0x33U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fval[0U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fval[1U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fval[2U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fval[3U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fval
        [1U]) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fval[vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05F1__DOT__out_dir] = 1U;
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05F2__DOT__out_dir 
        = (3U & (IData)((vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fmsg
                         [2U] >> 0x33U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fval[0U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fval[1U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fval[2U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fval[3U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Frecv___05Fval
        [2U]) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fval[vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05F2__DOT__out_dir] = 1U;
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg[2U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fval
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fval
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F0__send___05Fval
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fval
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fval
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F1__send___05Fval
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fval
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fval
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fval
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval[2U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellout__route_units___05F2__send___05Fval
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg[3U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg[3U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg[3U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fmsg
        [2U][3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval[3U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval[3U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval[3U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__route_units___05Fsend___05Fval
        [2U][3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [3U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [3U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [3U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fval[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fval[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fval[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fval[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fval[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fval[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fval[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fval[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fval[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fval[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval
        [3U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fval[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval
        [3U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fval[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Frecv___05Fval
        [3U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__mux___05Fin_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__mux___05Fin_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Freqs 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Freqs)) 
           | vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fval
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Freqs 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Freqs)) 
           | (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fval
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Freqs 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Freqs)) 
           | (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fval
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Freqs 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Freqs)) 
           | vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fval
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Freqs 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Freqs)) 
           | (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fval
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Freqs 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Freqs)) 
           | (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fval
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Freqs 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Freqs)) 
           | vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fval
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Freqs 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Freqs)) 
           | (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fval
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Freqs 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Freqs)) 
           | (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fval
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Freqs 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Freqs)) 
           | vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fval
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Freqs 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Freqs)) 
           | (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fval
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Freqs 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Freqs)) 
           | (vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT____Vcellinp__switch_units___05F3__recv___05Fval
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT____Vcellinp__mux__in_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__mux___05Fin_
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT____Vcellinp__mux__in_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__mux___05Fin_
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT____Vcellinp__mux__in_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__mux___05Fin_
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int 
        = ((0x38U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Freqs));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int 
        = ((7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Freqs) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int 
        = ((0x38U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Freqs));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int 
        = ((7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Freqs) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int 
        = ((0x38U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Freqs));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int 
        = ((7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Freqs) 
              << 3U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int 
        = ((0x38U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Freqs));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int 
        = ((7U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Freqs) 
              << 3U));
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__498(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__498\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F0__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fval
        [0U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F0__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F0__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F0__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fval
        [0U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F0__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F0__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F0__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F0__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F0__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F0__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Fsend___05Fen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F0__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__499(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__499\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F1__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fval
        [1U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F1__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F1__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F1__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fval
        [1U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F1__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F1__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F1__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F1__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F1__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F1__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Fsend___05Fen[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F1__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__500(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__500\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F2__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fval
        [2U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F2__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F2__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F2__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fval
        [2U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F2__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F2__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F2__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F2__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05F2__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F2__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Fsend___05Fen[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__output_units___05F2__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__501(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__501\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F0__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fval
        [0U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F0__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F0__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F0__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fval
        [0U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F0__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F0__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F0__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F0__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F0__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F0__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Fsend___05Fen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F0__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__502(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__502\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F1__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fval
        [1U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F1__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F1__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F1__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fval
        [1U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F1__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F1__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F1__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F1__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F1__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F1__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Fsend___05Fen[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F1__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__503(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__503\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F2__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fval
        [2U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F2__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F2__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F2__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fval
        [2U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F2__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F2__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F2__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F2__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05F2__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F2__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Fsend___05Fen[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__output_units___05F2__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__504(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__504\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F0__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fval
        [0U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F0__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F0__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F0__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fval
        [0U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F0__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F0__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F0__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F0__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F0__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F0__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Fsend___05Fen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F0__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__505(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__505\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F1__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fval
        [1U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F1__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F1__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F1__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fval
        [1U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F1__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F1__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F1__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F1__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F1__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F1__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Fsend___05Fen[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F1__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__506(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__506\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F2__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fval
        [2U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F2__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F2__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F2__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fval
        [2U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F2__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F2__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F2__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F2__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05F2__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F2__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Fsend___05Fen[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__output_units___05F2__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__507(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__507\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F0__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fval
        [0U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F0__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F0__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F0__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fval
        [0U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F0__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F0__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F0__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F0__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F0__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F0__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Fsend___05Fen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F0__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__508(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__508\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F1__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fval
        [1U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F1__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F1__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F1__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fval
        [1U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F1__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F1__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F1__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F1__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F1__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F1__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Fsend___05Fen[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F1__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__509(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__509\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F2__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fval
        [2U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F2__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F2__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F2__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fval
        [2U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F2__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F2__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F2__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F2__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05F2__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F2__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT__output_units___05Fsend___05Fen[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F3__DOT____Vcellout__output_units___05F2__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__510(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__510\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F0__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fval
        [0U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F0__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F0__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F0__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fval
        [0U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F0__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F0__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F0__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F0__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
                 [0U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F0__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F0__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
              [0U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Fsend___05Fen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F0__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__511(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__511\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F1__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fval
        [1U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F1__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F1__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F1__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fval
        [1U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F1__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F1__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F1__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F1__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
                 [1U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F1__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F1__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
              [1U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Fsend___05Fen[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F1__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__512(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__512\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F2__recv___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fval
        [2U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F2__recv___05Frdy = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F2__recv___05Frdy = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F2__send___05Fen = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fval
        [2U]) {
        if (((~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fcount
                                        [0U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F2__send___05Fen = 1U;
        }
        if (((vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU) & (0U < vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fcount
                                    [1U]))) {
            vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F2__send___05Fen = 1U;
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F2__recv___05Frdy;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fdecr[0U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F2__send___05Fen) 
           & (~ (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
                 [2U][5U] >> 0x1fU)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05F2__DOT__credit___05Fdecr[1U] 
        = ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F2__send___05Fen) 
           & (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Frecv___05Fmsg
              [2U][5U] >> 0x1fU));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT__output_units___05Fsend___05Fen[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F4__DOT____Vcellout__output_units___05F2__send___05Fen;
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__513(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__513\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[1U][1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[2U][1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[3U][1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[0U][0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fmsg[4U][1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][2U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][2U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][2U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [0U][2U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][2U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][2U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][2U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [1U][2U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[2U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][2U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[2U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][2U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[2U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][2U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[2U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [2U][2U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[3U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[3U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[3U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[3U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][2U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[3U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][2U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[3U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][2U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[3U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [3U][2U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[4U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[4U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[4U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[4U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][2U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[4U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][2U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[4U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][2U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg[4U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fmsg
        [4U][2U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [2U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [3U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05Frecv___05Fmsg
        [4U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05Frecv___05Fmsg
        [1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05Frecv___05Fmsg
        [1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05Frecv___05Fmsg
        [1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05Frecv___05Fmsg
        [1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__mux___05Fin_[1U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05Frecv___05Fmsg
        [1U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F0__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F1__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F2__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F3__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F0__DOT__dpath__DOT__rf___05Fwdata
        [0U][6U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][6U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__send_adp___05F4__DOT__buffers___05F1__DOT__dpath__DOT__rf___05Fwdata
        [0U][6U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_combo__TOP__514(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_combo__TOP__514\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [1U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [2U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [3U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [4U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [5U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [6U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [7U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [8U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [9U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xaU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xbU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xcU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xdU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xeU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xfU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][5U];
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [1U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [2U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [3U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [4U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [5U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [6U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [7U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [8U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [9U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xaU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xbU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xcU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xdU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xeU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xfU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][5U];
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] = 0U;
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [1U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [1U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [2U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [2U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [3U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [3U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [4U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [4U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [5U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [5U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [6U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [6U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [7U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [7U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [8U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [8U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [9U]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [9U][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xaU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xaU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xbU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xbU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xcU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xcU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xdU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xdU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xeU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xeU][5U];
    }
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fval
        [0xfU]) {
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][0U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][1U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][2U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][3U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][4U];
        vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U] 
            = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element__DOT__fu___05Fsend_to_ctrl_mem___05Fmsg
            [0xfU][5U];
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__rd_pkt[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__rd_pkt[1U] = 0x20000000000001ULL;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__rd_pkt[2U] = 0x40000000000002ULL;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__rd_pkt[3U] = 0x60000000000003ULL;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlTOPp->CgraTemplateRTL__DOT____Vcellinp__data_mem__recv_raddr___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
             >= (IData)(vlTOPp->address_lower)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                                                   <= (IData)(vlTOPp->address_upper)))
            ? (3U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(vlTOPp->address_lower)) 
                     >> 5U)) : 2U);
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__rd_pkt[0U] 
        = (((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
            << 0x33U) | (((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                          << 0x2aU) | (QData)((IData)(
                                                      ((IData)(vlTOPp->cgra_id) 
                                                       << 5U)))));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlTOPp->CgraTemplateRTL__DOT____Vcellinp__data_mem__recv_raddr___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
             >= (IData)(vlTOPp->address_lower)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                                                   <= (IData)(vlTOPp->address_upper)))
            ? (3U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(vlTOPp->address_lower)) 
                     >> 5U)) : 2U);
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__rd_pkt[1U] 
        = (0x20000000000000ULL | (((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                   << 0x33U) | (((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                 << 0x2aU) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   | ((IData)(vlTOPp->cgra_id) 
                                                                      << 5U)))))));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr 
        = vlTOPp->CgraTemplateRTL__DOT____Vcellinp__data_mem__recv_raddr___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local 
        = ((((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
             >= (IData)(vlTOPp->address_lower)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                                                   <= (IData)(vlTOPp->address_upper)))
            ? (3U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr) 
                      - (IData)(vlTOPp->address_lower)) 
                     >> 5U)) : 2U);
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__rd_pkt[2U] 
        = (0x40000000000000ULL | (((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_local)) 
                                   << 0x33U) | (((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr)) 
                                                 << 0x2aU) 
                                                | (QData)((IData)(
                                                                  (2U 
                                                                   | ((IData)(vlTOPp->cgra_id) 
                                                                      << 5U)))))));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc 
        = (0x1ffU & ((vlTOPp->CgraTemplateRTL__DOT__controller__DOT__send_to_mem_load_request_queue__DOT__queues___05Fsend___05Fmsg
                      [0U][5U] << 0x12U) | (vlTOPp->CgraTemplateRTL__DOT__controller__DOT__send_to_mem_load_request_queue__DOT__queues___05Fsend___05Fmsg
                                            [0U][4U] 
                                            >> 0xeU)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc 
        = ((((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc) 
             >= (IData)(vlTOPp->address_lower)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc) 
                                                   <= (IData)(vlTOPp->address_upper)))
            ? (3U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc) 
                      - (IData)(vlTOPp->address_lower)) 
                     >> 5U)) : 2U);
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__rd_pkt[3U] 
        = (0x60000000000000ULL | (((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_bank_index_load_from_noc)) 
                                   << 0x33U) | (((QData)((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT_____05Ftmpvar___05Fassemble_xbar_pkt_recv_raddr_from_noc)) 
                                                 << 0x2aU) 
                                                | (QData)((IData)(
                                                                  ((0x60U 
                                                                    & (vlTOPp->CgraTemplateRTL__DOT__controller__DOT__send_to_mem_load_request_queue__DOT__queues___05Fsend___05Fmsg
                                                                       [0U][6U] 
                                                                       >> 0x14U)) 
                                                                   | ((0x1cU 
                                                                       & (vlTOPp->CgraTemplateRTL__DOT__controller__DOT__send_to_mem_load_request_queue__DOT__queues___05Fsend___05Fmsg
                                                                          [0U][6U] 
                                                                          >> 0xcU)) 
                                                                      | (3U 
                                                                         & (vlTOPp->CgraTemplateRTL__DOT__controller__DOT__send_to_mem_load_request_queue__DOT__queues___05Fsend___05Fmsg
                                                                            [0U][6U] 
                                                                            >> 9U)))))))));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__element___05Fsend_to_ctrl_mem___05Fmsg[5U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[0U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[1U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[2U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[3U] = 0ULL;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__rd_pkt
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__rd_pkt
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__rd_pkt
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__rd_pkt
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__dpath__DOT__rf___05Fwdata
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__read_crossbar__recv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__read_crossbar__recv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__read_crossbar__recv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__read_crossbar__recv___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar___05Frecv___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Frecv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__read_crossbar__recv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Frecv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__read_crossbar__recv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Frecv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__read_crossbar__recv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Frecv___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT____Vcellinp__read_crossbar__recv___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Frecv___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Frecv___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT____Vcellinp__mux__in_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT____Vcellinp__mux__in_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT__mux___05Fin_
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT____Vcellinp__mux__in_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT____Vcellinp__mux__in_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT__mux___05Fin_
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT____Vcellinp__mux__in_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT____Vcellinp__mux__in_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT__mux___05Fin_
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT____Vcellinp__mux__in_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT____Vcellinp__mux__in_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT__mux___05Fin_
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Fsend___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F0__DOT__queue__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F0__DOT__queue__DOT__ctrl___05Fcount))];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Fsend___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F1__DOT__queue__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F1__DOT__queue__DOT__ctrl___05Fcount))];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Fsend___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F2__DOT__queue__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F2__DOT__queue__DOT__ctrl___05Fcount))];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Fsend___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F3__DOT__queue__DOT__dpath__DOT____Vcellinp__mux__in_
        [(0U == (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05F3__DOT__queue__DOT__ctrl___05Fcount))];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Fsend___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Fsend___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Fsend___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__input_units___05Fsend___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F3__send___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F3__send___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F3__send___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Frecv___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F0__send___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F1__send___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F2__send___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg[3U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F3__send___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg[3U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F3__send___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg[3U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellout__route_units___05F3__send___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg
        [3U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg
        [3U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg[2U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__route_units___05Fsend___05Fmsg
        [3U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05Frecv___05Fmsg
        [2U][3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F0__recv___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F1__recv___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT____Vcellinp__switch_units___05F2__recv___05Fmsg
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F0__DOT__mux___05Fin_
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F1__DOT__mux___05Fin_
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__read_crossbar__DOT__switch_units___05F2__DOT__mux___05Fin_
        [3U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__515(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__515\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_wdata___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05Fto_mem_wdata___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_wdata___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05Fto_mem_wdata___05Fmsg
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_wdata___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__tile___05Fto_mem_wdata___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellinp__data_mem__recv_wdata___05Fmsg[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_wdata___05Fmsg
        [0U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellinp__data_mem__recv_wdata___05Fmsg[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_wdata___05Fmsg
        [1U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellinp__data_mem__recv_wdata___05Fmsg[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__data_mem___05Frecv_wdata___05Fmsg
        [2U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__516(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__516\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT____Vcellout__ctrl_ring__recv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellout__ctrl_ring__recv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellout__ctrl_ring__recv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellout__ctrl_ring__recv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT____Vcellout__ctrl_ring__recv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Frecv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fen
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fen
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fen
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[3U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fen
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fen[4U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__recv_adp___05Fsend___05Fen
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring___05Frecv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT____Vcellout__ctrl_ring__recv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring___05Frecv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT____Vcellout__ctrl_ring__recv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring___05Frecv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT____Vcellout__ctrl_ring__recv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring___05Frecv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT____Vcellout__ctrl_ring__recv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring___05Frecv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT____Vcellout__ctrl_ring__recv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05Fsend_to_controller_pkt___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05Fsend_to_controller_pkt___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05Fsend_to_controller_pkt___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05Fsend_to_controller_pkt___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring___05Frecv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__ctrl_mem__DOT__start_iterate_ctrl) {
        if (((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl___05Fcount)) 
             & (~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__ctrl_mem__DOT__sent_complete)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05Fsend_to_controller_pkt___05Frdy
                [0U];
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__start_iterate_ctrl) {
        if (((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl___05Fcount)) 
             & (~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__sent_complete)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05Fsend_to_controller_pkt___05Frdy
                [1U];
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__start_iterate_ctrl) {
        if (((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl___05Fcount)) 
             & (~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__sent_complete)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05Fsend_to_controller_pkt___05Frdy
                [2U];
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy = 0U;
    if (vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__start_iterate_ctrl) {
        if (((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl___05Fcount)) 
             & (~ (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__sent_complete)))) {
            vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy 
                = vlTOPp->CgraTemplateRTL__DOT__tile___05Fsend_to_controller_pkt___05Frdy
                [3U];
        }
    }
    vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl___05Fcount)) 
           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F0__DOT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl___05Fcount)) 
           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F1__DOT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl___05Fcount)) 
           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F2__DOT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy));
    vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue__DOT__ctrl___05Fcount)) 
           & (IData)(vlTOPp->CgraTemplateRTL__DOT__tile___05F3__DOT__ctrl_mem__DOT__recv_from_element_queue___05Fsend___05Frdy));
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__517(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__517\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x7dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x7dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x7bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x7bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x77U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x77U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x6fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x6fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x5fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x5fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills 
            = ((0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int 
            = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                    >> 3U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 4U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__grants_int) 
                            >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Fgrants 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((6U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                  << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Fgrants) 
                                   >> 2U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Fsend___05Fval[0U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx85 = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__encoder___05Fout 
        = vlTOPp->__Vtable85_CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx85];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Fsend___05Fmsg[0U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__encoder___05Fout))
            ? vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT____Vcellinp__mux__in_
           [vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F0__DOT__encoder___05Fout]
            : 0ULL);
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__518(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__518\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x7dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x7dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x7bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x7bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x77U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x77U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x6fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x6fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x5fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x5fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills 
            = ((0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int 
            = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                    >> 3U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 4U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__grants_int) 
                            >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Fgrants 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((6U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                  << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Fgrants) 
                                   >> 2U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Fsend___05Fval[1U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx86 = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__encoder___05Fout 
        = vlTOPp->__Vtable86_CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx86];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Fsend___05Fmsg[1U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__encoder___05Fout))
            ? vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT____Vcellinp__mux__in_
           [vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F1__DOT__encoder___05Fout]
            : 0ULL);
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__519(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__519\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x7dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x7dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x7bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x7bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x77U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x77U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x6fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x6fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x5fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x5fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills 
            = ((0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int 
            = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                    >> 3U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 4U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__grants_int) 
                            >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Fgrants 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((6U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                  << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Fgrants) 
                                   >> 2U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Fsend___05Fval[2U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx87 = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__encoder___05Fout 
        = vlTOPp->__Vtable87_CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx87];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Fsend___05Fmsg[2U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__encoder___05Fout))
            ? vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT____Vcellinp__mux__in_
           [vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F2__DOT__encoder___05Fout]
            : 0ULL);
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__520(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__520\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills 
        = (1U | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills));
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound4 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills 
            = ((0x7dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound4) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound5 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                     | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills 
            = ((0x7dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound5) 
                  << 1U));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills 
            = ((0x7bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound4) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                      >> 1U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                                    >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                                               >> 1U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills 
            = ((0x7bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound5) 
                  << 2U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills 
            = ((0x77U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound4) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                      >> 2U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                                    >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                                               >> 2U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills 
            = ((0x77U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound5) 
                  << 3U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills 
            = ((0x6fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound4) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                      >> 3U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                                    >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                                               >> 3U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills 
            = ((0x6fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound5) 
                  << 4U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills 
            = ((0x5fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound4) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                      >> 4U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                                    >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                                               >> 4U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills 
            = ((0x5fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound5) 
                  << 5U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound4 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills 
            = ((0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound4) 
                  << 6U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound5 
            = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                      >> 5U) | ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                                    >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                                               >> 5U))));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills 
            = ((0x3fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound5) 
                  << 6U));
    }
    if ((1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound2 
            = (1U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int 
            = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound2));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills)) 
                     & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int 
            = ((0x3eU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int)) 
               | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound3));
    }
    if ((2U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                     >> 1U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int 
            = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound2) 
                  << 1U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                         >> 1U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                                    >> 1U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int 
            = ((0x3dU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound3) 
                  << 1U));
    }
    if ((4U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                     >> 2U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int 
            = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound2) 
                  << 2U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                         >> 2U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                                    >> 2U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int 
            = ((0x3bU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound3) 
                  << 2U));
    }
    if ((8U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                     >> 3U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int 
            = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound2) 
                  << 3U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                         >> 3U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                                    >> 3U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int 
            = ((0x37U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound3) 
                  << 3U));
    }
    if ((0x10U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                     >> 4U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int 
            = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound2) 
                  << 4U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                         >> 4U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                                    >> 4U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int 
            = ((0x2fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound3) 
                  << 4U));
    }
    if ((0x20U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__priority_int))) {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound2 
            = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                     >> 5U));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int 
            = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound2) 
                  << 5U));
    } else {
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound3 
            = (1U & ((~ ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__kills) 
                         >> 5U)) & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__reqs_int) 
                                    >> 5U)));
        vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int 
            = ((0x1fU & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int)) 
               | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound3) 
                  << 5U));
    }
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int) 
                 | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int) 
                    >> 3U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Fgrants 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Fgrants)) 
           | (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound1));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int) 
                  >> 1U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int) 
                            >> 4U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Fgrants 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int) 
                  >> 2U) | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__grants_int) 
                            >> 5U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Fgrants 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Fgrants)) 
           | ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter__DOT__priority_reg___05Fin_ 
        = ((6U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Fgrants) 
                  << 1U)) | (1U & ((IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Fgrants) 
                                   >> 2U)));
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Fsend___05Fval[3U] 
        = (0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Fgrants));
    vlTOPp->__Vtableidx88 = vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__arbiter___05Fgrants;
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__encoder___05Fout 
        = vlTOPp->__Vtable88_CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__encoder___05Fout
        [vlTOPp->__Vtableidx88];
    vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05Fsend___05Fmsg[3U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__encoder___05Fout))
            ? vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT____Vcellinp__mux__in_
           [vlTOPp->CgraTemplateRTL__DOT__data_mem__DOT__response_crossbar__DOT__switch_units___05F3__DOT__encoder___05Fout]
            : 0ULL);
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__521(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__521\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Fsend___05Fen
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fen[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Fsend___05Fen
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fen[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__output_units___05Fsend___05Fen
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [0U] & (0U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [0U] & (1U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [0U] & (2U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [0U] & (3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [0U] & (4U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [0U] & (5U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [1U] & (0U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [1U] & (1U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [1U] & (2U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [1U] & (3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [1U] & (4U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [1U] & (5U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [2U] & (0U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [2U] & (1U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [2U] & (2U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [2U] & (3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [2U] & (4U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Fsend___05Frdy
           [2U] & (5U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fen
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fen
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__send___05Fen
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[2U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[2U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy[2U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[3U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[3U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[3U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [2U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[4U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[4U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[4U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [2U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[5U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[5U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy[5U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__switch_units___05Frecv___05Frdy
        [2U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F0__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F1__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F2__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F3__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [3U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F3__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [3U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F3__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [3U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F4__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [4U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F4__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [4U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F4__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [4U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F5__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [5U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F5__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [5U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F5__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Fsend___05Frdy
        [5U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F3__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F4__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F5__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy[0U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F0__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy[1U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F1__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy[2U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F2__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy[3U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F3__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy[4U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F4__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy[5U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05F5__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__route_units___05Frecv___05Frdy
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F0__recv___05Fyum[0U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F0__send___05Fval
           [0U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F0__recv___05Fyum[1U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F0__send___05Fval
           [1U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F1__recv___05Fyum[0U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F1__send___05Fval
           [0U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F1__recv___05Fyum[1U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F1__send___05Fval
           [1U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F2__recv___05Fyum[0U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F2__send___05Fval
           [0U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F2__recv___05Fyum[1U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F2__send___05Fval
           [1U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F0__DOT__input_units___05Frecv___05Fyum
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[0U][0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[0U][0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[0U][1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[0U][1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[0U][2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[0U][2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F0__recv___05Fyum
        [2U][1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__522(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__522\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Fsend___05Fen
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fen[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Fsend___05Fen
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fen[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__output_units___05Fsend___05Fen
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [0U] & (0U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [0U] & (1U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [0U] & (2U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [0U] & (3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [0U] & (4U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [0U] & (5U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [1U] & (0U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [1U] & (1U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [1U] & (2U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [1U] & (3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [1U] & (4U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [1U] & (5U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [2U] & (0U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [2U] & (1U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [2U] & (2U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [2U] & (3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [2U] & (4U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Fsend___05Frdy
           [2U] & (5U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fen
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fen
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__send___05Fen
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[2U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[2U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy[2U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[3U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[3U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[3U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [2U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[4U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[4U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[4U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [2U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[5U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[5U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy[5U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__switch_units___05Frecv___05Frdy
        [2U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F0__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F1__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F2__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F3__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [3U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F3__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [3U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F3__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [3U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F4__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [4U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F4__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [4U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F4__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [4U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F5__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [5U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F5__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [5U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F5__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Fsend___05Frdy
        [5U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F3__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F4__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F5__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy[0U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F0__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy[1U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F1__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy[2U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F2__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy[3U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F3__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy[4U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F4__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy[5U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05F5__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__route_units___05Frecv___05Frdy
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F0__recv___05Fyum[0U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F0__send___05Fval
           [0U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F0__recv___05Fyum[1U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F0__send___05Fval
           [1U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F1__recv___05Fyum[0U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F1__send___05Fval
           [0U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F1__recv___05Fyum[1U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F1__send___05Fval
           [1U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F2__recv___05Fyum[0U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F2__send___05Fval
           [0U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F2__recv___05Fyum[1U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F2__send___05Fval
           [1U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F1__DOT__input_units___05Frecv___05Fyum
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[1U][0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[1U][0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[1U][1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[1U][1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[1U][2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[1U][2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F1__recv___05Fyum
        [2U][1U];
}

VL_INLINE_OPT void VCgraTemplateRTL::_multiclk__TOP__523(VCgraTemplateRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCgraTemplateRTL::_multiclk__TOP__523\n"); );
    VCgraTemplateRTL* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fen[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Fsend___05Fen
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fen[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Fsend___05Fen
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fen[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__output_units___05Fsend___05Fen
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [0U] & (0U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [0U] & (1U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [0U] & (2U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [0U] & (3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [0U] & (4U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [0U] & (5U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F0__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [1U] & (0U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [1U] & (1U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [1U] & (2U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [1U] & (3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [1U] & (4U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [1U] & (5U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F1__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [2U] & (0U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [2U] & (1U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [2U] & (2U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [2U] & (3U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy[3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [2U] & (4U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy[4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Fsend___05Frdy
           [2U] & (5U == (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT__encoder___05Fout)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy[5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05F2__DOT____Vlvbound1;
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fen
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fen
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Fsend___05Fen[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__send___05Fen
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[0U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[0U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[0U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F0__recv___05Frdy
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[1U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[1U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[1U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F1__recv___05Frdy
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[2U][3U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[2U][4U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy[2U][5U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__switch_units___05F2__recv___05Frdy
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[0U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[1U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[2U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[3U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [0U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[3U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [1U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[3U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [2U][3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[4U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [0U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[4U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [1U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[4U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [2U][4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[5U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [0U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[5U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [1U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy[5U][2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__switch_units___05Frecv___05Frdy
        [2U][5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F0__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [0U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F1__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [1U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F2__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [2U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F3__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [3U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F3__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [3U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F3__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [3U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F4__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [4U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F4__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [4U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F4__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [4U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F5__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [5U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F5__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [5U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F5__send___05Frdy[2U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Fsend___05Frdy
        [5U][2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F0__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F1__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F2__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F3__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F3__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F4__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F4__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy 
        = ((6U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy)) 
           | vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F5__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy 
        = ((5U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [1U] << 1U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy 
        = ((3U & (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy)) 
           | (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__route_units___05F5__send___05Frdy
              [2U] << 2U));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy[0U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F0__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy[1U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F1__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy[2U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F2__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy[3U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F3__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy[4U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F4__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy[5U] 
        = ((2U >= (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__out_dir)) 
           & ((IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__send_rdy) 
              >> (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05F5__DOT__out_dir)));
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy
        [2U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy
        [3U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy
        [4U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__route_units___05Frecv___05Frdy
        [5U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F0__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F0__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F1__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F1__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F2__send___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F2__send___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Fsend___05Frdy
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F0__send___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F0__recv___05Fyum[0U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F0__send___05Fval
           [0U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F0__recv___05Fyum[1U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F0__send___05Fval
           [1U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F0__send___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F1__send___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F1__recv___05Fyum[0U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F1__send___05Fval
           [0U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F1__recv___05Fyum[1U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F1__send___05Fval
           [1U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F1__send___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy[1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F2__send___05Frdy
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F2__recv___05Fyum[0U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F2__send___05Fval
           [0U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F2__recv___05Fyum[1U] 
        = (vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F2__send___05Fval
           [1U] & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellinp__input_units___05F2__send___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F0__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F0__recv___05Fyum
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F1__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F1__recv___05Fyum
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F0__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [0U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl__DOT__send_xfer 
        = ((0U < (IData)(vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05F1__DOT__ctrl___05Fcount)) 
           & vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05F2__DOT__buffers___05Fsend___05Frdy
           [1U]);
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT____Vcellout__input_units___05F2__recv___05Fyum
        [1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum[0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum[0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum[1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum[1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum[2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum[2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05F2__DOT__input_units___05Frecv___05Fyum
        [2U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[2U][0U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum
        [0U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[2U][0U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum
        [0U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[2U][1U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum
        [1U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[2U][1U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum
        [1U][1U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[2U][2U][0U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum
        [2U][0U];
    vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT__routers___05Frecv___05Fyum[2U][2U][1U] 
        = vlTOPp->CgraTemplateRTL__DOT__ctrl_ring__DOT____Vcellout__routers___05F2__recv___05Fyum
        [2U][1U];
}
